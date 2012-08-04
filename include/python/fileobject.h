/* File object interface */
#ifndef Py_FILEOBJECT_H
#define Py_FILEOBJECT_H
#ifdef __cplusplus
#endif
                 /* Flag used by 'print' command */
                    /* Flag which indicates whether the file is
                               open in binary (1) or text (0) mode */
                     /* Allocated readahead buffer */
                  /* Points after last occupied position */
                  /* Current buffer position */
                  /* Buffer for setbuf(3) and setvbuf(3) */
              /* Handle any newline convention */
              /* Types of newlines seen */
                /* Skip next \n */
      /* List of weak references */
              /* Num. currently running sections of code
                               using f_fp with the GIL released. */
#define PyFile_Check(op) PyObject_TypeCheck(op, &PyFile_Type)
#define PyFile_CheckExact(op) (Py_TYPE(op) == &PyFile_Type)
/* The default encoding used by the platform file system APIs
   If non-NULL, this is different than the default encoding for strings
*/
/* Routines to replace fread() and fgets() which accept any of \r, \n
   or \r\n as line terminators.
*/
#define PY_STDIOTEXTMODE "b"
/* A routine to do sanity checking on the file mode string.  returns
   non-zero on if an exception occurred
*/
#if defined _MSC_VER && _MSC_VER >= 1400
/* A routine to check if a file descriptor is valid on Windows.  Returns 0
 * and sets errno to EBADF if it isn't.  This is to avoid Assertions
 * from various functions in the Windows CRT beginning with
 * Visual Studio 2005
 */
#elif defined _MSC_VER && _MSC_VER >= 1200
/* fdopen doesn't set errno EBADF and crashes for large fd on debug build */
#define _PyVerify_fd(fd) (_get_osfhandle(fd) >= 0)
#else
#define _PyVerify_fd(A) (1) /* dummy */
#endif
#ifdef __cplusplus
#endif
#endif /* !Py_FILEOBJECT_H */