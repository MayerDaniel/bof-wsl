#include <Windows.h>
#include "base\helpers.h"

// WSL API function pointer type (WslLaunch is real)
typedef HRESULT (WINAPI *PWSLLAUNCH)(
    PCWSTR distributionName,
    PCWSTR command,
    BOOL useCurrentWorkingDirectory,
    HANDLE stdIn,
    HANDLE stdOut,
    HANDLE stdErr,
    DWORD* exitCode
);

/**
 * For the debug build we want:
 *   a) Include the mock-up layer
 *   b) Undefine DECLSPEC_IMPORT since the mocked Beacon API
 *      is linked against the the debug build.
 */
#ifdef _DEBUG
#undef DECLSPEC_IMPORT
#define DECLSPEC_IMPORT
#include "base\mock.h"
#pragma comment(lib, "advapi32.lib")

// Runtime-loaded function pointer for Debug builds
static PWSLLAUNCH pWslLaunch = NULL;
static HMODULE hWslApi = NULL;

static bool InitWslApi() {
    if (hWslApi) return true;
    hWslApi = LoadLibraryW(L"wslapi.dll");
    if (!hWslApi) {
        return false;
    }
    pWslLaunch = (PWSLLAUNCH)GetProcAddress(hWslApi, "WslLaunch");
    return pWslLaunch != NULL;
}

#define WslLaunch pWslLaunch
#endif

extern "C" {
    #include "beacon.h"
    #include "sleepmask.h"

#ifndef _DEBUG
    // Declare WslLaunch for DFR
    HRESULT WINAPI WslLaunch(PCWSTR, PCWSTR, BOOL, HANDLE, HANDLE, HANDLE, DWORD*);

    // Define the Dynamic Function Resolution declaration for WSL API
    DFR(WSLAPI, WslLaunch);
    
    #define WslLaunch WSLAPI$WslLaunch
#endif
    
    // Define the Dynamic Function Resolution declarations
    DFR(KERNEL32, GetLastError);
    DFR(KERNEL32, GetStdHandle);
    DFR(KERNEL32, CreatePipe);
    DFR(KERNEL32, ReadFile);
    DFR(KERNEL32, CloseHandle);
    DFR(KERNEL32, SetHandleInformation);
    DFR(KERNEL32, WaitForSingleObject);
    DFR(KERNEL32, PeekNamedPipe);
    DFR(KERNEL32, lstrcmpW);
    DFR(KERNEL32, lstrcmpiA);
    DFR(ADVAPI32, RegOpenKeyExW);
    DFR(ADVAPI32, RegCloseKey);
    DFR(ADVAPI32, RegEnumKeyExW);
    DFR(ADVAPI32, RegQueryValueExW);
    
    // Map functions to their DFR versions
    #define GetLastError KERNEL32$GetLastError
    #define GetStdHandle KERNEL32$GetStdHandle
    #define CreatePipe KERNEL32$CreatePipe
    #define ReadFile KERNEL32$ReadFile
    #define CloseHandle KERNEL32$CloseHandle
    #define SetHandleInformation KERNEL32$SetHandleInformation
    #define WaitForSingleObject KERNEL32$WaitForSingleObject
    #define PeekNamedPipe KERNEL32$PeekNamedPipe
    #define wcscmp KERNEL32$lstrcmpW
    #define _stricmp KERNEL32$lstrcmpiA
    #define RegOpenKeyExW ADVAPI32$RegOpenKeyExW
    #define RegCloseKey ADVAPI32$RegCloseKey
    #define RegEnumKeyExW ADVAPI32$RegEnumKeyExW
    #define RegQueryValueExW ADVAPI32$RegQueryValueExW

    // Function to list all WSL distributions from registry
    void list() {
        HKEY hKey;
        LONG result = RegOpenKeyExW(HKEY_CURRENT_USER, 
                                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Lxss",
                                     0, KEY_READ, &hKey);
        
        if (result != ERROR_SUCCESS) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to open WSL registry key. Error: %ld", result);
            BeaconPrintf(CALLBACK_OUTPUT, "Is WSL installed? Run 'wsl --install' to set up WSL.");
            return;
        }
        
        DWORD index = 0;
        WCHAR subKeyName[256];
        DWORD subKeyNameLen;
        bool foundDistros = false;
        WCHAR defaultGuid[256] = {0};
        DWORD defaultGuidLen = sizeof(defaultGuid);
        
        // Get the default distribution GUID
        RegQueryValueExW(hKey, L"DefaultDistribution", NULL, NULL, 
                        (LPBYTE)defaultGuid, &defaultGuidLen);
        
        BeaconPrintf(CALLBACK_OUTPUT, "Windows Subsystem for Linux Distributions:\n");
        
        while (true) {
            subKeyNameLen = sizeof(subKeyName) / sizeof(WCHAR);
            result = RegEnumKeyExW(hKey, index++, subKeyName, &subKeyNameLen, 
                                  NULL, NULL, NULL, NULL);
            
            if (result != ERROR_SUCCESS) {
                break;
            }
            
            // Open the distribution subkey
            HKEY hDistroKey;
            result = RegOpenKeyExW(hKey, subKeyName, 0, KEY_READ, &hDistroKey);
            if (result != ERROR_SUCCESS) {
                continue;
            }
            
            // Read distribution name
            WCHAR distroName[256] = {0};
            DWORD distroNameLen = sizeof(distroName);
            result = RegQueryValueExW(hDistroKey, L"DistributionName", NULL, NULL,
                                     (LPBYTE)distroName, &distroNameLen);
            
            // Read WSL version
            DWORD version = 0;
            DWORD versionLen = sizeof(version);
            RegQueryValueExW(hDistroKey, L"Version", NULL, NULL,
                           (LPBYTE)&version, &versionLen);
            
            if (result == ERROR_SUCCESS && distroName[0] != 0) {
                bool isDefault = (wcscmp(subKeyName, defaultGuid) == 0);
                BeaconPrintf(CALLBACK_OUTPUT, "  %S%s (WSL%d)\n", 
                       distroName,
                       isDefault ? " (Default)" : "",
                       version);
                foundDistros = true;
            }
            
            RegCloseKey(hDistroKey);
        }
        
        RegCloseKey(hKey);
        
        if (!foundDistros) {
            BeaconPrintf(CALLBACK_OUTPUT, "No distributions found.");
            BeaconPrintf(CALLBACK_OUTPUT, "Use 'wsl.exe --install' or install from the Microsoft Store.");
        }
    }

    // Function to execute a command in a specified distribution
    int exec(const wchar_t* distro, const wchar_t* command) {
#ifdef _DEBUG
        if (!InitWslApi()) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to load wslapi.dll. Is WSL installed?");
            return -1;
        }
