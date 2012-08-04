#ifndef _PYDYNLOAD_H_
#define _PYDYNLOAD_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifdef PROTOPY
#	include "dynload_macros.h"
#else
#	define DynLoad_Args(x) x
#	define DynLoad_ExternDecl(x) 
#endif

#if defined (_WIN64)
	typedef __int64 ssize_t;
#elif defined (_WIN32)
	typedef int ssize_t;
#endif

#define HAVE_SSIZE_T 1

typedef int pid_t;

typedef unsigned int Py_uintptr_t;

typedef int Py_intptr_t;

typedef ssize_t Py_ssize_t;

DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyMem_Malloc) DynLoad_Args((size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyMem_Realloc) DynLoad_Args((void *, size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyMem_Free) DynLoad_Args((void *)) );

typedef struct _object {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
} PyObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
} PyVarObject;

typedef PyObject *(*unaryfunc)(PyObject *);

typedef PyObject *(*binaryfunc)(PyObject *, PyObject *);

typedef PyObject *(*ternaryfunc)(PyObject *, PyObject *, PyObject *);

typedef int (*inquiry)(PyObject *);

typedef Py_ssize_t (*lenfunc)(PyObject *);

typedef int (*coercion)(PyObject **, PyObject **);

typedef PyObject *(*intargfunc)(PyObject *, int) ;

typedef PyObject *(*intintargfunc)(PyObject *, int, int) ;

typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);

typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);

typedef int (*intobjargproc)(PyObject *, int, PyObject *);

typedef int (*intintobjargproc)(PyObject *, int, int, PyObject *);

typedef int (*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);

typedef int (*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);

typedef int (*objobjargproc)(PyObject *, PyObject *, PyObject *);

typedef int (*getreadbufferproc)(PyObject *, int, void**);

typedef int (*getwritebufferproc)(PyObject *, int, void**);

typedef int (*getsegcountproc)(PyObject *, int *);

typedef int (*getcharbufferproc)(PyObject *, int, char **);

typedef Py_ssize_t (*readbufferproc)(PyObject *, Py_ssize_t, void**);

typedef Py_ssize_t (*writebufferproc)(PyObject *, Py_ssize_t, void**);

typedef Py_ssize_t (*segcountproc)(PyObject *, Py_ssize_t *);

typedef Py_ssize_t (*charbufferproc)(PyObject *, Py_ssize_t, char **);

typedef struct bufferinfo {
 void *buf;
 PyObject *obj;
 Py_ssize_t len;
 Py_ssize_t itemsize;
 int readonly;
 int ndim;
 char *format;
 Py_ssize_t *shape;
 Py_ssize_t *strides;
 Py_ssize_t *suboffsets;
 Py_ssize_t smalltable[2];
 void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);

typedef void (*releasebufferproc)(PyObject *, Py_buffer *);

typedef int (*objobjproc)(PyObject *, PyObject *);

typedef int (*visitproc)(PyObject *, void*);

typedef int (*traverseproc)(PyObject *, visitproc, void*);

typedef struct {
 binaryfunc nb_add;
 binaryfunc nb_subtract;
 binaryfunc nb_multiply;
 binaryfunc nb_divide;
 binaryfunc nb_remainder;
 binaryfunc nb_divmod;
 ternaryfunc nb_power;
 unaryfunc nb_negative;
 unaryfunc nb_positive;
 unaryfunc nb_absolute;
 inquiry nb_nonzero;
 unaryfunc nb_invert;
 binaryfunc nb_lshift;
 binaryfunc nb_rshift;
 binaryfunc nb_and;
 binaryfunc nb_xor;
 binaryfunc nb_or;
 coercion nb_coerce;
 unaryfunc nb_int;
 unaryfunc nb_long;
 unaryfunc nb_float;
 unaryfunc nb_oct;
 unaryfunc nb_hex;
 binaryfunc nb_inplace_add;
 binaryfunc nb_inplace_subtract;
 binaryfunc nb_inplace_multiply;
 binaryfunc nb_inplace_divide;
 binaryfunc nb_inplace_remainder;
 ternaryfunc nb_inplace_power;
 binaryfunc nb_inplace_lshift;
 binaryfunc nb_inplace_rshift;
 binaryfunc nb_inplace_and;
 binaryfunc nb_inplace_xor;
 binaryfunc nb_inplace_or;
 binaryfunc nb_floor_divide;
 binaryfunc nb_true_divide;
 binaryfunc nb_inplace_floor_divide;
 binaryfunc nb_inplace_true_divide;
 unaryfunc nb_index;
} PyNumberMethods;

typedef struct {
 lenfunc sq_length;
 binaryfunc sq_concat;
 ssizeargfunc sq_repeat;
 ssizeargfunc sq_item;
 ssizessizeargfunc sq_slice;
 ssizeobjargproc sq_ass_item;
 ssizessizeobjargproc sq_ass_slice;
 objobjproc sq_contains;
 binaryfunc sq_inplace_concat;
 ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
 lenfunc mp_length;
 binaryfunc mp_subscript;
 objobjargproc mp_ass_subscript;
} PyMappingMethods;

typedef struct {
 readbufferproc bf_getreadbuffer;
 writebufferproc bf_getwritebuffer;
 segcountproc bf_getsegcount;
 charbufferproc bf_getcharbuffer;
 getbufferproc bf_getbuffer;
 releasebufferproc bf_releasebuffer;
} PyBufferProcs;

typedef void (*freefunc)(void*);

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

typedef struct _typeobject {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 const char *tp_name;
 Py_ssize_t tp_basicsize, tp_itemsize;
 destructor tp_dealloc;
 printfunc tp_print;
 getattrfunc tp_getattr;
 setattrfunc tp_setattr;
 cmpfunc tp_compare;
 reprfunc tp_repr;
 PyNumberMethods *tp_as_number;
 PySequenceMethods *tp_as_sequence;
 PyMappingMethods *tp_as_mapping;
 hashfunc tp_hash;
 ternaryfunc tp_call;
 reprfunc tp_str;
 getattrofunc tp_getattro;
 setattrofunc tp_setattro;
 PyBufferProcs *tp_as_buffer;
 long tp_flags;
 const char *tp_doc;
 traverseproc tp_traverse;
 inquiry tp_clear;
 richcmpfunc tp_richcompare;
 Py_ssize_t tp_weaklistoffset;
 getiterfunc tp_iter;
 iternextfunc tp_iternext;
 struct PyMethodDef *tp_methods;
 struct PyMemberDef *tp_members;
 struct PyGetSetDef *tp_getset;
 struct _typeobject *tp_base;
 PyObject *tp_dict;
 descrgetfunc tp_descr_get;
 descrsetfunc tp_descr_set;
 Py_ssize_t tp_dictoffset;
 initproc tp_init;
 allocfunc tp_alloc;
 newfunc tp_new;
 freefunc tp_free;
 inquiry tp_is_gc;
 PyObject *tp_bases;
 PyObject *tp_mro;
 PyObject *tp_cache;
 PyObject *tp_subclasses;
 PyObject *tp_weaklist;
 destructor tp_del;
 unsigned int tp_version_tag;
} PyTypeObject;

