#include <windows.h>
#include <PowrProf.h>


int __stdcall wmain(PVOID ThreadParam)
{
	return SetSuspendState(FALSE,TRUE,FALSE);
}

