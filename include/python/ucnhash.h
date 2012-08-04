/* Unicode name database interface */
#ifndef Py_UCNHASH_H
#define Py_UCNHASH_H
#ifdef __cplusplus
#endif
/* revised ucnhash CAPI interface (exported through a "wrapper") */
#define PyUnicodeData_CAPSULE_NAME "unicodedata.ucnhash_CAPI"
    /* Size of this struct */
    /* Get name for a given character code.  Returns non-zero if
       success, zero if not.  Does not set Python exceptions.
       If self is NULL, data come from the default version of the database.
       If it is not NULL, it should be a unicodedata.ucd_X_Y_Z object */
    /* Get character code for a given name.  Same error handling
       as for getname. */
#ifdef __cplusplus
#endif
#endif /* !Py_UCNHASH_H */