typedef struct _heaptypeobject {
 PyTypeObject ht_type;
 PyNumberMethods as_number;
 PyMappingMethods as_mapping;
 PySequenceMethods as_sequence;
 PyBufferProcs as_buffer;
 PyObject *ht_name, *ht_slots;
} PyHeapTypeObject;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyType_IsSubtype) DynLoad_Args((PyTypeObject *, PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyType_Ready) DynLoad_Args((PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyType_GenericAlloc) DynLoad_Args((PyTypeObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyType_GenericNew) DynLoad_Args((PyTypeObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyType_Lookup) DynLoad_Args((PyTypeObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_LookupSpecial) DynLoad_Args((PyObject *, char *, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned int) DynLoad_Function(PyType_ClearCache) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyType_Modified) DynLoad_Args((PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_Print) DynLoad_Args((PyObject *, FILE *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyObject_Dump) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Repr) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_Str) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Str) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Unicode) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_Compare) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_RichCompare) DynLoad_Args((PyObject *, PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_RichCompareBool) DynLoad_Args((PyObject *, PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_GetAttrString) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_SetAttrString) DynLoad_Args((PyObject *, const char *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_HasAttrString) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_GetAttr) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_SetAttr) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_HasAttr) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject**) DynLoad_Function(_PyObject_GetDictPtr) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_SelfIter) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_NextNotImplemented) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_GenericGetAttr) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_GenericSetAttr) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyObject_Hash) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyObject_HashNotImplemented) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_IsTrue) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_Not) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCallable_Check) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyNumber_Coerce) DynLoad_Args((PyObject **, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyNumber_CoerceEx) DynLoad_Args((PyObject **, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyObject_ClearWeakRefs) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyObject_SlotCompare) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_GenericGetAttrWithDict) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyObject_GenericSetAttrWithDict) DynLoad_Args((PyObject *, PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Dir) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_ReprEnter) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_ReprLeave) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(_Py_HashDouble) DynLoad_Args((double)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(_Py_HashPointer) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_IncRef) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_DecRef) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyTrash_deposit_object) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyTrash_destroy_chain) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyObject_Malloc) DynLoad_Args((size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyObject_Realloc) DynLoad_Args((void *, size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyObject_Free) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Init) DynLoad_Args((PyObject *, PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyVarObject*) DynLoad_Function(PyObject_InitVar) DynLoad_Args((PyVarObject *, PyTypeObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_New) DynLoad_Args((PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyVarObject*) DynLoad_Function(_PyObject_NewVar) DynLoad_Args((PyTypeObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyGC_Collect) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyVarObject*) DynLoad_Function(_PyObject_GC_Resize) DynLoad_Args((PyVarObject *, Py_ssize_t)) );

typedef union _gc_head {
 struct {
  union _gc_head *gc_next;
  union _gc_head *gc_prev;
  Py_ssize_t gc_refs;
 } gc;
 long double dummy;
} PyGC_Head;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_GC_Malloc) DynLoad_Args((size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_GC_New) DynLoad_Args((PyTypeObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyVarObject*) DynLoad_Function(_PyObject_GC_NewVar) DynLoad_Args((PyTypeObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyObject_GC_Track) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyObject_GC_UnTrack) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyObject_GC_Del) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_FatalError) DynLoad_Args((const char *message)) );

typedef unsigned int Py_UCS4;

typedef wchar_t Py_UNICODE;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t length;
 Py_UNICODE *str;
 long hash;
 PyObject *defenc;
} PyUnicodeObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromUnicode) DynLoad_Args((const Py_UNICODE *u, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromStringAndSize) DynLoad_Args((const char *u, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromString) DynLoad_Args((const char *u)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_UNICODE*) DynLoad_Function(PyUnicodeUCS2_AsUnicode) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyUnicodeUCS2_GetSize) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_UNICODEPyUnicodeUCS2_GetMax) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_Resize) DynLoad_Args((PyObject **unicode, Py_ssize_t length)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromEncodedObject) DynLoad_Args((register PyObject *obj, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromObject) DynLoad_Args((register PyObject *obj)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromFormatV) DynLoad_Args((const char *, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromFormat) DynLoad_Args((const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyUnicode_FormatAdvanced) DynLoad_Args((PyObject *obj, Py_UNICODE *format_spec, Py_ssize_t format_spec_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromWideChar) DynLoad_Args((register const wchar_t *w, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyUnicodeUCS2_AsWideChar) DynLoad_Args((PyUnicodeObject *unicode, register wchar_t *w, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_FromOrdinal) DynLoad_Args((int ordinal)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_ClearFreelist) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyUnicodeUCS2_AsDefaultEncodedString) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(PyUnicodeUCS2_GetDefaultEncoding) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_SetDefaultEncoding) DynLoad_Args((const char *encoding)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Decode) DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Encode) DynLoad_Args((const Py_UNICODE *s, Py_ssize_t size, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsEncodedObject) DynLoad_Args((PyObject *unicode, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsEncodedString) DynLoad_Args((PyObject *unicode, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_BuildEncodingMap) DynLoad_Args((PyObject *string)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_DecodeUTF7) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_DecodeUTF7Stateful) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_EncodeUTF7) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, int base64SetO, int base64WhiteSpace, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF8) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF8Stateful) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsUTF8String) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeUTF8) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF32) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF32Stateful) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsUTF32String) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeUTF32) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF16) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUTF16Stateful) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsUTF16String) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeUTF16) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeUnicodeEscape) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsUnicodeEscapeString) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeUnicodeEscape) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeRawUnicodeEscape) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsRawUnicodeEscapeString) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeRawUnicodeEscape) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyUnicode_DecodeUnicodeInternal) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeLatin1) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsLatin1String) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeLatin1) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeASCII) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsASCIIString) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeASCII) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_DecodeCharmap) DynLoad_Args((const char *string, Py_ssize_t length, PyObject *mapping, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_AsCharmapString) DynLoad_Args((PyObject *unicode, PyObject *mapping)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_EncodeCharmap) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, PyObject *mapping, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_TranslateCharmap) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, PyObject *table, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_DecodeMBCS) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_DecodeMBCSStateful) DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_AsMBCSString) DynLoad_Args((PyObject *unicode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicode_EncodeMBCS) DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_EncodeDecimal) DynLoad_Args((Py_UNICODE *s, Py_ssize_t length, char *output, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Concat) DynLoad_Args((PyObject *left, PyObject *right)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Split) DynLoad_Args((PyObject *s, PyObject *sep, Py_ssize_t maxsplit)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Splitlines) DynLoad_Args((PyObject *s, int keepends)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Partition) DynLoad_Args((PyObject *s, PyObject *sep)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_RPartition) DynLoad_Args((PyObject *s, PyObject *sep)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_RSplit) DynLoad_Args((PyObject *s, PyObject *sep, Py_ssize_t maxsplit)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Translate) DynLoad_Args((PyObject *str, PyObject *table, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Join) DynLoad_Args((PyObject *separator, PyObject *seq)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyUnicodeUCS2_Tailmatch) DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyUnicodeUCS2_Find) DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyUnicodeUCS2_Count) DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Replace) DynLoad_Args((PyObject *str, PyObject *substr, PyObject *replstr, Py_ssize_t maxcount)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_Compare) DynLoad_Args((PyObject *left, PyObject *right)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_RichCompare) DynLoad_Args((PyObject *left, PyObject *right, int op)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeUCS2_Format) DynLoad_Args((PyObject *format, PyObject *args)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeUCS2_Contains) DynLoad_Args((PyObject *container, PyObject *element)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyUnicode_XStrip) DynLoad_Args((PyUnicodeObject *self, int striptype, PyObject *sepobj)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsLowercase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsUppercase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsTitlecase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsWhitespace) DynLoad_Args((const Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsLinebreak) DynLoad_Args((const Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_UNICODE_PyUnicodeUCS2_ToLowercase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_UNICODE_PyUnicodeUCS2_ToUppercase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_UNICODE_PyUnicodeUCS2_ToTitlecase) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_ToDecimalDigit) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_ToDigit) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_PyUnicodeUCS2_ToNumeric) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsDecimalDigit) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsDigit) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsNumeric) DynLoad_Args((Py_UNICODE ch)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyUnicodeUCS2_IsAlpha) DynLoad_Args((Py_UNICODE ch)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 long ob_ival;
} PyIntObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInt_FromString) DynLoad_Args((char *, char **, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInt_FromUnicode) DynLoad_Args((Py_UNICODE *, Py_ssize_t, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInt_FromLong) DynLoad_Args((long)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInt_FromSize_t) DynLoad_Args((size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInt_FromSsize_t) DynLoad_Args((Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyInt_AsLong) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyInt_AsSsize_t) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned long) DynLoad_Function(PyInt_AsUnsignedLongMask) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned __int64) DynLoad_Function(PyInt_AsUnsignedLongLongMask) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyInt_GetMax) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned long) DynLoad_Function(PyOS_strtoul) DynLoad_Args((char *, char **, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyOS_strtol) DynLoad_Args((char *, char **, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyInt_ClearFreeList) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyInt_Format) DynLoad_Args((PyIntObject *v, int base, int newstyle)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyInt_FormatAdvanced) DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len)) );

typedef PyIntObject PyBoolObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBool_FromLong) DynLoad_Args((long)) );

typedef struct _longobject PyLongObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromLong) DynLoad_Args((long)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromUnsignedLong) DynLoad_Args((unsigned long)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromDouble) DynLoad_Args((double)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromSize_t) DynLoad_Args((size_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromSsize_t) DynLoad_Args((Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyLong_AsLong) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyLong_AsLongAndOverflow) DynLoad_Args((PyObject *, int *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned long) DynLoad_Function(PyLong_AsUnsignedLong) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned long) DynLoad_Function(PyLong_AsUnsignedLongMask) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyLong_AsSsize_t) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_GetInfo) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_PyLong_Frexp) DynLoad_Args((PyLongObject *a, Py_ssize_t *e)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyLong_AsDouble) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromPtr) DynLoad_Args((void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyLong_AsPtr) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromLongLong) DynLoad_Args((__int64)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromUnsignedLongLong) DynLoad_Args((unsigned __int64)) );
DynLoad_ExternDecl( DynLoad_ReturnType(__int64) DynLoad_Function(PyLong_AsLongLong) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned __int64) DynLoad_Function(PyLong_AsUnsignedLongLong) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(unsigned __int64) DynLoad_Function(PyLong_AsUnsignedLongLongMask) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(__int64) DynLoad_Function(PyLong_AsLongLongAndOverflow) DynLoad_Args((PyObject *, int *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromString) DynLoad_Args((char *, char **, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyLong_FromUnicode) DynLoad_Args((Py_UNICODE *, Py_ssize_t, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyLong_Sign) DynLoad_Args((PyObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(size_t) DynLoad_Function(_PyLong_NumBits) DynLoad_Args((PyObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyLong_FromByteArray) DynLoad_Args((const unsigned char *bytes, size_t n, int little_endian, int is_signed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyLong_AsByteArray) DynLoad_Args((PyLongObject *v, unsigned char *bytes, size_t n, int little_endian, int is_signed)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyLong_Format) DynLoad_Args((PyObject *aa, int base, int addL, int newstyle)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyLong_FormatAdvanced) DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 double ob_fval;
} PyFloatObject;

DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyFloat_GetMax) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyFloat_GetMin) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFloat_GetInfo) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFloat_FromString) DynLoad_Args((PyObject *, char **junk)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFloat_FromDouble) DynLoad_Args((double)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyFloat_AsDouble) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFloat_AsReprString) DynLoad_Args((char *, PyFloatObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFloat_AsString) DynLoad_Args((char *, PyFloatObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyFloat_Pack4) DynLoad_Args((double x, unsigned char *p, int le)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyFloat_Pack8) DynLoad_Args((double x, unsigned char *p, int le)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyFloat_Digits) DynLoad_Args((char *buf, double v, int *signum)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyFloat_DigitsInit) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_PyFloat_Unpack4) DynLoad_Args((const unsigned char *p, int le)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_PyFloat_Unpack8) DynLoad_Args((const unsigned char *p, int le)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFloat_ClearFreeList) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyFloat_FormatAdvanced) DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_Py_double_round) DynLoad_Args((double x, int ndigits)) );

