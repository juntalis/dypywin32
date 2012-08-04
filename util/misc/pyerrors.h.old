#ifndef Py_ERRORS_H
#define Py_ERRORS_H

/* Error Stuff */
#define _PyErr_OCCURRED() (_PyThreadState_Current->curexc_type)
#define PyExceptionClass_Check(x)                                       \
	(PyClass_Check((x)) || (PyType_Check((x)) &&                        \
	  PyType_FastSubclass((PyTypeObject*)(x), Py_TPFLAGS_BASE_EXC_SUBCLASS)))
#define PyExceptionInstance_Check(x)                    \
	(PyInstance_Check((x)) ||                           \
	 PyType_FastSubclass((x)->ob_type, Py_TPFLAGS_BASE_EXC_SUBCLASS))
#define PyExceptionClass_Name(x)                                   \
	(PyClass_Check((x))                                            \
	 ? PyString_AS_STRING(((PyClassObject*)(x))->cl_name)          \
	 : (char *)(((PyTypeObject*)(x))->tp_name))
#define PyExceptionInstance_Class(x)                                    \
	((PyInstance_Check((x))                                             \
	  ? (PyObject*)((PyInstanceObject*)(x))->in_class                   \
	  : (PyObject*)((x)->ob_type)))
//#define PyErr_BadInternalCall() _PyErr_BadInternalCall(__FILE__, __LINE__)

#endif /* !Py_ERRORS_H */
