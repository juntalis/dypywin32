/* Stuff to export relevant 'expat' entry points from pyexpat to other
 * parser modules, such as cElementTree. */
/* note: you must import expat.h before importing this module! */
#define PyExpat_CAPI_MAGIC  "pyexpat.expat_CAPI 1.0"
#define PyExpat_CAPSULE_NAME "pyexpat.expat_CAPI"
      /* set to PyExpat_CAPI_MAGIC */
      /* set to sizeof(struct PyExpat_CAPI) */
    /* pointers to selected expat functions.  add new functions at
       the end, if needed */
    /* always add new stuff to the end! */