typedef struct {
 double real;
 double imag;
} Py_complex;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_sum) DynLoad_Args((Py_complex, Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_diff) DynLoad_Args((Py_complex, Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_neg) DynLoad_Args((Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_prod) DynLoad_Args((Py_complex, Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_quot) DynLoad_Args((Py_complex, Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complex_Py_c_pow) DynLoad_Args((Py_complex, Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_Py_c_abs) DynLoad_Args((Py_complex)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_complex cval;
} PyComplexObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyComplex_FromCComplex) DynLoad_Args((Py_complex)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyComplex_FromDoubles) DynLoad_Args((double real, double imag)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyComplex_RealAsDouble) DynLoad_Args((PyObject *op)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyComplex_ImagAsDouble) DynLoad_Args((PyObject *op)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_complexPyComplex_AsCComplex) DynLoad_Args((PyObject *op)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyComplex_FormatAdvanced) DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 long ob_shash;
 int ob_sstate;
 char ob_sval[1];
} PyStringObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_FromStringAndSize) DynLoad_Args((const char *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_FromString) DynLoad_Args((const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_FromFormatV) DynLoad_Args((const char *, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_FromFormat) DynLoad_Args((const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyString_Size) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyString_AsString) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_Repr) DynLoad_Args((PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyString_Concat) DynLoad_Args((PyObject **, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyString_ConcatAndDel) DynLoad_Args((PyObject **, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyString_Resize) DynLoad_Args((PyObject **, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyString_Eq) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_Format) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyString_FormatLong) DynLoad_Args((PyObject *, int, int, int, char **, int *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_DecodeEscape) DynLoad_Args((const char *, Py_ssize_t, const char *, Py_ssize_t, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyString_InternInPlace) DynLoad_Args((PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyString_InternImmortal) DynLoad_Args((PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_InternFromString) DynLoad_Args((const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_Py_ReleaseInternedStrings) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyString_Join) DynLoad_Args((PyObject *sep, PyObject *x)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_Decode) DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_Encode) DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_AsEncodedObject) DynLoad_Args((PyObject *str, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_AsEncodedString) DynLoad_Args((PyObject *str, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_AsDecodedObject) DynLoad_Args((PyObject *str, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyString_AsDecodedString) DynLoad_Args((PyObject *str, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyString_AsStringAndSize) DynLoad_Args((register PyObject *obj, register char **s, register Py_ssize_t *len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(_PyString_InsertThousandsGroupingLocale) DynLoad_Args((char *buffer, Py_ssize_t n_buffer, char *digits, Py_ssize_t n_digits, Py_ssize_t min_width)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(_PyString_InsertThousandsGrouping) DynLoad_Args((char *buffer, Py_ssize_t n_buffer, char *digits, Py_ssize_t n_digits, Py_ssize_t min_width, const char *grouping, const char *thousands_sep)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyBytes_FormatAdvanced) DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMemoryView_GetContiguous) DynLoad_Args((PyObject *base, int buffertype, char fort)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMemoryView_FromObject) DynLoad_Args((PyObject *base)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMemoryView_FromBuffer) DynLoad_Args((Py_buffer *info)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *base;
 Py_buffer view;
} PyMemoryViewObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBuffer_FromObject) DynLoad_Args((PyObject *base, Py_ssize_t offset, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBuffer_FromReadWriteObject) DynLoad_Args((PyObject *base, Py_ssize_t offset, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBuffer_FromMemory) DynLoad_Args((void *ptr, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBuffer_FromReadWriteMemory) DynLoad_Args((void *ptr, Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyBuffer_New) DynLoad_Args((Py_ssize_t size)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 int ob_exports;
 Py_ssize_t ob_alloc;
 char *ob_bytes;
} PyByteArrayObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyByteArray_FromObject) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyByteArray_Concat) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyByteArray_FromStringAndSize) DynLoad_Args((const char *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyByteArray_Size) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyByteArray_AsString) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyByteArray_Resize) DynLoad_Args((PyObject *, Py_ssize_t)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 PyObject *ob_item[1];
} PyTupleObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyTuple_New) DynLoad_Args((Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyTuple_Size) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyTuple_GetItem) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyTuple_SetItem) DynLoad_Args((PyObject *, Py_ssize_t, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyTuple_GetSlice) DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyTuple_Resize) DynLoad_Args((PyObject **, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyTuple_Pack) DynLoad_Args((Py_ssize_t, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyTuple_MaybeUntrack) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyTuple_ClearFreeList) DynLoad_Args((void)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 PyObject **ob_item;
 Py_ssize_t allocated;
} PyListObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyList_New) DynLoad_Args((Py_ssize_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyList_Size) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyList_GetItem) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_SetItem) DynLoad_Args((PyObject *, Py_ssize_t, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_Insert) DynLoad_Args((PyObject *, Py_ssize_t, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_Append) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyList_GetSlice) DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_SetSlice) DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_Sort) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyList_Reverse) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyList_AsTuple) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyList_Extend) DynLoad_Args((PyListObject *, PyObject *)) );

typedef struct {
 Py_ssize_t me_hash;
 PyObject *me_key;
 PyObject *me_value;
} PyDictEntry;

typedef struct _dictobject PyDictObject;

struct _dictobject {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ma_fill;
 Py_ssize_t ma_used;
 Py_ssize_t ma_mask;
 PyDictEntry *ma_table;
 PyDictEntry *(*ma_lookup)(PyDictObject *mp, PyObject *key, long hash);
 PyDictEntry ma_smalltable[8];
};

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_New) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_GetItem) DynLoad_Args((PyObject *mp, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_SetItem) DynLoad_Args((PyObject *mp, PyObject *key, PyObject *item)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_DelItem) DynLoad_Args((PyObject *mp, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyDict_Clear) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_Next) DynLoad_Args((PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyDict_Next) DynLoad_Args((PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, long *hash)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_Keys) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_Values) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_Items) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyDict_Size) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_Copy) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_Contains) DynLoad_Args((PyObject *mp, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyDict_Contains) DynLoad_Args((PyObject *mp, PyObject *key, long hash)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyDict_NewPresized) DynLoad_Args((Py_ssize_t minused)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyDict_MaybeUntrack) DynLoad_Args((PyObject *mp)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_Update) DynLoad_Args((PyObject *mp, PyObject *other)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_Merge) DynLoad_Args((PyObject *mp, PyObject *other, int override)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_MergeFromSeq2) DynLoad_Args((PyObject *d, PyObject *seq2, int override)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDict_GetItemString) DynLoad_Args((PyObject *dp, const char *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_SetItemString) DynLoad_Args((PyObject *dp, const char *key, PyObject *item)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyDict_DelItemString) DynLoad_Args((PyObject *dp, const char *key)) );

typedef struct {
 long hash;
 PyObject *key;
} setentry;

typedef struct _setobject PySetObject;

struct _setobject {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t fill;
 Py_ssize_t used;
 Py_ssize_t mask;
 setentry *table;
 setentry *(*lookup)(PySetObject *so, PyObject *key, long hash);
 setentry smalltable[8];
 long hash;
 PyObject *weakreflist;
};

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySet_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFrozenSet_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PySet_Size) DynLoad_Args((PyObject *anyset)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySet_Clear) DynLoad_Args((PyObject *set)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySet_Contains) DynLoad_Args((PyObject *anyset, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySet_Discard) DynLoad_Args((PyObject *set, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySet_Add) DynLoad_Args((PyObject *set, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PySet_Next) DynLoad_Args((PyObject *set, Py_ssize_t *pos, PyObject **key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PySet_NextEntry) DynLoad_Args((PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySet_Pop) DynLoad_Args((PyObject *set)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PySet_Update) DynLoad_Args((PyObject *set, PyObject *iterable)) );

typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);

typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,PyObject *);

typedef PyObject *(*PyNoArgsFunction)(PyObject *);

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCFunctionPyCFunction_GetFunction) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCFunction_GetSelf) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCFunction_GetFlags) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCFunction_Call) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );

struct PyMethodDef {
 const char *ml_name;
 PyCFunction ml_meth;
 int ml_flags;
 const char *ml_doc;
};

typedef struct PyMethodDef PyMethodDef;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_FindMethod) DynLoad_Args((PyMethodDef [], PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCFunction_NewEx) DynLoad_Args((PyMethodDef *, PyObject *, PyObject *)) );

