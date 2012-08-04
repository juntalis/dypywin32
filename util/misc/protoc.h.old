#if __STDC__ || defined(__cplusplus)
#define DynLoad_Args(s) s
#else
#define DynLoad_Args(s) ()
#endif

/* final.c */

typedef long long __int64;

typedef unsigned int uintptr_t;

typedef char * va_list;

typedef unsigned int size_t;

typedef size_t rsize_t;

typedef int intptr_t;

typedef int ptrdiff_t;

typedef unsigned short wchar_t;

typedef unsigned short wint_t;

typedef unsigned short wctype_t;

typedef int errno_t;

typedef long __time32_t;

typedef __int64 __time64_t;

typedef __time64_t time_t;

struct threadlocaleinfostruct;

struct threadmbcinfostruct;

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef struct threadmbcinfostruct * pthreadmbcinfo;

struct __lc_time_data;

typedef struct localeinfo_struct
{
 pthreadlocinfo locinfo;
 pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;

typedef struct tagLC_ID {
 unsigned short wLanguage;
 unsigned short wCountry;
 unsigned short wCodePage;
} LC_ID, *LPLC_ID;

typedef struct threadlocaleinfostruct {
 int refcount;
 unsigned int lc_codepage;
 unsigned int lc_collate_cp;
 unsigned long lc_handle[6];
 LC_ID lc_id[6];
 struct {
  char *locale;
  wchar_t *wlocale;
  int *refcount;
  int *wrefcount;
 } lc_category[6];
 int lc_clike;
 int mb_cur_max;
 int * lconv_intl_refcount;
 int * lconv_num_refcount;
 int * lconv_mon_refcount;
 struct lconv * lconv;
 int * ctype1_refcount;
 unsigned short * ctype1;
 const unsigned short * pctype;
 const unsigned char * pclmap;
 const unsigned char * pcumap;
 struct __lc_time_data * lc_time_curr;
} threadlocinfo;

typedef unsigned long _fsize_t;

struct _finddata32_t {
 unsigned attrib;
 __time32_t time_create;
 __time32_t time_access;
 __time32_t time_write;
 _fsize_t size;
 char name[260];
};

struct _finddata32i64_t {
 unsigned attrib;
 __time32_t time_create;
 __time32_t time_access;
 __time32_t time_write;
 __int64 size;
 char name[260];
};

struct _finddata64i32_t {
 unsigned attrib;
 __time64_t time_create;
 __time64_t time_access;
 __time64_t time_write;
 _fsize_t size;
 char name[260];
};

struct __finddata64_t {
 unsigned attrib;
 __time64_t time_create;
 __time64_t time_access;
 __time64_t time_write;
 __int64 size;
 char name[260];
};

struct _wfinddata32_t {
 unsigned attrib;
 __time32_t time_create;
 __time32_t time_access;
 __time32_t time_write;
 _fsize_t size;
 wchar_t name[260];
};

struct _wfinddata32i64_t {
 unsigned attrib;
 __time32_t time_create;
 __time32_t time_access;
 __time32_t time_write;
 __int64 size;
 wchar_t name[260];
};

struct _wfinddata64i32_t {
 unsigned attrib;
 __time64_t time_create;
 __time64_t time_access;
 __time64_t time_write;
 _fsize_t size;
 wchar_t name[260];
};

struct _wfinddata64_t {
 unsigned attrib;
 __time64_t time_create;
 __time64_t time_access;
 __time64_t time_write;
 __int64 size;
 wchar_t name[260];
};

typedef int ssize_t;

typedef int pid_t;

typedef unsigned long POINTER_64_INT;

typedef signed char INT8, *PINT8;

typedef signed short INT16, *PINT16;

typedef signed int INT32, *PINT32;

typedef signed __int64 INT64, *PINT64;

typedef unsigned char UINT8, *PUINT8;

typedef unsigned short UINT16, *PUINT16;

typedef unsigned int UINT32, *PUINT32;

typedef unsigned __int64 UINT64, *PUINT64;

typedef signed int LONG32, *PLONG32;

typedef unsigned int ULONG32, *PULONG32;

typedef unsigned int DWORD32, *PDWORD32;

typedef int INT_PTR, *PINT_PTR;

typedef unsigned int UINT_PTR, *PUINT_PTR;

typedef long LONG_PTR, *PLONG_PTR;

typedef unsigned long ULONG_PTR, *PULONG_PTR;

typedef unsigned short UHALF_PTR, *PUHALF_PTR;

typedef short HALF_PTR, *PHALF_PTR;

typedef long SHANDLE_PTR;

typedef unsigned long HANDLE_PTR;

typedef ULONG_PTR SIZE_T, *PSIZE_T;

typedef LONG_PTR SSIZE_T, *PSSIZE_T;

typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;

typedef __int64 LONG64, *PLONG64;

typedef unsigned __int64 ULONG64, *PULONG64;

typedef unsigned __int64 DWORD64, *PDWORD64;

typedef ULONG_PTR KAFFINITY;

typedef KAFFINITY *PKAFFINITY;

struct _iobuf {
 char *_ptr;
 int _cnt;
 char *_base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef __int64 fpos_t;

typedef int (* _onexit_t)();

typedef struct _div_t {
 int quot;
 int rem;
} div_t;

typedef struct _ldiv_t {
 long quot;
 long rem;
} ldiv_t;

typedef struct _lldiv_t {
 long long quot;
 long long rem;
} lldiv_t;

typedef struct {
 unsigned char ld[10];
} _LDOUBLE;

typedef struct {
 double x;
} _CRT_DOUBLE;

typedef struct {
 float f;
} _CRT_FLOAT;

typedef struct {
 long double x;
} _LONGDOUBLE;

typedef struct {
 unsigned char ld12[12];
} _LDBL12;

typedef void (*_purecall_handler)();

typedef void (*_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t);

typedef unsigned short wchar_t;

typedef unsigned int Py_uintptr_t;

typedef int Py_intptr_t;

typedef ssize_t Py_ssize_t;

struct _exception { int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
};

struct _complex { double x,y;
};

typedef long clock_t;

struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
};

typedef unsigned short _ino_t;

typedef unsigned short ino_t;

typedef unsigned int _dev_t;

typedef unsigned int dev_t;

typedef long _off_t;

typedef long off_t;

struct _stat32 {
 _dev_t st_dev;
 _ino_t st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 _off_t st_size;
 __time32_t st_atime;
 __time32_t st_mtime;
 __time32_t st_ctime;
};

struct stat {
 _dev_t st_dev;
 _ino_t st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 _off_t st_size;
 time_t st_atime;
 time_t st_mtime;
 time_t st_ctime;
};

struct _stat32i64 {
 _dev_t st_dev;
 _ino_t st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 __int64 st_size;
 __time32_t st_atime;
 __time32_t st_mtime;
 __time32_t st_ctime;
};

struct _stat64i32 {
 _dev_t st_dev;
 _ino_t st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 _off_t st_size;
 __time64_t st_atime;
 __time64_t st_mtime;
 __time64_t st_ctime;
};

struct _stat64 {
 _dev_t st_dev;
 _ino_t st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 _dev_t st_rdev;
 __int64 st_size;
 __time64_t st_atime;
 __time64_t st_mtime;
 __time64_t st_ctime;
};

extern void *PyMem_Malloc DynLoad_Args((size_t));
extern void *PyMem_Realloc DynLoad_Args((void *, size_t));
extern void PyMem_Free DynLoad_Args((void *));

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
 *buf;
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
 *internal;
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

extern int PyType_IsSubtype DynLoad_Args((PyTypeObject *, PyTypeObject *));
extern int PyType_Ready DynLoad_Args((PyTypeObject *));
extern PyObject *PyType_GenericAlloc DynLoad_Args((PyTypeObject *, Py_ssize_t));
extern PyObject *PyType_GenericNew DynLoad_Args((PyTypeObject *, PyObject *, PyObject *));
extern PyObject *_PyType_Lookup DynLoad_Args((PyTypeObject *, PyObject *));
extern PyObject *_PyObject_LookupSpecial DynLoad_Args((PyObject *, char *, PyObject **));
extern unsigned int PyType_ClearCache DynLoad_Args((void));
extern void PyType_Modified DynLoad_Args((PyTypeObject *));
extern int PyObject_Print DynLoad_Args((PyObject *, FILE *, int));
extern void _PyObject_Dump DynLoad_Args((PyObject *));
extern PyObject *PyObject_Repr DynLoad_Args((PyObject *));
extern PyObject *_PyObject_Str DynLoad_Args((PyObject *));
extern PyObject *PyObject_Str DynLoad_Args((PyObject *));
extern PyObject *PyObject_Unicode DynLoad_Args((PyObject *));
extern int PyObject_Compare DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyObject_RichCompare DynLoad_Args((PyObject *, PyObject *, int));
extern int PyObject_RichCompareBool DynLoad_Args((PyObject *, PyObject *, int));
extern PyObject *PyObject_GetAttrString DynLoad_Args((PyObject *, const char *));
extern int PyObject_SetAttrString DynLoad_Args((PyObject *, const char *, PyObject *));
extern int PyObject_HasAttrString DynLoad_Args((PyObject *, const char *));
extern PyObject *PyObject_GetAttr DynLoad_Args((PyObject *, PyObject *));
extern int PyObject_SetAttr DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern int PyObject_HasAttr DynLoad_Args((PyObject *, PyObject *));
extern PyObject **_PyObject_GetDictPtr DynLoad_Args((PyObject *));
extern PyObject *PyObject_SelfIter DynLoad_Args((PyObject *));
extern PyObject *_PyObject_NextNotImplemented DynLoad_Args((PyObject *));
extern PyObject *PyObject_GenericGetAttr DynLoad_Args((PyObject *, PyObject *));
extern int PyObject_GenericSetAttr DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern long PyObject_Hash DynLoad_Args((PyObject *));
extern long PyObject_HashNotImplemented DynLoad_Args((PyObject *));
extern int PyObject_IsTrue DynLoad_Args((PyObject *));
extern int PyObject_Not DynLoad_Args((PyObject *));
extern int PyCallable_Check DynLoad_Args((PyObject *));
extern int PyNumber_Coerce DynLoad_Args((PyObject **, PyObject **));
extern int PyNumber_CoerceEx DynLoad_Args((PyObject **, PyObject **));
extern void PyObject_ClearWeakRefs DynLoad_Args((PyObject *));
extern int _PyObject_SlotCompare DynLoad_Args((PyObject *, PyObject *));
extern PyObject *_PyObject_GenericGetAttrWithDict DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern int _PyObject_GenericSetAttrWithDict DynLoad_Args((PyObject *, PyObject *, PyObject *, PyObject *));
extern PyObject *PyObject_Dir DynLoad_Args((PyObject *));
extern int Py_ReprEnter DynLoad_Args((PyObject *));
extern void Py_ReprLeave DynLoad_Args((PyObject *));
extern long _Py_HashDouble DynLoad_Args((double));
extern long _Py_HashPointer DynLoad_Args((void *));
extern void Py_IncRef DynLoad_Args((PyObject *));
extern void Py_DecRef DynLoad_Args((PyObject *));
extern void _PyTrash_deposit_object DynLoad_Args((PyObject *));
extern void _PyTrash_destroy_chain DynLoad_Args((void));
extern void *PyObject_Malloc DynLoad_Args((size_t));
extern void *PyObject_Realloc DynLoad_Args((void *, size_t));
extern void PyObject_Free DynLoad_Args((void *));
extern PyObject *PyObject_Init DynLoad_Args((PyObject *, PyTypeObject *));
extern PyVarObject *PyObject_InitVar DynLoad_Args((PyVarObject *, PyTypeObject *, Py_ssize_t));
extern PyObject *_PyObject_New DynLoad_Args((PyTypeObject *));
extern PyVarObject *_PyObject_NewVar DynLoad_Args((PyTypeObject *, Py_ssize_t));
extern int Py_ssize_tPyGC_Collect DynLoad_Args((void));
extern PyVarObject *_PyObject_GC_Resize DynLoad_Args((PyVarObject *, Py_ssize_t));

typedef union _gc_head {
 struct {
  union _gc_head *gc_next;
  union _gc_head *gc_prev;
  Py_ssize_t gc_refs;
 } gc;
 long double dummy;
} PyGC_Head;

extern PyObject *_PyObject_GC_Malloc DynLoad_Args((size_t));
extern PyObject *_PyObject_GC_New DynLoad_Args((PyTypeObject *));
extern PyVarObject *_PyObject_GC_NewVar DynLoad_Args((PyTypeObject *, Py_ssize_t));
extern void PyObject_GC_Track DynLoad_Args((void *));
extern void PyObject_GC_UnTrack DynLoad_Args((void *));
extern void PyObject_GC_Del DynLoad_Args((void *));
extern void Py_FatalError DynLoad_Args((const char *message));

typedef __builtin_va_list va_list;

typedef __builtin_va_list __gnuc_va_list;

typedef int mbstate_t;

typedef wchar_t _Wint_t;

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

extern PyObject *PyUnicodeUCS2_FromUnicode DynLoad_Args((const Py_UNICODE *u, Py_ssize_t size));
extern PyObject *PyUnicodeUCS2_FromStringAndSize DynLoad_Args((const char *u, Py_ssize_t size));
extern PyObject *PyUnicodeUCS2_FromString DynLoad_Args((const char *u));
extern Py_UNICODE *PyUnicodeUCS2_AsUnicode DynLoad_Args((PyObject *unicode));
extern int Py_ssize_tPyUnicodeUCS2_GetSize DynLoad_Args((PyObject *unicode));
extern int Py_UNICODEPyUnicodeUCS2_GetMax DynLoad_Args((void));
extern int PyUnicodeUCS2_Resize DynLoad_Args((PyObject **unicode, Py_ssize_t length));
extern PyObject *PyUnicodeUCS2_FromEncodedObject DynLoad_Args((register PyObject *obj, const char *encoding, const char *errors));
extern PyObject *PyUnicodeUCS2_FromObject DynLoad_Args((register PyObject *obj));
extern PyObject *PyUnicodeUCS2_FromFormatV DynLoad_Args((const char *, va_list));
extern PyObject *PyUnicodeUCS2_FromFormat DynLoad_Args((const char *, ...));
extern PyObject *_PyUnicode_FormatAdvanced DynLoad_Args((PyObject *obj, Py_UNICODE *format_spec, Py_ssize_t format_spec_len));
extern PyObject *PyUnicodeUCS2_FromWideChar DynLoad_Args((register const wchar_t *w, Py_ssize_t size));
extern int Py_ssize_tPyUnicodeUCS2_AsWideChar DynLoad_Args((PyUnicodeObject *unicode, register wchar_t *w, Py_ssize_t size));
extern PyObject *PyUnicodeUCS2_FromOrdinal DynLoad_Args((int ordinal));
extern int PyUnicodeUCS2_ClearFreelist DynLoad_Args((void));
extern PyObject *_PyUnicodeUCS2_AsDefaultEncodedString DynLoad_Args((PyObject *, const char *));
extern const char *PyUnicodeUCS2_GetDefaultEncoding DynLoad_Args((void));
extern int PyUnicodeUCS2_SetDefaultEncoding DynLoad_Args((const char *encoding));
extern PyObject *PyUnicodeUCS2_Decode DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors));
extern PyObject *PyUnicodeUCS2_Encode DynLoad_Args((const Py_UNICODE *s, Py_ssize_t size, const char *encoding, const char *errors));
extern PyObject *PyUnicodeUCS2_AsEncodedObject DynLoad_Args((PyObject *unicode, const char *encoding, const char *errors));
extern PyObject *PyUnicodeUCS2_AsEncodedString DynLoad_Args((PyObject *unicode, const char *encoding, const char *errors));
extern PyObject *PyUnicode_BuildEncodingMap DynLoad_Args((PyObject *string));
extern PyObject *PyUnicode_DecodeUTF7 DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicode_DecodeUTF7Stateful DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed));
extern PyObject *PyUnicode_EncodeUTF7 DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, int base64SetO, int base64WhiteSpace, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeUTF8 DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeUTF8Stateful DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed));
extern PyObject *PyUnicodeUCS2_AsUTF8String DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeUTF8 DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeUTF32 DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder));
extern PyObject *PyUnicodeUCS2_DecodeUTF32Stateful DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed));
extern PyObject *PyUnicodeUCS2_AsUTF32String DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeUTF32 DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder));
extern PyObject *PyUnicodeUCS2_DecodeUTF16 DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder));
extern PyObject *PyUnicodeUCS2_DecodeUTF16Stateful DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed));
extern PyObject *PyUnicodeUCS2_AsUTF16String DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeUTF16 DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder));
extern PyObject *PyUnicodeUCS2_DecodeUnicodeEscape DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_AsUnicodeEscapeString DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeUnicodeEscape DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length));
extern PyObject *PyUnicodeUCS2_DecodeRawUnicodeEscape DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_AsRawUnicodeEscapeString DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeRawUnicodeEscape DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length));
extern PyObject *_PyUnicode_DecodeUnicodeInternal DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeLatin1 DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_AsLatin1String DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeLatin1 DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeASCII DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_AsASCIIString DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicodeUCS2_EncodeASCII DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicodeUCS2_DecodeCharmap DynLoad_Args((const char *string, Py_ssize_t length, PyObject *mapping, const char *errors));
extern PyObject *PyUnicodeUCS2_AsCharmapString DynLoad_Args((PyObject *unicode, PyObject *mapping));
extern PyObject *PyUnicodeUCS2_EncodeCharmap DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, PyObject *mapping, const char *errors));
extern PyObject *PyUnicodeUCS2_TranslateCharmap DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, PyObject *table, const char *errors));
extern PyObject *PyUnicode_DecodeMBCS DynLoad_Args((const char *string, Py_ssize_t length, const char *errors));
extern PyObject *PyUnicode_DecodeMBCSStateful DynLoad_Args((const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed));
extern PyObject *PyUnicode_AsMBCSString DynLoad_Args((PyObject *unicode));
extern PyObject *PyUnicode_EncodeMBCS DynLoad_Args((const Py_UNICODE *data, Py_ssize_t length, const char *errors));
extern int PyUnicodeUCS2_EncodeDecimal DynLoad_Args((Py_UNICODE *s, Py_ssize_t length, char *output, const char *errors));
extern PyObject *PyUnicodeUCS2_Concat DynLoad_Args((PyObject *left, PyObject *right));
extern PyObject *PyUnicodeUCS2_Split DynLoad_Args((PyObject *s, PyObject *sep, Py_ssize_t maxsplit));
extern PyObject *PyUnicodeUCS2_Splitlines DynLoad_Args((PyObject *s, int keepends));
extern PyObject *PyUnicodeUCS2_Partition DynLoad_Args((PyObject *s, PyObject *sep));
extern PyObject *PyUnicodeUCS2_RPartition DynLoad_Args((PyObject *s, PyObject *sep));
extern PyObject *PyUnicodeUCS2_RSplit DynLoad_Args((PyObject *s, PyObject *sep, Py_ssize_t maxsplit));
extern PyObject *PyUnicodeUCS2_Translate DynLoad_Args((PyObject *str, PyObject *table, const char *errors));
extern PyObject *PyUnicodeUCS2_Join DynLoad_Args((PyObject *separator, PyObject *seq));
extern int Py_ssize_tPyUnicodeUCS2_Tailmatch DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction));
extern int Py_ssize_tPyUnicodeUCS2_Find DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction));
extern int Py_ssize_tPyUnicodeUCS2_Count DynLoad_Args((PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end));
extern PyObject *PyUnicodeUCS2_Replace DynLoad_Args((PyObject *str, PyObject *substr, PyObject *replstr, Py_ssize_t maxcount));
extern int PyUnicodeUCS2_Compare DynLoad_Args((PyObject *left, PyObject *right));
extern PyObject *PyUnicodeUCS2_RichCompare DynLoad_Args((PyObject *left, PyObject *right, int op));
extern PyObject *PyUnicodeUCS2_Format DynLoad_Args((PyObject *format, PyObject *args));
extern int PyUnicodeUCS2_Contains DynLoad_Args((PyObject *container, PyObject *element));
extern PyObject *_PyUnicode_XStrip DynLoad_Args((PyUnicodeObject *self, int striptype, PyObject *sepobj));
extern int _PyUnicodeUCS2_IsLowercase DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsUppercase DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsTitlecase DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsWhitespace DynLoad_Args((const Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsLinebreak DynLoad_Args((const Py_UNICODE ch));
extern int Py_UNICODE_PyUnicodeUCS2_ToLowercase DynLoad_Args((Py_UNICODE ch));
extern int Py_UNICODE_PyUnicodeUCS2_ToUppercase DynLoad_Args((Py_UNICODE ch));
extern int Py_UNICODE_PyUnicodeUCS2_ToTitlecase DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_ToDecimalDigit DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_ToDigit DynLoad_Args((Py_UNICODE ch));
extern double _PyUnicodeUCS2_ToNumeric DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsDecimalDigit DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsDigit DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsNumeric DynLoad_Args((Py_UNICODE ch));
extern int _PyUnicodeUCS2_IsAlpha DynLoad_Args((Py_UNICODE ch));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 long ob_ival;
} PyIntObject;

extern PyObject *PyInt_FromString DynLoad_Args((char *, char **, int));
extern PyObject *PyInt_FromUnicode DynLoad_Args((Py_UNICODE *, Py_ssize_t, int));
extern PyObject *PyInt_FromLong DynLoad_Args((long));
extern PyObject *PyInt_FromSize_t DynLoad_Args((size_t));
extern PyObject *PyInt_FromSsize_t DynLoad_Args((Py_ssize_t));
extern long PyInt_AsLong DynLoad_Args((PyObject *));
extern int Py_ssize_tPyInt_AsSsize_t DynLoad_Args((PyObject *));
extern unsigned long PyInt_AsUnsignedLongMask DynLoad_Args((PyObject *));
extern unsigned __int64 PyInt_AsUnsignedLongLongMask DynLoad_Args((PyObject *));
extern long PyInt_GetMax DynLoad_Args((void));
extern unsigned long PyOS_strtoul DynLoad_Args((char *, char **, int));
extern long PyOS_strtol DynLoad_Args((char *, char **, int));
extern int PyInt_ClearFreeList DynLoad_Args((void));
extern PyObject *_PyInt_Format DynLoad_Args((PyIntObject *v, int base, int newstyle));
extern PyObject *_PyInt_FormatAdvanced DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len));

