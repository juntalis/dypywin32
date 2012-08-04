#ifndef __PYX_HAVE___browse
#define __PYX_HAVE___browse


#ifndef __PYX_HAVE_API___browse

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

__PYX_EXTERN_C DL_IMPORT(int) browseBuild(char *, char *, int __pyx_skip_dispatch);

#endif /* !__PYX_HAVE_API___browse */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC init_browse(void);
#else
PyMODINIT_FUNC PyInit__browse(void);
#endif

#endif /* !__PYX_HAVE___browse */
