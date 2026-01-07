#define CINTERFACE

#include <Windows.h>
#include "beacon.h"
#include "sleepmask.h"
#include "base/helpers.h"
#include "wslservice_h.h"



	void initializeCom(void) {
		DFR_LOCAL(OLE32, CoInitializeEx);
		CoInitialize(NULL);

		ILxssUserSession* session = nullptr;
		DFR_LOCAL(OLE32, CoCreateInstance)
			CoCreateInstance(CLSID_LxssUserSession, nullptr, CLSCTX_LOCAL_SERVER, IID_ILxssUserSession, (LPVOID*) & session);
		LXSS_ERROR_INFO errorInfo;
		GUID distroGuid;

		if (session) {
			session->lpVtbl->GetDistributionId(session, L"Ubuntu-20.04", 0, &errorInfo, &distroGuid );
		}
	}