typedef PyIntObject PyBoolObject;

extern PyObject *PyBool_FromLong DynLoad_Args((long));

typedef struct _longobject PyLongObject;

extern PyObject *PyLong_FromLong DynLoad_Args((long));
extern PyObject *PyLong_FromUnsignedLong DynLoad_Args((unsigned long));
extern PyObject *PyLong_FromDouble DynLoad_Args((double));
extern PyObject *PyLong_FromSize_t DynLoad_Args((size_t));
extern PyObject *PyLong_FromSsize_t DynLoad_Args((Py_ssize_t));
extern long PyLong_AsLong DynLoad_Args((PyObject *));
extern long PyLong_AsLongAndOverflow DynLoad_Args((PyObject *, int *));
extern unsigned long PyLong_AsUnsignedLong DynLoad_Args((PyObject *));
extern unsigned long PyLong_AsUnsignedLongMask DynLoad_Args((PyObject *));
extern int Py_ssize_tPyLong_AsSsize_t DynLoad_Args((PyObject *));
extern PyObject *PyLong_GetInfo DynLoad_Args((void));
extern double _PyLong_Frexp DynLoad_Args((PyLongObject *a, Py_ssize_t *e));
extern double PyLong_AsDouble DynLoad_Args((PyObject *));
extern PyObject *PyLong_FromPtr DynLoad_Args((void *));
extern void *PyLong_AsPtr DynLoad_Args((PyObject *));
extern PyObject *PyLong_FromLongLong DynLoad_Args((__int64));
extern PyObject *PyLong_FromUnsignedLongLong DynLoad_Args((unsigned __int64));
extern __int64 PyLong_AsLongLong DynLoad_Args((PyObject *));
extern unsigned __int64 PyLong_AsUnsignedLongLong DynLoad_Args((PyObject *));
extern unsigned __int64 PyLong_AsUnsignedLongLongMask DynLoad_Args((PyObject *));
extern __int64 PyLong_AsLongLongAndOverflow DynLoad_Args((PyObject *, int *));
extern PyObject *PyLong_FromString DynLoad_Args((char *, char **, int));
extern PyObject *PyLong_FromUnicode DynLoad_Args((Py_UNICODE *, Py_ssize_t, int));
extern int _PyLong_Sign DynLoad_Args((PyObject *v));
extern size_t _PyLong_NumBits DynLoad_Args((PyObject *v));
extern PyObject *_PyLong_FromByteArray DynLoad_Args((const unsigned char *bytes, size_t n, int little_endian, int is_signed));
extern int _PyLong_AsByteArray DynLoad_Args((PyLongObject *v, unsigned char *bytes, size_t n, int little_endian, int is_signed));
extern PyObject *_PyLong_Format DynLoad_Args((PyObject *aa, int base, int addL, int newstyle));
extern PyObject *_PyLong_FormatAdvanced DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 double ob_fval;
} PyFloatObject;

