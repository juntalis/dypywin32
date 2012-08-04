#include "Python.h"
// Looking into supporting other operating systems..


#ifndef _WIN32
#	include <dlfcn.h>
#	defome HMODULE void*
#	define GetModuleHandleA(x) dlopen(x, RTLD_NOW)
#	define LoadLibraryA(x) dlopen(x, RTLD_NOW)
#	define FreeLibrary(x) dlclose(x)
#	defome GetProcAddress(h,x) dlsym(h,x)
#endif


// Whether or not the library has been loaded.
static int DynPy_LibraryLoaded = 0;

// Various flags.
static int DynPy_DebugVerbose = 0;
static HMODULE DynPy_DllHandle = NULL;

/* Python Definitions */
#ifndef inline
#	define inline __forceinline
#endif

/* Our import tab. */
struct DynPy_Import DynPy_ImportsTab[] = {
#include "dynpython_tab.c"
	{ NULL, NULL }, /* sentinel */
};

#pragma region Initialization/Finalization Functions

// This function needs to be called before any Python function is called.
void DynPy_Initialize()
{
	int i, not_found_export = 0;
	struct DynPy_Import *p = DynPy_ImportsTab;
	
	// Set up the verbosity level.
	#ifdef DEBUG
	DynPy_DebugVerbose = 1;
	#else
	DynPy_DebugVerbose = (getenv(DYNPY_DEBUG_ENV) != NULL);
	#endif
	
	// Now attempt to find the best python installation to use.
	if(!DynPy_FindPython() || !python_library)
		fatal(1, "Could not find our python library.");
	
	// Get the module if it's already loaded, or load it ourselves.
	if((DynPy_DllHandle = GetModuleHandleA(python_library)) == NULL)
		if((DynPy_DllHandle = LoadLibraryA(python_library)) == NULL)
			fatal(1, "Could not load our python library.\n\nPath found: %s", python_library);

			
	#ifndef DYNPYTHON_LAZYLOAD
	// We may choose to lazy load our procedure addresses. If not, we'll do it all now.
	for (i = 0; p->name; ++i, ++p) {
		p->proc = (DynPy_TabProc)GetProcAddress(DynPy_DllHandle, p->name);
		if (p->proc == NULL) {
			warn("Symbol %s could not be located in our DLL.\n", p->name);
			not_found_export = 1;
			continue;
		}
	}
	// Probably shouldn't do this, but I want to do some testing on this.
	if(not_found_export) {
		warn(
			"There was one or more expected symbols that could not be found in the Python DLL. "
			"As of now, we'll continue running, but don't be surprised if the application has "
			"strange behavior or completely errors out."
		);
	}
	#endif
	
	// Lastly, set that our library has been loaded.
	DynPy_LibraryLoaded = 1;
}

// Verify that our python library has been loaded and the tab list
// has been initialized (if we're not lazy-loading)
int DynPy_IsInitialized() {
	return DynPy_LibraryLoaded && DynPy_DllHandle != NULL;
}

// Unload the python library, and unset the various tab entries.
void DynPy_Finalize()
{
	struct DynPy_Import *p = DynPy_ImportsTab;
	int i;
	if(!DynPy_LibraryLoaded || !DynPy_DllHandle) return;
	if(Py_IsInitialized()) Py_Finalize();
	FreeLibrary(DynPy_DllHandle);
	for (i = 0; p->name; ++i, ++p) if (p->proc != NULL) p->proc = NULL;
	DynPy_DllHandle = NULL;
	DynPy_LibraryLoaded = 0;
}

/* If we're lazy loading, then we'll need to set up the DynPy_GetAddr function. */
#ifdef DYNPYTHON_LAZYLOAD
DynPy_TabProc DynPy_GetAddr(int i)
{
	return (
		DynPy_ImportsTab[i].proc = (DynPy_ImportsTab[i].proc == NULL) ? 
		(DynPy_TabProc)GetProcAddress(DynPy_DllHandle,DynPy_ImportsTab[i].name) :
		DynPy_ImportsTab[i].proc
	);
}
#endif

#pragma endregion Initialization/Finalization Functions


#pragma region Ref-Counting Functions

void _Py_XDECREF(PyObject *ob)
{
	static PyObject *tup;
	if (tup == NULL)
		tup = PyTuple_New(1);
	/* Let the tuple take the refcount */
	PyTuple_SetItem(tup, 0, ob);
	/* and overwrite it */
	PyTuple_SetItem(tup, 0, PyInt_FromLong(0));
}

void _Py_XINCREF(PyObject *ob)
{
	if (ob) Py_BuildValue("O", ob);
}

#pragma endregion Ref-Counting Functions


#pragma region Output Functions

void inline _DynPy_Output(const char* fmt, va_list args)
{
	vfprintf(stderr, fmt, args);
}

void DynPy_Debug(const char* msg, ...)
{
	va_list args;
	if(!DynPy_DebugVerbose) return;
	va_start(args, msg);
	_DynPy_Output("DEBUG: %s\n", args);
	va_end(args);	
}

void DynPy_Warn(const char* msg, ...)
{
	va_list args;
	va_start(args, msg);
	_DynPy_Output("WARNING: %s\n", args);
	va_end(args);	
}

void DynPy_Fatal(int code, const char* msg, ...)
{
	va_list args;
	va_start(args, msg);
	_DynPy_Output("FATAL: %s\n", args);
	va_end(args);
#ifdef _WIN32
	ExitProcess((UINT)code);
#else
	exit(code)
#endif
}

#pragma endregion Output Functions
