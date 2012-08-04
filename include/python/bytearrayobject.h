/* ByteArray object interface */
#ifndef Py_BYTEARRAYOBJECT_H
#define Py_BYTEARRAYOBJECT_H
#ifdef __cplusplus
#endif
#include <stdarg.h>
/* Type PyByteArrayObject represents a mutable array of bytes.
 * The Python API is that of a sequence;
 * the bytes are mapped to ints in [0, 256).
 * Bytes are not characters; they may be used to encode characters.
 * The only way to go between bytes and str/unicode is via encoding
 * and decoding.
 * For the convenience of C programmers, the bytes type is considered
 * to contain a char pointer, not an unsigned char pointer.
 */
/* Object layout */
    /* XXX(nnorwitz): should ob_exports be Py_ssize_t? */
      /* how many buffer exports */
      /* How many bytes allocated */
/* Type object */
/* Type check macros */
#define PyByteArray_Check(self) PyObject_TypeCheck(self, &PyByteArray_Type)
#define PyByteArray_CheckExact(self) (Py_TYPE(self) == &PyByteArray_Type)
/* Direct API functions */
/* Macros, trading safety for speed */
#define PyByteArray_AS_STRING(self) \
    (assert(PyByteArray_Check(self)), \
     Py_SIZE(self) ? ((PyByteArrayObject *)(self))->ob_bytes : _PyByteArray_empty_string)
#define PyByteArray_GET_SIZE(self)  (assert(PyByteArray_Check(self)),Py_SIZE(self))
#ifdef __cplusplus
#endif
#endif /* !Py_BYTEARRAYOBJECT_H */