extern double PyFloat_GetMax DynLoad_Args((void));
extern double PyFloat_GetMin DynLoad_Args((void));
extern PyObject *PyFloat_GetInfo DynLoad_Args((void));
extern PyObject *PyFloat_FromString DynLoad_Args((PyObject *, char **junk));
extern PyObject *PyFloat_FromDouble DynLoad_Args((double));
extern double PyFloat_AsDouble DynLoad_Args((PyObject *));
extern void PyFloat_AsReprString DynLoad_Args((char *, PyFloatObject *v));
extern void PyFloat_AsString DynLoad_Args((char *, PyFloatObject *v));
extern int _PyFloat_Pack4 DynLoad_Args((double x, unsigned char *p, int le));
extern int _PyFloat_Pack8 DynLoad_Args((double x, unsigned char *p, int le));
extern int _PyFloat_Digits DynLoad_Args((char *buf, double v, int *signum));
extern void _PyFloat_DigitsInit DynLoad_Args((void));
extern double _PyFloat_Unpack4 DynLoad_Args((const unsigned char *p, int le));
extern double _PyFloat_Unpack8 DynLoad_Args((const unsigned char *p, int le));
extern int PyFloat_ClearFreeList DynLoad_Args((void));
extern PyObject *_PyFloat_FormatAdvanced DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len));
extern PyObject *_Py_double_round DynLoad_Args((double x, int ndigits));

typedef struct {
 double real;
 double imag;
} Py_complex;

extern int Py_complex_Py_c_sum DynLoad_Args((Py_complex, Py_complex));
extern int Py_complex_Py_c_diff DynLoad_Args((Py_complex, Py_complex));
extern int Py_complex_Py_c_neg DynLoad_Args((Py_complex));
extern int Py_complex_Py_c_prod DynLoad_Args((Py_complex, Py_complex));
extern int Py_complex_Py_c_quot DynLoad_Args((Py_complex, Py_complex));
extern int Py_complex_Py_c_pow DynLoad_Args((Py_complex, Py_complex));
extern double _Py_c_abs DynLoad_Args((Py_complex));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_complex cval;
} PyComplexObject;

extern PyObject *PyComplex_FromCComplex DynLoad_Args((Py_complex));
extern PyObject *PyComplex_FromDoubles DynLoad_Args((double real, double imag));
extern double PyComplex_RealAsDouble DynLoad_Args((PyObject *op));
extern double PyComplex_ImagAsDouble DynLoad_Args((PyObject *op));
extern int Py_complexPyComplex_AsCComplex DynLoad_Args((PyObject *op));
extern PyObject *_PyComplex_FormatAdvanced DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 long ob_shash;
 int ob_sstate;
 char ob_sval[1];
} PyStringObject;

extern PyObject *PyString_FromStringAndSize DynLoad_Args((const char *, Py_ssize_t));
extern PyObject *PyString_FromString DynLoad_Args((const char *));
extern PyObject *PyString_FromFormatV DynLoad_Args((const char *, va_list));
extern PyObject *PyString_FromFormat DynLoad_Args((const char *, ...));
extern int Py_ssize_tPyString_Size DynLoad_Args((PyObject *));
extern char *PyString_AsString DynLoad_Args((PyObject *));
extern PyObject *PyString_Repr DynLoad_Args((PyObject *, int));
extern void PyString_Concat DynLoad_Args((PyObject **, PyObject *));
extern void PyString_ConcatAndDel DynLoad_Args((PyObject **, PyObject *));
extern int _PyString_Resize DynLoad_Args((PyObject **, Py_ssize_t));
extern int _PyString_Eq DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyString_Format DynLoad_Args((PyObject *, PyObject *));
extern PyObject *_PyString_FormatLong DynLoad_Args((PyObject *, int, int, int, char **, int *));
extern PyObject *PyString_DecodeEscape DynLoad_Args((const char *, Py_ssize_t, const char *, Py_ssize_t, const char *));
extern void PyString_InternInPlace DynLoad_Args((PyObject **));
extern void PyString_InternImmortal DynLoad_Args((PyObject **));
extern PyObject *PyString_InternFromString DynLoad_Args((const char *));
extern void _Py_ReleaseInternedStrings DynLoad_Args((void));
extern PyObject *_PyString_Join DynLoad_Args((PyObject *sep, PyObject *x));
extern PyObject *PyString_Decode DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors));
extern PyObject *PyString_Encode DynLoad_Args((const char *s, Py_ssize_t size, const char *encoding, const char *errors));
extern PyObject *PyString_AsEncodedObject DynLoad_Args((PyObject *str, const char *encoding, const char *errors));
extern PyObject *PyString_AsEncodedString DynLoad_Args((PyObject *str, const char *encoding, const char *errors));
extern PyObject *PyString_AsDecodedObject DynLoad_Args((PyObject *str, const char *encoding, const char *errors));
extern PyObject *PyString_AsDecodedString DynLoad_Args((PyObject *str, const char *encoding, const char *errors));
extern int PyString_AsStringAndSize DynLoad_Args((register PyObject *obj, register char **s, register Py_ssize_t *len));
extern int Py_ssize_t_PyString_InsertThousandsGroupingLocale DynLoad_Args((char *buffer, Py_ssize_t n_buffer, char *digits, Py_ssize_t n_digits, Py_ssize_t min_width));
extern int Py_ssize_t_PyString_InsertThousandsGrouping DynLoad_Args((char *buffer, Py_ssize_t n_buffer, char *digits, Py_ssize_t n_digits, Py_ssize_t min_width, const char *grouping, const char *thousands_sep));
extern PyObject *_PyBytes_FormatAdvanced DynLoad_Args((PyObject *obj, char *format_spec, Py_ssize_t format_spec_len));
extern PyObject *PyMemoryView_GetContiguous DynLoad_Args((PyObject *base, int buffertype, char fort));
extern PyObject *PyMemoryView_FromObject DynLoad_Args((PyObject *base));
extern PyObject *PyMemoryView_FromBuffer DynLoad_Args((Py_buffer *info));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *base;
 Py_buffer view;
} PyMemoryViewObject;

