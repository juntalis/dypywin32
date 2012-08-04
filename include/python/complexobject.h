/* Complex number structure */
#ifndef Py_COMPLEXOBJECT_H
#define Py_COMPLEXOBJECT_H
#ifdef __cplusplus
#endif
/* Operations on complex numbers from complexmodule.c */
#define c_sum _Py_c_sum
#define c_diff _Py_c_diff
#define c_neg _Py_c_neg
#define c_prod _Py_c_prod
#define c_quot _Py_c_quot
#define c_pow _Py_c_pow
#define c_abs _Py_c_abs
/* Complex object interface */
/*
PyComplexObject represents a complex number with double-precision
real and imaginary parts.
*/
#define PyComplex_Check(op) PyObject_TypeCheck(op, &PyComplex_Type)
#define PyComplex_CheckExact(op) (Py_TYPE(op) == &PyComplex_Type)
/* Format the object based on the format_spec, as defined in PEP 3101
   (Advanced String Formatting). */
#ifdef __cplusplus
#endif
#endif /* !Py_COMPLEXOBJECT_H */