/*
** pymactoolbox.h - globals defined in mactoolboxglue.c
*/
#ifndef Py_PYMACTOOLBOX_H
#define Py_PYMACTOOLBOX_H
#ifdef __cplusplus
#endif
#include <Carbon/Carbon.h>
#ifndef __LP64__
#include <QuickTime/QuickTime.h>
#endif /* !__LP64__ */
/*
** Helper routines for error codes and such.
*/
 			/* strerror with mac errors */
  		/* Exception for OSErr */
 	/* Initialize & return it */
   		/* Exception with a mac error */
 			/* Uses PyMac_GetOSErrException */
#ifndef __LP64__
       /* convert
							      fsspec->path */
#endif /* __LP64__ */
/*
** These conversion routines are defined in mactoolboxglue.c itself.
*/
    	/* argument parser for OSType */
 		/* Convert OSType to PyObject */
 /* Convert NumVersion to PyObject */
   	/* argument parser for Str255 */
 		/* Convert Str255 to PyObject */
 		/* Convert Str255 to PyObject,
						   NULL to None */
    		/* argument parser for Rect */
  		/* Convert Rect to PyObject */
    	/* argument parser for Point */
 		/* Convert Point to PyObject */
     /* argument parser for
							EventRecord */
   /* Convert EventRecord to
						    PyObject */
    	/* argument parser for Fixed */
 		/* Convert Fixed to PyObject */
    		/* argument parser for wide */
  		/* Convert wide to PyObject */
/*
** The rest of the routines are implemented by extension modules. If they are
** dynamically loaded mactoolboxglue will contain a stub implementation of the
** routine, which imports the module, whereupon the module's init routine will
** communicate the routine pointer back to the stub.
** If USE_TOOLBOX_OBJECT_GLUE is not defined there is no glue code, and the
** extension modules simply declare the routine. This is the case for static
** builds (and could be the case for MacPython CFM builds, because CFM extension
** modules can reference each other without problems).
*/
#ifdef USE_TOOLBOX_OBJECT_GLUE
/*
** These macros are used in the module init code. If we use toolbox object glue
** it sets the function pointer to point to the real function.
*/
#define PyMac_INIT_TOOLBOX_OBJECT_NEW(object, rtn) { \
	extern PyObject *(*PyMacGluePtr_##rtn)(object); \
	PyMacGluePtr_##rtn = _##rtn; \
}
#define PyMac_INIT_TOOLBOX_OBJECT_CONVERT(object, rtn) { \
	extern int (*PyMacGluePtr_##rtn)(PyObject *, object *); \
	PyMacGluePtr_##rtn = _##rtn; \
}
#else
/*
** If we don't use toolbox object glue the init macros are empty. Moreover, we define
** _xxx_New to be the same as xxx_New, and the code in mactoolboxglue isn't included.
*/
#define PyMac_INIT_TOOLBOX_OBJECT_NEW(object, rtn)
#define PyMac_INIT_TOOLBOX_OBJECT_CONVERT(object, rtn)
#endif /* USE_TOOLBOX_OBJECT_GLUE */
/* macfs exports */
#ifndef __LP64__
    	/* argument parser for FSSpec */
  		/* Convert FSSpec to PyObject */
#endif /* !__LP64__ */
    	/* argument parser for FSRef */
  		/* Convert FSRef to PyObject */
/* AE exports */
    /* XXXX Why passed by address?? */
/* Cm exports */
/* Ctl exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Dlg exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Drag exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* List exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Menu exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Qd exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Qdoffs exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Qt exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Res exports */
/* TE exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* Win exports */
#ifndef __LP64__
#endif /* !__LP64__ */
/* CF exports */
#ifdef __cplusplus
#endif
#endif