extern PyObject *PyBuffer_FromObject DynLoad_Args((PyObject *base, Py_ssize_t offset, Py_ssize_t size));
extern PyObject *PyBuffer_FromReadWriteObject DynLoad_Args((PyObject *base, Py_ssize_t offset, Py_ssize_t size));
extern PyObject *PyBuffer_FromMemory DynLoad_Args((void *ptr, Py_ssize_t size));
extern PyObject *PyBuffer_FromReadWriteMemory DynLoad_Args((void *ptr, Py_ssize_t size));
extern PyObject *PyBuffer_New DynLoad_Args((Py_ssize_t size));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 int ob_exports;
 Py_ssize_t ob_alloc;
 char *ob_bytes;
} PyByteArrayObject;

extern PyObject *PyByteArray_FromObject DynLoad_Args((PyObject *));
extern PyObject *PyByteArray_Concat DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyByteArray_FromStringAndSize DynLoad_Args((const char *, Py_ssize_t));
extern int Py_ssize_tPyByteArray_Size DynLoad_Args((PyObject *));
extern char *PyByteArray_AsString DynLoad_Args((PyObject *));
extern int PyByteArray_Resize DynLoad_Args((PyObject *, Py_ssize_t));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 PyObject *ob_item[1];
} PyTupleObject;

extern PyObject *PyTuple_New DynLoad_Args((Py_ssize_t size));
extern int Py_ssize_tPyTuple_Size DynLoad_Args((PyObject *));
extern PyObject *PyTuple_GetItem DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyTuple_SetItem DynLoad_Args((PyObject *, Py_ssize_t, PyObject *));
extern PyObject *PyTuple_GetSlice DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t));
extern int _PyTuple_Resize DynLoad_Args((PyObject **, Py_ssize_t));
extern PyObject *PyTuple_Pack DynLoad_Args((Py_ssize_t, ...));
extern void _PyTuple_MaybeUntrack DynLoad_Args((PyObject *));
extern int PyTuple_ClearFreeList DynLoad_Args((void));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 Py_ssize_t ob_size;
 PyObject **ob_item;
 Py_ssize_t allocated;
} PyListObject;

extern PyObject *PyList_New DynLoad_Args((Py_ssize_t size));
extern int Py_ssize_tPyList_Size DynLoad_Args((PyObject *));
extern PyObject *PyList_GetItem DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyList_SetItem DynLoad_Args((PyObject *, Py_ssize_t, PyObject *));
extern int PyList_Insert DynLoad_Args((PyObject *, Py_ssize_t, PyObject *));
extern int PyList_Append DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyList_GetSlice DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t));
extern int PyList_SetSlice DynLoad_Args((PyObject *, Py_ssize_t, Py_ssize_t, PyObject *));
extern int PyList_Sort DynLoad_Args((PyObject *));
extern int PyList_Reverse DynLoad_Args((PyObject *));
extern PyObject *PyList_AsTuple DynLoad_Args((PyObject *));
extern PyObject *_PyList_Extend DynLoad_Args((PyListObject *, PyObject *));

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
 PyDictEntry *(void*ma_lookup)(PyDictObject *mp, PyObject *key, long hash);
 PyDictEntry ma_smalltable[8];
};

extern PyObject *PyDict_New DynLoad_Args((void));
extern PyObject *PyDict_GetItem DynLoad_Args((PyObject *mp, PyObject *key));
extern int PyDict_SetItem DynLoad_Args((PyObject *mp, PyObject *key, PyObject *item));
extern int PyDict_DelItem DynLoad_Args((PyObject *mp, PyObject *key));
extern void PyDict_Clear DynLoad_Args((PyObject *mp));
extern int PyDict_Next DynLoad_Args((PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value));
extern int _PyDict_Next DynLoad_Args((PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, long *hash));
extern PyObject *PyDict_Keys DynLoad_Args((PyObject *mp));
extern PyObject *PyDict_Values DynLoad_Args((PyObject *mp));
extern PyObject *PyDict_Items DynLoad_Args((PyObject *mp));
extern int Py_ssize_tPyDict_Size DynLoad_Args((PyObject *mp));
extern PyObject *PyDict_Copy DynLoad_Args((PyObject *mp));
extern int PyDict_Contains DynLoad_Args((PyObject *mp, PyObject *key));
extern int _PyDict_Contains DynLoad_Args((PyObject *mp, PyObject *key, long hash));
extern PyObject *_PyDict_NewPresized DynLoad_Args((Py_ssize_t minused));
extern void _PyDict_MaybeUntrack DynLoad_Args((PyObject *mp));
extern int PyDict_Update DynLoad_Args((PyObject *mp, PyObject *other));
extern int PyDict_Merge DynLoad_Args((PyObject *mp, PyObject *other, int override));
extern int PyDict_MergeFromSeq2 DynLoad_Args((PyObject *d, PyObject *seq2, int override));
extern PyObject *PyDict_GetItemString DynLoad_Args((PyObject *dp, const char *key));
extern int PyDict_SetItemString DynLoad_Args((PyObject *dp, const char *key, PyObject *item));
extern int PyDict_DelItemString DynLoad_Args((PyObject *dp, const char *key));

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
 setentry *(void*lookup)(PySetObject *so, PyObject *key, long hash);
 setentry smalltable[8];
 long hash;
 PyObject *weakreflist;
};

extern PyObject *PySet_New DynLoad_Args((PyObject *));
extern PyObject *PyFrozenSet_New DynLoad_Args((PyObject *));
extern int Py_ssize_tPySet_Size DynLoad_Args((PyObject *anyset));
extern int PySet_Clear DynLoad_Args((PyObject *set));
extern int PySet_Contains DynLoad_Args((PyObject *anyset, PyObject *key));
extern int PySet_Discard DynLoad_Args((PyObject *set, PyObject *key));
extern int PySet_Add DynLoad_Args((PyObject *set, PyObject *key));
extern int _PySet_Next DynLoad_Args((PyObject *set, Py_ssize_t *pos, PyObject **key));
extern int _PySet_NextEntry DynLoad_Args((PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash));
extern PyObject *PySet_Pop DynLoad_Args((PyObject *set));
extern int _PySet_Update DynLoad_Args((PyObject *set, PyObject *iterable));

typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);

typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,PyObject *);

typedef PyObject *(*PyNoArgsFunction)(PyObject *);

extern int PyCFunctionPyCFunction_GetFunction DynLoad_Args((PyObject *));
extern PyObject *PyCFunction_GetSelf DynLoad_Args((PyObject *));
extern int PyCFunction_GetFlags DynLoad_Args((PyObject *));
extern PyObject *PyCFunction_Call DynLoad_Args((PyObject *, PyObject *, PyObject *));

struct PyMethodDef {
 const char *ml_name;
 PyCFunction ml_meth;
 int ml_flags;
 const char *ml_doc;
};

typedef struct PyMethodDef PyMethodDef;

extern PyObject *Py_FindMethod DynLoad_Args((PyMethodDef [], PyObject *, const char *));
extern PyObject *PyCFunction_NewEx DynLoad_Args((PyMethodDef *, PyObject *, PyObject *));

typedef struct PyMethodChain {
 PyMethodDef *methods;
 struct PyMethodChain *link;
} PyMethodChain;

extern PyObject *Py_FindMethodInChain DynLoad_Args((PyMethodChain *, PyObject *, const char *));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyMethodDef *m_ml;
 PyObject *m_self;
 PyObject *m_module;
} PyCFunctionObject;

extern int PyCFunction_ClearFreeList DynLoad_Args((void));
extern PyObject *PyModule_New DynLoad_Args((const char *));
extern PyObject *PyModule_GetDict DynLoad_Args((PyObject *));
extern char *PyModule_GetName DynLoad_Args((PyObject *));
extern char *PyModule_GetFilename DynLoad_Args((PyObject *));
extern void _PyModule_Clear DynLoad_Args((PyObject *));

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

extern PyObject *PyFunction_New DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyFunction_GetCode DynLoad_Args((PyObject *));
extern PyObject *PyFunction_GetGlobals DynLoad_Args((PyObject *));
extern PyObject *PyFunction_GetModule DynLoad_Args((PyObject *));
extern PyObject *PyFunction_GetDefaults DynLoad_Args((PyObject *));
extern int PyFunction_SetDefaults DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyFunction_GetClosure DynLoad_Args((PyObject *));
extern int PyFunction_SetClosure DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyClassMethod_New DynLoad_Args((PyObject *));
extern PyObject *PyStaticMethod_New DynLoad_Args((PyObject *));

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

extern PyObject *PyClass_New DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern PyObject *PyInstance_New DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern PyObject *PyInstance_NewRaw DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyMethod_New DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern PyObject *PyMethod_Function DynLoad_Args((PyObject *));
extern PyObject *PyMethod_Self DynLoad_Args((PyObject *));
extern PyObject *PyMethod_Class DynLoad_Args((PyObject *));
extern PyObject *_PyInstance_Lookup DynLoad_Args((PyObject *pinst, PyObject *name));
extern int PyClass_IsSubclass DynLoad_Args((PyObject *, PyObject *));
extern int PyMethod_ClearFreeList DynLoad_Args((void));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 FILE *f_fp;
 PyObject *f_name;
 PyObject *f_mode;
 int (void*f_close)(FILE *);
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

