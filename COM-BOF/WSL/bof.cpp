#include <Windows.h>
#include "base\helpers.h"

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
#endif



extern "C" {
#define CINTERFACE
#include "beacon.h"
#include "sleepmask.h"
#include "beacon.h"
#include "sleepmask.h"
#include "base/helpers.h"
#include "wslservice_h.h"

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
    void initializeCom(void) {
        DFR_LOCAL(OLE32, COINIT_MULTITHREADED);
        CoInitializeEx(NULL, COINIT_MULTITHREADED);

        DFR_LOCAL(OLE32, CoInitializeSecurity);
        CoInitializeSecurity(NULL, -1, NULL, NULL,
            RPC_C_AUTHN_LEVEL_DEFAULT,
            SecurityDelegation, NULL,
            EOAC_STATIC_CLOAKING, NULL);

        ILxssUserSession* session = nullptr;
        DFR_LOCAL(OLE32, CoCreateInstance)
            HRESULT hr = CoCreateInstance(CLSID_LxssUserSession2, nullptr, CLSCTX_LOCAL_SERVER, IID_ILxssUserSession2, (LPVOID*)&session);
        printf("CoCreateInstance hr: 0x%X\n", hr);
        
        LXSS_ERROR_INFO errorInfo;
        GUID distroGuid;
        char cliBuffer[1024];
        cliBuffer[0] = '-';
		cliBuffer[1] = 'c';

        char* cli[3];
        cli[0] = cliBuffer;
	//	cli[1] = (char*)"echo Hello from WSL BOF!";
	//	cli[2] = NULL;
        LXSS_STD_HANDLES stdHandles = { 0 };
		//GUID distroGuid;
		GUID instanceGuid;
        if (session) {
			HANDLE pHandle = NULL;
			HANDLE sHandle = NULL;
			HANDLE _stdin = NULL;
			HANDLE _stdout = NULL;
			HANDLE _stderr = NULL;
			HANDLE commChannel = NULL;
			PVOID interop = { 0 };
            PVOID error = 0;;
			WCHAR* envs[] = { NULL };
			GUID distroGuid2;

            ULONG distCount;
            LXSS_ENUMERATE_INFO *info;
			LXSS_ERROR_INFO errorInfo = { 0 };

            //session->lpVtbl->GetDistributionId(session, L"Ubuntu-24.04", 0, &errorInfo, &distroGuid);
			//session->lpVtbl->CreateInstance(session, &distroGuid, 0, &errorInfo);
            session->lpVtbl->EnumerateDistributions(session, &distCount, &info, &errorInfo);

            printf("Distro Count: %d\n", distCount);

			//session->lpVtbl->CreateLxProcess(session, &distroGuid, "/bin/bash", 2, cli, "/", );
            //session->lpVtbl->CreateLxProcess(session, &distroGuid, "/bin/bash", 2, (LPCSTR*)cli, L"/", NULL, (WCHAR*)L"", 0, L"root", 0, 0, 0, &stdHandles, 0, &distroGuid2, &instanceGuid, &pHandle, &sHandle, &_stdin, &_stdout, &_stderr, &commChannel, &interop, (_LXSS_ERROR_INFO*)&error);
        }
    }

    // Define the Dynamic Function Resolution declaration for the GetLastError function
    DFR(KERNEL32, GetLastError);
    // Map GetLastError to KERNEL32$GetLastError 
    #define GetLastError KERNEL32$GetLastError 

    void go(char* args, int len) {
        /**
         * Define the Dynamic Function Resolution declaration for the GetSystemDirectoryA function
         * This time we use the DFR_LOCAL macro which create a local function pointer variable that
         * points to GetSystemDirectoryA. Therefore, we do have to map GetSystemDirectoryA to
         * KERNEL32$GetSystemDirectoryA
         */

        initializeCom();


        DFR_LOCAL(KERNEL32, GetSystemDirectoryA);
        char path[MAX_PATH + 1];

        UINT bytesCopied = GetSystemDirectoryA(path, sizeof(path));
        if (bytesCopied == 0) {
            BeaconPrintf(CALLBACK_ERROR, "Error: %i", GetLastError());
        }
        else if (bytesCopied <= sizeof(path)) {
            BeaconPrintf(CALLBACK_OUTPUT, "System Directory: %s", path);
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
    bof::runMocked<>(go);

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

TEST(BofTest, Test1) {
    std::vector<bof::output::OutputEntry> got =
        bof::runMocked<>(go);
    std::vector<bof::output::OutputEntry> expected = {
        {CALLBACK_OUTPUT, "System Directory: C:\\Windows\\system32"}
    };
    // It is possible to compare the OutputEntry vectors, like directly
    // ASSERT_EQ(expected, got);
    // However, in this case, we want to compare the output, ignoring the case.
    ASSERT_EQ(expected.size(), got.size());
    ASSERT_STRCASEEQ(expected[0].output.c_str(), got[0].output.c_str());
}
#endif