typedef struct PyMethodChain {
 PyMethodDef *methods;
 struct PyMethodChain *link;
} PyMethodChain;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_FindMethodInChain) DynLoad_Args((PyMethodChain *, PyObject *, const char *)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyMethodDef *m_ml;
 PyObject *m_self;
 PyObject *m_module;
} PyCFunctionObject;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCFunction_ClearFreeList) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyModule_New) DynLoad_Args((const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyModule_GetDict) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyModule_GetName) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyModule_GetFilename) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyModule_Clear) DynLoad_Args((PyObject *)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *func_code;
 PyObject *func_globals;
 PyObject *func_defaults;
 PyObject *func_closure;
 PyObject *func_doc;
 PyObject *func_name;
 PyObject *func_dict;
 PyObject *func_weakreflist;
 PyObject *func_module;
} PyFunctionObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_New) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_GetCode) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_GetGlobals) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_GetModule) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_GetDefaults) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFunction_SetDefaults) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFunction_GetClosure) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFunction_SetClosure) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyClassMethod_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyStaticMethod_New) DynLoad_Args((PyObject *)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *cl_bases;
 PyObject *cl_dict;
 PyObject *cl_name;
 PyObject *cl_getattr;
 PyObject *cl_setattr;
 PyObject *cl_delattr;
 PyObject *cl_weakreflist;
} PyClassObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyClassObject *in_class;
 PyObject *in_dict;
 PyObject *in_weakreflist;
} PyInstanceObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *im_func;
 PyObject *im_self;
 PyObject *im_class;
 PyObject *im_weakreflist;
} PyMethodObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyClass_New) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInstance_New) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyInstance_NewRaw) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMethod_New) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMethod_Function) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMethod_Self) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMethod_Class) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyInstance_Lookup) DynLoad_Args((PyObject *pinst, PyObject *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyClass_IsSubclass) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyMethod_ClearFreeList) DynLoad_Args((void)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 FILE *f_fp;
 PyObject *f_name;
 PyObject *f_mode;
 int (*f_close)(FILE *);
 int f_softspace;
 int f_binary;
 char* f_buf;
 char* f_bufend;
 char* f_bufptr;
 char *f_setbuf;
 int f_univ_newline;
 int f_newlinetypes;
 int f_skipnextlf;
 PyObject *f_encoding;
 PyObject *f_errors;
 PyObject *weakreflist;
 int unlocked_count;
 int readable;
 int writable;
} PyFileObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFile_FromString) DynLoad_Args((char *, char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFile_SetBufSize) DynLoad_Args((PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFile_SetEncoding) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFile_SetEncodingAndErrors) DynLoad_Args((PyObject *, const char *, char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFile_FromFile) DynLoad_Args((FILE *fp, char *name, char *mode, int (*close)(FILE *))) );
DynLoad_ExternDecl( DynLoad_ReturnType(FILE*) DynLoad_Function(PyFile_AsFile) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFile_IncUseCount) DynLoad_Args((PyFileObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFile_DecUseCount) DynLoad_Args((PyFileObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFile_Name) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyFile_GetLine) DynLoad_Args((PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFile_WriteObject) DynLoad_Args((PyObject *, PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFile_SoftSpace) DynLoad_Args((PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyFile_WriteString) DynLoad_Args((const char *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_AsFileDescriptor) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_UniversalNewlineFgets) DynLoad_Args((char *, int, FILE *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(size_t) DynLoad_Function(Py_UniversalNewlineFread) DynLoad_Args((char *, size_t, FILE *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyFile_SanitizeMode) DynLoad_Args((char *mode)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCObject_FromPtr) DynLoad_Args((void *cobj, void (*destr)(void *))) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCObject_FromVoidPtrAndDesc) DynLoad_Args((void *cobj, void *desc, void (*destr)(void *, void *))) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCObject_AsPtr) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCObject_GetDesc) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCObject_Import) DynLoad_Args((char *module_name, char *cobject_name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCObject_SetPtr) DynLoad_Args((PyObject *self, void *cobj)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 void *cobject;
 void *desc;
 void (*destructor)(void *);
} PyCObject;

typedef void (*PyCapsule_Destructor)(PyObject *);

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCapsule_New) DynLoad_Args((void *pointer, const char *name, PyCapsule_Destructor destructor)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCapsule_GetPointer) DynLoad_Args((PyObject *capsule, const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_DestructorPyCapsule_GetDestructor) DynLoad_Args((PyObject *capsule)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(PyCapsule_GetName) DynLoad_Args((PyObject *capsule)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCapsule_GetContext) DynLoad_Args((PyObject *capsule)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_IsValid) DynLoad_Args((PyObject *capsule, const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_SetPointer) DynLoad_Args((PyObject *capsule, void *pointer)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_SetDestructor) DynLoad_Args((PyObject *capsule, PyCapsule_Destructor destructor)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_SetName) DynLoad_Args((PyObject *capsule, const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCapsule_SetContext) DynLoad_Args((PyObject *capsule, void *context)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyCapsule_Import) DynLoad_Args((const char *name, int no_block)) );

struct _frame;

typedef struct _traceback {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 struct _traceback *tb_next;
 struct _frame *tb_frame;
 int tb_lasti;
 int tb_lineno;
} PyTracebackObject;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyTraceBack_Here) DynLoad_Args((struct _frame *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyTraceBack_Print) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_Py_DisplaySourceLine) DynLoad_Args((PyObject *, const char *, int, int)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *start, *stop, *step;
} PySliceObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySlice_New) DynLoad_Args((PyObject *start, PyObject *stop, PyObject *step)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PySlice_FromIndices) DynLoad_Args((Py_ssize_t start, Py_ssize_t stop)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySlice_GetIndices) DynLoad_Args((PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySlice_GetIndicesEx) DynLoad_Args((PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step, Py_ssize_t *slicelength)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *ob_ref;
} PyCellObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCell_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCell_Get) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCell_Set) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySeqIter_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCallIter_New) DynLoad_Args((PyObject *, PyObject *)) );

struct _frame;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 struct _frame *gi_frame;
 int gi_running;
 PyObject *gi_code;
 PyObject *gi_weakreflist;
} PyGenObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyGen_New) DynLoad_Args((struct _frame *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyGen_NeedsFinalizing) DynLoad_Args((PyGenObject *)) );

typedef PyObject *(*getter)(PyObject *, void*);

typedef int (*setter)(PyObject *, PyObject *, void *);

typedef struct PyGetSetDef {
 char *name;
 getter get;
 setter set;
 char *doc;
 void*closure;
} PyGetSetDef;

typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args, void*wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args, void*wrapped, PyObject *kwds);

struct wrapperbase {
 char *name;
 int offset;
 void*function;
 wrapperfunc wrapper;
 char *doc;
 int flags;
 PyObject *name_strobj;
};

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyTypeObject *d_type;
 PyObject *d_name;
} PyDescrObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyTypeObject *d_type;
 PyObject *d_name;
 PyMethodDef *d_method;
} PyMethodDescrObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyTypeObject *d_type;
 PyObject *d_name;
 struct PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyTypeObject *d_type;
 PyObject *d_name;
 PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyTypeObject *d_type;
 PyObject *d_name;
 struct wrapperbase *d_base;
 void*d_wrapped;
} PyWrapperDescrObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDescr_NewMethod) DynLoad_Args((PyTypeObject *, PyMethodDef *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDescr_NewClassMethod) DynLoad_Args((PyTypeObject *, PyMethodDef *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDescr_NewMember) DynLoad_Args((PyTypeObject *, struct PyMemberDef *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDescr_NewGetSet) DynLoad_Args((PyTypeObject *, struct PyGetSetDef *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDescr_NewWrapper) DynLoad_Args((PyTypeObject *, struct wrapperbase *, void *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyDictProxy_New) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyWrapper_New) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyWarnings_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_WarnEx) DynLoad_Args((PyObject *, const char *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_WarnExplicit) DynLoad_Args((PyObject *, const char *, const char *, int, const char *, PyObject *)) );

typedef struct _PyWeakReference PyWeakReference;

struct _PyWeakReference {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *wr_object;
 PyObject *wr_callback;
 long hash;
 PyWeakReference *wr_prev;
 PyWeakReference *wr_next;
};

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyWeakref_NewRef) DynLoad_Args((PyObject *ob, PyObject *callback)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyWeakref_NewProxy) DynLoad_Args((PyObject *ob, PyObject *callback)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyWeakref_GetObject) DynLoad_Args((PyObject *ref)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(_PyWeakref_GetWeakrefCount) DynLoad_Args((PyWeakReference *head)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyWeakref_ClearRef) DynLoad_Args((PyWeakReference *self)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCodec_Register) DynLoad_Args((PyObject *search_function)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyCodec_Lookup) DynLoad_Args((const char *encoding)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_Encode) DynLoad_Args((PyObject *object, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_Decode) DynLoad_Args((PyObject *object, const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_Encoder) DynLoad_Args((const char *encoding)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_Decoder) DynLoad_Args((const char *encoding)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_IncrementalEncoder) DynLoad_Args((const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_IncrementalDecoder) DynLoad_Args((const char *encoding, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_StreamReader) DynLoad_Args((const char *encoding, PyObject *stream, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_StreamWriter) DynLoad_Args((const char *encoding, PyObject *stream, const char *errors)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCodec_RegisterError) DynLoad_Args((const char *name, PyObject *error)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_LookupError) DynLoad_Args((const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_StrictErrors) DynLoad_Args((PyObject *exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_IgnoreErrors) DynLoad_Args((PyObject *exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_ReplaceErrors) DynLoad_Args((PyObject *exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_XMLCharRefReplaceErrors) DynLoad_Args((PyObject *exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCodec_BackslashReplaceErrors) DynLoad_Args((PyObject *exc)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
} PyBaseExceptionObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
 PyObject *msg;
 PyObject *filename;
 PyObject *lineno;
 PyObject *offset;
 PyObject *text;
 PyObject *print_file_and_line;
} PySyntaxErrorObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
 PyObject *encoding;
 PyObject *object;
 Py_ssize_t start;
 Py_ssize_t end;
 PyObject *reason;
} PyUnicodeErrorObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
 PyObject *code;
} PySystemExitObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
 PyObject *myerrno;
 PyObject *strerror;
 PyObject *filename;
} PyEnvironmentErrorObject;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *dict;
 PyObject *args;
 PyObject *message;
 PyObject *myerrno;
 PyObject *strerror;
 PyObject *filename;
 PyObject *winerror;
} PyWindowsErrorObject;

DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_SetNone) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_SetObject) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_SetString) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_Occurred) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_Clear) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_Fetch) DynLoad_Args((PyObject **, PyObject **, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_Restore) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_GivenExceptionMatches) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_ExceptionMatches) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_NormalizeException) DynLoad_Args((PyObject **, PyObject **, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_BadArgument) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_NoMemory) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromErrno) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromErrnoWithFilenameObject) DynLoad_Args((PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromErrnoWithFilename) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromErrnoWithUnicodeFilename) DynLoad_Args((PyObject *, const Py_UNICODE *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_Format) DynLoad_Args((PyObject *, const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromWindowsErrWithFilenameObject) DynLoad_Args((int, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromWindowsErrWithFilename) DynLoad_Args((int, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromWindowsErrWithUnicodeFilename) DynLoad_Args((int, const Py_UNICODE *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetFromWindowsErr) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetExcFromWindowsErrWithFilenameObject) DynLoad_Args((PyObject *, int, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetExcFromWindowsErrWithFilename) DynLoad_Args((PyObject *, int, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetExcFromWindowsErrWithUnicodeFilename) DynLoad_Args((PyObject *, int, const Py_UNICODE *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_SetExcFromWindowsErr) DynLoad_Args((PyObject *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_BadInternalCall) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyErr_BadInternalCall) DynLoad_Args((char *filename, int lineno)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_NewException) DynLoad_Args((char *name, PyObject *base, PyObject *dict)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_NewExceptionWithDoc) DynLoad_Args((char *name, char *doc, PyObject *base, PyObject *dict)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_WriteUnraisable) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyErr_CheckSignals) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_SetInterrupt) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySignal_SetWakeupFd) DynLoad_Args((int fd)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_SyntaxLocation) DynLoad_Args((const char *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyErr_ProgramText) DynLoad_Args((const char *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeDecodeError_Create) DynLoad_Args((const char *, const char *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeEncodeError_Create) DynLoad_Args((const char *, const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeTranslateError_Create) DynLoad_Args((const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeEncodeError_GetEncoding) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeDecodeError_GetEncoding) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeEncodeError_GetObject) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeDecodeError_GetObject) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeTranslateError_GetObject) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeEncodeError_GetStart) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeDecodeError_GetStart) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeTranslateError_GetStart) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeEncodeError_SetStart) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeDecodeError_SetStart) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeTranslateError_SetStart) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeEncodeError_GetEnd) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeDecodeError_GetEnd) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeTranslateError_GetEnd) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeEncodeError_SetEnd) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeDecodeError_SetEnd) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeTranslateError_SetEnd) DynLoad_Args((PyObject *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeEncodeError_GetReason) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeDecodeError_GetReason) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyUnicodeTranslateError_GetReason) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeEncodeError_SetReason) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeDecodeError_SetReason) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyUnicodeTranslateError_SetReason) DynLoad_Args((PyObject *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_snprintf) DynLoad_Args((char *str, size_t size, const char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_vsnprintf) DynLoad_Args((char *str, size_t size, const char *format, va_list va)) );

struct _ts;

struct _is;

typedef struct _is {
 struct _is *next;
 struct _ts *tstate_head;
 PyObject *modules;
 PyObject *sysdict;
 PyObject *builtins;
 PyObject *modules_reloading;
 PyObject *codec_search_path;
 PyObject *codec_search_cache;
 PyObject *codec_error_registry;
} PyInterpreterState;

struct _frame;

typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);