extern PyObject *PyFile_FromString DynLoad_Args((char *, char *));
extern void PyFile_SetBufSize DynLoad_Args((PyObject *, int));
extern int PyFile_SetEncoding DynLoad_Args((PyObject *, const char *));
extern int PyFile_SetEncodingAndErrors DynLoad_Args((PyObject *, const char *, char *errors));
extern PyObject *PyFile_FromFile DynLoad_Args((FILE *fp, char *name, char *mode, int (*close)(FILE *)));
extern FILE *PyFile_AsFile DynLoad_Args((PyObject *));
extern void PyFile_IncUseCount DynLoad_Args((PyFileObject *));
extern void PyFile_DecUseCount DynLoad_Args((PyFileObject *));
extern PyObject *PyFile_Name DynLoad_Args((PyObject *));
extern PyObject *PyFile_GetLine DynLoad_Args((PyObject *, int));
extern int PyFile_WriteObject DynLoad_Args((PyObject *, PyObject *, int));
extern int PyFile_SoftSpace DynLoad_Args((PyObject *, int));
extern int PyFile_WriteString DynLoad_Args((const char *, PyObject *));
extern int PyObject_AsFileDescriptor DynLoad_Args((PyObject *));
extern char *Py_UniversalNewlineFgets DynLoad_Args((char *, int, FILE *, PyObject *));
extern size_t Py_UniversalNewlineFread DynLoad_Args((char *, size_t, FILE *, PyObject *));
extern int _PyFile_SanitizeMode DynLoad_Args((char *mode));
extern PyObject *PyCObject_FromPtr DynLoad_Args((void *cobj, void (*destr)(void *)));
extern PyObject *PyCObject_FromVoidPtrAndDesc DynLoad_Args((void *cobj, void *desc, void (*destr)(void *, void *)));
extern void *PyCObject_AsPtr DynLoad_Args((PyObject *));
extern void *PyCObject_GetDesc DynLoad_Args((PyObject *));
extern void *PyCObject_Import DynLoad_Args((char *module_name, char *cobject_name));
extern int PyCObject_SetPtr DynLoad_Args((PyObject *self, void *cobj));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 void *cobject;
 void *desc;
 void (*destructor)(void *);
} PyCObject;

typedef void (*PyCapsule_Destructor)(PyObject *);

extern PyObject *PyCapsule_New DynLoad_Args((void *pointer, const char *name, PyCapsule_Destructor destructor));
extern void *PyCapsule_GetPointer DynLoad_Args((PyObject *capsule, const char *name));
extern int PyCapsule_DestructorPyCapsule_GetDestructor DynLoad_Args((PyObject *capsule));
extern const char *PyCapsule_GetName DynLoad_Args((PyObject *capsule));
extern void *PyCapsule_GetContext DynLoad_Args((PyObject *capsule));
extern int PyCapsule_IsValid DynLoad_Args((PyObject *capsule, const char *name));
extern int PyCapsule_SetPointer DynLoad_Args((PyObject *capsule, void *pointer));
extern int PyCapsule_SetDestructor DynLoad_Args((PyObject *capsule, PyCapsule_Destructor destructor));
extern int PyCapsule_SetName DynLoad_Args((PyObject *capsule, const char *name));
extern int PyCapsule_SetContext DynLoad_Args((PyObject *capsule, void *context));
extern void *PyCapsule_Import DynLoad_Args((const char *name, int no_block));

struct _frame;

typedef struct _traceback {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 struct _traceback *tb_next;
 struct _frame *tb_frame;
 int tb_lasti;
 int tb_lineno;
} PyTracebackObject;

extern int PyTraceBack_Here DynLoad_Args((struct _frame *));
extern int PyTraceBack_Print DynLoad_Args((PyObject *, PyObject *));
extern int _Py_DisplaySourceLine DynLoad_Args((PyObject *, const char *, int, int));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *start, *stop, *step;
} PySliceObject;

extern PyObject *PySlice_New DynLoad_Args((PyObject *start, PyObject *stop, PyObject *step));
extern PyObject *_PySlice_FromIndices DynLoad_Args((Py_ssize_t start, Py_ssize_t stop));
extern int PySlice_GetIndices DynLoad_Args((PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step));
extern int PySlice_GetIndicesEx DynLoad_Args((PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step, Py_ssize_t *slicelength));

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 PyObject *ob_ref;
} PyCellObject;

extern PyObject *PyCell_New DynLoad_Args((PyObject *));
extern PyObject *PyCell_Get DynLoad_Args((PyObject *));
extern int PyCell_Set DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PySeqIter_New DynLoad_Args((PyObject *));
extern PyObject *PyCallIter_New DynLoad_Args((PyObject *, PyObject *));

struct _frame;

typedef struct {
 Py_ssize_t ob_refcnt;
 struct _typeobject *ob_type;
 struct _frame *gi_frame;
 int gi_running;
 PyObject *gi_code;
 PyObject *gi_weakreflist;
} PyGenObject;

extern PyObject *PyGen_New DynLoad_Args((struct _frame *));
extern int PyGen_NeedsFinalizing DynLoad_Args((PyGenObject *));

typedef PyObject *(*getter)(PyObject *, void*);

typedef int (*setter)(PyObject *, PyObject *, void *);

typedef struct PyGetSetDef {
 char *name;
 getter get;
 setter set;
 char *doc;
 *closure;
} PyGetSetDef;

typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args, void*wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args, void*wrapped, PyObject *kwds);

struct wrapperbase {
 char *name;
 int offset;
 *function;
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
 *d_wrapped;
} PyWrapperDescrObject;

extern PyObject *PyDescr_NewMethod DynLoad_Args((PyTypeObject *, PyMethodDef *));
extern PyObject *PyDescr_NewClassMethod DynLoad_Args((PyTypeObject *, PyMethodDef *));
extern PyObject *PyDescr_NewMember DynLoad_Args((PyTypeObject *, struct PyMemberDef *));
extern PyObject *PyDescr_NewGetSet DynLoad_Args((PyTypeObject *, struct PyGetSetDef *));
extern PyObject *PyDescr_NewWrapper DynLoad_Args((PyTypeObject *, struct wrapperbase *, void *));
extern PyObject *PyDictProxy_New DynLoad_Args((PyObject *));
extern PyObject *PyWrapper_New DynLoad_Args((PyObject *, PyObject *));
extern void _PyWarnings_Init DynLoad_Args((void));
extern int PyErr_WarnEx DynLoad_Args((PyObject *, const char *, Py_ssize_t));
extern int PyErr_WarnExplicit DynLoad_Args((PyObject *, const char *, const char *, int, const char *, PyObject *));

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

extern PyObject *PyWeakref_NewRef DynLoad_Args((PyObject *ob, PyObject *callback));
extern PyObject *PyWeakref_NewProxy DynLoad_Args((PyObject *ob, PyObject *callback));
extern PyObject *PyWeakref_GetObject DynLoad_Args((PyObject *ref));
extern int Py_ssize_t_PyWeakref_GetWeakrefCount DynLoad_Args((PyWeakReference *head));
extern void _PyWeakref_ClearRef DynLoad_Args((PyWeakReference *self));
extern int PyCodec_Register DynLoad_Args((PyObject *search_function));
extern PyObject *_PyCodec_Lookup DynLoad_Args((const char *encoding));
extern PyObject *PyCodec_Encode DynLoad_Args((PyObject *object, const char *encoding, const char *errors));
extern PyObject *PyCodec_Decode DynLoad_Args((PyObject *object, const char *encoding, const char *errors));
extern PyObject *PyCodec_Encoder DynLoad_Args((const char *encoding));
extern PyObject *PyCodec_Decoder DynLoad_Args((const char *encoding));
extern PyObject *PyCodec_IncrementalEncoder DynLoad_Args((const char *encoding, const char *errors));
extern PyObject *PyCodec_IncrementalDecoder DynLoad_Args((const char *encoding, const char *errors));
extern PyObject *PyCodec_StreamReader DynLoad_Args((const char *encoding, PyObject *stream, const char *errors));
extern PyObject *PyCodec_StreamWriter DynLoad_Args((const char *encoding, PyObject *stream, const char *errors));
extern int PyCodec_RegisterError DynLoad_Args((const char *name, PyObject *error));
extern PyObject *PyCodec_LookupError DynLoad_Args((const char *name));
extern PyObject *PyCodec_StrictErrors DynLoad_Args((PyObject *exc));
extern PyObject *PyCodec_IgnoreErrors DynLoad_Args((PyObject *exc));
extern PyObject *PyCodec_ReplaceErrors DynLoad_Args((PyObject *exc));
extern PyObject *PyCodec_XMLCharRefReplaceErrors DynLoad_Args((PyObject *exc));
extern PyObject *PyCodec_BackslashReplaceErrors DynLoad_Args((PyObject *exc));

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

