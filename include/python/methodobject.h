/* Method object interface */
#ifndef Py_METHODOBJECT_H
#define Py_METHODOBJECT_H
#ifdef __cplusplus
#endif
/* This is about the type 'builtin_function_or_method',
   not Python methods in user-defined classes.  See classobject.h
   for the latter. */
#define PyCFunction_Check(op) (Py_TYPE(op) == &PyCFunction_Type)
/* Macros for direct access to these values. Type checks are *not*
   done, so use with care. */
#define PyCFunction_GET_FUNCTION(func) \
        (((PyCFunctionObject *)func) -> m_ml -> ml_meth)
#define PyCFunction_GET_SELF(func) \
	(((PyCFunctionObject *)func) -> m_self)
#define PyCFunction_GET_FLAGS(func) \
	(((PyCFunctionObject *)func) -> m_ml -> ml_flags)
     		/* The name of the built-in function/method */
      	/* The C function that implements it */
    		 	/* Combination of METH_xxx flags, which mostly
				   describe the args expected by the C func */
     		/* The __doc__ attribute, or NULL */
#define PyCFunction_New(ML, SELF) PyCFunction_NewEx((ML), (SELF), NULL)
/* Flag passed to newmethodobject */
#define METH_OLDARGS  0x0000
#define METH_VARARGS  0x0001
#define METH_KEYWORDS 0x0002
/* METH_NOARGS and METH_O must not be combined with the flags above. */
#define METH_NOARGS   0x0004
#define METH_O        0x0008
/* METH_CLASS and METH_STATIC are a little different; these control
   the construction of methods for a class.  These cannot be used for
   functions in modules. */
#define METH_CLASS    0x0010
#define METH_STATIC   0x0020
/* METH_COEXIST allows a method to be entered eventhough a slot has
   already filled the entry.  When defined, the flag allows a separate
   method, "__contains__" for example, to coexist with a defined
   slot like sq_contains. */
#define METH_COEXIST   0x0040
     		/* Methods of this type */
      	/* NULL or base type */
      /* Description of the C function to call */
         /* Passed as 'self' arg to the C func, can be NULL */
         /* The __module__ attribute, can be anything */
#ifdef __cplusplus
#endif
#endif /* !Py_METHODOBJECT_H */