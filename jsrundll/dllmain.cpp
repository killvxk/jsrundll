// dllmain.cpp : DLL �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
#include "stdafx.h"


void Finalize();

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		break;
		case DLL_THREAD_ATTACH:

		break;
		case DLL_THREAD_DETACH:
	
		break;
	
		case DLL_PROCESS_DETACH:
			Finalize();
		break;
	}
	return TRUE;
}