extern void PyErr_SetNone DynLoad_Args((PyObject *));
extern void PyErr_SetObject DynLoad_Args((PyObject *, PyObject *));
extern void PyErr_SetString DynLoad_Args((PyObject *, const char *));
extern PyObject *PyErr_Occurred DynLoad_Args((void));
extern void PyErr_Clear DynLoad_Args((void));
extern void PyErr_Fetch DynLoad_Args((PyObject **, PyObject **, PyObject **));
extern void PyErr_Restore DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern int PyErr_GivenExceptionMatches DynLoad_Args((PyObject *, PyObject *));
extern int PyErr_ExceptionMatches DynLoad_Args((PyObject *));
extern void PyErr_NormalizeException DynLoad_Args((PyObject **, PyObject **, PyObject **));
extern int PyErr_BadArgument DynLoad_Args((void));
extern PyObject *PyErr_NoMemory DynLoad_Args((void));
extern PyObject *PyErr_SetFromErrno DynLoad_Args((PyObject *));
extern PyObject *PyErr_SetFromErrnoWithFilenameObject DynLoad_Args((PyObject *, PyObject *));
extern PyObject *PyErr_SetFromErrnoWithFilename DynLoad_Args((PyObject *, const char *));
extern PyObject *PyErr_SetFromErrnoWithUnicodeFilename DynLoad_Args((PyObject *, const Py_UNICODE *));
extern PyObject *PyErr_Format DynLoad_Args((PyObject *, const char *, ...));
extern PyObject *PyErr_SetFromWindowsErrWithFilenameObject DynLoad_Args((int, const char *));
extern PyObject *PyErr_SetFromWindowsErrWithFilename DynLoad_Args((int, const char *));
extern PyObject *PyErr_SetFromWindowsErrWithUnicodeFilename DynLoad_Args((int, const Py_UNICODE *));
extern PyObject *PyErr_SetFromWindowsErr DynLoad_Args((int));
extern PyObject *PyErr_SetExcFromWindowsErrWithFilenameObject DynLoad_Args((PyObject *, int, PyObject *));
extern PyObject *PyErr_SetExcFromWindowsErrWithFilename DynLoad_Args((PyObject *, int, const char *));
extern PyObject *PyErr_SetExcFromWindowsErrWithUnicodeFilename DynLoad_Args((PyObject *, int, const Py_UNICODE *));
extern PyObject *PyErr_SetExcFromWindowsErr DynLoad_Args((PyObject *, int));
extern void PyErr_BadInternalCall DynLoad_Args((void));
extern void _PyErr_BadInternalCall DynLoad_Args((char *filename, int lineno));
extern PyObject *PyErr_NewException DynLoad_Args((char *name, PyObject *base, PyObject *dict));
extern PyObject *PyErr_NewExceptionWithDoc DynLoad_Args((char *name, char *doc, PyObject *base, PyObject *dict));
extern void PyErr_WriteUnraisable DynLoad_Args((PyObject *));
extern int PyErr_CheckSignals DynLoad_Args((void));
extern void PyErr_SetInterrupt DynLoad_Args((void));
extern int PySignal_SetWakeupFd DynLoad_Args((int fd));
extern void PyErr_SyntaxLocation DynLoad_Args((const char *, int));
extern PyObject *PyErr_ProgramText DynLoad_Args((const char *, int));
extern PyObject *PyUnicodeDecodeError_Create DynLoad_Args((const char *, const char *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *));
extern PyObject *PyUnicodeEncodeError_Create DynLoad_Args((const char *, const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *));
extern PyObject *PyUnicodeTranslateError_Create DynLoad_Args((const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *));
extern PyObject *PyUnicodeEncodeError_GetEncoding DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeDecodeError_GetEncoding DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeEncodeError_GetObject DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeDecodeError_GetObject DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeTranslateError_GetObject DynLoad_Args((PyObject *));
extern int PyUnicodeEncodeError_GetStart DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeDecodeError_GetStart DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeTranslateError_GetStart DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeEncodeError_SetStart DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyUnicodeDecodeError_SetStart DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyUnicodeTranslateError_SetStart DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyUnicodeEncodeError_GetEnd DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeDecodeError_GetEnd DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeTranslateError_GetEnd DynLoad_Args((PyObject *, Py_ssize_t *));
extern int PyUnicodeEncodeError_SetEnd DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyUnicodeDecodeError_SetEnd DynLoad_Args((PyObject *, Py_ssize_t));
extern int PyUnicodeTranslateError_SetEnd DynLoad_Args((PyObject *, Py_ssize_t));
extern PyObject *PyUnicodeEncodeError_GetReason DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeDecodeError_GetReason DynLoad_Args((PyObject *));
extern PyObject *PyUnicodeTranslateError_GetReason DynLoad_Args((PyObject *));
extern int PyUnicodeEncodeError_SetReason DynLoad_Args((PyObject *, const char *));
extern int PyUnicodeDecodeError_SetReason DynLoad_Args((PyObject *, const char *));
extern int PyUnicodeTranslateError_SetReason DynLoad_Args((PyObject *, const char *));
extern int PyOS_snprintf DynLoad_Args((char *str, size_t size, const char *format, ...));
extern int PyOS_vsnprintf DynLoad_Args((char *str, size_t size, const char *format, va_list va));

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

extern PyInterpreterState *PyInterpreterState_New DynLoad_Args((void));
extern void PyInterpreterState_Clear DynLoad_Args((PyInterpreterState *));
extern void PyInterpreterState_Delete DynLoad_Args((PyInterpreterState *));
extern PyThreadState *PyThreadState_New DynLoad_Args((PyInterpreterState *));
extern PyThreadState *_PyThreadState_Prealloc DynLoad_Args((PyInterpreterState *));
extern void _PyThreadState_Init DynLoad_Args((PyThreadState *));
extern void PyThreadState_Clear DynLoad_Args((PyThreadState *));
extern void PyThreadState_Delete DynLoad_Args((PyThreadState *));
extern void PyThreadState_DeleteCurrent DynLoad_Args((void));
extern void _PyGILState_Reinit DynLoad_Args((void));
extern PyThreadState *PyThreadState_Get DynLoad_Args((void));
extern PyThreadState *PyThreadState_Swap DynLoad_Args((PyThreadState *));
extern PyObject *PyThreadState_GetDict DynLoad_Args((void));
extern int PyThreadState_SetAsyncExc DynLoad_Args((long, PyObject *));

typedef enum {PyGILState_LOCKED, PyGILState_UNLOCKED} PyGILState_STATE;

extern int PyGILState_STATEPyGILState_Ensure DynLoad_Args((void));
extern void PyGILState_Release DynLoad_Args((PyGILState_STATE));
extern PyThreadState *PyGILState_GetThisThreadState DynLoad_Args((void));
extern PyObject *_PyThread_CurrentFrames DynLoad_Args((void));
extern PyInterpreterState *PyInterpreterState_Head DynLoad_Args((void));
extern PyInterpreterState *PyInterpreterState_Next DynLoad_Args((PyInterpreterState *));
extern PyThreadState *PyInterpreterState_ThreadHead DynLoad_Args((PyInterpreterState *));
extern PyThreadState *PyThreadState_Next DynLoad_Args((PyThreadState *));

typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);

typedef struct _arena PyArena;

extern PyArena *PyArena_New DynLoad_Args((void));
extern void PyArena_Free DynLoad_Args((PyArena *));
extern void *PyArena_Malloc DynLoad_Args((PyArena *, size_t size));
extern int PyArena_AddPyObject DynLoad_Args((PyArena *, PyObject *));
extern PyObject *_Py_VaBuildValue_SizeT DynLoad_Args((const char *, va_list));
extern int PyArg_Parse DynLoad_Args((PyObject *, const char *, ...));
extern int PyArg_ParseTupleAndKeywords DynLoad_Args((PyObject *, PyObject *, const char *, char **, ...));
extern int PyArg_UnpackTuple DynLoad_Args((PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...));
extern PyObject *Py_BuildValue DynLoad_Args((const char *, ...));
extern PyObject *_Py_BuildValue_SizeT DynLoad_Args((const char *, ...));
extern int _PyArg_NoKeywords DynLoad_Args((const char *funcname, PyObject *kw));
extern int PyArg_VaParse DynLoad_Args((PyObject *, const char *, va_list));
extern int PyArg_VaParseTupleAndKeywords DynLoad_Args((PyObject *, PyObject *, const char *, char **, va_list));
extern PyObject *Py_VaBuildValue DynLoad_Args((const char *, va_list));
extern int PyModule_AddObject DynLoad_Args((PyObject *, const char *, PyObject *));
extern int PyModule_AddIntConstant DynLoad_Args((PyObject *, const char *, long));
extern int PyModule_AddStringConstant DynLoad_Args((PyObject *, const char *, const char *));
extern PyObject *Py_InitModule4 DynLoad_Args((const char *name, PyMethodDef *methods, const char *doc, PyObject *self, int apiver));

typedef struct {
 int cf_flags;
} PyCompilerFlags;