typedef struct _ts {
 struct _ts *next;
 PyInterpreterState *interp;
 struct _frame *frame;
 int recursion_depth;
 int tracing;
 int use_tracing;
 Py_tracefunc c_profilefunc;
 Py_tracefunc c_tracefunc;
 PyObject *c_profileobj;
 PyObject *c_traceobj;
 PyObject *curexc_type;
 PyObject *curexc_value;
 PyObject *curexc_traceback;
 PyObject *exc_type;
 PyObject *exc_value;
 PyObject *exc_traceback;
 PyObject *dict;
 int tick_counter;
 int gilstate_counter;
 PyObject *async_exc;
 long thread_id;
} PyThreadState;

DynLoad_ExternDecl( DynLoad_ReturnType(PyInterpreterState*) DynLoad_Function(PyInterpreterState_New) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyInterpreterState_Clear) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyInterpreterState_Delete) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyThreadState_New) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(_PyThreadState_Prealloc) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyThreadState_Init) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyThreadState_Clear) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyThreadState_Delete) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyThreadState_DeleteCurrent) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyGILState_Reinit) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyThreadState_Get) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyThreadState_Swap) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyThreadState_GetDict) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyThreadState_SetAsyncExc) DynLoad_Args((long, PyObject *)) );

typedef enum {PyGILState_LOCKED, PyGILState_UNLOCKED} PyGILState_STATE;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyGILState_STATEPyGILState_Ensure) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyGILState_Release) DynLoad_Args((PyGILState_STATE)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyGILState_GetThisThreadState) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyThread_CurrentFrames) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyInterpreterState*) DynLoad_Function(PyInterpreterState_Head) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyInterpreterState*) DynLoad_Function(PyInterpreterState_Next) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyInterpreterState_ThreadHead) DynLoad_Args((PyInterpreterState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyThreadState_Next) DynLoad_Args((PyThreadState *)) );

typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);

typedef struct _arena PyArena;

DynLoad_ExternDecl( DynLoad_ReturnType(PyArena*) DynLoad_Function(PyArena_New) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyArena_Free) DynLoad_Args((PyArena *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyArena_Malloc) DynLoad_Args((PyArena *, size_t size)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArena_AddPyObject) DynLoad_Args((PyArena *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_Py_VaBuildValue_SizeT) DynLoad_Args((const char *, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArg_Parse) DynLoad_Args((PyObject *, const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArg_ParseTupleAndKeywords) DynLoad_Args((PyObject *, PyObject *, const char *, char **, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArg_UnpackTuple) DynLoad_Args((PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_BuildValue) DynLoad_Args((const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_Py_BuildValue_SizeT) DynLoad_Args((const char *, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyArg_NoKeywords) DynLoad_Args((const char *funcname, PyObject *kw)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArg_VaParse) DynLoad_Args((PyObject *, const char *, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyArg_VaParseTupleAndKeywords) DynLoad_Args((PyObject *, PyObject *, const char *, char **, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_VaBuildValue) DynLoad_Args((const char *, va_list)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyModule_AddObject) DynLoad_Args((PyObject *, const char *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyModule_AddIntConstant) DynLoad_Args((PyObject *, const char *, long)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyModule_AddStringConstant) DynLoad_Args((PyObject *, const char *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_InitModule4) DynLoad_Args((const char *name, PyMethodDef *methods, const char *doc, PyObject *self, int apiver)) );

typedef struct {
 int cf_flags;
} PyCompilerFlags;

DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_SetProgramName) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetProgramName) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_SetPythonHome) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetPythonHome) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_Initialize) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_InitializeEx) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_Finalize) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_IsInitialized) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(Py_NewInterpreter) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_EndInterpreter) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_AnyFileFlags) DynLoad_Args((FILE *, const char *, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_AnyFileExFlags) DynLoad_Args((FILE *, const char *, int, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_SimpleStringFlags) DynLoad_Args((const char *, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_SimpleFileExFlags) DynLoad_Args((FILE *, const char *, int, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_InteractiveOneFlags) DynLoad_Args((FILE *, const char *, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyRun_InteractiveLoopFlags) DynLoad_Args((FILE *, const char *, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct _mod*) DynLoad_Function(PyParser_ASTFromString) DynLoad_Args((const char *, const char *, int, PyCompilerFlags *flags, PyArena *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct _mod*) DynLoad_Function(PyParser_ASTFromFile) DynLoad_Args((FILE *, const char *, int, char *, char *, PyCompilerFlags *, int *, PyArena *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct _node*) DynLoad_Function(PyParser_SimpleParseStringFlags) DynLoad_Args((const char *, int, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct _node*) DynLoad_Function(PyParser_SimpleParseFileFlags) DynLoad_Args((FILE *, const char *, int, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyRun_StringFlags) DynLoad_Args((const char *, int, PyObject *, PyObject *, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyRun_FileExFlags) DynLoad_Args((FILE *, const char *, int, PyObject *, PyObject *, int, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(Py_CompileStringFlags) DynLoad_Args((const char *, const char *, int, PyCompilerFlags *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct symtable*) DynLoad_Function(Py_SymtableString) DynLoad_Args((const char *, const char *, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_Print) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_PrintEx) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyErr_Display) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_AtExit) DynLoad_Args((void (*func)(void))) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_Exit) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_FdIsInteractive) DynLoad_Args((FILE *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_Main) DynLoad_Args((int argc, char **argv)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetProgramFullPath) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetPrefix) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetExecPrefix) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(Py_GetPath) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_GetVersion) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_GetPlatform) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_GetCopyright) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_GetCompiler) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_GetBuildInfo) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(_Py_svnversion) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_SubversionRevision) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(Py_SubversionShortBranch) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(_Py_hgidentifier) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(_Py_hgversion) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyBuiltin_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PySys_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyImport_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyExc_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyImportHooks_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyFrame_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyInt_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyLong_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyFloat_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyByteArray_Init) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyExc_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyImport_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyMethod_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFrame_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyCFunction_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyDict_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyTuple_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyList_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySet_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyString_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyInt_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyFloat_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyOS_FiniInterrupts) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyByteArray_Fini) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyOS_Readline) DynLoad_Args((FILE *, FILE *, char *)) );
//TODO: extern int (*PyOS_InputHook) DynLoad_Args((void));
//TODO: extern char *(*PyOS_ReadlineFunctionPointer) DynLoad_Args((FILE *, FILE *, char *));
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_CheckStack) DynLoad_Args((void)) );

