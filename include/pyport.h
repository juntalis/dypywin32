#ifndef Py_PYPORT_H
#define Py_PYPORT_H

#include "pyconfig.h" /* include for defines */

/* Some versions of HP-UX & Solaris need inttypes.h for int32_t,
   INT32_MAX, etc. */
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

/**************************************************************************
Symbols and macros to supply platform-independent interfaces to basic
C language & library operations whose spellings vary across platforms.

Please try to make documentation here as clear as possible:  by definition,
the stuff here is trying to illuminate C's darkest corners.

Config #defines referenced here:

SIGNED_RIGHT_SHIFT_ZERO_FILLS
Meaning:  To be defined iff i>>j does not extend the sign bit when i is a
          signed integral type and i < 0.
Used in:  Py_ARITHMETIC_RIGHT_SHIFT

Py_DEBUG
Meaning:  Extra checks compiled in for debug mode.
Used in:  Py_SAFE_DOWNCAST

HAVE_UINTPTR_T
Meaning:  The C9X type uintptr_t is supported by the compiler
Used in:  Py_uintptr_t

HAVE_LONG_LONG
Meaning:  The compiler supports the C type "long long"
Used in:  PY_LONG_LONG

**************************************************************************/


/* For backward compatibility only. Obsolete, do not use. */
#ifdef HAVE_PROTOTYPES
#define Py_PROTO(x) x
#else
#define Py_PROTO(x) ()
#endif
#ifndef Py_FPROTO
#define Py_FPROTO(x) Py_PROTO(x)
#endif

/* typedefs for some C9X-defined synonyms for integral types.
 *
 * The names in Python are exactly the same as the C9X names, except with a
 * Py_ prefix.  Until C9X is universally implemented, this is the only way
 * to ensure that Python gets reliable names that don't conflict with names
 * in non-Python code that are playing their own tricks to define the C9X
 * names.
 *
 * NOTE: don't go nuts here!  Python has no use for *most* of the C9X
 * integral synonyms.  Only define the ones we actually need.
 */

#ifdef HAVE_LONG_LONG
#ifndef PY_LONG_LONG
#define PY_LONG_LONG long long
#if defined(LLONG_MAX)
/* If LLONG_MAX is defined in limits.h, use that. */
#define PY_LLONG_MIN LLONG_MIN
#define PY_LLONG_MAX LLONG_MAX
#define PY_ULLONG_MAX ULLONG_MAX
#elif defined(__LONG_LONG_MAX__)
/* Otherwise, if GCC has a builtin define, use that. */
#define PY_LLONG_MAX __LONG_LONG_MAX__
#define PY_LLONG_MIN (-PY_LLONG_MAX-1)
#define PY_ULLONG_MAX (__LONG_LONG_MAX__*2ULL + 1ULL)
#else
/* Otherwise, rely on two's complement. */
#define PY_ULLONG_MAX (~0ULL)
#define PY_LLONG_MAX  ((long long)(PY_ULLONG_MAX>>1))
#define PY_LLONG_MIN (-PY_LLONG_MAX-1)
#endif /* LLONG_MAX */
#endif
#endif /* HAVE_LONG_LONG */

/* a build with 30-bit digits for Python long integers needs an exact-width
 * 32-bit unsigned integer type to store those digits.  (We could just use
 * type 'unsigned long', but that would be wasteful on a system where longs
 * are 64-bits.)  On Unix systems, the autoconf macro AC_TYPE_UINT32_T defines
 * uint32_t to be such a type unless stdint.h or inttypes.h defines uint32_t.
 * However, it doesn't set HAVE_UINT32_T, so we do that here.
 */
#if (defined UINT32_MAX || defined uint32_t)
#ifndef PY_UINT32_T
#define HAVE_UINT32_T 1
#define PY_UINT32_T uint32_t
#endif
#endif

/* Macros for a 64-bit unsigned integer type; used for type 'twodigits' in the
 * long integer implementation, when 30-bit digits are enabled.
 */