extern void Py_SetProgramName DynLoad_Args((char *));
extern char *Py_GetProgramName DynLoad_Args((void));
extern void Py_SetPythonHome DynLoad_Args((char *));
extern char *Py_GetPythonHome DynLoad_Args((void));
extern void Py_Initialize DynLoad_Args((void));
extern void Py_InitializeEx DynLoad_Args((int));
extern void Py_Finalize DynLoad_Args((void));
extern int Py_IsInitialized DynLoad_Args((void));
extern PyThreadState *Py_NewInterpreter DynLoad_Args((void));
extern void Py_EndInterpreter DynLoad_Args((PyThreadState *));
extern int PyRun_AnyFileFlags DynLoad_Args((FILE *, const char *, PyCompilerFlags *));
extern int PyRun_AnyFileExFlags DynLoad_Args((FILE *, const char *, int, PyCompilerFlags *));
extern int PyRun_SimpleStringFlags DynLoad_Args((const char *, PyCompilerFlags *));
extern int PyRun_SimpleFileExFlags DynLoad_Args((FILE *, const char *, int, PyCompilerFlags *));
extern int PyRun_InteractiveOneFlags DynLoad_Args((FILE *, const char *, PyCompilerFlags *));
extern int PyRun_InteractiveLoopFlags DynLoad_Args((FILE *, const char *, PyCompilerFlags *));
extern struct _mod *PyParser_ASTFromString DynLoad_Args((const char *, const char *, int, PyCompilerFlags *flags, PyArena *));
extern struct _mod *PyParser_ASTFromFile DynLoad_Args((FILE *, const char *, int, char *, char *, PyCompilerFlags *, int *, PyArena *));
extern struct _node *PyParser_SimpleParseStringFlags DynLoad_Args((const char *, int, int));
extern struct _node *PyParser_SimpleParseFileFlags DynLoad_Args((FILE *, const char *, int, int));
extern PyObject *PyRun_StringFlags DynLoad_Args((const char *, int, PyObject *, PyObject *, PyCompilerFlags *));
extern PyObject *PyRun_FileExFlags DynLoad_Args((FILE *, const char *, int, PyObject *, PyObject *, int, PyCompilerFlags *));
extern PyObject *Py_CompileStringFlags DynLoad_Args((const char *, const char *, int, PyCompilerFlags *));
extern struct symtable *Py_SymtableString DynLoad_Args((const char *, const char *, int));
extern void PyErr_Print DynLoad_Args((void));
extern void PyErr_PrintEx DynLoad_Args((int));
extern void PyErr_Display DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern int Py_AtExit DynLoad_Args((void (*func)(void)));
extern void Py_Exit DynLoad_Args((int));
extern int Py_FdIsInteractive DynLoad_Args((FILE *, const char *));
extern int Py_Main DynLoad_Args((int argc, char **argv));
extern char *Py_GetProgramFullPath DynLoad_Args((void));
extern char *Py_GetPrefix DynLoad_Args((void));
extern char *Py_GetExecPrefix DynLoad_Args((void));
extern char *Py_GetPath DynLoad_Args((void));
extern const char *Py_GetVersion DynLoad_Args((void));
extern const char *Py_GetPlatform DynLoad_Args((void));
extern const char *Py_GetCopyright DynLoad_Args((void));
extern const char *Py_GetCompiler DynLoad_Args((void));
extern const char *Py_GetBuildInfo DynLoad_Args((void));
extern const char *_Py_svnversion DynLoad_Args((void));
extern const char *Py_SubversionRevision DynLoad_Args((void));
extern const char *Py_SubversionShortBranch DynLoad_Args((void));
extern const char *_Py_hgidentifier DynLoad_Args((void));
extern const char *_Py_hgversion DynLoad_Args((void));
extern PyObject *_PyBuiltin_Init DynLoad_Args((void));
extern PyObject *_PySys_Init DynLoad_Args((void));
extern void _PyImport_Init DynLoad_Args((void));
extern void _PyExc_Init DynLoad_Args((void));
extern void _PyImportHooks_Init DynLoad_Args((void));
extern int _PyFrame_Init DynLoad_Args((void));
extern int _PyInt_Init DynLoad_Args((void));
extern int _PyLong_Init DynLoad_Args((void));
extern void _PyFloat_Init DynLoad_Args((void));
extern int PyByteArray_Init DynLoad_Args((void));
extern void _PyExc_Fini DynLoad_Args((void));
extern void _PyImport_Fini DynLoad_Args((void));
extern void PyMethod_Fini DynLoad_Args((void));
extern void PyFrame_Fini DynLoad_Args((void));
extern void PyCFunction_Fini DynLoad_Args((void));
extern void PyDict_Fini DynLoad_Args((void));
extern void PyTuple_Fini DynLoad_Args((void));
extern void PyList_Fini DynLoad_Args((void));
extern void PySet_Fini DynLoad_Args((void));
extern void PyString_Fini DynLoad_Args((void));
extern void PyInt_Fini DynLoad_Args((void));
extern void PyFloat_Fini DynLoad_Args((void));
extern void PyOS_FiniInterrupts DynLoad_Args((void));
extern void PyByteArray_Fini DynLoad_Args((void));
extern char *PyOS_Readline DynLoad_Args((FILE *, FILE *, char *));
extern int (*PyOS_InputHook) DynLoad_Args((void));
extern char *(*PyOS_ReadlineFunctionPointer) DynLoad_Args((FILE *, FILE *, char *));
extern int PyOS_CheckStack DynLoad_Args((void));

typedef void (*PyOS_sighandler_t)(int);

extern int PyOS_sighandler_tPyOS_getsig DynLoad_Args((int));
extern int PyOS_sighandler_tPyOS_setsig DynLoad_Args((int, PyOS_sighandler_t));
extern PyObject *PyEval_CallObjectWithKeywords DynLoad_Args((PyObject *, PyObject *, PyObject *));
extern PyObject *PyEval_CallFunction DynLoad_Args((PyObject *obj, const char *format, ...));
extern PyObject *PyEval_CallMethod DynLoad_Args((PyObject *obj, const char *methodname, const char *format, ...));
extern void PyEval_SetProfile DynLoad_Args((Py_tracefunc, PyObject *));
extern void PyEval_SetTrace DynLoad_Args((Py_tracefunc, PyObject *));

struct _frame;

extern PyObject *PyEval_GetBuiltins DynLoad_Args((void));
extern PyObject *PyEval_GetGlobals DynLoad_Args((void));
extern PyObject *PyEval_GetLocals DynLoad_Args((void));
extern struct _frame *PyEval_GetFrame DynLoad_Args((void));
extern int PyEval_GetRestricted DynLoad_Args((void));
extern int PyEval_MergeCompilerFlags DynLoad_Args((PyCompilerFlags *cf));
extern int Py_FlushLine DynLoad_Args((void));
extern int Py_AddPendingCall DynLoad_Args((int (*func)(void *), void *arg));
extern int Py_MakePendingCalls DynLoad_Args((void));
extern void Py_SetRecursionLimit DynLoad_Args((int));
extern int Py_GetRecursionLimit DynLoad_Args((void));
extern int _Py_CheckRecursiveCall DynLoad_Args((char *where));
extern const char *PyEval_GetFuncName DynLoad_Args((PyObject *));
extern const char *PyEval_GetFuncDesc DynLoad_Args((PyObject *));
extern PyObject *PyEval_GetCallStats DynLoad_Args((PyObject *));
extern PyObject *PyEval_EvalFrame DynLoad_Args((struct _frame *));
extern PyObject *PyEval_EvalFrameEx DynLoad_Args((struct _frame *f, int exc));
extern PyThreadState *PyEval_SaveThread DynLoad_Args((void));
extern void PyEval_RestoreThread DynLoad_Args((PyThreadState *));
extern int PyEval_ThreadsInitialized DynLoad_Args((void));
extern void PyEval_InitThreads DynLoad_Args((void));
extern void PyEval_AcquireLock DynLoad_Args((void));
extern void PyEval_ReleaseLock DynLoad_Args((void));
extern void PyEval_AcquireThread DynLoad_Args((PyThreadState *tstate));
extern void PyEval_ReleaseThread DynLoad_Args((PyThreadState *tstate));
extern void PyEval_ReInitThreads DynLoad_Args((void));
extern int _PyEval_SliceIndex DynLoad_Args((PyObject *, Py_ssize_t *));
extern PyObject *PySys_GetObject DynLoad_Args((char *));
extern int PySys_SetObject DynLoad_Args((char *, PyObject *));
extern FILE *PySys_GetFile DynLoad_Args((char *, FILE *));
extern void PySys_SetArgv DynLoad_Args((int, char **));
extern void PySys_SetArgvEx DynLoad_Args((int, char **, int));
extern void PySys_SetPath DynLoad_Args((char *));
extern void PySys_WriteStdout DynLoad_Args((const char *format, ...));
extern void PySys_WriteStderr DynLoad_Args((const char *format, ...));
extern void PySys_ResetWarnOptions DynLoad_Args((void));
extern void PySys_AddWarnOption DynLoad_Args((char *));
extern int PySys_HasWarnOptions DynLoad_Args((void));
extern int PyOS_InterruptOccurred DynLoad_Args((void));
extern void PyOS_InitInterrupts DynLoad_Args((void));
extern void PyOS_AfterFork DynLoad_Args((void));
extern long PyImport_GetMagicNumber DynLoad_Args((void));
extern PyObject *PyImport_ExecCodeModule DynLoad_Args((char *name, PyObject *co));
extern PyObject *PyImport_ExecCodeModuleEx DynLoad_Args((char *name, PyObject *co, char *pathname));
extern PyObject *PyImport_GetModuleDict DynLoad_Args((void));
extern PyObject *PyImport_AddModule DynLoad_Args((const char *name));
extern PyObject *PyImport_ImportModule DynLoad_Args((const char *name));
extern PyObject *PyImport_ImportModuleNoBlock DynLoad_Args((const char *));
extern PyObject *PyImport_ImportModuleLevel DynLoad_Args((char *name, PyObject *globals, PyObject *locals, PyObject *fromlist, int level));
extern PyObject *PyImport_GetImporter DynLoad_Args((PyObject *path));
extern PyObject *PyImport_Import DynLoad_Args((PyObject *name));
extern PyObject *PyImport_ReloadModule DynLoad_Args((PyObject *m));
extern void PyImport_Cleanup DynLoad_Args((void));
extern int PyImport_ImportFrozenModule DynLoad_Args((char *));
extern void _PyImport_AcquireLock DynLoad_Args((void));
extern int _PyImport_ReleaseLock DynLoad_Args((void));
extern struct filedescr *_PyImport_FindModule DynLoad_Args((const char *, PyObject *, char *, size_t, FILE **, PyObject **));
extern int _PyImport_IsScript DynLoad_Args((struct filedescr *));
extern void _PyImport_ReInitLock DynLoad_Args((void));
extern PyObject *_PyImport_FindExtension DynLoad_Args((char *, char *));
extern PyObject *_PyImport_FixupExtension DynLoad_Args((char *, char *));

struct _inittab {
 char *name;
 (void*initfunc)();
};

extern int PyImport_AppendInittab DynLoad_Args((const char *name, void (*initfunc)(void)));
extern int PyImport_ExtendInittab DynLoad_Args((struct _inittab *newtab));

struct _frozen {
 char *name;
 unsigned char *code;
 int size;
};

