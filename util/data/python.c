#pragma message("(cl.exe -LD -D_DLL=1 -DDLL=1 -DNDEBUG -D_NDEBUG -DWIN32 -D_WIN32 -O2 -MD -I. -Ipython -EP python.c")
#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN

/* We include as many std headers to start with as we can to avoid getting them in
   our preprocessor results during the processing of python headers. */

#define DYNLOAD_JUNK_RUNNING
#include <io.h>
#include <float.h>
#include <basetsd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <math.h>
#include <time.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <ctype.h>
#include <wchar.h>
#undef DYNLOAD_JUNK_RUNNING
void landmark();

/* Not all python headers are included by Python.h. So after tracing which ones were,
   we added the ones that weren't. */
#define DYNLOAD_PYTHON_RUNNING
#include "python_headers"
#undef DYNLOAD_PYTHON_RUNNING