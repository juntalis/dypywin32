/* Function object interface */
#ifndef Py_FUNCOBJECT_H
#define Py_FUNCOBJECT_H
#ifdef __cplusplus
#endif
/* Function objects and code objects should not be confused with each other:
 *
 * Function objects are created by the execution of the 'def' statement.
 * They reference a code object in their func_code attribute, which is a
 * purely syntactic object, i.e. nothing more than a compiled version of some
 * source code lines.  There is one code object per source code "fragment",
 * but each code object can be referenced by zero or many function objects
 * depending only on how many times the 'def' statement in the source was
 * executed so far.
 */
     	/* A code object */
     	/* A dictionary (other mappings won't do) */
     	/* NULL or a tuple */
     	/* NULL or a tuple of cell objects */
     		/* The __doc__ attribute, can be anything */
     	/* The __name__ attribute, a string object */
     	/* The __dict__ attribute, a dict or NULL */
     	/* List of weak references */
     	/* The __module__ attribute, can be anything */
    /* Invariant:
     *     func_closure contains the bindings for func_code->co_freevars, so
     *     PyTuple_Size(func_closure) == PyCode_GetNumFree(func_code)
     *     (func_closure may be NULL if PyCode_GetNumFree(func_code) == 0).
     */
#define PyFunction_Check(op) (Py_TYPE(op) == &PyFunction_Type)
/* Macros for direct access to these values. Type checks are *not*
   done, so use with care. */
#define PyFunction_GET_CODE(func) \
        (((PyFunctionObject *)func) -> func_code)
#define PyFunction_GET_GLOBALS(func) \
	(((PyFunctionObject *)func) -> func_globals)
#define PyFunction_GET_MODULE(func) \
	(((PyFunctionObject *)func) -> func_module)
#define PyFunction_GET_DEFAULTS(func) \
	(((PyFunctionObject *)func) -> func_defaults)
#define PyFunction_GET_CLOSURE(func) \
	(((PyFunctionObject *)func) -> func_closure)
/* The classmethod and staticmethod types lives here, too */
#ifdef __cplusplus
#endif
#endif /* !Py_FUNCOBJECT_H */