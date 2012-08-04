/* String (str/bytes) object interface */
#ifndef Py_STRINGOBJECT_H
#define Py_STRINGOBJECT_H
#ifdef __cplusplus
#endif
#include <stdarg.h>
/*
Type PyStringObject represents a character string.  An extra zero byte is
reserved at the end to ensure it is zero-terminated, but a size is
present so strings with null bytes in them can be represented.  This
is an immutable object type.
There are functions to create new string objects, to test
an object for string-ness, and to get the
string value.  The latter function returns a null pointer
if the object is not of the proper type.
There is a variant that takes an explicit size as well as a
variant that assumes a zero-terminated string.  Note that none of the
functions should be applied to nil objects.
*/
/* Caching the hash (ob_shash) saves recalculation of a string's hash value.
   Interning strings (ob_sstate) tries to ensure that only one string
   object with a given value exists, so equality tests can be one pointer
   comparison.  This is generally restricted to strings that "look like"
   Python identifiers, although the intern() builtin can be used to force
   interning of any string.
   Together, these sped the interpreter by up to 20%. */
    /* Invariants:
     *     ob_sval contains space for 'ob_size+1' elements.
     *     ob_sval[ob_size] == 0.
     *     ob_shash is the hash of the string or -1 if not computed yet.
     *     ob_sstate != 0 iff the string object is in stringobject.c's
     *       'interned' dictionary; in this case the two references
     *       from 'interned' to this object are *not counted* in ob_refcnt.
     */
#define SSTATE_NOT_INTERNED 0
#define SSTATE_INTERNED_MORTAL 1
#define SSTATE_INTERNED_IMMORTAL 2
#define PyString_Check(op) \
                 PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_STRING_SUBCLASS)
#define PyString_CheckExact(op) (Py_TYPE(op) == &PyString_Type)
/* Use only if you know it's a string */
#define PyString_CHECK_INTERNED(op) (((PyStringObject *)(op))->ob_sstate)
/* Macro, trading safety for speed */
#define PyString_AS_STRING(op) (((PyStringObject *)(op))->ob_sval)
#define PyString_GET_SIZE(op)  Py_SIZE(op)
/* _PyString_Join(sep, x) is like sep.join(x).  sep must be PyStringObject*,
   x must be an iterable object. */
/* --- Generic Codecs ----------------------------------------------------- */
/* Create an object by decoding the encoded string s of the
   given size. */
                    /* encoded string */
                 /* size of buffer */
             /* encoding */
                /* error handling */
/* Encodes a char buffer of the given size and returns a
   Python object. */
                    /* string char buffer */
                 /* number of chars to encode */
             /* encoding */
                /* error handling */
/* Encodes a string object and returns the result as Python
   object. */
     	 	/* string object */
      	/* encoding */
      		/* error handling */
/* Encodes a string object and returns the result as Python string
   object.
   If the codec returns an Unicode object, the object is converted
   back to a string using the default encoding.
   DEPRECATED - use PyString_AsEncodedObject() instead. */
     	 	/* string object */
      	/* encoding */
      		/* error handling */
/* Decodes a string object and returns the result as Python
   object. */
     	 	/* string object */
      	/* encoding */
      		/* error handling */
/* Decodes a string object and returns the result as Python string
   object.
   If the codec returns an Unicode object, the object is converted
   back to a string using the default encoding.
   DEPRECATED - use PyString_AsDecodedObject() instead. */
     	 	/* string object */
      	/* encoding */
      		/* error handling */
/* Provides access to the internal data buffer and size of a string
   object or the default encoded version of an Unicode object. Passing
   NULL as *len parameter will force the string buffer to be
   0-terminated (passing a string with embedded NULL characters will
   cause an exception).  */
      	/* string or Unicode object */
      		/* pointer to buffer variable */
      	/* pointer to length variable or NULL
				   (only possible for 0-terminated
				   strings) */
/* Using the current locale, insert the thousands grouping
   into the string pointed to by buffer.  For the argument descriptions,
   see Objects/stringlib/localeutil.h */
/* Using explicit passed-in values, insert the thousands grouping
   into the string pointed to by buffer.  For the argument descriptions,
   see Objects/stringlib/localeutil.h */
/* Format the object based on the format_spec, as defined in PEP 3101
   (Advanced String Formatting). */
#ifdef __cplusplus
#endif
#endif /* !Py_STRINGOBJECT_H */