#if (defined UINT64_MAX || defined uint64_t)
#ifndef PY_UINT64_T
#define HAVE_UINT64_T 1
#define PY_UINT64_T uint64_t
#endif
#endif

/* Signed variants of the above */
#if (defined INT32_MAX || defined int32_t)
#ifndef PY_INT32_T
#define HAVE_INT32_T 1
#define PY_INT32_T int32_t
#endif
#endif
#if (defined INT64_MAX || defined int64_t)
#ifndef PY_INT64_T
#define HAVE_INT64_T 1
#define PY_INT64_T int64_t
#endif
#endif

/* If PYLONG_BITS_IN_DIGIT is not defined then we'll use 30-bit digits if all
   the necessary integer types are available, and we're on a 64-bit platform
   (as determined by SIZEOF_VOID_P); otherwise we use 15-bit digits. */

#ifndef PYLONG_BITS_IN_DIGIT
#if (defined HAVE_UINT64_T && defined HAVE_INT64_T && \
     defined HAVE_UINT32_T && defined HAVE_INT32_T && SIZEOF_VOID_P >= 8)
#define PYLONG_BITS_IN_DIGIT 30
#else
#define PYLONG_BITS_IN_DIGIT 15
#endif
#endif

/* uintptr_t is the C9X name for an unsigned integral type such that a
 * legitimate void* can be cast to uintptr_t and then back to void* again
 * without loss of information.  Similarly for intptr_t, wrt a signed
 * integral type.
 */
#ifdef HAVE_UINTPTR_T
typedef uintptr_t       Py_uintptr_t;
typedef intptr_t        Py_intptr_t;

#elif SIZEOF_VOID_P <= SIZEOF_INT
typedef unsigned int    Py_uintptr_t;
typedef int             Py_intptr_t;

#elif SIZEOF_VOID_P <= SIZEOF_LONG
typedef unsigned long   Py_uintptr_t;
typedef long            Py_intptr_t;

#elif defined(HAVE_LONG_LONG) && (SIZEOF_VOID_P <= SIZEOF_LONG_LONG)
typedef unsigned PY_LONG_LONG   Py_uintptr_t;
typedef PY_LONG_LONG            Py_intptr_t;

#else
#   error "Python needs a typedef for Py_uintptr_t in pyport.h."
#endif /* HAVE_UINTPTR_T */

/* Py_ssize_t is a signed integral type such that sizeof(Py_ssize_t) ==
 * sizeof(size_t).  C99 doesn't define such a thing directly (size_t is an
 * unsigned integral type).  See PEP 353 for details.
 */
typedef Py_intptr_t     Py_ssize_t;

#define PY_SIZE_MAX SIZE_MAX
#define PY_SSIZE_T_MAX ((Py_ssize_t)(((size_t)-1)>>1))
#define PY_SSIZE_T_MIN (-PY_SSIZE_T_MAX-1)
#define PY_FORMAT_SIZE_T ""


/* PY_FORMAT_LONG_LONG is analogous to PY_FORMAT_SIZE_T above, but for
 * the long long type instead of the size_t type.  It's only available
 * when HAVE_LONG_LONG is defined. The "high level" Python format
 * functions listed above will interpret "lld" or "llu" correctly on
 * all platforms.
 */
#ifdef HAVE_LONG_LONG
#   ifndef PY_FORMAT_LONG_LONG
#       if defined(MS_WIN64) || defined(MS_WINDOWS)
#           define PY_FORMAT_LONG_LONG "I64"
#       else
#           error "This platform's pyconfig.h needs to define PY_FORMAT_LONG_LONG"
#       endif
#   endif
#endif

/* Py_LOCAL can be used instead of static to get the fastest possible calling
 * convention for functions that are local to a given module.
 *
 * Py_LOCAL_INLINE does the same thing, and also explicitly requests inlining,
 * for platforms that support that.
 *
 * If PY_LOCAL_AGGRESSIVE is defined before python.h is included, more
 * "aggressive" inlining/optimizaion is enabled for the entire module.  This
 * may lead to code bloat, and may slow things down for those reasons.  It may
 * also lead to errors, if the code relies on pointer aliasing.  Use with
 * care.
 *
 * NOTE: You can only use this for functions that are entirely local to a
 * module; functions that are exported via method tables, callbacks, etc,
 * should keep using static.
 */

