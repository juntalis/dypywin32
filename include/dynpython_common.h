#ifndef _DYNPYTHON_COMMON_H_
#define _DYNPYTHON_COMMON_H_
#pragma once

// Speed up build process with minimal headers.
#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN

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
#include <io.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <stddef.h>
#include <wchar.h>
#include <stdarg.h>

/* Environment Variable Stuff */
#define PATH_ENV "PATH"
#define PATH_SEP ";"

/* Macros for prettier code */
#ifndef MAX_PATH
#	define MAX_PATH _MAX_PATH
#endif

#ifdef BUILDING_DYNPYTHON
#	include "dynpython_internal.h"
#endif

/* Utility definitions */
#if defined(_M_IA64)
#	define MY_ARCH "IA64"
#elif defined(_M_X64)
#	define MY_ARCH "X64"
#elif defined(_M_IX86)
#	define MY_ARCH "X86"
#else
#	define MY_ARCH "unknown"
#endif 

#endif /* _DYNPYTHON_COMMON_H_ */