extern int PyObject_Cmp DynLoad_Args((PyObject *o1, PyObject *o2, int *result));
extern PyObject *PyObject_Call DynLoad_Args((PyObject *callable_object, PyObject *args, PyObject *kw));
extern PyObject *PyObject_CallObject DynLoad_Args((PyObject *callable_object, PyObject *args));
extern PyObject *PyObject_CallFunction DynLoad_Args((PyObject *callable_object, char *format, ...));
extern PyObject *PyObject_CallMethod DynLoad_Args((PyObject *o, char *m, char *format, ...));
extern PyObject *_PyObject_CallFunction_SizeT DynLoad_Args((PyObject *callable, char *format, ...));
extern PyObject *_PyObject_CallMethod_SizeT DynLoad_Args((PyObject *o, char *name, char *format, ...));
extern PyObject *PyObject_CallFunctionObjArgs DynLoad_Args((PyObject *callable, ...));
extern PyObject *PyObject_CallMethodObjArgs DynLoad_Args((PyObject *o, PyObject *m, ...));
extern PyObject *PyObject_Type DynLoad_Args((PyObject *o));
extern int Py_ssize_tPyObject_Size DynLoad_Args((PyObject *o));
extern int Py_ssize_tPyObject_Length DynLoad_Args((PyObject *o));
extern int Py_ssize_t_PyObject_LengthHint DynLoad_Args((PyObject *o, Py_ssize_t));
extern PyObject *PyObject_GetItem DynLoad_Args((PyObject *o, PyObject *key));
extern int PyObject_SetItem DynLoad_Args((PyObject *o, PyObject *key, PyObject *v));
extern int PyObject_DelItemString DynLoad_Args((PyObject *o, char *key));
extern int PyObject_DelItem DynLoad_Args((PyObject *o, PyObject *key));
extern int PyObject_AsCharBuffer DynLoad_Args((PyObject *obj, const char **buffer, Py_ssize_t *buffer_len));
extern int PyObject_CheckReadBuffer DynLoad_Args((PyObject *obj));
extern int PyObject_AsReadBuffer DynLoad_Args((PyObject *obj, const **buffer, Py_ssize_t *buffer_len));
extern int PyObject_AsWriteBuffer DynLoad_Args((PyObject *obj, void **buffer, Py_ssize_t *buffer_len));
extern int PyObject_GetBuffer DynLoad_Args((PyObject *obj, Py_buffer *view, int flags));
extern void *PyBuffer_GetPointer DynLoad_Args((Py_buffer *view, Py_ssize_t *indices));
extern int PyBuffer_SizeFromFormat DynLoad_Args((const char *));
extern int PyBuffer_ToContiguous DynLoad_Args((void *buf, Py_buffer *view, Py_ssize_t len, char fort));
extern int PyBuffer_FromContiguous DynLoad_Args((Py_buffer *view, void *buf, Py_ssize_t len, char fort));
extern int PyObject_CopyData DynLoad_Args((PyObject *dest, PyObject *src));
extern int PyBuffer_IsContiguous DynLoad_Args((Py_buffer *view, char fort));
extern void PyBuffer_FillContiguousStrides DynLoad_Args((int ndims, Py_ssize_t *shape, Py_ssize_t *strides, int itemsize, char fort));
extern int PyBuffer_FillInfo DynLoad_Args((Py_buffer *view, PyObject *o, void *buf, Py_ssize_t len, int readonly, int flags));
extern void PyBuffer_Release DynLoad_Args((Py_buffer *view));
extern PyObject *PyObject_Format DynLoad_Args((PyObject *obj, PyObject *format_spec));
extern PyObject *PyObject_GetIter DynLoad_Args((PyObject *));
extern PyObject *PyIter_Next DynLoad_Args((PyObject *));
extern int PyNumber_Check DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Add DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Subtract DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Multiply DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Divide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_FloorDivide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_TrueDivide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Remainder DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Divmod DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Power DynLoad_Args((PyObject *o1, PyObject *o2, PyObject *o3));
extern PyObject *PyNumber_Negative DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Positive DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Absolute DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Invert DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Lshift DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Rshift DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_And DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Xor DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Or DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_Index DynLoad_Args((PyObject *o));
extern int Py_ssize_tPyNumber_AsSsize_t DynLoad_Args((PyObject *o, PyObject *exc));
extern PyObject *_PyNumber_ConvertIntegralToInt DynLoad_Args((PyObject *integral, const char *error_format));
extern PyObject *PyNumber_Int DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Long DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_Float DynLoad_Args((PyObject *o));
extern PyObject *PyNumber_InPlaceAdd DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceSubtract DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceMultiply DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceDivide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceFloorDivide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceTrueDivide DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceRemainder DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlacePower DynLoad_Args((PyObject *o1, PyObject *o2, PyObject *o3));
extern PyObject *PyNumber_InPlaceLshift DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceRshift DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceAnd DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceXor DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_InPlaceOr DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PyNumber_ToBase DynLoad_Args((PyObject *n, int base));
extern int PySequence_Check DynLoad_Args((PyObject *o));
extern int Py_ssize_tPySequence_Size DynLoad_Args((PyObject *o));
extern int Py_ssize_tPySequence_Length DynLoad_Args((PyObject *o));
extern PyObject *PySequence_Concat DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PySequence_Repeat DynLoad_Args((PyObject *o, Py_ssize_t count));
extern PyObject *PySequence_GetItem DynLoad_Args((PyObject *o, Py_ssize_t i));
extern PyObject *PySequence_GetSlice DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2));
extern int PySequence_SetItem DynLoad_Args((PyObject *o, Py_ssize_t i, PyObject *v));
extern int PySequence_DelItem DynLoad_Args((PyObject *o, Py_ssize_t i));
extern int PySequence_SetSlice DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2, PyObject *v));
extern int PySequence_DelSlice DynLoad_Args((PyObject *o, Py_ssize_t i1, Py_ssize_t i2));
extern PyObject *PySequence_Tuple DynLoad_Args((PyObject *o));
extern PyObject *PySequence_List DynLoad_Args((PyObject *o));
extern PyObject *PySequence_Fast DynLoad_Args((PyObject *o, const char *m));
extern int Py_ssize_tPySequence_Count DynLoad_Args((PyObject *o, PyObject *value));
extern int PySequence_Contains DynLoad_Args((PyObject *seq, PyObject *ob));
extern int Py_ssize_t_PySequence_IterSearch DynLoad_Args((PyObject *seq, PyObject *obj, int operation));
extern int PySequence_In DynLoad_Args((PyObject *o, PyObject *value));
extern int Py_ssize_tPySequence_Index DynLoad_Args((PyObject *o, PyObject *value));
extern PyObject *PySequence_InPlaceConcat DynLoad_Args((PyObject *o1, PyObject *o2));
extern PyObject *PySequence_InPlaceRepeat DynLoad_Args((PyObject *o, Py_ssize_t count));
extern int PyMapping_Check DynLoad_Args((PyObject *o));
extern int Py_ssize_tPyMapping_Size DynLoad_Args((PyObject *o));
extern int Py_ssize_tPyMapping_Length DynLoad_Args((PyObject *o));
extern int PyMapping_HasKeyString DynLoad_Args((PyObject *o, char *key));
extern int PyMapping_HasKey DynLoad_Args((PyObject *o, PyObject *key));
extern PyObject *PyMapping_GetItemString DynLoad_Args((PyObject *o, char *key));
extern int PyMapping_SetItemString DynLoad_Args((PyObject *o, char *key, PyObject *value));
extern int PyObject_IsInstance DynLoad_Args((PyObject *object, PyObject *typeorclass));
extern int PyObject_IsSubclass DynLoad_Args((PyObject *object, PyObject *typeorclass));
extern int _PyObject_RealIsInstance DynLoad_Args((PyObject *inst, PyObject *cls));
extern int _PyObject_RealIsSubclass DynLoad_Args((PyObject *derived, PyObject *cls));
extern void _Py_add_one_to_index_F DynLoad_Args((int nd, Py_ssize_t *index, const Py_ssize_t *shape));
extern void _Py_add_one_to_index_C DynLoad_Args((int nd, Py_ssize_t *index, const Py_ssize_t *shape));

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
 *co_zombieframe;
 PyObject *co_weakreflist;
} PyCodeObject;

extern PyCodeObject *PyCode_New DynLoad_Args((int, int, int, int, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, int, PyObject *));
extern PyCodeObject *PyCode_NewEmpty DynLoad_Args((const char *filename, const char *funcname, int firstlineno));
extern int PyCode_Addr2Line DynLoad_Args((PyCodeObject *, int));

typedef struct _addr_pair {
 int ap_lower;
 int ap_upper;
} PyAddrPair;

extern int _PyCode_CheckLineNumber DynLoad_Args((PyCodeObject *co, int lasti, PyAddrPair *bounds));
extern PyObject *PyCode_Optimize DynLoad_Args((PyObject *code, PyObject *consts, PyObject *names, PyObject *lineno_obj));

struct _node;

extern PyCodeObject *PyNode_Compile DynLoad_Args((struct _node *, const char *));

typedef struct {
 int ff_features;
 int ff_lineno;
} PyFutureFeatures;

struct _mod;

extern PyCodeObject *PyAST_Compile DynLoad_Args((struct _mod *, const char *, PyCompilerFlags *, PyArena *));
extern PyFutureFeatures *PyFuture_FromAST DynLoad_Args((struct _mod *, const char *));
extern PyObject *PyEval_EvalCode DynLoad_Args((PyCodeObject *, PyObject *, PyObject *));
extern PyObject *PyEval_EvalCodeEx DynLoad_Args((PyCodeObject *co, PyObject *globals, PyObject *locals, PyObject **args, int argc, PyObject **kwds, int kwdc, PyObject **defs, int defc, PyObject *closure));
extern PyObject *_PyEval_CallTracing DynLoad_Args((PyObject *func, PyObject *args));
extern double PyOS_ascii_strtod DynLoad_Args((const char *str, char **ptr));
extern double PyOS_ascii_atof DynLoad_Args((const char *str));
extern char *PyOS_ascii_formatd DynLoad_Args((char *buffer, size_t buf_len, const char *format, double d));
extern double PyOS_string_to_double DynLoad_Args((const char *str, char **endptr, PyObject *overflow_exception));
extern char *PyOS_double_to_string DynLoad_Args((double val, char format_code, int precision, int flags, int *type));
extern double _Py_parse_inf_or_nan DynLoad_Args((const char *p, char **endptr));
extern int PyOS_mystrnicmp DynLoad_Args((const char *, const char *, Py_ssize_t));
extern int PyOS_mystricmp DynLoad_Args((const char *, const char *));
extern double _Py_dg_strtod DynLoad_Args((const char *str, char **ptr));
extern char *_Py_dg_dtoa DynLoad_Args((double d, int mode, int ndigits, int *decpt, int *sign, char **rve));
extern void _Py_dg_freedtoa DynLoad_Args((char *s));
extern PyObject *_Py_Mangle DynLoad_Args((PyObject *p, PyObject *name));

#undef DynLoad_Args
