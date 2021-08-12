#include <windows.h>

#include "../protobuf/csgo/base_gcmessages.pb.h"
#include "../protobuf/csgo/cstrike15_gcmessages.pb.h"
#include "../protobuf/csgo/cstrike15_usermessages.pb.h"
#include "../protobuf/csgo/econ_gcmessages.pb.h"

// you can basically paste the files from your cheat into this folder (src)

BOOL WINAPI DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		AllocConsole();
	}

	return TRUE;
}