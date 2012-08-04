/* Float object interface */
/*
PyFloatObject represents a (double precision) floating point number.
*/
#ifndef Py_FLOATOBJECT_H
#define Py_FLOATOBJECT_H
#ifdef __cplusplus
#endif
#define PyFloat_Check(op) PyObject_TypeCheck(op, &PyFloat_Type)
#define PyFloat_CheckExact(op) (Py_TYPE(op) == &PyFloat_Type)
/* The str() precision PyFloat_STR_PRECISION is chosen so that in most cases,
   the rounding noise created by various operations is suppressed, while
   giving plenty of precision for practical use. */
#define PyFloat_STR_PRECISION 12
#ifdef Py_NAN
#define Py_RETURN_NAN return PyFloat_FromDouble(Py_NAN)
#endif
#define Py_RETURN_INF(sign) do					\
	if (copysign(1., sign) == 1.) {				\
		return PyFloat_FromDouble(Py_HUGE_VAL);	\
	} else {						\
		return PyFloat_FromDouble(-Py_HUGE_VAL);	\
	} while(0)
/* Return Python float from string PyObject.  Second argument ignored on
   input, and, if non-NULL, NULL is stored into *junk (this tried to serve a
   purpose once but can't be made to work as intended). */
/* Return Python float from C double. */
/* Extract C double from Python float.  The macro version trades safety for
   speed. */
#define PyFloat_AS_DOUBLE(op) (((PyFloatObject *)(op))->ob_fval)
/* Write repr(v) into the char buffer argument, followed by null byte.  The
   buffer must be "big enough"; >= 100 is very safe.
   PyFloat_AsReprString(buf, x) strives to print enough digits so that
   PyFloat_FromString(buf) then reproduces x exactly. */
/* Write str(v) into the char buffer argument, followed by null byte.  The
   buffer must be "big enough"; >= 100 is very safe.  Note that it's
   unusual to be able to get back the float you started with from
   PyFloat_AsString's result -- use PyFloat_AsReprString() if you want to
   preserve precision across conversions. */
/* _PyFloat_{Pack,Unpack}{4,8}
 *
 * The struct and pickle (at least) modules need an efficient platform-
 * independent way to store floating-point values as byte strings.
 * The Pack routines produce a string from a C double, and the Unpack
 * routines produce a C double from such a string.  The suffix (4 or 8)
 * specifies the number of bytes in the string.
 *
 * On platforms that appear to use (see _PyFloat_Init()) IEEE-754 formats
 * these functions work by copying bits.  On other platforms, the formats the
 * 4- byte format is identical to the IEEE-754 single precision format, and
 * the 8-byte format to the IEEE-754 double precision format, although the
 * packing of INFs and NaNs (if such things exist on the platform) isn't
 * handled correctly, and attempting to unpack a string containing an IEEE
 * INF or NaN will raise an exception.
 *
 * On non-IEEE platforms with more precision, or larger dynamic range, than
 * 754 supports, not all values can be packed; on non-IEEE platforms with less
 * precision, or smaller dynamic range, not all values can be unpacked.  What
 * happens in such cases is partly accidental (alas).
 */
/* The pack routines write 4 or 8 bytes, starting at p.  le is a bool
 * argument, true if you want the string in little-endian format (exponent
 * last, at p+3 or p+7), false if you want big-endian format (exponent
 * first, at p).
 * Return value:  0 if all is OK, -1 if error (and an exception is
 * set, most likely OverflowError).
 * There are two problems on non-IEEE platforms:
 * 1):  What this does is undefined if x is a NaN or infinity.
 * 2):  -0.0 and +0.0 produce the same string.
 */
/* Used to get the important decimal digits of a double */
/* The unpack routines read 4 or 8 bytes, starting at p.  le is a bool
 * argument, true if the string is in little-endian format (exponent
 * last, at p+3 or p+7), false if big-endian (exponent first, at p).
 * Return value:  The unpacked double.  On error, this is -1.0 and
 * PyErr_Occurred() is true (and an exception is set, most likely
 * OverflowError).  Note that on a non-IEEE platform this will refuse
 * to unpack a string that represents a NaN or infinity.
 */
/* free list api */
/* Format the object based on the format_spec, as defined in PEP 3101
   (Advanced String Formatting). */
/* Round a C double x to the closest multiple of 10**-ndigits.  Returns a
   Python float on success, or NULL (with an appropriate exception set) on
   failure.  Used in builtin_round in bltinmodule.c. */
#ifdef __cplusplus
#endif
#endif /* !Py_FLOATOBJECT_H */