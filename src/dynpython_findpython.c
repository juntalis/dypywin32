#pragma comment(lib,"Advapi32.lib")
#pragma comment(lib, "imagehlp.lib")
#include "Python.h"
#include <imagehlp.h>

/* Python Definitions */
#ifndef inline
#	define inline __forceinline
#endif

/* Utility macros */
#define is_null(v) ((v) == NULL)
#define bad_stralloc(s,l) (is_null(s = (char*)malloc(l)))
#define zbuf(buf,sz) memset((void*)buf,0,sz)
#define zstr(s,l) zbuf(s,l*sizeof(char))
#define exists(p) (_access(p, 00) != -1)
#define path_too_big(l) ((l) > MAX_PATH)

// Length of the python executable + 1 for the slash before it.
static size_t szPyExe = 0;
#define get_python_length() if(!szPyExe) szPyExe = strlen(PYTHON_EXE) + 1
#define check_python_length(l) ((l + szPyExe) <= MAX_PATH)

// Our python process command line.
static const char python_exec[] = "\"\"%s\" -c \"%s\"\"";

// String above (minus the format strings) and a trailing \0
#define PYTHON_EXEC_LEN 11

// Python prefix, python DLL, 4 chars for API version,
// 2 chars for version major and minor, 3 semicolons, and a trailing zero.
#define OUTPUT_BUF_LEN MAX_PATH + MAX_PATH + 10

// Environment variable macros

#define var_split(v) strtok(v, PATH_SEP)
#define next_var(v) (v = strtok(NULL, PATH_SEP))

// Script: getinfo.py
static const char getinfo_script[] = "import sys;"
" from ctypes import *;"
" from ctypes.wintypes import HANDLE, DWORD;"
" buffer=create_string_buffer(261);"
" GetModuleFileName=windll.kernel32.GetModuleFileNameA;"
" GetModuleFileName.restype=DWORD;"
" GetModuleFileName.argtypes=[HANDLE,c_char_p,DWORD];"
" GetModuleFileName(sys.dllhandle,buffer,261);"
" vi=sys.version_info;"
" result=['%d%d'%(vi.major,vi.minor),str(sys.api_version),sys.prefix];"
" result+=[buffer.value];"
" sys.stdout.write(';'.join(result))";

// Length of the script above.
static size_t getinfo_script_length = 0;

/* Static python variables */
static char python_exe[MAX_PATH+1] = {0};

/* Global python variables */
int python_api_version = 0;
char python_api_string[] = "0000";
char python_version[] = "00";
char python_prefix[MAX_PATH+1] = {0};
char python_library[MAX_PATH+1] = {0};

/* Execute our inlined script to collect some info
   on our targeted python installation. */
static int get_python_info(char* python)
{
	FILE *pPipe;
	int retcode = 0;
	size_t szExecBuf, szExecLen;
	char psBuffer[OUTPUT_BUF_LEN] = "",
	*cmdExec,
	*psBuffPart;
	

	// Check that python string isn't null.
	if(is_null(python)) {
		debug("Python string is null.");
		return 0;
	}

	// Calculate our cmd buffer length.
	if(getinfo_script_length == 0) getinfo_script_length = strlen(getinfo_script);
	szExecLen = PYTHON_EXEC_LEN + getinfo_script_length + strlen(python);
	szExecBuf = sizeof(char) * szExecLen;

	// Attempt to allocate our cmd buffer.
	if(bad_stralloc(cmdExec, szExecBuf)) {
		debug("Allocation failed.");
		return 0;
	}

	// Zero out our cmd buffer, then assign the cmd to execute.
	zbuf(cmdExec, szExecBuf);
	sprintf(cmdExec, python_exec, python, getinfo_script);

	// Attempt to open our process.
	if(is_null(pPipe = _popen(cmdExec, "rt"))) {
		free(cmdExec);
		debug("Could not open pipe.");
		return 0;
	}

	// Read process pipe until end of file, or an error occurs.
	while(fgets(psBuffer, OUTPUT_BUF_LEN, pPipe));

	// Free our cmd buffer and make sure our process didn't error out.
	free(cmdExec);
	if (!feof( pPipe)) {
		debug("Pipe was not at EOF.");
		return 0;
	}

	// Close pipe & check the return value of our process.
	retcode = _pclose(pPipe);
	if(retcode != 0 || !strlen(psBuffer)) {
		debug("Python returned a non-zero return code.");
		return 0;
	}

	// Python major & minor version.
	if(is_null(psBuffPart = var_split(psBuffer)) || (strlen(psBuffPart) != 2)) {
		debug("Failed to parse python version.");
		return 0;
	}
	strcpy(python_version, (const char*)psBuffPart);

	// Python API version
	if(is_null(next_var(psBuffPart)) || (strlen(psBuffPart) != 4)) {
		debug("Failed to parse python API version.");
		return 0;
	}
	strcpy(python_api_string, (const char*)psBuffPart);
	if(!(python_api_version = atoi(python_api_string))) return 0;

	// Python prefix
	if(is_null(next_var(psBuffPart)) || (strlen(psBuffPart) == 0)) {
		debug("Failed to parse python prefix.");
		return 0;
	}
	strcpy(python_prefix, (const char*)psBuffPart);

	// Python dll
	if(is_null(next_var(psBuffPart)) || (strlen(psBuffPart) == 0)) {
		debug("Failed to parse python DLL.");
		return 0;
	}
	strcpy(python_library, (const char*)psBuffPart);
	return 1;
}