typedef void (*PyOS_sighandler_t)(int);

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_sighandler_tPyOS_getsig) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_sighandler_tPyOS_setsig) DynLoad_Args((int, PyOS_sighandler_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_CallObjectWithKeywords) DynLoad_Args((PyObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_CallFunction) DynLoad_Args((PyObject *obj, const char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_CallMethod) DynLoad_Args((PyObject *obj, const char *methodname, const char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_SetProfile) DynLoad_Args((Py_tracefunc, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_SetTrace) DynLoad_Args((Py_tracefunc, PyObject *)) );

struct _frame;

DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_GetBuiltins) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_GetGlobals) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_GetLocals) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct _frame*) DynLoad_Function(PyEval_GetFrame) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyEval_GetRestricted) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyEval_MergeCompilerFlags) DynLoad_Args((PyCompilerFlags *cf)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_FlushLine) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_AddPendingCall) DynLoad_Args((int (*func)(void *), void *arg)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_MakePendingCalls) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(Py_SetRecursionLimit) DynLoad_Args((int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(Py_GetRecursionLimit) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_Py_CheckRecursiveCall) DynLoad_Args((char *where)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(PyEval_GetFuncName) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(const char*) DynLoad_Function(PyEval_GetFuncDesc) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_GetCallStats) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_EvalFrame) DynLoad_Args((struct _frame *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_EvalFrameEx) DynLoad_Args((struct _frame *f, int exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyThreadState*) DynLoad_Function(PyEval_SaveThread) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_RestoreThread) DynLoad_Args((PyThreadState *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyEval_ThreadsInitialized) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_InitThreads) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_AcquireLock) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_ReleaseLock) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_AcquireThread) DynLoad_Args((PyThreadState *tstate)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_ReleaseThread) DynLoad_Args((PyThreadState *tstate)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyEval_ReInitThreads) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyEval_SliceIndex) DynLoad_Args((PyObject *, Py_ssize_t *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySys_GetObject) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySys_SetObject) DynLoad_Args((char *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(FILE*) DynLoad_Function(PySys_GetFile) DynLoad_Args((char *, FILE *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_SetArgv) DynLoad_Args((int, char **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_SetArgvEx) DynLoad_Args((int, char **, int)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_SetPath) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_WriteStdout) DynLoad_Args((const char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_WriteStderr) DynLoad_Args((const char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_ResetWarnOptions) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PySys_AddWarnOption) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySys_HasWarnOptions) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_InterruptOccurred) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyOS_InitInterrupts) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyOS_AfterFork) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(long) DynLoad_Function(PyImport_GetMagicNumber) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ExecCodeModule) DynLoad_Args((char *name, PyObject *co)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ExecCodeModuleEx) DynLoad_Args((char *name, PyObject *co, char *pathname)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_GetModuleDict) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_AddModule) DynLoad_Args((const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ImportModule) DynLoad_Args((const char *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ImportModuleNoBlock) DynLoad_Args((const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ImportModuleLevel) DynLoad_Args((char *name, PyObject *globals, PyObject *locals, PyObject *fromlist, int level)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_GetImporter) DynLoad_Args((PyObject *path)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_Import) DynLoad_Args((PyObject *name)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyImport_ReloadModule) DynLoad_Args((PyObject *m)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyImport_Cleanup) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyImport_ImportFrozenModule) DynLoad_Args((char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyImport_AcquireLock) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyImport_ReleaseLock) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(struct filedescr*) DynLoad_Function(_PyImport_FindModule) DynLoad_Args((const char *, PyObject *, char *, size_t, FILE **, PyObject **)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyImport_IsScript) DynLoad_Args((struct filedescr *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_PyImport_ReInitLock) DynLoad_Args((void)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyImport_FindExtension) DynLoad_Args((char *, char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyImport_FixupExtension) DynLoad_Args((char *, char *)) );

struct _inittab {
 char *name;
 void(*initfunc)();
};

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyImport_AppendInittab) DynLoad_Args((const char *name, void (*initfunc)(void))) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyImport_ExtendInittab) DynLoad_Args((struct _inittab *newtab)) );

struct _frozen {
 char *name;
 unsigned char *code;
 int size;
};

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_Cmp) DynLoad_Args((PyObject *o1, PyObject *o2, int *result)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Call) DynLoad_Args((PyObject *callable_object, PyObject *args, PyObject *kw)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_CallObject) DynLoad_Args((PyObject *callable_object, PyObject *args)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_CallFunction) DynLoad_Args((PyObject *callable_object, char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_CallMethod) DynLoad_Args((PyObject *o, char *m, char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_CallFunction_SizeT) DynLoad_Args((PyObject *callable, char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyObject_CallMethod_SizeT) DynLoad_Args((PyObject *o, char *name, char *format, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_CallFunctionObjArgs) DynLoad_Args((PyObject *callable, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_CallMethodObjArgs) DynLoad_Args((PyObject *o, PyObject *m, ...)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Type) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyObject_Size) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyObject_Length) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(_PyObject_LengthHint) DynLoad_Args((PyObject *o, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_GetItem) DynLoad_Args((PyObject *o, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_SetItem) DynLoad_Args((PyObject *o, PyObject *key, PyObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_DelItemString) DynLoad_Args((PyObject *o, char *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_DelItem) DynLoad_Args((PyObject *o, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_AsCharBuffer) DynLoad_Args((PyObject *obj, const char **buffer, Py_ssize_t *buffer_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_CheckReadBuffer) DynLoad_Args((PyObject *obj)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_AsReadBuffer) DynLoad_Args((PyObject *obj, const **buffer, Py_ssize_t *buffer_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_AsWriteBuffer) DynLoad_Args((PyObject *obj, void **buffer, Py_ssize_t *buffer_len)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_GetBuffer) DynLoad_Args((PyObject *obj, Py_buffer *view, int flags)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void*) DynLoad_Function(PyBuffer_GetPointer) DynLoad_Args((Py_buffer *view, Py_ssize_t *indices)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyBuffer_SizeFromFormat) DynLoad_Args((const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyBuffer_ToContiguous) DynLoad_Args((void *buf, Py_buffer *view, Py_ssize_t len, char fort)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyBuffer_FromContiguous) DynLoad_Args((Py_buffer *view, void *buf, Py_ssize_t len, char fort)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_CopyData) DynLoad_Args((PyObject *dest, PyObject *src)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyBuffer_IsContiguous) DynLoad_Args((Py_buffer *view, char fort)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyBuffer_FillContiguousStrides) DynLoad_Args((int ndims, Py_ssize_t *shape, Py_ssize_t *strides, int itemsize, char fort)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyBuffer_FillInfo) DynLoad_Args((Py_buffer *view, PyObject *o, void *buf, Py_ssize_t len, int readonly, int flags)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(PyBuffer_Release) DynLoad_Args((Py_buffer *view)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_Format) DynLoad_Args((PyObject *obj, PyObject *format_spec)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyObject_GetIter) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyIter_Next) DynLoad_Args((PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyNumber_Check) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Add) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Subtract) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Multiply) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Divide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_FloorDivide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_TrueDivide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Remainder) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Divmod) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Power) DynLoad_Args((PyObject *o1, PyObject *o2, PyObject *o3)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Negative) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Positive) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Absolute) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Invert) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Lshift) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Rshift) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_And) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Xor) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Or) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Index) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyNumber_AsSsize_t) DynLoad_Args((PyObject *o, PyObject *exc)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyNumber_ConvertIntegralToInt) DynLoad_Args((PyObject *integral, const char *error_format)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Int) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Long) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_Float) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceAdd) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceSubtract) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceMultiply) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceDivide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceFloorDivide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceTrueDivide) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceRemainder) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlacePower) DynLoad_Args((PyObject *o1, PyObject *o2, PyObject *o3)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceLshift) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceRshift) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceAnd) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceXor) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_InPlaceOr) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyNumber_ToBase) DynLoad_Args((PyObject *n, int base)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_Check) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PySequence_Size) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PySequence_Length) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_Concat) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_Repeat) DynLoad_Args((PyObject *o, Py_ssize_t count)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_GetItem) DynLoad_Args((PyObject *o, Py_ssize_t i)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_GetSlice) DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_SetItem) DynLoad_Args((PyObject *o, Py_ssize_t i, PyObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_DelItem) DynLoad_Args((PyObject *o, Py_ssize_t i)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_SetSlice) DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2, PyObject *v)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_DelSlice) DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_Tuple) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_List) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_Fast) DynLoad_Args((PyObject *o, const char *m)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PySequence_Count) DynLoad_Args((PyObject *o, PyObject *value)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_Contains) DynLoad_Args((PyObject *seq, PyObject *ob)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(_PySequence_IterSearch) DynLoad_Args((PyObject *seq, PyObject *obj, int operation)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PySequence_In) DynLoad_Args((PyObject *o, PyObject *value)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PySequence_Index) DynLoad_Args((PyObject *o, PyObject *value)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_InPlaceConcat) DynLoad_Args((PyObject *o1, PyObject *o2)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PySequence_InPlaceRepeat) DynLoad_Args((PyObject *o, Py_ssize_t count)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyMapping_Check) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyMapping_Size) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(Py_ssize_t) DynLoad_Function(PyMapping_Length) DynLoad_Args((PyObject *o)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyMapping_HasKeyString) DynLoad_Args((PyObject *o, char *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyMapping_HasKey) DynLoad_Args((PyObject *o, PyObject *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyMapping_GetItemString) DynLoad_Args((PyObject *o, char *key)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyMapping_SetItemString) DynLoad_Args((PyObject *o, char *key, PyObject *value)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_IsInstance) DynLoad_Args((PyObject *object, PyObject *typeorclass)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyObject_IsSubclass) DynLoad_Args((PyObject *object, PyObject *typeorclass)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyObject_RealIsInstance) DynLoad_Args((PyObject *inst, PyObject *cls)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyObject_RealIsSubclass) DynLoad_Args((PyObject *derived, PyObject *cls)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_Py_add_one_to_index_F) DynLoad_Args((int nd, Py_ssize_t *index, const Py_ssize_t *shape)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_Py_add_one_to_index_C) DynLoad_Args((int nd, Py_ssize_t *index, const Py_ssize_t *shape)) );

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 int co_argcount;
 int co_nlocals;
 int co_stacksize;
 int co_flags;
 PyObject *co_code;
 PyObject *co_consts;
 PyObject *co_names;
 PyObject *co_varnames;
 PyObject *co_freevars;
 PyObject *co_cellvars;
 PyObject *co_filename;
 PyObject *co_name;
 int co_firstlineno;
 PyObject *co_lnotab;
 void*co_zombieframe;
 PyObject *co_weakreflist;
} PyCodeObject;