#endif
        DWORD exitCode = 0;
        
        // Create pipes to capture stdout and stderr
        HANDLE hStdoutRead = NULL, hStdoutWrite = NULL;
        HANDLE hStderrRead = NULL, hStderrWrite = NULL;
        SECURITY_ATTRIBUTES sa = { sizeof(SECURITY_ATTRIBUTES), NULL, TRUE };
        
        if (!CreatePipe(&hStdoutRead, &hStdoutWrite, &sa, 0)) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to create stdout pipe. Error: %lu", GetLastError());
            return -1;
        }
        SetHandleInformation(hStdoutRead, HANDLE_FLAG_INHERIT, 0);
        
        if (!CreatePipe(&hStderrRead, &hStderrWrite, &sa, 0)) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to create stderr pipe. Error: %lu", GetLastError());
            CloseHandle(hStdoutRead);
            CloseHandle(hStdoutWrite);
            return -1;
        }
        SetHandleInformation(hStderrRead, HANDLE_FLAG_INHERIT, 0);
        
        // Execute the command using WslLaunch (blocking call)
        HRESULT hr = WslLaunch(
            distro,
            command,
            TRUE,
            NULL,
            hStdoutWrite,
            hStderrWrite,
            &exitCode
        );
        
        // Close write ends so ReadFile will detect EOF
        CloseHandle(hStdoutWrite);
        CloseHandle(hStderrWrite);
        
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "Failed to execute command. Error: 0x%08X", hr);
            BeaconPrintf(CALLBACK_OUTPUT, "Make sure '%S' is a valid WSL distribution name.", distro);
            CloseHandle(hStdoutRead);
            CloseHandle(hStderrRead);
            return -1;
        }
        
        // Read all available stdout
        char buffer[4096];
        DWORD bytesRead;
        bool hasOutput = false;
        
        while (ReadFile(hStdoutRead, buffer, sizeof(buffer) - 1, &bytesRead, NULL) && bytesRead > 0) {
            buffer[bytesRead] = '\0';
            BeaconPrintf(CALLBACK_OUTPUT, "%s", buffer);
            hasOutput = true;
        }
        
        // Read all available stderr  
        while (ReadFile(hStderrRead, buffer, sizeof(buffer) - 1, &bytesRead, NULL) && bytesRead > 0) {
            buffer[bytesRead] = '\0';
            BeaconPrintf(CALLBACK_ERROR, "%s", buffer);
            hasOutput = true;
        }
        
        CloseHandle(hStdoutRead);
        CloseHandle(hStderrRead);
        
        if (!hasOutput) {
            BeaconPrintf(CALLBACK_OUTPUT, "(No output from command)");
        }
        
        BeaconPrintf(CALLBACK_OUTPUT, "\nCommand exited with code: %d", exitCode);
        return (int)exitCode;
    }

    void go(char* args, int len) {
        datap parser;
        BeaconDataParse(&parser, args, len);
        
        // Parse command: "list" or "exec"
        char* command = BeaconDataExtract(&parser, NULL);
        
        if (command == NULL || len == 0) {
            BeaconPrintf(CALLBACK_OUTPUT, "Usage:");
            BeaconPrintf(CALLBACK_OUTPUT, "  list                              - List installed distributions");
            BeaconPrintf(CALLBACK_OUTPUT, "  exec <distro> <command>           - Execute command in distribution");
            return;
        }
        
        // Check if command is "list"
        if (_stricmp(command, "list") == 0) {
            list();
        }
        // Check if command is "exec"
        else if (_stricmp(command, "exec") == 0) {
            // Extract distribution name and command
            wchar_t* distro = (wchar_t*)BeaconDataExtract(&parser, NULL);
            wchar_t* cmd = (wchar_t*)BeaconDataExtract(&parser, NULL);
            
            if (distro == NULL || cmd == NULL) {
                BeaconPrintf(CALLBACK_ERROR, "Error: exec requires distro name and command");
                BeaconPrintf(CALLBACK_OUTPUT, "Example: exec <distro_name> <command>");
                return;
            }
            
            exec(distro, cmd);
        }
        else {
            BeaconPrintf(CALLBACK_ERROR, "Unknown command: %s", command);
            BeaconPrintf(CALLBACK_OUTPUT, "Valid commands: list, exec");
        }
    }

    
    /*void sleep_mask(PBEACON_INFO info, PFUNCTION_CALL funcCall) {
        // BeaconGateWrapper(info, funcCall);
    }*/
}