// Given an absolute path, get the parent directory of the path.
inline int get_parent_dir(char* sFilePath, char* sParentDir, size_t szParentDir)
{
	char* sTemp;
	size_t szTemp = (strlen(sFilePath) + 1) * sizeof(char);
	if(bad_stralloc(sTemp, szTemp)) return 0;
	zbuf(sTemp, szTemp);
	strcpy(sTemp, sFilePath);
	*(strrchr(sTemp, '\\')) = '\0';
	szTemp = strlen(sTemp);
	if(!szTemp || szParentDir < szTemp) {
		free(sTemp);
		return 0;
	}
	strcpy(sParentDir, sTemp);
	return 1;
}

// Remove any trailing \'s from a path and after, make sure it's longer than
// 3 characters (C:\)
inline int remove_trailing_slashes(char* sPath, size_t* szPath)
{
	while((sPath[--(*szPath)] == '\\') && *szPath) sPath[*szPath] = 0;
	return *szPath >= 3;
}

// To save myself some trouble.
#define Platform_Mismatch(p) \
			debug("Processor Architecture Mismatch"); \
			debug("%s (%s)", __argv[0], MY_ARCH); \
			debug("%s (%s)", python, p)

// Given the path to our python executable, load the binary and check
// the processor architecture. If it's an x64 binary and our current
// executable isn't, we'll return 0.
static int is_valid(char* python)
{
	char sPythonDir[MAX_PATH+1] = {0};
	int result = 1;
	LOADED_IMAGE oImg;
	ZeroMemory(&oImg, sizeof(oImg));
	if(!get_parent_dir(python, sPythonDir, MAX_PATH)) {
		debug("Could not get parent folder of %s..", python);
		return 0;
	}
	if(!MapAndLoad(PYTHON_EXE, sPythonDir, &oImg, 0, 1)) {
		debug("Could not MapAndLoad %s. Used folder: %s", PYTHON_EXE, sPythonDir);
		return 0;
	}
	switch(oImg.FileHeader->FileHeader.Machine)
	{
		case IMAGE_FILE_MACHINE_IA64:
#ifdef _M_IA64
			result = 1;
#else
			result = 0;
			Platform_Mismatch("IA64");
#endif
			break;
		// AMD64
		case IMAGE_FILE_MACHINE_AMD64:
#ifdef _M_X64
			result = 1;
#else
			result = 0;
			Platform_Mismatch("X64");
#endif
			break;
		// X86 (32-bit)
		case IMAGE_FILE_MACHINE_I386:
#ifdef _M_IX86
			result = 1;
#else
			result = 0;
			Platform_Mismatch("X86");
#endif
			break;
		// IA64
		default:
			result = 0;
			Platform_Mismatch("Invalid");
			break;
	}
	// This shouldn't happen, but you never know.
	if(!UnMapAndLoad(&oImg)) {
		debug("Could not unmap the python image.");
		return 0;
	}
	return result;
}

// Run a number of checks to see if the executable provided is a valid
// binary for our current configuration.
static int check_python(char* python)
{
	debug("Checking %s", python);
	if(!exists(python)) return 0;
	if(!is_valid(python)) {
		debug("Failed at architecture check.");
		return 0;
	}
	return get_python_info(python);
}

