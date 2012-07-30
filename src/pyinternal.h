#ifndef _WIN32_INTERNAL_H_
#define _WIN32_INTERNAL_H_
#pragma once

// Name of this file is kind of misleading 'cause it
// defines stuff that applies to Win64, too.

#include "config.h"

/* Debugging macros */
#ifdef DEBUG
#	define debug(s,...) printf("DEBUG: " s "\n", __VA_ARGS__);
#else
#	define debug(s,...)
#endif

/* Macros for prettier code. */
#ifndef MAX_ENV
#	define MAX_ENV _MAX_ENV
#endif

#if defined(_DEBUG) && !defined(DEBUG)
#	define DEBUG
#endif

#ifndef __cplusplus
#	ifndef bool
#		define bool BOOL
#		define true TRUE
#		define false FALSE
#	endif
#	ifndef inline
#		define inline __inline
#	endif
#endif

/* Environment Variable Stuff */
#define PATH_ENV "PATH"
#define PATH_SEP ";"

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

/* Utility macros */
#define is_null(v) ((v) == NULL)
#define bad_stralloc(s,l) (is_null(s = (char*)malloc(l)))
#define zbuf(buf,sz) memset((void*)buf,0,sz)
#define zstr(s,l) zbuf(s,l*sizeof(char))
#define path_decl(v)  char v[MAX_PATH+1] = {0}
#define exists(p) (_access(p, 00) != -1)
#define path_too_big(l) ((l) > MAX_PATH)

#endif /* _WIN32_INTERNAL_H_ */