// Define a main function for the bebug build
#if defined(_DEBUG) && !defined(_GTEST)

int main(int argc, char* argv[]) {
    // Run BOF's entrypoint
    // To pack arguments for the bof use e.g.: bof::runMocked<int, short, const char*>(go, 6502, 42, "foobar");
    
    // Test listing WSL distributions
    BeaconPrintf(CALLBACK_OUTPUT, "=== Testing WSL List ===");
    bof::runMocked<const char*>(go, "list");
    
    // Test executing a command (uncomment and modify to test with your distro)
    BeaconPrintf(CALLBACK_OUTPUT, "\n=== Testing WSL Exec ===");
    bof::runMocked<const char*, const wchar_t*, const wchar_t*>(go, "exec", L"Ubuntu", L"uname -a");
    
    // Test with redirection
    BeaconPrintf(CALLBACK_OUTPUT, "\n=== Testing WSL Exec with Redirection ===");
    bof::runMocked<const char*, const wchar_t*, const wchar_t*>(go, "exec", L"Ubuntu", L"echo testing > /tmp/testing_yay && cat /tmp/testing_yay");

    /* To test a sleepmask BOF, the following mockup executors can be used
    // Mock up Beacon and run the sleep mask once
    bof::runMockedSleepMask(sleep_mask);

    // Mock up Beacon with the specific .stage C2 profile
    bof::runMockedSleepMask(sleep_mask,
        {
            .allocator = bof::profile::Allocator::VirtualAlloc,
            .obfuscate = bof::profile::Obfuscate::False,
            .useRWX = bof::profile::UseRWX::True,
            .module = "",
        },
        {
            .sleepTimeMs = 5000,
            .runForever = false,
        }
    );
    */

    return 0;
}

// Define unit tests
#elif defined(_GTEST)
#include <gtest\gtest.h>

TEST(BofTest, TestList) {
    std::vector<bof::output::OutputEntry> got =
        bof::runMocked<const char*>(go, "list");
    // Check that we got some output
    ASSERT_GT(got.size(), 0);
    // First entry should be about WSL distributions
    ASSERT_NE(got[0].output.find("Windows Subsystem for Linux"), std::string::npos);
}
#endif