
#ifndef _DYNPYTHON_TYPES_H_
#define _DYNPYTHON_TYPES_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

# if defined (_WIN64)
	typedef __int64 ssize_t;
#elif defined (_WIN32)
	typedef int ssize_t;
#endif

typedef int pid_t;
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
typedef ssize_t Py_ssize_t;
typedef struct _object { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; } PyObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; } PyVarObject;
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef int (*coercion)(PyObject **, PyObject **);
typedef PyObject *(*intargfunc)(PyObject *, int) ;
typedef PyObject *(*intintargfunc)(PyObject *, int, int) ;
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*intobjargproc)(PyObject *, int, PyObject *);
typedef int(*intintobjargproc)(PyObject *, int, int, PyObject *);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);
typedef int (*getreadbufferproc)(PyObject *, int, void **);
typedef int (*getwritebufferproc)(PyObject *, int, void **);
typedef int (*getsegcountproc)(PyObject *, int *);
typedef int (*getcharbufferproc)(PyObject *, int, char **);
typedef Py_ssize_t (*readbufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*writebufferproc)(PyObject *, Py_ssize_t, void **);
typedef Py_ssize_t (*segcountproc)(PyObject *, Py_ssize_t *);
typedef Py_ssize_t (*charbufferproc)(PyObject *, Py_ssize_t, char **);
typedef struct bufferinfo { void *buf; PyObject *obj; Py_ssize_t len; Py_ssize_t itemsize; int readonly; int ndim; char *format; Py_ssize_t *shape; Py_ssize_t *strides; Py_ssize_t *suboffsets; Py_ssize_t smalltable[2]; void *internal; } Py_buffer;
typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);
typedef struct { binaryfunc nb_add; binaryfunc nb_subtract; binaryfunc nb_multiply; binaryfunc nb_divide; binaryfunc nb_remainder; binaryfunc nb_divmod; ternaryfunc nb_power; unaryfunc nb_negative; unaryfunc nb_positive; unaryfunc nb_absolute; inquiry nb_nonzero; unaryfunc nb_invert; binaryfunc nb_lshift; binaryfunc nb_rshift; binaryfunc nb_and; binaryfunc nb_xor; binaryfunc nb_or; coercion nb_coerce; unaryfunc nb_int; unaryfunc nb_long; unaryfunc nb_float; unaryfunc nb_oct; unaryfunc nb_hex; binaryfunc nb_inplace_add; binaryfunc nb_inplace_subtract; binaryfunc nb_inplace_multiply; binaryfunc nb_inplace_divide; binaryfunc nb_inplace_remainder; ternaryfunc nb_inplace_power; binaryfunc nb_inplace_lshift; binaryfunc nb_inplace_rshift; binaryfunc nb_inplace_and; binaryfunc nb_inplace_xor; binaryfunc nb_inplace_or; binaryfunc nb_floor_divide; binaryfunc nb_true_divide; binaryfunc nb_inplace_floor_divide; binaryfunc nb_inplace_true_divide; unaryfunc nb_index; } PyNumberMethods;
typedef struct { lenfunc sq_length; binaryfunc sq_concat; ssizeargfunc sq_repeat; ssizeargfunc sq_item; ssizessizeargfunc sq_slice; ssizeobjargproc sq_ass_item; ssizessizeobjargproc sq_ass_slice; objobjproc sq_contains; binaryfunc sq_inplace_concat; ssizeargfunc sq_inplace_repeat; } PySequenceMethods;
typedef struct { lenfunc mp_length; binaryfunc mp_subscript; objobjargproc mp_ass_subscript; } PyMappingMethods;
typedef struct { readbufferproc bf_getreadbuffer; writebufferproc bf_getwritebuffer; segcountproc bf_getsegcount; charbufferproc bf_getcharbuffer; getbufferproc bf_getbuffer; releasebufferproc bf_releasebuffer; } PyBufferProcs;
typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef int (*printfunc)(PyObject *, FILE *, int);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef int (*cmpfunc)(PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef long (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);
typedef struct _typeobject { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; const char *tp_name; Py_ssize_t tp_basicsize, tp_itemsize; destructor tp_dealloc; printfunc tp_print; getattrfunc tp_getattr; setattrfunc tp_setattr; cmpfunc tp_compare; reprfunc tp_repr; PyNumberMethods *tp_as_number; PySequenceMethods *tp_as_sequence; PyMappingMethods *tp_as_mapping; hashfunc tp_hash; ternaryfunc tp_call; reprfunc tp_str; getattrofunc tp_getattro; setattrofunc tp_setattro; PyBufferProcs *tp_as_buffer; long tp_flags; const char *tp_doc; traverseproc tp_traverse; inquiry tp_clear; richcmpfunc tp_richcompare; Py_ssize_t tp_weaklistoffset; getiterfunc tp_iter; iternextfunc tp_iternext; struct PyMethodDef *tp_methods; struct PyMemberDef *tp_members; struct PyGetSetDef *tp_getset; struct _typeobject *tp_base; PyObject *tp_dict; descrgetfunc tp_descr_get; descrsetfunc tp_descr_set; Py_ssize_t tp_dictoffset; initproc tp_init; allocfunc tp_alloc; newfunc tp_new; freefunc tp_free; inquiry tp_is_gc; PyObject *tp_bases; PyObject *tp_mro; PyObject *tp_cache; PyObject *tp_subclasses; PyObject *tp_weaklist; destructor tp_del; unsigned int tp_version_tag; } PyTypeObject;
typedef struct _heaptypeobject { PyTypeObject ht_type; PyNumberMethods as_number; PyMappingMethods as_mapping; PySequenceMethods as_sequence; PyBufferProcs as_buffer; PyObject *ht_name, *ht_slots; } PyHeapTypeObject;
typedef union _gc_head { struct { union _gc_head *gc_next; union _gc_head *gc_prev; Py_ssize_t gc_refs; } gc; long double dummy; } PyGC_Head;
typedef unsigned int Py_UCS4;
typedef wchar_t Py_UNICODE;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t length; Py_UNICODE *str; long hash; PyObject *defenc; } PyUnicodeObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; long ob_ival; } PyIntObject;
typedef PyIntObject PyBoolObject;
typedef struct _longobject PyLongObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; double ob_fval; } PyFloatObject;
typedef struct { double real; double imag; } Py_complex;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_complex cval; } PyComplexObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; long ob_shash; int ob_sstate; char ob_sval[1]; } PyStringObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *base; Py_buffer view; } PyMemoryViewObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; int ob_exports; Py_ssize_t ob_alloc; char *ob_bytes; } PyByteArrayObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; PyObject *ob_item[1]; } PyTupleObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; PyObject **ob_item; Py_ssize_t allocated; } PyListObject;
typedef struct { Py_ssize_t me_hash; PyObject *me_key; PyObject *me_value; } PyDictEntry;
typedef struct _dictobject PyDictObject;
struct _dictobject { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ma_fill; Py_ssize_t ma_used; Py_ssize_t ma_mask; PyDictEntry *ma_table; PyDictEntry *(*ma_lookup)(PyDictObject *mp, PyObject *key, long hash); PyDictEntry ma_smalltable[8]; };
typedef struct { long hash; PyObject *key; } setentry;
typedef struct _setobject PySetObject;
struct _setobject { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t fill; Py_ssize_t used; Py_ssize_t mask; setentry *table; setentry *(*lookup)(PySetObject *so, PyObject *key, long hash); setentry smalltable[8]; long hash; PyObject *weakreflist; };
typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);
struct PyMethodDef { const char	*ml_name; PyCFunction ml_meth; int		 ml_flags; const char	*ml_doc; };
typedef struct PyMethodDef PyMethodDef;
typedef struct PyMethodChain { PyMethodDef *methods; struct PyMethodChain *link; } PyMethodChain;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyMethodDef *m_ml; PyObject *m_self; PyObject *m_module; } PyCFunctionObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *func_code; PyObject *func_globals; PyObject *func_defaults; PyObject *func_closure; PyObject *func_doc; PyObject *func_name; PyObject *func_dict; PyObject *func_weakreflist; PyObject *func_module; } PyFunctionObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject	*cl_bases; PyObject	*cl_dict; PyObject	*cl_name; PyObject	*cl_getattr; PyObject	*cl_setattr; PyObject	*cl_delattr; PyObject *cl_weakreflist; } PyClassObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyClassObject *in_class; PyObject	 *in_dict; PyObject	 *in_weakreflist; } PyInstanceObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *im_func; PyObject *im_self; PyObject *im_class; PyObject *im_weakreflist; } PyMethodObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; FILE *f_fp; PyObject *f_name; PyObject *f_mode; int (*f_close)(FILE *); int f_softspace; int f_binary; char* f_buf; char* f_bufend; char* f_bufptr; char *f_setbuf; int f_univ_newline; int f_newlinetypes; int f_skipnextlf; PyObject *f_encoding; PyObject *f_errors; PyObject *weakreflist; int unlocked_count; int readable; int writable; } PyFileObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; void *cobject; void *desc; void (*destructor)(void *); } PyCObject;
typedef void (*PyCapsule_Destructor)(PyObject *);
struct _frame;
typedef struct _traceback { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; struct _traceback *tb_next; struct _frame *tb_frame; int tb_lasti; int tb_lineno; } PyTracebackObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *start, *stop, *step; } PySliceObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *ob_ref; } PyCellObject;
struct _frame;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; struct _frame *gi_frame; int gi_running; PyObject *gi_code; PyObject *gi_weakreflist; } PyGenObject;
typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);
typedef struct PyGetSetDef { char *name; getter get; setter set; char *doc; void *closure; } PyGetSetDef;
typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args, void *wrapped);
typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args, void *wrapped, PyObject *kwds);
struct wrapperbase { char *name; int offset; void *function; wrapperfunc wrapper; char *doc; int flags; PyObject *name_strobj; };
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name; } PyDescrObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name; PyMethodDef *d_method; } PyMethodDescrObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name; struct PyMemberDef *d_member; } PyMemberDescrObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name; PyGetSetDef *d_getset; } PyGetSetDescrObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyTypeObject *d_type; PyObject *d_name; struct wrapperbase *d_base; void *d_wrapped; } PyWrapperDescrObject;
typedef struct _PyWeakReference PyWeakReference;
struct _PyWeakReference { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *wr_object; PyObject *wr_callback; long hash; PyWeakReference *wr_prev; PyWeakReference *wr_next; };
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; } PyBaseExceptionObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; PyObject *msg; PyObject *filename; PyObject *lineno; PyObject *offset; PyObject *text; PyObject *print_file_and_line; } PySyntaxErrorObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; PyObject *encoding; PyObject *object; Py_ssize_t start; Py_ssize_t end; PyObject *reason; } PyUnicodeErrorObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; PyObject *code; } PySystemExitObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; PyObject *myerrno; PyObject *strerror; PyObject *filename; } PyEnvironmentErrorObject;
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; PyObject *dict; PyObject *args; PyObject *message; PyObject *myerrno; PyObject *strerror; PyObject *filename; PyObject *winerror; } PyWindowsErrorObject;
struct _ts;
struct _is;
typedef struct _is { struct _is *next; struct _ts *tstate_head; PyObject *modules; PyObject *sysdict; PyObject *builtins; PyObject *modules_reloading; PyObject *codec_search_path; PyObject *codec_search_cache; PyObject *codec_error_registry; } PyInterpreterState;
struct _frame;
typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
typedef struct _ts { struct _ts *next; PyInterpreterState *interp; struct _frame *frame; int recursion_depth; int tracing; int use_tracing; Py_tracefunc c_profilefunc; Py_tracefunc c_tracefunc; PyObject *c_profileobj; PyObject *c_traceobj; PyObject *curexc_type; PyObject *curexc_value; PyObject *curexc_traceback; PyObject *exc_type; PyObject *exc_value; PyObject *exc_traceback; PyObject *dict; int tick_counter; int gilstate_counter; PyObject *async_exc; long thread_id; } PyThreadState;
typedef enum {PyGILState_LOCKED, PyGILState_UNLOCKED} PyGILState_STATE;
typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);
typedef struct _arena PyArena;
typedef struct { int cf_flags; } PyCompilerFlags;
typedef void (*PyOS_sighandler_t)(int);
struct _frame;
struct _inittab { char *name; void (*initfunc)(void); };
struct _frozen { char *name; unsigned char *code; int size; };
typedef struct { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; int co_argcount; int co_nlocals; int co_stacksize; int co_flags; PyObject *co_code; PyObject *co_consts; PyObject *co_names; PyObject *co_varnames; PyObject *co_freevars; PyObject *co_cellvars; PyObject *co_filename; PyObject *co_name; int co_firstlineno; PyObject *co_lnotab; void *co_zombieframe; PyObject *co_weakreflist; } PyCodeObject;
typedef struct _addr_pair { int ap_lower; int ap_upper; } PyAddrPair;
struct _node;
typedef struct { int ff_features; int ff_lineno; } PyFutureFeatures;
struct _mod;
typedef char *bitset;
typedef struct { int b_type; int b_handler; int b_level; } PyTryBlock;
typedef struct _frame { Py_ssize_t ob_refcnt; struct _typeobject *ob_type; Py_ssize_t ob_size; struct _frame *f_back; PyCodeObject *f_code; PyObject *f_builtins; PyObject *f_globals; PyObject *f_locals; PyObject **f_valuestack; PyObject **f_stacktop; PyObject *f_trace; PyObject *f_exc_type, *f_exc_value, *f_exc_traceback; PyThreadState *f_tstate; int f_lasti; int f_lineno; int f_iblock; PyTryBlock f_blockstack[20]; PyObject *f_localsplus[1]; } PyFrameObject;
struct memberlist { char *name; int type; int offset; int flags; };
typedef struct PyMemberDef { char *name; int type; Py_ssize_t offset; int flags; char *doc; } PyMemberDef;

#ifdef __cplusplus
}
#endif

#endif /* _DYNPYTHON_TYPES_H_ */
