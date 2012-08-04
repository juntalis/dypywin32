#include <windows.h>
#include <stdio.h>
#include "pe3264h.h"
#include <shlwapi.h>
#pragma comment (lib,"shlwapi.lib")

int printBanner ()
{
	printf ("\ndll2def <valerino-09-Y2K11>\n");
	printf ("\nSlightly modified to only list exports\n");
	printf ("usage: dll2def <dllname> to use the NONAME option\n");
	printf ("example : dll2def path.to/mydll.dll > mydll.def\n");
	return 1;
}

void* fileToBuffer (char* path, size_t* size)
{
	*size = 0;

	// open and read file to buffer
	HANDLE hf = CreateFileA(path,GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,NULL,OPEN_EXISTING,0,NULL);
	if (hf == INVALID_HANDLE_VALUE)
	{
		return NULL;
	}  
	LARGE_INTEGER fsize;
	if (!GetFileSizeEx(hf,&fsize))
	{
		ULONG gle = GetLastError();
		CloseHandle(hf);
		SetLastError(gle);
		return NULL;
	}
	BYTE* buffer = (BYTE*)calloc (1,fsize.LowPart + 1);
	if (!buffer)
	{
		CloseHandle(hf);
		SetLastError(ERROR_OUTOFMEMORY);
		return NULL;
	}
	ULONG r;
	if (!ReadFile(hf,buffer,fsize.LowPart,&r,NULL))
	{
		ULONG gle = GetLastError();
		free(buffer);
		CloseHandle(hf);
		SetLastError(gle);
		return NULL;
	}

	*size = fsize.LowPart;
	CloseHandle(hf);
	return buffer;
}

int main (int argc, char** argv)
{
	if (argc > 2 || argc == 1)
	return printBanner();

	char* dllpath;
	BOOL noname = FALSE;
	dllpath = argv[1];

	// open input file  
	size_t fsize;
	PBYTE buffer = (PBYTE)fileToBuffer(dllpath,&fsize);
	if (!buffer)
	{
		printf ("**ERROR** : failed to open input file %s, gle=%d",dllpath,GetLastError());
		return 1;
	}

	// dump exports
	ULONG gle = peDumpExports((HMODULE)buffer,noname);
	if (gle != 0)
	{
		printf ("**ERROR** : peDumpExports, gle=%d",gle);
		free(buffer);
		return 1;
	}
	free(buffer);
	return 0;
}