#undef USE_INLINE /* XXX - set via configure? */

#pragma warning(disable: 4710)
#define Py_LOCAL_INLINE(type) static __inline type __fastcall

#define Py_MEMCPY(target, source, length) do {                          \
        size_t i_, n_ = (length);                                       \
        char *t_ = (void*) (target);                                    \
        const char *s_ = (void*) (source);                              \
        if (n_ >= 16)                                                   \
            memcpy(t_, s_, n_);                                         \
        else                                                            \
            for (i_ = 0; i_ < n_; i_++)                                 \
                t_[i_] = s_[i_];                                        \
    } while (0)

#include <stdlib.h>
#include <math.h>
#include <time.h>

#ifndef DONT_HAVE_STAT
#define HAVE_STAT
#endif

#ifndef DONT_HAVE_FSTAT
#define HAVE_FSTAT
#endif

#include <sys/stat.h>

#ifndef S_ISREG
#	define S_ISREG(x) (((x) & S_IFMT) == S_IFREG)
#endif

#ifndef S_ISDIR
#	define S_ISDIR(x) (((x) & S_IFMT) == S_IFDIR)
#endif


#ifdef __cplusplus
extern "C" {
#endif

#define Py_ARITHMETIC_RIGHT_SHIFT(TYPE, I, J) ((I) >> (J))
#define Py_FORCE_EXPANSION(X) X
#define Py_SAFE_DOWNCAST(VALUE, WIDE, NARROW) (NARROW)(VALUE)
#define _Py_SET_EDOM_FOR_NAN(X) ;
#define Py_SET_ERRNO_ON_MATH_ERROR(X) \
    do { \
        if (errno == 0) { \
            if ((X) == Py_HUGE_VAL || (X) == -Py_HUGE_VAL) \
                errno = ERANGE; \
            else _Py_SET_EDOM_FOR_NAN(X) \
        } \
    } while(0)

#define Py_SET_ERANGE_IF_OVERFLOW(X) Py_SET_ERRNO_ON_MATH_ERROR(X)

#define Py_ADJUST_ERANGE1(X)                                            \
    do {                                                                \
        if (errno == 0) {                                               \
            if ((X) == Py_HUGE_VAL || (X) == -Py_HUGE_VAL)              \
                errno = ERANGE;                                         \
        }                                                               \
        else if (errno == ERANGE && (X) == 0.0)                         \
            errno = 0;                                                  \
    } while(0)

#define Py_ADJUST_ERANGE2(X, Y)                                         \
    do {                                                                \
        if ((X) == Py_HUGE_VAL || (X) == -Py_HUGE_VAL ||                \
            (Y) == Py_HUGE_VAL || (Y) == -Py_HUGE_VAL) {                \
                        if (errno == 0)                                 \
                                errno = ERANGE;                         \
        }                                                               \
        else if (errno == ERANGE)                                       \
            errno = 0;                                                  \
    } while(0)

/* default definitions are empty */
#ifndef HAVE_PY_SET_53BIT_PRECISION
#define _Py_SET_53BIT_PRECISION_HEADER
#define _Py_SET_53BIT_PRECISION_START
#define _Py_SET_53BIT_PRECISION_END
#endif

#ifdef __cplusplus
}
#endif

#define Py_GCC_ATTRIBUTE(x)
#define Py_FORMAT_PARSETUPLE(func,p1,p2)
#define Py_ALIGNED(x)

/*
 * Older Microsoft compilers don't support the C99 long long literal suffixes,
 * so these will be defined in PC/pyconfig.h for those compilers.
 */
#ifndef Py_LL
#define Py_LL(x) x##LL
#endif

#ifndef Py_ULL
#define Py_ULL(x) Py_LL(x##U)
#endif

#endif /* Py_PYPORT_H */
