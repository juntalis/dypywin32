#ifndef _WIN32_COMMON_H_
#define _WIN32_COMMON_H_
#pragma once

/* Speed up build process with minimal headers. */
#ifndef WIN32_LEAN_AND_MEAN
#	define WIN32_LEAN_AND_MEAN 1
#endif
#ifndef VC_EXTRALEAN
#	define VC_EXTRALEAN 1
#endif


/* Supress Warnings */
#ifndef _CRT_SECURE_NO_DEPRECATE
#	define _CRT_SECURE_NO_DEPRECATE 1
#endif

#ifndef _CRT_NONSTDC_NO_DEPRECATE
#	define _CRT_NONSTDC_NO_DEPRECATE 1
#endif

/* Common Headers */
#include <SDKDDKVer.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>

/* Macros for prettier code */
#ifndef MAX_PATH
#	define MAX_PATH _MAX_PATH
#endif

/* C++/C compatibility stuff */
#ifdef __cplusplus
#	ifndef CEXTERN_BEGIN
#		define CEXTERN_BEGIN CEXTERN_DECL {
#	endif
#	ifndef CEXTERN_END
#		define CEXTERN_END }
#	endif
#	ifndef CEXTERN_DECL
#		define CEXTERN_DECL extern "C"
#	endif
#else
#	ifndef CEXTERN_BEGIN
#		define CEXTERN_BEGIN CEXTERN_DECL
#	endif
#	ifndef CEXTERN_END
#		define CEXTERN_END
#	endif
#	ifndef CEXTERN_DECL
#		define CEXTERN_DECL extern
#	endif
#endif

#ifdef DYNPYTHON_EXPORTS
#	include "pyinternal.h"
#endif

#endif /* _WIN32_COMMON_H_ */