DynLoad_ExternDecl( DynLoad_ReturnType(PyCodeObject*) DynLoad_Function(PyCode_New) DynLoad_Args((int, int, int, int, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, int, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyCodeObject*) DynLoad_Function(PyCode_NewEmpty) DynLoad_Args((const char *filename, const char *funcname, int firstlineno)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyCode_Addr2Line) DynLoad_Args((PyCodeObject *, int)) );

typedef struct _addr_pair {
 int ap_lower;
 int ap_upper;
} PyAddrPair;

DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(_PyCode_CheckLineNumber) DynLoad_Args((PyCodeObject *co, int lasti, PyAddrPair *bounds)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyCode_Optimize) DynLoad_Args((PyObject *code, PyObject *consts, PyObject *names, PyObject *lineno_obj)) );

struct _node;

DynLoad_ExternDecl( DynLoad_ReturnType(PyCodeObject*) DynLoad_Function(PyNode_Compile) DynLoad_Args((struct _node *, const char *)) );

typedef struct {
 int ff_features;
 int ff_lineno;
} PyFutureFeatures;

struct _mod;

typedef struct PyMemberDef {
	/* Current version, use this */
	char *name;
	int type;
	Py_ssize_t offset;
	int flags;
	char *doc;
} PyMemberDef;