// Attempt to find python on the PATH environment variable.
// Note: We're not using any of the built in APIs like _searchenv,
// because we don't want just the first executable on PATH. We need
// to iterate through all matches until we find one that's valid
// for our configuration.
static int find_in_path()
{
	char *sSearch, *sBuffer;
	char sCheck[MAX_PATH+1] = {0};
	size_t szSearch;

	// Some debugging.
	debug("Searching the PATH for a valid python executable.");

	if(is_null(sBuffer = getenv(PATH_ENV))) {
		debug("Could not get PATH environment variable.");
		return 0;
	}

	if(is_null(sSearch = var_split(sBuffer))) {
		debug("Could not split PATH environment variable by ';'");
		debug("PATH = %s", sBuffer);
		return 0;
	}

	do {
		if(!(szSearch = strlen(sSearch))) continue;
		if(szSearch > MAX_PATH) {
			debug("Encounted a path in the PATH variable that is too big.");
			debug("Path: %s", sSearch);
			debug("Length: %d", szSearch);
			continue;
		}
		// Set up our temporary work variable.
		strcpy(sCheck, sSearch);

		// Remove trailing slashes.
		if(!remove_trailing_slashes(sCheck, &szSearch)) {
			debug(
				"After removing all trailing slashes, path's length was less than 3. This "
				"indicates an invalid path in your environment variables."
			);
			debug("Original: %s", sSearch);
			debug("Result: %s", sCheck);
			continue;
		}

		// Max sure our resulting string wont be too big.
		if(!(check_python_length(szSearch))) {
			debug(
				"Length of path, \"%s\" (%d) added to length of \"\\" PYTHON_EXE "\" (%d) results "
				"in a length that is bigger than the maximum file path length. Skipping.",
				sSearch,
				szSearch,
				szPyExe
			);
			continue;
		}

		// Assemble our python path and check it.
		strcat(sCheck, "\\" PYTHON_EXE);
		if(!check_python(sCheck)) continue;

		// If we make it here, we have successfully found our python installation.
		strcpy(python_exe, sCheck);
		break;

	} while(!is_null(next_var(sSearch)));

	// Some debugging.
	debug("find_in_path resulted in \"%s\"", python_exe);

	return *python_exe != 0;
}

// Query the registry for a specific version of python.
static int check_registry(int major, int minor, char* sBuf, long* szBuf)
{
	DWORD dwRet;
	dwRet = RegQueryValueA(HKEY_LOCAL_MACHINE, PYTHON_REG, sBuf, szBuf);
	return dwRet == ERROR_SUCCESS;
}

// Check the registry for any installations of Python that we can use.
// TODO: Refactor the common checks/logic/etc from this and find_in_path
// into a static function.
static int find_in_registry()
{
	char sPythonBuf[MAX_PATH+1] = {0};
	char sCheck[MAX_PATH+1] = {0};
	long szPythonBuf = MAX_PATH + 1;
	int i = 0;
	
	// Some debugging.
	debug("Searching the registry for a python installation.");

	for(i = PYTHON2_MINOR_MIN; i <= PYTHON2_MINOR_MAX; i++) {
		if(!check_registry(2, i, sPythonBuf, &szPythonBuf)) continue;
		// RegQueryValueA includes the trailing zero in the length.
		szPythonBuf--;
		
		// Double check our result.
		if(!sPythonBuf || szPythonBuf <= 0) continue;
		
		// Set up our temporary work variable.
		strcpy(sCheck, sPythonBuf);

		// Remove trailing slashes.
		if(!remove_trailing_slashes(sCheck, (size_t*)&szPythonBuf)) {
			debug(
				"After removing all trailing slashes, path's length was less than 3. This "
				"indicates an invalid path in your registry."
			);
			debug("Original: %s", sPythonBuf);
			debug("Result: %s", sCheck);
			continue;
		}

		// Max sure our resulting string wont be too big.
		if(!(check_python_length(szPythonBuf))) {
			debug(
				"Length of path, \"%s\" (%d) added to length of \"\\" PYTHON_EXE "\" (%d) results "
				"in a length that is bigger than the maximum file path length. Skipping.",
				sPythonBuf,
				szPythonBuf,
				szPyExe
			);
			continue;
		}

		// Assemble our python path and check it.
		strcat(sCheck, "\\" PYTHON_EXE);
		if(!check_python(sCheck)) continue;

		// If we make it here, we have successfully found our python installation.
		strcpy(python_exe, sCheck);
		break;
	}

	// Some debugging.
	debug("find_in_registry resulted in \"%s\"", python_exe);

	return *python_exe != 0;
}

// Check the environment variables for any explicit python
// declarations.
static int find_in_env()
{
	char* sEnv;
	char sCheck[MAX_PATH+1] = {0};
	size_t szEnv;

	// Some debugging.
	debug("Searching the environment variables for a variable named PYTHON.");

	// Get our env variable.
	sEnv = getenv("PYTHON");
	
	// Make sure the result isn't NULL or an empty string.
	if(is_null(sEnv) || *sEnv == 0) return 0;
	
	// Make sure the result isn't too big to be a valid path.
	szEnv = strlen(sEnv);
	if(path_too_big(szEnv)) return 0;
	
	// Set up our temporary working variable.
	strcpy(sCheck, sEnv);

	// Check the python executable pointed to by our PYTHON environment var.
	if(!check_python(sCheck)) {
		debug("PYTHON env variable was set, but it turned out to be invalid.");
		debug("PYTHON = %s", sCheck);
		return 0;
	}

	// If we make it here, we have successfully found our python installation.
	strcpy(python_exe, sCheck);

	// Some debugging.
	debug("find_in_env resulted in \"%s\"", python_exe);

	return 1;
}

// Using a number of different methods, find a python installation to use
// for our dynamic loading.
int DynPy_FindPython()
{
	get_python_length();
	return find_in_env() || find_in_path() || find_in_registry();
}