DynLoad_ExternDecl( DynLoad_ReturnType(PyCodeObject*) DynLoad_Function(PyAST_Compile) DynLoad_Args((struct _mod *, const char *, PyCompilerFlags *, PyArena *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyFutureFeatures*) DynLoad_Function(PyFuture_FromAST) DynLoad_Args((struct _mod *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_EvalCode) DynLoad_Args((PyCodeObject *, PyObject *, PyObject *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(PyEval_EvalCodeEx) DynLoad_Args((PyCodeObject *co, PyObject *globals, PyObject *locals, PyObject **args, int argc, PyObject **kwds, int kwdc, PyObject **defs, int defc, PyObject *closure)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_PyEval_CallTracing) DynLoad_Args((PyObject *func, PyObject *args)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyOS_ascii_strtod) DynLoad_Args((const char *str, char **ptr)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyOS_ascii_atof) DynLoad_Args((const char *str)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyOS_ascii_formatd) DynLoad_Args((char *buffer, size_t buf_len, const char *format, double d)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(PyOS_string_to_double) DynLoad_Args((const char *str, char **endptr, PyObject *overflow_exception)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(PyOS_double_to_string) DynLoad_Args((double val, char format_code, int precision, int flags, int *type)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_Py_parse_inf_or_nan) DynLoad_Args((const char *p, char **endptr)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_mystrnicmp) DynLoad_Args((const char *, const char *, Py_ssize_t)) );
DynLoad_ExternDecl( DynLoad_ReturnType(int) DynLoad_Function(PyOS_mystricmp) DynLoad_Args((const char *, const char *)) );
DynLoad_ExternDecl( DynLoad_ReturnType(double) DynLoad_Function(_Py_dg_strtod) DynLoad_Args((const char *str, char **ptr)) );
DynLoad_ExternDecl( DynLoad_ReturnType(char*) DynLoad_Function(_Py_dg_dtoa) DynLoad_Args((double d, int mode, int ndigits, int *decpt, int *sign, char **rve)) );
DynLoad_ExternDecl( DynLoad_ReturnType(void) DynLoad_Function(_Py_dg_freedtoa) DynLoad_Args((char *s)) );
DynLoad_ExternDecl( DynLoad_ReturnType(PyObject*) DynLoad_Function(_Py_Mangle) DynLoad_Args((PyObject *p, PyObject *name)) );

/* PyObject Stuff */

#if defined(Py_DEBUG) && !defined(Py_TRACE_REFS)
#define Py_TRACE_REFS
#endif

/* Py_TRACE_REFS implies Py_REF_DEBUG. */
#if defined(Py_TRACE_REFS) && !defined(Py_REF_DEBUG)
#define Py_REF_DEBUG
#endif

#ifdef Py_TRACE_REFS
/* Define pointers to support a doubly-linked list of all live heap objects. */
#define _PyObject_HEAD_EXTRA            \
	struct _object *_ob_next;           \
	struct _object *_ob_prev;

#define _PyObject_EXTRA_INIT 0, 0,

#else
#define _PyObject_HEAD_EXTRA
#define _PyObject_EXTRA_INIT
#endif

/* PyObject_HEAD defines the initial segment of every PyObject. */
#define PyObject_HEAD                   \
	_PyObject_HEAD_EXTRA                \
	Py_ssize_t ob_refcnt;               \
	struct _typeobject *ob_type;

#define PyObject_HEAD_INIT(type)        \
	_PyObject_EXTRA_INIT                \
	1, type,

#define PyVarObject_HEAD_INIT(type, size)       \
	PyObject_HEAD_INIT(type) size,

/* PyObject_VAR_HEAD defines the initial segment of all variable-size
 * container objects.  These end with a declaration of an array with 1
 * element, but enough space is malloc'ed so that the array actually
 * has room for ob_size elements.  Note that ob_size is an element count,
 * not necessarily a byte count.
 */
#define PyObject_VAR_HEAD               \
	PyObject_HEAD                       \
	Py_ssize_t ob_size; /* Number of items in variable part */
#define Py_INVALID_SIZE (Py_ssize_t)-1

#define Py_REFCNT(ob) (((PyObject*)(ob))->ob_refcnt)
#define Py_TYPE(ob) (((PyObject*)(ob))->ob_type)
#define Py_SIZE(ob) (((PyVarObject*)(ob))->ob_size)

	/* Flags for getting buffers */
#define PyBUF_SIMPLE 0
#define PyBUF_WRITABLE 0x0001
/*  we used to include an E, backwards compatible alias  */
#define PyBUF_WRITEABLE PyBUF_WRITABLE
#define PyBUF_FORMAT 0x0004
#define PyBUF_ND 0x0008
#define PyBUF_STRIDES (0x0010 | PyBUF_ND)
#define PyBUF_C_CONTIGUOUS (0x0020 | PyBUF_STRIDES)
#define PyBUF_F_CONTIGUOUS (0x0040 | PyBUF_STRIDES)
#define PyBUF_ANY_CONTIGUOUS (0x0080 | PyBUF_STRIDES)
#define PyBUF_INDIRECT (0x0100 | PyBUF_STRIDES)

#define PyBUF_CONTIG (PyBUF_ND | PyBUF_WRITABLE)
#define PyBUF_CONTIG_RO (PyBUF_ND)

#define PyBUF_STRIDED (PyBUF_STRIDES | PyBUF_WRITABLE)
#define PyBUF_STRIDED_RO (PyBUF_STRIDES)

#define PyBUF_RECORDS (PyBUF_STRIDES | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_RECORDS_RO (PyBUF_STRIDES | PyBUF_FORMAT)

#define PyBUF_FULL (PyBUF_INDIRECT | PyBUF_WRITABLE | PyBUF_FORMAT)
#define PyBUF_FULL_RO (PyBUF_INDIRECT | PyBUF_FORMAT)


#define PyBUF_READ  0x100
#define PyBUF_WRITE 0x200
#define PyBUF_SHADOW 0x400

#define PyHeapType_GET_MEMBERS(etype) ((PyMemberDef *)(((char *)etype) + Py_TYPE(etype)->tp_basicsize))
#define PyObject_TypeCheck(ob, tp) (Py_TYPE(ob) == (tp) || PyType_IsSubtype(Py_TYPE(ob), (tp)))
#define PyType_Check(op) PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_TYPE_SUBCLASS)
#define PyType_CheckExact(op) (Py_TYPE(op) == &PyType_Type)
#define PyObject_Bytes PyObject_Str
#define PyObject_REPR(obj) PyString_AS_STRING(PyObject_Repr(obj))
#define Py_PRINT_RAW 1
/* PyBufferProcs contains bf_getcharbuffer */
#define Py_TPFLAGS_HAVE_GETCHARBUFFER  (1L<<0)

/* PySequenceMethods contains sq_contains */
#define Py_TPFLAGS_HAVE_SEQUENCE_IN (1L<<1)

/* This is here for backwards compatibility.  Extensions that use the old GC
 * API will still compile but the objects will not be tracked by the GC. */
#define Py_TPFLAGS_GC 0 /* used to be (1L<<2) */

/* PySequenceMethods and PyNumberMethods contain in-place operators */
#define Py_TPFLAGS_HAVE_INPLACEOPS (1L<<3)

/* PyNumberMethods do their own coercion */
#define Py_TPFLAGS_CHECKTYPES (1L<<4)

/* tp_richcompare is defined */
#define Py_TPFLAGS_HAVE_RICHCOMPARE (1L<<5)

/* Objects which are weakly referencable if their tp_weaklistoffset is >0 */
#define Py_TPFLAGS_HAVE_WEAKREFS (1L<<6)

/* tp_iter is defined */
#define Py_TPFLAGS_HAVE_ITER (1L<<7)

/* New members introduced by Python 2.2 exist */
#define Py_TPFLAGS_HAVE_CLASS (1L<<8)

/* Set if the type object is dynamically allocated */
#define Py_TPFLAGS_HEAPTYPE (1L<<9)
#define Py_TPFLAGS_BASETYPE (1L<<10)
#define Py_TPFLAGS_READY (1L<<12)
#define Py_TPFLAGS_READYING (1L<<13)
#define Py_TPFLAGS_HAVE_GC (1L<<14)
#define Py_TPFLAGS_HAVE_STACKLESS_EXTENSION 0
#define Py_TPFLAGS_HAVE_INDEX (1L<<17)
#define Py_TPFLAGS_HAVE_VERSION_TAG   (1L<<18)
#define Py_TPFLAGS_VALID_VERSION_TAG  (1L<<19)
#define Py_TPFLAGS_IS_ABSTRACT (1L<<20)
#define Py_TPFLAGS_HAVE_NEWBUFFER (1L<<21)
#define Py_TPFLAGS_INT_SUBCLASS         (1L<<23)
#define Py_TPFLAGS_LONG_SUBCLASS        (1L<<24)
#define Py_TPFLAGS_LIST_SUBCLASS        (1L<<25)
#define Py_TPFLAGS_TUPLE_SUBCLASS       (1L<<26)
#define Py_TPFLAGS_STRING_SUBCLASS      (1L<<27)
#define Py_TPFLAGS_UNICODE_SUBCLASS     (1L<<28)
#define Py_TPFLAGS_DICT_SUBCLASS        (1L<<29)
#define Py_TPFLAGS_BASE_EXC_SUBCLASS    (1L<<30)
#define Py_TPFLAGS_TYPE_SUBCLASS        (1L<<31)

#define Py_TPFLAGS_DEFAULT_EXTERNAL ( \
				 Py_TPFLAGS_HAVE_GETCHARBUFFER | \
				 Py_TPFLAGS_HAVE_SEQUENCE_IN | \
				 Py_TPFLAGS_HAVE_INPLACEOPS | \
				 Py_TPFLAGS_HAVE_RICHCOMPARE | \
				 Py_TPFLAGS_HAVE_WEAKREFS | \
				 Py_TPFLAGS_HAVE_ITER | \
				 Py_TPFLAGS_HAVE_CLASS | \
				 Py_TPFLAGS_HAVE_STACKLESS_EXTENSION | \
				 Py_TPFLAGS_HAVE_INDEX | \
				 0)
#define Py_TPFLAGS_DEFAULT_CORE (Py_TPFLAGS_DEFAULT_EXTERNAL | Py_TPFLAGS_HAVE_VERSION_TAG)
#define Py_TPFLAGS_DEFAULT Py_TPFLAGS_DEFAULT_EXTERNAL
#define PyType_HasFeature(t,f)  (((t)->tp_flags & (f)) != 0)
#define PyType_FastSubclass(t,f)  PyType_HasFeature(t,f)
#define _Py_INC_REFTOTAL
#define _Py_DEC_REFTOTAL
#define _Py_REF_DEBUG_COMMA
#define _Py_CHECK_REFCNT(OP)
#define _Py_INC_TPALLOCS(OP)
#define _Py_INC_TPFREES(OP)
#define _Py_DEC_TPFREES(OP)
#define _Py_COUNT_ALLOCS_COMMA
#define _Py_NewReference(op) (                          \
	_Py_INC_TPALLOCS(op) _Py_COUNT_ALLOCS_COMMA         \
	_Py_INC_REFTOTAL  _Py_REF_DEBUG_COMMA               \
	Py_REFCNT(op) = 1)
#define _Py_ForgetReference(op) _Py_INC_TPFREES(op)
#define _Py_Dealloc(op) (                               \
	_Py_INC_TPFREES(op) _Py_COUNT_ALLOCS_COMMA          \
	(*Py_TYPE(op)->tp_dealloc)((PyObject *)(op)))

/*
#define Py_INCREF(op) (                         \
	_Py_INC_REFTOTAL  _Py_REF_DEBUG_COMMA       \
	((PyObject*)(op))->ob_refcnt++)

#define Py_DECREF(op)                                   \
	do {                                                \
		if (_Py_DEC_REFTOTAL  _Py_REF_DEBUG_COMMA       \
		--((PyObject*)(op))->ob_refcnt != 0)            \
			_Py_CHECK_REFCNT(op)                        \
		else                                            \
		_Py_Dealloc((PyObject *)(op));                  \
	} while (0)*/
#define Py_CLEAR(op)                            \
	do {                                        \
		if (op) {                               \
			PyObject *_py_tmp = (PyObject *)(op);               \
			(op) = NULL;                        \
			Py_DECREF(_py_tmp);                 \
		}                                       \
	} while (0)
#define Py_None (&_Py_NoneStruct)
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define Py_NotImplemented (&_Py_NotImplementedStruct)
#define Py_LT 0
#define Py_LE 1
#define Py_EQ 2
#define Py_NE 3
#define Py_GT 4
#define Py_GE 5
#define staticforward static
#define statichere static
#define PyTrash_UNWIND_LEVEL 50

#define Py_TRASHCAN_SAFE_BEGIN(op) \
	if (_PyTrash_delete_nesting < PyTrash_UNWIND_LEVEL) { \
		++_PyTrash_delete_nesting;
		/* The body of the deallocator is here. */
#define Py_TRASHCAN_SAFE_END(op) \
		--_PyTrash_delete_nesting; \
		if (_PyTrash_delete_later && _PyTrash_delete_nesting <= 0) \
			_PyTrash_destroy_chain(); \
	} \
	else \
		_PyTrash_deposit_object((PyObject*)op);




/* PyList Stuff */
#define PyList_Check(op) \
		PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_LIST_SUBCLASS)
#define PyList_CheckExact(op) (Py_TYPE(op) == &PyList_Type)
#define PyList_GET_ITEM(op, i) (((PyListObject *)(op))->ob_item[i])
#define PyList_SET_ITEM(op, i, v) (((PyListObject *)(op))->ob_item[i] = (v))
#define PyList_GET_SIZE(op) Py_SIZE(op)


/* PyTuple Stuff */

#define PyTuple_Check(op) \
				 PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_TUPLE_SUBCLASS)
#define PyTuple_CheckExact(op) (Py_TYPE(op) == &PyTuple_Type)

#define PyTuple_GET_ITEM(op, i) (((PyTupleObject *)(op))->ob_item[i])
#define PyTuple_GET_SIZE(op)    Py_SIZE(op)
#define PyTuple_SET_ITEM(op, i, v) (((PyTupleObject *)(op))->ob_item[i] = v)

/* PyDict Stuff */

#define PyDict_MINSIZE 8

#define PyDict_Check(op) \
				 PyType_FastSubclass(Py_TYPE(op), Py_TPFLAGS_DICT_SUBCLASS)
#define PyDict_CheckExact(op) (Py_TYPE(op) == &PyDict_Type)
#define PyDictKeys_Check(op) (Py_TYPE(op) == &PyDictKeys_Type)
#define PyDictItems_Check(op) (Py_TYPE(op) == &PyDictItems_Type)
#define PyDictValues_Check(op) (Py_TYPE(op) == &PyDictValues_Type)
#define PyDictViewSet_Check(op) (PyDictKeys_Check(op) || PyDictItems_Check(op))

/* Code Stuff */
#define PY_PARSER_REQUIRES_FUTURE_KEYWORD
#define CO_MAXBLOCKS 20



/* Frame Stuff */
typedef struct {
	int b_type;			/* what kind of block this is */
	int b_handler;		/* where to jump to find handler */
	int b_level;		/* value stack level to pop to */
} PyTryBlock;

typedef struct _frame {
	PyObject_VAR_HEAD
	struct _frame *f_back;	/* previous frame, or NULL */
	PyCodeObject *f_code;	/* code segment */
	PyObject *f_builtins;	/* builtin symbol table (PyDictObject) */
	PyObject *f_globals;	/* global symbol table (PyDictObject) */
	PyObject *f_locals;		/* local symbol table (any mapping) */
	PyObject **f_valuestack;	/* points after the last local */
	/* Next free slot in f_valuestack.  Frame creation sets to f_valuestack.
	   Frame evaluation usually NULLs it, but a frame that yields sets it
	   to the current stack top. */
	PyObject **f_stacktop;
	PyObject *f_trace;		/* Trace function */

	/* If an exception is raised in this frame, the next three are used to
	 * record the exception info (if any) originally in the thread state.  See
	 * comments before set_exc_info() -- it's not obvious.
	 * Invariant:  if _type is NULL, then so are _value and _traceback.
	 * Desired invariant:  all three are NULL, or all three are non-NULL.  That
	 * one isn't currently true, but "should be".
	 */
	PyObject *f_exc_type, *f_exc_value, *f_exc_traceback;

	PyThreadState *f_tstate;
	int f_lasti;		/* Last instruction if called */
	/* Call PyFrame_GetLineNumber() instead of reading this field
	   directly.  As of 2.3 f_lineno is only valid when tracing is
	   active (i.e. when f_trace is set).  At other times we use
	   PyCode_Addr2Line to calculate the line from the current
	   bytecode index. */
	int f_lineno;		/* Current line number */
	int f_iblock;		/* index in f_blockstack */
	PyTryBlock f_blockstack[CO_MAXBLOCKS]; /* for try and loop blocks */
	PyObject *f_localsplus[1];	/* locals+stack, dynamically sized */
} PyFrameObject;

#undef DynLoad_Args

#ifdef __cplusplus
}
#endif

#endif