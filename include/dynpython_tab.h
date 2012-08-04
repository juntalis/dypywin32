
#ifdef PyMem_Malloc
#	undef PyMem_Malloc
#endif
#define PyMem_Malloc ((void *(*)(size_t))DynPy_GetAddr(0))

#ifdef PyMem_Realloc
#	undef PyMem_Realloc
#endif
#define PyMem_Realloc ((void *(*)(void *, size_t))DynPy_GetAddr(1))

#ifdef PyMem_Free
#	undef PyMem_Free
#endif
#define PyMem_Free ((void(*)(void *))DynPy_GetAddr(2))

#ifdef PyType_IsSubtype
#	undef PyType_IsSubtype
#endif
#define PyType_IsSubtype ((int(*)(PyTypeObject *, PyTypeObject *))DynPy_GetAddr(3))

#ifdef PyType_Type
#	undef PyType_Type
#endif
#define PyType_Type (*(PyTypeObject(*))DynPy_GetAddr(4))

#ifdef PyBaseObject_Type
#	undef PyBaseObject_Type
#endif
#define PyBaseObject_Type (*(PyTypeObject(*))DynPy_GetAddr(5))

#ifdef PySuper_Type
#	undef PySuper_Type
#endif
#define PySuper_Type (*(PyTypeObject(*))DynPy_GetAddr(6))

#ifdef PyType_Ready
#	undef PyType_Ready
#endif
#define PyType_Ready ((int(*)(PyTypeObject *))DynPy_GetAddr(7))

#ifdef PyType_GenericAlloc
#	undef PyType_GenericAlloc
#endif
#define PyType_GenericAlloc ((PyObject *(*)(PyTypeObject *, Py_ssize_t))DynPy_GetAddr(8))

#ifdef PyType_GenericNew
#	undef PyType_GenericNew
#endif
#define PyType_GenericNew ((PyObject *(*)(PyTypeObject *, PyObject *, PyObject *))DynPy_GetAddr(9))

#ifdef _PyType_Lookup
#	undef _PyType_Lookup
#endif
#define _PyType_Lookup ((PyObject *(*)(PyTypeObject *, PyObject *))DynPy_GetAddr(10))

#ifdef _PyObject_LookupSpecial
#	undef _PyObject_LookupSpecial
#endif
#define _PyObject_LookupSpecial ((PyObject *(*)(PyObject *, char *, PyObject **))DynPy_GetAddr(11))

#ifdef PyType_ClearCache
#	undef PyType_ClearCache
#endif
#define PyType_ClearCache ((unsigned int(*)(void))DynPy_GetAddr(12))

#ifdef PyType_Modified
#	undef PyType_Modified
#endif
#define PyType_Modified ((void(*)(PyTypeObject *))DynPy_GetAddr(13))

#ifdef PyObject_Print
#	undef PyObject_Print
#endif
#define PyObject_Print ((int(*)(PyObject *, FILE *, int))DynPy_GetAddr(14))

#ifdef _PyObject_Dump
#	undef _PyObject_Dump
#endif
#define _PyObject_Dump ((void(*)(PyObject *))DynPy_GetAddr(15))

#ifdef PyObject_Repr
#	undef PyObject_Repr
#endif
#define PyObject_Repr ((PyObject *(*)(PyObject *))DynPy_GetAddr(16))

#ifdef _PyObject_Str
#	undef _PyObject_Str
#endif
#define _PyObject_Str ((PyObject *(*)(PyObject *))DynPy_GetAddr(17))

#ifdef PyObject_Str
#	undef PyObject_Str
#endif
#define PyObject_Str ((PyObject *(*)(PyObject *))DynPy_GetAddr(18))

#ifdef PyObject_Unicode
#	undef PyObject_Unicode
#endif
#define PyObject_Unicode ((PyObject *(*)(PyObject *))DynPy_GetAddr(19))

#ifdef PyObject_Compare
#	undef PyObject_Compare
#endif
#define PyObject_Compare ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(20))

#ifdef PyObject_RichCompare
#	undef PyObject_RichCompare
#endif
#define PyObject_RichCompare ((PyObject *(*)(PyObject *, PyObject *, int))DynPy_GetAddr(21))

#ifdef PyObject_RichCompareBool
#	undef PyObject_RichCompareBool
#endif
#define PyObject_RichCompareBool ((int(*)(PyObject *, PyObject *, int))DynPy_GetAddr(22))

#ifdef PyObject_GetAttrString
#	undef PyObject_GetAttrString
#endif
#define PyObject_GetAttrString ((PyObject *(*)(PyObject *, const char *))DynPy_GetAddr(23))

#ifdef PyObject_SetAttrString
#	undef PyObject_SetAttrString
#endif
#define PyObject_SetAttrString ((int(*)(PyObject *, const char *, PyObject *))DynPy_GetAddr(24))

#ifdef PyObject_HasAttrString
#	undef PyObject_HasAttrString
#endif
#define PyObject_HasAttrString ((int(*)(PyObject *, const char *))DynPy_GetAddr(25))

#ifdef PyObject_GetAttr
#	undef PyObject_GetAttr
#endif
#define PyObject_GetAttr ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(26))

#ifdef PyObject_SetAttr
#	undef PyObject_SetAttr
#endif
#define PyObject_SetAttr ((int(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(27))

#ifdef PyObject_HasAttr
#	undef PyObject_HasAttr
#endif
#define PyObject_HasAttr ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(28))

#ifdef _PyObject_GetDictPtr
#	undef _PyObject_GetDictPtr
#endif
#define _PyObject_GetDictPtr ((PyObject **(*)(PyObject *))DynPy_GetAddr(29))

#ifdef PyObject_SelfIter
#	undef PyObject_SelfIter
#endif
#define PyObject_SelfIter ((PyObject *(*)(PyObject *))DynPy_GetAddr(30))

#ifdef _PyObject_NextNotImplemented
#	undef _PyObject_NextNotImplemented
#endif
#define _PyObject_NextNotImplemented ((PyObject *(*)(PyObject *))DynPy_GetAddr(31))

#ifdef PyObject_GenericGetAttr
#	undef PyObject_GenericGetAttr
#endif
#define PyObject_GenericGetAttr ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(32))

#ifdef PyObject_GenericSetAttr
#	undef PyObject_GenericSetAttr
#endif
#define PyObject_GenericSetAttr ((int(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(33))

#ifdef PyObject_Hash
#	undef PyObject_Hash
#endif
#define PyObject_Hash ((long(*)(PyObject *))DynPy_GetAddr(34))

#ifdef PyObject_HashNotImplemented
#	undef PyObject_HashNotImplemented
#endif
#define PyObject_HashNotImplemented ((long(*)(PyObject *))DynPy_GetAddr(35))

#ifdef PyObject_IsTrue
#	undef PyObject_IsTrue
#endif
#define PyObject_IsTrue ((int(*)(PyObject *))DynPy_GetAddr(36))

#ifdef PyObject_Not
#	undef PyObject_Not
#endif
#define PyObject_Not ((int(*)(PyObject *))DynPy_GetAddr(37))

#ifdef PyCallable_Check
#	undef PyCallable_Check
#endif
#define PyCallable_Check ((int(*)(PyObject *))DynPy_GetAddr(38))

#ifdef PyNumber_Coerce
#	undef PyNumber_Coerce
#endif
#define PyNumber_Coerce ((int(*)(PyObject **, PyObject **))DynPy_GetAddr(39))

#ifdef PyNumber_CoerceEx
#	undef PyNumber_CoerceEx
#endif
#define PyNumber_CoerceEx ((int(*)(PyObject **, PyObject **))DynPy_GetAddr(40))

#ifdef PyObject_ClearWeakRefs
#	undef PyObject_ClearWeakRefs
#endif
#define PyObject_ClearWeakRefs ((void(*)(PyObject *))DynPy_GetAddr(41))

#ifdef _PyObject_GenericGetAttrWithDict
#	undef _PyObject_GenericGetAttrWithDict
#endif
#define _PyObject_GenericGetAttrWithDict ((PyObject *(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(42))

#ifdef _PyObject_GenericSetAttrWithDict
#	undef _PyObject_GenericSetAttrWithDict
#endif
#define _PyObject_GenericSetAttrWithDict ((int(*)(PyObject *, PyObject *, PyObject *, PyObject *))DynPy_GetAddr(43))

#ifdef PyObject_Dir
#	undef PyObject_Dir
#endif
#define PyObject_Dir ((PyObject *(*)(PyObject *))DynPy_GetAddr(44))

#ifdef Py_ReprEnter
#	undef Py_ReprEnter
#endif
#define Py_ReprEnter ((int(*)(PyObject *))DynPy_GetAddr(45))

#ifdef Py_ReprLeave
#	undef Py_ReprLeave
#endif
#define Py_ReprLeave ((void(*)(PyObject *))DynPy_GetAddr(46))

#ifdef _Py_HashDouble
#	undef _Py_HashDouble
#endif
#define _Py_HashDouble ((long(*)(double))DynPy_GetAddr(47))

#ifdef _Py_HashPointer
#	undef _Py_HashPointer
#endif
#define _Py_HashPointer ((long(*)(void*))DynPy_GetAddr(48))

#ifdef Py_IncRef
#	undef Py_IncRef
#endif
#define Py_IncRef ((void(*)(PyObject *))DynPy_GetAddr(49))

#ifdef Py_DecRef
#	undef Py_DecRef
#endif
#define Py_DecRef ((void(*)(PyObject *))DynPy_GetAddr(50))

#ifdef _Py_NoneStruct
#	undef _Py_NoneStruct
#endif
#define _Py_NoneStruct (*(PyObject(*))DynPy_GetAddr(51))

#ifdef _Py_NotImplementedStruct
#	undef _Py_NotImplementedStruct
#endif
#define _Py_NotImplementedStruct (*(PyObject(*))DynPy_GetAddr(52))

#ifdef _PyTrash_deposit_object
#	undef _PyTrash_deposit_object
#endif
#define _PyTrash_deposit_object ((void(*)(PyObject*))DynPy_GetAddr(53))

#ifdef _PyTrash_destroy_chain
#	undef _PyTrash_destroy_chain
#endif
#define _PyTrash_destroy_chain ((void(*)(void))DynPy_GetAddr(54))

#ifdef _PyTrash_delete_nesting
#	undef _PyTrash_delete_nesting
#endif
#define _PyTrash_delete_nesting (*(int(*))DynPy_GetAddr(55))

#ifdef _PyTrash_delete_later
#	undef _PyTrash_delete_later
#endif
#define _PyTrash_delete_later (*(PyObject *(*))DynPy_GetAddr(56))

#ifdef PyObject_Malloc
#	undef PyObject_Malloc
#endif
#define PyObject_Malloc ((void *(*)(size_t))DynPy_GetAddr(57))

#ifdef PyObject_Realloc
#	undef PyObject_Realloc
#endif
#define PyObject_Realloc ((void *(*)(void *, size_t))DynPy_GetAddr(58))

#ifdef PyObject_Free
#	undef PyObject_Free
#endif
#define PyObject_Free ((void(*)(void *))DynPy_GetAddr(59))

#ifdef PyObject_Init
#	undef PyObject_Init
#endif
#define PyObject_Init ((PyObject *(*)(PyObject *, PyTypeObject *))DynPy_GetAddr(60))

#ifdef PyObject_InitVar
#	undef PyObject_InitVar
#endif
#define PyObject_InitVar ((PyVarObject *(*)(PyVarObject *, PyTypeObject *, Py_ssize_t))DynPy_GetAddr(61))

#ifdef _PyObject_New
#	undef _PyObject_New
#endif
#define _PyObject_New ((PyObject *(*)(PyTypeObject *))DynPy_GetAddr(62))

#ifdef _PyObject_NewVar
#	undef _PyObject_NewVar
#endif
#define _PyObject_NewVar ((PyVarObject *(*)(PyTypeObject *, Py_ssize_t))DynPy_GetAddr(63))

#ifdef PyGC_Collect
#	undef PyGC_Collect
#endif
#define PyGC_Collect ((Py_ssize_t(*)(void))DynPy_GetAddr(64))

#ifdef _PyObject_GC_Resize
#	undef _PyObject_GC_Resize
#endif
#define _PyObject_GC_Resize ((PyVarObject *(*)(PyVarObject *, Py_ssize_t))DynPy_GetAddr(65))

#ifdef _PyObject_GC_Malloc
#	undef _PyObject_GC_Malloc
#endif
#define _PyObject_GC_Malloc ((PyObject *(*)(size_t))DynPy_GetAddr(66))

#ifdef _PyObject_GC_New
#	undef _PyObject_GC_New
#endif
#define _PyObject_GC_New ((PyObject *(*)(PyTypeObject *))DynPy_GetAddr(67))

#ifdef _PyObject_GC_NewVar
#	undef _PyObject_GC_NewVar
#endif
#define _PyObject_GC_NewVar ((PyVarObject *(*)(PyTypeObject *, Py_ssize_t))DynPy_GetAddr(68))

#ifdef PyObject_GC_Track
#	undef PyObject_GC_Track
#endif
#define PyObject_GC_Track ((void(*)(void *))DynPy_GetAddr(69))

#ifdef PyObject_GC_UnTrack
#	undef PyObject_GC_UnTrack
#endif
#define PyObject_GC_UnTrack ((void(*)(void *))DynPy_GetAddr(70))

#ifdef PyObject_GC_Del
#	undef PyObject_GC_Del
#endif
#define PyObject_GC_Del ((void(*)(void *))DynPy_GetAddr(71))

#ifdef Py_DebugFlag
#	undef Py_DebugFlag
#endif
#define Py_DebugFlag (*(int(*))DynPy_GetAddr(72))

#ifdef Py_VerboseFlag
#	undef Py_VerboseFlag
#endif
#define Py_VerboseFlag (*(int(*))DynPy_GetAddr(73))

#ifdef Py_InteractiveFlag
#	undef Py_InteractiveFlag
#endif
#define Py_InteractiveFlag (*(int(*))DynPy_GetAddr(74))

#ifdef Py_InspectFlag
#	undef Py_InspectFlag
#endif
#define Py_InspectFlag (*(int(*))DynPy_GetAddr(75))

#ifdef Py_OptimizeFlag
#	undef Py_OptimizeFlag
#endif
#define Py_OptimizeFlag (*(int(*))DynPy_GetAddr(76))

#ifdef Py_NoSiteFlag
#	undef Py_NoSiteFlag
#endif
#define Py_NoSiteFlag (*(int(*))DynPy_GetAddr(77))

#ifdef Py_BytesWarningFlag
#	undef Py_BytesWarningFlag
#endif
#define Py_BytesWarningFlag (*(int(*))DynPy_GetAddr(78))

#ifdef Py_UseClassExceptionsFlag
#	undef Py_UseClassExceptionsFlag
#endif
#define Py_UseClassExceptionsFlag (*(int(*))DynPy_GetAddr(79))

#ifdef Py_FrozenFlag
#	undef Py_FrozenFlag
#endif
#define Py_FrozenFlag (*(int(*))DynPy_GetAddr(80))

#ifdef Py_TabcheckFlag
#	undef Py_TabcheckFlag
#endif
#define Py_TabcheckFlag (*(int(*))DynPy_GetAddr(81))

#ifdef Py_UnicodeFlag
#	undef Py_UnicodeFlag
#endif
#define Py_UnicodeFlag (*(int(*))DynPy_GetAddr(82))

#ifdef Py_IgnoreEnvironmentFlag
#	undef Py_IgnoreEnvironmentFlag
#endif
#define Py_IgnoreEnvironmentFlag (*(int(*))DynPy_GetAddr(83))

#ifdef Py_DivisionWarningFlag
#	undef Py_DivisionWarningFlag
#endif
#define Py_DivisionWarningFlag (*(int(*))DynPy_GetAddr(84))

#ifdef Py_DontWriteBytecodeFlag
#	undef Py_DontWriteBytecodeFlag
#endif
#define Py_DontWriteBytecodeFlag (*(int(*))DynPy_GetAddr(85))

#ifdef Py_NoUserSiteDirectory
#	undef Py_NoUserSiteDirectory
#endif
#define Py_NoUserSiteDirectory (*(int(*))DynPy_GetAddr(86))

#ifdef _Py_QnewFlag
#	undef _Py_QnewFlag
#endif
#define _Py_QnewFlag (*(int(*))DynPy_GetAddr(87))

#ifdef Py_Py3kWarningFlag
#	undef Py_Py3kWarningFlag
#endif
#define Py_Py3kWarningFlag (*(int(*))DynPy_GetAddr(88))

#ifdef Py_FatalError
#	undef Py_FatalError
#endif
#define Py_FatalError ((void(*)(const char *message))DynPy_GetAddr(89))

#ifdef PyUnicode_Type
#	undef PyUnicode_Type
#endif
#define PyUnicode_Type (*(PyTypeObject(*))DynPy_GetAddr(90))

#ifdef PyUnicodeUCS2_FromUnicode
#	undef PyUnicodeUCS2_FromUnicode
#endif
#define PyUnicodeUCS2_FromUnicode ((PyObject*(*)( const Py_UNICODE *u, Py_ssize_t size ))DynPy_GetAddr(91))

#ifdef PyUnicodeUCS2_FromStringAndSize
#	undef PyUnicodeUCS2_FromStringAndSize
#endif
#define PyUnicodeUCS2_FromStringAndSize ((PyObject*(*)( const char *u, Py_ssize_t size ))DynPy_GetAddr(92))

#ifdef PyUnicodeUCS2_FromString
#	undef PyUnicodeUCS2_FromString
#endif
#define PyUnicodeUCS2_FromString ((PyObject*(*)( const char *u ))DynPy_GetAddr(93))

#ifdef PyUnicodeUCS2_AsUnicode
#	undef PyUnicodeUCS2_AsUnicode
#endif
#define PyUnicodeUCS2_AsUnicode ((Py_UNICODE *(*)( PyObject *unicode ))DynPy_GetAddr(94))

#ifdef PyUnicodeUCS2_GetSize
#	undef PyUnicodeUCS2_GetSize
#endif
#define PyUnicodeUCS2_GetSize ((Py_ssize_t(*)( PyObject *unicode ))DynPy_GetAddr(95))

#ifdef PyUnicodeUCS2_GetMax
#	undef PyUnicodeUCS2_GetMax
#endif
#define PyUnicodeUCS2_GetMax ((Py_UNICODE(*)(void))DynPy_GetAddr(96))

#ifdef PyUnicodeUCS2_Resize
#	undef PyUnicodeUCS2_Resize
#endif
#define PyUnicodeUCS2_Resize ((int(*)( PyObject **unicode, Py_ssize_t length ))DynPy_GetAddr(97))

#ifdef PyUnicodeUCS2_FromEncodedObject
#	undef PyUnicodeUCS2_FromEncodedObject
#endif
#define PyUnicodeUCS2_FromEncodedObject ((PyObject*(*)( register PyObject *obj, const char *encoding, const char *errors ))DynPy_GetAddr(98))

#ifdef PyUnicodeUCS2_FromObject
#	undef PyUnicodeUCS2_FromObject
#endif
#define PyUnicodeUCS2_FromObject ((PyObject*(*)( register PyObject *obj ))DynPy_GetAddr(99))

#ifdef PyUnicodeUCS2_FromFormatV
#	undef PyUnicodeUCS2_FromFormatV
#endif
#define PyUnicodeUCS2_FromFormatV ((PyObject *(*)(const char*, va_list))DynPy_GetAddr(100))

#ifdef PyUnicodeUCS2_FromFormat
#	undef PyUnicodeUCS2_FromFormat
#endif
#define PyUnicodeUCS2_FromFormat ((PyObject *(*)(const char*, ...))DynPy_GetAddr(101))

#ifdef _PyUnicode_FormatAdvanced
#	undef _PyUnicode_FormatAdvanced
#endif
#define _PyUnicode_FormatAdvanced ((PyObject *(*)(PyObject *obj, Py_UNICODE *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(102))

#ifdef PyUnicodeUCS2_FromWideChar
#	undef PyUnicodeUCS2_FromWideChar
#endif
#define PyUnicodeUCS2_FromWideChar ((PyObject*(*)( register const wchar_t *w, Py_ssize_t size ))DynPy_GetAddr(103))

#ifdef PyUnicodeUCS2_AsWideChar
#	undef PyUnicodeUCS2_AsWideChar
#endif
#define PyUnicodeUCS2_AsWideChar ((Py_ssize_t(*)( PyUnicodeObject *unicode, register wchar_t *w, Py_ssize_t size ))DynPy_GetAddr(104))

#ifdef PyUnicodeUCS2_FromOrdinal
#	undef PyUnicodeUCS2_FromOrdinal
#endif
#define PyUnicodeUCS2_FromOrdinal ((PyObject*(*)(int ordinal))DynPy_GetAddr(105))

#ifdef PyUnicodeUCS2_ClearFreelist
#	undef PyUnicodeUCS2_ClearFreelist
#endif
#define PyUnicodeUCS2_ClearFreelist ((int(*)(void))DynPy_GetAddr(106))

#ifdef _PyUnicodeUCS2_AsDefaultEncodedString
#	undef _PyUnicodeUCS2_AsDefaultEncodedString
#endif
#define _PyUnicodeUCS2_AsDefaultEncodedString ((PyObject *(*)( PyObject *, const char *))DynPy_GetAddr(107))

#ifdef PyUnicodeUCS2_GetDefaultEncoding
#	undef PyUnicodeUCS2_GetDefaultEncoding
#endif
#define PyUnicodeUCS2_GetDefaultEncoding ((const char*(*)(void))DynPy_GetAddr(108))

#ifdef PyUnicodeUCS2_SetDefaultEncoding
#	undef PyUnicodeUCS2_SetDefaultEncoding
#endif
#define PyUnicodeUCS2_SetDefaultEncoding ((int(*)( const char *encoding ))DynPy_GetAddr(109))

#ifdef PyUnicodeUCS2_Decode
#	undef PyUnicodeUCS2_Decode
#endif
#define PyUnicodeUCS2_Decode ((PyObject*(*)( const char *s, Py_ssize_t size, const char *encoding, const char *errors ))DynPy_GetAddr(110))

#ifdef PyUnicodeUCS2_Encode
#	undef PyUnicodeUCS2_Encode
#endif
#define PyUnicodeUCS2_Encode ((PyObject*(*)( const Py_UNICODE *s, Py_ssize_t size, const char *encoding, const char *errors ))DynPy_GetAddr(111))

#ifdef PyUnicodeUCS2_AsEncodedObject
#	undef PyUnicodeUCS2_AsEncodedObject
#endif
#define PyUnicodeUCS2_AsEncodedObject ((PyObject*(*)( PyObject *unicode, const char *encoding, const char *errors ))DynPy_GetAddr(112))

#ifdef PyUnicodeUCS2_AsEncodedString
#	undef PyUnicodeUCS2_AsEncodedString
#endif
#define PyUnicodeUCS2_AsEncodedString ((PyObject*(*)( PyObject *unicode, const char *encoding, const char *errors ))DynPy_GetAddr(113))

#ifdef PyUnicode_BuildEncodingMap
#	undef PyUnicode_BuildEncodingMap
#endif
#define PyUnicode_BuildEncodingMap ((PyObject*(*)( PyObject* string ))DynPy_GetAddr(114))

#ifdef PyUnicode_DecodeUTF7
#	undef PyUnicode_DecodeUTF7
#endif
#define PyUnicode_DecodeUTF7 ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(115))

#ifdef PyUnicode_DecodeUTF7Stateful
#	undef PyUnicode_DecodeUTF7Stateful
#endif
#define PyUnicode_DecodeUTF7Stateful ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed ))DynPy_GetAddr(116))

#ifdef PyUnicode_EncodeUTF7
#	undef PyUnicode_EncodeUTF7
#endif
#define PyUnicode_EncodeUTF7 ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, int base64SetO, int base64WhiteSpace, const char *errors ))DynPy_GetAddr(117))

#ifdef PyUnicodeUCS2_DecodeUTF8
#	undef PyUnicodeUCS2_DecodeUTF8
#endif
#define PyUnicodeUCS2_DecodeUTF8 ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(118))

#ifdef PyUnicodeUCS2_DecodeUTF8Stateful
#	undef PyUnicodeUCS2_DecodeUTF8Stateful
#endif
#define PyUnicodeUCS2_DecodeUTF8Stateful ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed ))DynPy_GetAddr(119))

#ifdef PyUnicodeUCS2_AsUTF8String
#	undef PyUnicodeUCS2_AsUTF8String
#endif
#define PyUnicodeUCS2_AsUTF8String ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(120))

#ifdef PyUnicodeUCS2_EncodeUTF8
#	undef PyUnicodeUCS2_EncodeUTF8
#endif
#define PyUnicodeUCS2_EncodeUTF8 ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors ))DynPy_GetAddr(121))

#ifdef PyUnicodeUCS2_DecodeUTF32
#	undef PyUnicodeUCS2_DecodeUTF32
#endif
#define PyUnicodeUCS2_DecodeUTF32 ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, int *byteorder ))DynPy_GetAddr(122))

#ifdef PyUnicodeUCS2_DecodeUTF32Stateful
#	undef PyUnicodeUCS2_DecodeUTF32Stateful
#endif
#define PyUnicodeUCS2_DecodeUTF32Stateful ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed ))DynPy_GetAddr(123))

#ifdef PyUnicodeUCS2_AsUTF32String
#	undef PyUnicodeUCS2_AsUTF32String
#endif
#define PyUnicodeUCS2_AsUTF32String ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(124))

#ifdef PyUnicodeUCS2_EncodeUTF32
#	undef PyUnicodeUCS2_EncodeUTF32
#endif
#define PyUnicodeUCS2_EncodeUTF32 ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder ))DynPy_GetAddr(125))

#ifdef PyUnicodeUCS2_DecodeUTF16
#	undef PyUnicodeUCS2_DecodeUTF16
#endif
#define PyUnicodeUCS2_DecodeUTF16 ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, int *byteorder ))DynPy_GetAddr(126))

#ifdef PyUnicodeUCS2_DecodeUTF16Stateful
#	undef PyUnicodeUCS2_DecodeUTF16Stateful
#endif
#define PyUnicodeUCS2_DecodeUTF16Stateful ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, int *byteorder, Py_ssize_t *consumed ))DynPy_GetAddr(127))

#ifdef PyUnicodeUCS2_AsUTF16String
#	undef PyUnicodeUCS2_AsUTF16String
#endif
#define PyUnicodeUCS2_AsUTF16String ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(128))

#ifdef PyUnicodeUCS2_EncodeUTF16
#	undef PyUnicodeUCS2_EncodeUTF16
#endif
#define PyUnicodeUCS2_EncodeUTF16 ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors, int byteorder ))DynPy_GetAddr(129))

#ifdef PyUnicodeUCS2_DecodeUnicodeEscape
#	undef PyUnicodeUCS2_DecodeUnicodeEscape
#endif
#define PyUnicodeUCS2_DecodeUnicodeEscape ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(130))

#ifdef PyUnicodeUCS2_AsUnicodeEscapeString
#	undef PyUnicodeUCS2_AsUnicodeEscapeString
#endif
#define PyUnicodeUCS2_AsUnicodeEscapeString ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(131))

#ifdef PyUnicodeUCS2_EncodeUnicodeEscape
#	undef PyUnicodeUCS2_EncodeUnicodeEscape
#endif
#define PyUnicodeUCS2_EncodeUnicodeEscape ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length ))DynPy_GetAddr(132))

#ifdef PyUnicodeUCS2_DecodeRawUnicodeEscape
#	undef PyUnicodeUCS2_DecodeRawUnicodeEscape
#endif
#define PyUnicodeUCS2_DecodeRawUnicodeEscape ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(133))

#ifdef PyUnicodeUCS2_AsRawUnicodeEscapeString
#	undef PyUnicodeUCS2_AsRawUnicodeEscapeString
#endif
#define PyUnicodeUCS2_AsRawUnicodeEscapeString ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(134))

#ifdef PyUnicodeUCS2_EncodeRawUnicodeEscape
#	undef PyUnicodeUCS2_EncodeRawUnicodeEscape
#endif
#define PyUnicodeUCS2_EncodeRawUnicodeEscape ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length ))DynPy_GetAddr(135))

#ifdef PyUnicodeUCS2_DecodeLatin1
#	undef PyUnicodeUCS2_DecodeLatin1
#endif
#define PyUnicodeUCS2_DecodeLatin1 ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(136))

#ifdef PyUnicodeUCS2_AsLatin1String
#	undef PyUnicodeUCS2_AsLatin1String
#endif
#define PyUnicodeUCS2_AsLatin1String ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(137))

#ifdef PyUnicodeUCS2_EncodeLatin1
#	undef PyUnicodeUCS2_EncodeLatin1
#endif
#define PyUnicodeUCS2_EncodeLatin1 ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors ))DynPy_GetAddr(138))

#ifdef PyUnicodeUCS2_DecodeASCII
#	undef PyUnicodeUCS2_DecodeASCII
#endif
#define PyUnicodeUCS2_DecodeASCII ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(139))

#ifdef PyUnicodeUCS2_AsASCIIString
#	undef PyUnicodeUCS2_AsASCIIString
#endif
#define PyUnicodeUCS2_AsASCIIString ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(140))

#ifdef PyUnicodeUCS2_EncodeASCII
#	undef PyUnicodeUCS2_EncodeASCII
#endif
#define PyUnicodeUCS2_EncodeASCII ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors ))DynPy_GetAddr(141))

#ifdef PyUnicodeUCS2_DecodeCharmap
#	undef PyUnicodeUCS2_DecodeCharmap
#endif
#define PyUnicodeUCS2_DecodeCharmap ((PyObject*(*)( const char *string, Py_ssize_t length, PyObject *mapping, const char *errors ))DynPy_GetAddr(142))

#ifdef PyUnicodeUCS2_AsCharmapString
#	undef PyUnicodeUCS2_AsCharmapString
#endif
#define PyUnicodeUCS2_AsCharmapString ((PyObject*(*)( PyObject *unicode, PyObject *mapping ))DynPy_GetAddr(143))

#ifdef PyUnicodeUCS2_EncodeCharmap
#	undef PyUnicodeUCS2_EncodeCharmap
#endif
#define PyUnicodeUCS2_EncodeCharmap ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, PyObject *mapping, const char *errors ))DynPy_GetAddr(144))

#ifdef PyUnicodeUCS2_TranslateCharmap
#	undef PyUnicodeUCS2_TranslateCharmap
#endif
#define PyUnicodeUCS2_TranslateCharmap ((PyObject *(*)( const Py_UNICODE *data, Py_ssize_t length, PyObject *table, const char *errors ))DynPy_GetAddr(145))

#ifdef PyUnicode_DecodeMBCS
#	undef PyUnicode_DecodeMBCS
#endif
#define PyUnicode_DecodeMBCS ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors ))DynPy_GetAddr(146))

#ifdef PyUnicode_DecodeMBCSStateful
#	undef PyUnicode_DecodeMBCSStateful
#endif
#define PyUnicode_DecodeMBCSStateful ((PyObject*(*)( const char *string, Py_ssize_t length, const char *errors, Py_ssize_t *consumed ))DynPy_GetAddr(147))

#ifdef PyUnicode_AsMBCSString
#	undef PyUnicode_AsMBCSString
#endif
#define PyUnicode_AsMBCSString ((PyObject*(*)( PyObject *unicode ))DynPy_GetAddr(148))

#ifdef PyUnicode_EncodeMBCS
#	undef PyUnicode_EncodeMBCS
#endif
#define PyUnicode_EncodeMBCS ((PyObject*(*)( const Py_UNICODE *data, Py_ssize_t length, const char *errors ))DynPy_GetAddr(149))

#ifdef PyUnicodeUCS2_EncodeDecimal
#	undef PyUnicodeUCS2_EncodeDecimal
#endif
#define PyUnicodeUCS2_EncodeDecimal ((int(*)( Py_UNICODE *s, Py_ssize_t length, char *output, const char *errors ))DynPy_GetAddr(150))

#ifdef PyUnicodeUCS2_Concat
#	undef PyUnicodeUCS2_Concat
#endif
#define PyUnicodeUCS2_Concat ((PyObject*(*)( PyObject *left, PyObject *right ))DynPy_GetAddr(151))

#ifdef PyUnicodeUCS2_Split
#	undef PyUnicodeUCS2_Split
#endif
#define PyUnicodeUCS2_Split ((PyObject*(*)( PyObject *s, PyObject *sep, Py_ssize_t maxsplit ))DynPy_GetAddr(152))

#ifdef PyUnicodeUCS2_Splitlines
#	undef PyUnicodeUCS2_Splitlines
#endif
#define PyUnicodeUCS2_Splitlines ((PyObject*(*)( PyObject *s, int keepends ))DynPy_GetAddr(153))

#ifdef PyUnicodeUCS2_Partition
#	undef PyUnicodeUCS2_Partition
#endif
#define PyUnicodeUCS2_Partition ((PyObject*(*)( PyObject *s, PyObject *sep ))DynPy_GetAddr(154))

#ifdef PyUnicodeUCS2_RPartition
#	undef PyUnicodeUCS2_RPartition
#endif
#define PyUnicodeUCS2_RPartition ((PyObject*(*)( PyObject *s, PyObject *sep ))DynPy_GetAddr(155))

#ifdef PyUnicodeUCS2_RSplit
#	undef PyUnicodeUCS2_RSplit
#endif
#define PyUnicodeUCS2_RSplit ((PyObject*(*)( PyObject *s, PyObject *sep, Py_ssize_t maxsplit ))DynPy_GetAddr(156))

#ifdef PyUnicodeUCS2_Translate
#	undef PyUnicodeUCS2_Translate
#endif
#define PyUnicodeUCS2_Translate ((PyObject *(*)( PyObject *str, PyObject *table, const char *errors ))DynPy_GetAddr(157))

#ifdef PyUnicodeUCS2_Join
#	undef PyUnicodeUCS2_Join
#endif
#define PyUnicodeUCS2_Join ((PyObject*(*)( PyObject *separator, PyObject *seq ))DynPy_GetAddr(158))

#ifdef PyUnicodeUCS2_Tailmatch
#	undef PyUnicodeUCS2_Tailmatch
#endif
#define PyUnicodeUCS2_Tailmatch ((Py_ssize_t(*)( PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction ))DynPy_GetAddr(159))

#ifdef PyUnicodeUCS2_Find
#	undef PyUnicodeUCS2_Find
#endif
#define PyUnicodeUCS2_Find ((Py_ssize_t(*)( PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end, int direction ))DynPy_GetAddr(160))

#ifdef PyUnicodeUCS2_Count
#	undef PyUnicodeUCS2_Count
#endif
#define PyUnicodeUCS2_Count ((Py_ssize_t(*)( PyObject *str, PyObject *substr, Py_ssize_t start, Py_ssize_t end ))DynPy_GetAddr(161))

#ifdef PyUnicodeUCS2_Replace
#	undef PyUnicodeUCS2_Replace
#endif
#define PyUnicodeUCS2_Replace ((PyObject *(*)( PyObject *str, PyObject *substr, PyObject *replstr, Py_ssize_t maxcount ))DynPy_GetAddr(162))

#ifdef PyUnicodeUCS2_Compare
#	undef PyUnicodeUCS2_Compare
#endif
#define PyUnicodeUCS2_Compare ((int(*)( PyObject *left, PyObject *right ))DynPy_GetAddr(163))

#ifdef PyUnicodeUCS2_RichCompare
#	undef PyUnicodeUCS2_RichCompare
#endif
#define PyUnicodeUCS2_RichCompare ((PyObject *(*)( PyObject *left, PyObject *right, int op ))DynPy_GetAddr(164))

#ifdef PyUnicodeUCS2_Format
#	undef PyUnicodeUCS2_Format
#endif
#define PyUnicodeUCS2_Format ((PyObject *(*)( PyObject *format, PyObject *args ))DynPy_GetAddr(165))

#ifdef PyUnicodeUCS2_Contains
#	undef PyUnicodeUCS2_Contains
#endif
#define PyUnicodeUCS2_Contains ((int(*)( PyObject *container, PyObject *element ))DynPy_GetAddr(166))

#ifdef _PyUnicode_XStrip
#	undef _PyUnicode_XStrip
#endif
#define _PyUnicode_XStrip ((PyObject *(*)( PyUnicodeObject *self, int striptype, PyObject *sepobj ))DynPy_GetAddr(167))

#ifdef _PyUnicodeUCS2_IsLowercase
#	undef _PyUnicodeUCS2_IsLowercase
#endif
#define _PyUnicodeUCS2_IsLowercase ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(168))

#ifdef _PyUnicodeUCS2_IsUppercase
#	undef _PyUnicodeUCS2_IsUppercase
#endif
#define _PyUnicodeUCS2_IsUppercase ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(169))

#ifdef _PyUnicodeUCS2_IsTitlecase
#	undef _PyUnicodeUCS2_IsTitlecase
#endif
#define _PyUnicodeUCS2_IsTitlecase ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(170))

#ifdef _PyUnicodeUCS2_IsWhitespace
#	undef _PyUnicodeUCS2_IsWhitespace
#endif
#define _PyUnicodeUCS2_IsWhitespace ((int(*)( const Py_UNICODE ch ))DynPy_GetAddr(171))

#ifdef _PyUnicodeUCS2_IsLinebreak
#	undef _PyUnicodeUCS2_IsLinebreak
#endif
#define _PyUnicodeUCS2_IsLinebreak ((int(*)( const Py_UNICODE ch ))DynPy_GetAddr(172))

#ifdef _PyUnicodeUCS2_ToLowercase
#	undef _PyUnicodeUCS2_ToLowercase
#endif
#define _PyUnicodeUCS2_ToLowercase ((Py_UNICODE(*)( Py_UNICODE ch ))DynPy_GetAddr(173))

#ifdef _PyUnicodeUCS2_ToUppercase
#	undef _PyUnicodeUCS2_ToUppercase
#endif
#define _PyUnicodeUCS2_ToUppercase ((Py_UNICODE(*)( Py_UNICODE ch ))DynPy_GetAddr(174))

#ifdef _PyUnicodeUCS2_ToTitlecase
#	undef _PyUnicodeUCS2_ToTitlecase
#endif
#define _PyUnicodeUCS2_ToTitlecase ((Py_UNICODE(*)( Py_UNICODE ch ))DynPy_GetAddr(175))

#ifdef _PyUnicodeUCS2_ToDecimalDigit
#	undef _PyUnicodeUCS2_ToDecimalDigit
#endif
#define _PyUnicodeUCS2_ToDecimalDigit ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(176))

#ifdef _PyUnicodeUCS2_ToDigit
#	undef _PyUnicodeUCS2_ToDigit
#endif
#define _PyUnicodeUCS2_ToDigit ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(177))

#ifdef _PyUnicodeUCS2_ToNumeric
#	undef _PyUnicodeUCS2_ToNumeric
#endif
#define _PyUnicodeUCS2_ToNumeric ((double(*)( Py_UNICODE ch ))DynPy_GetAddr(178))

#ifdef _PyUnicodeUCS2_IsDecimalDigit
#	undef _PyUnicodeUCS2_IsDecimalDigit
#endif
#define _PyUnicodeUCS2_IsDecimalDigit ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(179))

#ifdef _PyUnicodeUCS2_IsDigit
#	undef _PyUnicodeUCS2_IsDigit
#endif
#define _PyUnicodeUCS2_IsDigit ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(180))

#ifdef _PyUnicodeUCS2_IsNumeric
#	undef _PyUnicodeUCS2_IsNumeric
#endif
#define _PyUnicodeUCS2_IsNumeric ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(181))

#ifdef _PyUnicodeUCS2_IsAlpha
#	undef _PyUnicodeUCS2_IsAlpha
#endif
#define _PyUnicodeUCS2_IsAlpha ((int(*)( Py_UNICODE ch ))DynPy_GetAddr(182))

#ifdef PyInt_Type
#	undef PyInt_Type
#endif
#define PyInt_Type (*(PyTypeObject(*))DynPy_GetAddr(183))

#ifdef PyInt_FromString
#	undef PyInt_FromString
#endif
#define PyInt_FromString ((PyObject *(*)(char*, char**, int))DynPy_GetAddr(184))

#ifdef PyInt_FromUnicode
#	undef PyInt_FromUnicode
#endif
#define PyInt_FromUnicode ((PyObject *(*)(Py_UNICODE*, Py_ssize_t, int))DynPy_GetAddr(185))

#ifdef PyInt_FromLong
#	undef PyInt_FromLong
#endif
#define PyInt_FromLong ((PyObject *(*)(long))DynPy_GetAddr(186))

#ifdef PyInt_FromSize_t
#	undef PyInt_FromSize_t
#endif
#define PyInt_FromSize_t ((PyObject *(*)(size_t))DynPy_GetAddr(187))

#ifdef PyInt_FromSsize_t
#	undef PyInt_FromSsize_t
#endif
#define PyInt_FromSsize_t ((PyObject *(*)(Py_ssize_t))DynPy_GetAddr(188))

#ifdef PyInt_AsLong
#	undef PyInt_AsLong
#endif
#define PyInt_AsLong ((long(*)(PyObject *))DynPy_GetAddr(189))

#ifdef PyInt_AsSsize_t
#	undef PyInt_AsSsize_t
#endif
#define PyInt_AsSsize_t ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(190))

#ifdef PyInt_AsUnsignedLongMask
#	undef PyInt_AsUnsignedLongMask
#endif
#define PyInt_AsUnsignedLongMask ((unsigned long(*)(PyObject *))DynPy_GetAddr(191))

#ifdef PyInt_AsUnsignedLongLongMask
#	undef PyInt_AsUnsignedLongLongMask
#endif
#define PyInt_AsUnsignedLongLongMask ((unsigned __int64(*)(PyObject *))DynPy_GetAddr(192))

#ifdef PyInt_GetMax
#	undef PyInt_GetMax
#endif
#define PyInt_GetMax ((long(*)(void))DynPy_GetAddr(193))

#ifdef PyOS_strtoul
#	undef PyOS_strtoul
#endif
#define PyOS_strtoul ((unsigned long(*)(char *, char **, int))DynPy_GetAddr(194))

#ifdef PyOS_strtol
#	undef PyOS_strtol
#endif
#define PyOS_strtol ((long(*)(char *, char **, int))DynPy_GetAddr(195))

#ifdef PyInt_ClearFreeList
#	undef PyInt_ClearFreeList
#endif
#define PyInt_ClearFreeList ((int(*)(void))DynPy_GetAddr(196))

#ifdef _PyInt_Format
#	undef _PyInt_Format
#endif
#define _PyInt_Format ((PyObject*(*)(PyIntObject* v, int base, int newstyle))DynPy_GetAddr(197))

#ifdef _PyInt_FormatAdvanced
#	undef _PyInt_FormatAdvanced
#endif
#define _PyInt_FormatAdvanced ((PyObject *(*)(PyObject *obj, char *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(198))

#ifdef PyBool_Type
#	undef PyBool_Type
#endif
#define PyBool_Type (*(PyTypeObject(*))DynPy_GetAddr(199))

#ifdef _Py_ZeroStruct
#	undef _Py_ZeroStruct
#endif
#define _Py_ZeroStruct (*(PyIntObject(*))DynPy_GetAddr(200))

#ifdef _Py_TrueStruct
#	undef _Py_TrueStruct
#endif
#define _Py_TrueStruct (*(PyIntObject(*))DynPy_GetAddr(201))

#ifdef PyBool_FromLong
#	undef PyBool_FromLong
#endif
#define PyBool_FromLong ((PyObject *(*)(long))DynPy_GetAddr(202))

#ifdef PyLong_Type
#	undef PyLong_Type
#endif
#define PyLong_Type (*(PyTypeObject(*))DynPy_GetAddr(203))

#ifdef PyLong_FromLong
#	undef PyLong_FromLong
#endif
#define PyLong_FromLong ((PyObject *(*)(long))DynPy_GetAddr(204))

#ifdef PyLong_FromUnsignedLong
#	undef PyLong_FromUnsignedLong
#endif
#define PyLong_FromUnsignedLong ((PyObject *(*)(unsigned long))DynPy_GetAddr(205))

#ifdef PyLong_FromDouble
#	undef PyLong_FromDouble
#endif
#define PyLong_FromDouble ((PyObject *(*)(double))DynPy_GetAddr(206))

#ifdef PyLong_FromSize_t
#	undef PyLong_FromSize_t
#endif
#define PyLong_FromSize_t ((PyObject *(*)(size_t))DynPy_GetAddr(207))

#ifdef PyLong_FromSsize_t
#	undef PyLong_FromSsize_t
#endif
#define PyLong_FromSsize_t ((PyObject *(*)(Py_ssize_t))DynPy_GetAddr(208))

#ifdef PyLong_AsLong
#	undef PyLong_AsLong
#endif
#define PyLong_AsLong ((long(*)(PyObject *))DynPy_GetAddr(209))

#ifdef PyLong_AsLongAndOverflow
#	undef PyLong_AsLongAndOverflow
#endif
#define PyLong_AsLongAndOverflow ((long(*)(PyObject *, int *))DynPy_GetAddr(210))

#ifdef PyLong_AsUnsignedLong
#	undef PyLong_AsUnsignedLong
#endif
#define PyLong_AsUnsignedLong ((unsigned long(*)(PyObject *))DynPy_GetAddr(211))

#ifdef PyLong_AsUnsignedLongMask
#	undef PyLong_AsUnsignedLongMask
#endif
#define PyLong_AsUnsignedLongMask ((unsigned long(*)(PyObject *))DynPy_GetAddr(212))

#ifdef PyLong_AsSsize_t
#	undef PyLong_AsSsize_t
#endif
#define PyLong_AsSsize_t ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(213))

#ifdef PyLong_GetInfo
#	undef PyLong_GetInfo
#endif
#define PyLong_GetInfo ((PyObject *(*)(void))DynPy_GetAddr(214))

#ifdef _PyLong_Frexp
#	undef _PyLong_Frexp
#endif
#define _PyLong_Frexp ((double(*)(PyLongObject *a, Py_ssize_t *e))DynPy_GetAddr(215))

#ifdef PyLong_AsDouble
#	undef PyLong_AsDouble
#endif
#define PyLong_AsDouble ((double(*)(PyObject *))DynPy_GetAddr(216))

#ifdef PyLong_FromVoidPtr
#	undef PyLong_FromVoidPtr
#endif
#define PyLong_FromVoidPtr ((PyObject *(*)(void *))DynPy_GetAddr(217))

#ifdef PyLong_AsVoidPtr
#	undef PyLong_AsVoidPtr
#endif
#define PyLong_AsVoidPtr ((void *(*)(PyObject *))DynPy_GetAddr(218))

#ifdef PyLong_FromLongLong
#	undef PyLong_FromLongLong
#endif
#define PyLong_FromLongLong ((PyObject *(*)(__int64))DynPy_GetAddr(219))

#ifdef PyLong_FromUnsignedLongLong
#	undef PyLong_FromUnsignedLongLong
#endif
#define PyLong_FromUnsignedLongLong ((PyObject *(*)(unsigned __int64))DynPy_GetAddr(220))

#ifdef PyLong_AsLongLong
#	undef PyLong_AsLongLong
#endif
#define PyLong_AsLongLong ((__int64(*)(PyObject *))DynPy_GetAddr(221))

#ifdef PyLong_AsUnsignedLongLong
#	undef PyLong_AsUnsignedLongLong
#endif
#define PyLong_AsUnsignedLongLong ((unsigned __int64(*)(PyObject *))DynPy_GetAddr(222))

#ifdef PyLong_AsUnsignedLongLongMask
#	undef PyLong_AsUnsignedLongLongMask
#endif
#define PyLong_AsUnsignedLongLongMask ((unsigned __int64(*)(PyObject *))DynPy_GetAddr(223))

#ifdef PyLong_AsLongLongAndOverflow
#	undef PyLong_AsLongLongAndOverflow
#endif
#define PyLong_AsLongLongAndOverflow ((__int64(*)(PyObject *, int *))DynPy_GetAddr(224))

#ifdef PyLong_FromString
#	undef PyLong_FromString
#endif
#define PyLong_FromString ((PyObject *(*)(char *, char **, int))DynPy_GetAddr(225))

#ifdef PyLong_FromUnicode
#	undef PyLong_FromUnicode
#endif
#define PyLong_FromUnicode ((PyObject *(*)(Py_UNICODE*, Py_ssize_t, int))DynPy_GetAddr(226))

#ifdef _PyLong_Sign
#	undef _PyLong_Sign
#endif
#define _PyLong_Sign ((int(*)(PyObject *v))DynPy_GetAddr(227))

#ifdef _PyLong_NumBits
#	undef _PyLong_NumBits
#endif
#define _PyLong_NumBits ((size_t(*)(PyObject *v))DynPy_GetAddr(228))

#ifdef _PyLong_FromByteArray
#	undef _PyLong_FromByteArray
#endif
#define _PyLong_FromByteArray ((PyObject *(*)( const unsigned char* bytes, size_t n, int little_endian, int is_signed))DynPy_GetAddr(229))

#ifdef _PyLong_AsByteArray
#	undef _PyLong_AsByteArray
#endif
#define _PyLong_AsByteArray ((int(*)(PyLongObject* v, unsigned char* bytes, size_t n, int little_endian, int is_signed))DynPy_GetAddr(230))

#ifdef _PyLong_Format
#	undef _PyLong_Format
#endif
#define _PyLong_Format ((PyObject *(*)(PyObject *aa, int base, int addL, int newstyle))DynPy_GetAddr(231))

#ifdef _PyLong_FormatAdvanced
#	undef _PyLong_FormatAdvanced
#endif
#define _PyLong_FormatAdvanced ((PyObject *(*)(PyObject *obj, char *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(232))

#ifdef PyFloat_Type
#	undef PyFloat_Type
#endif
#define PyFloat_Type (*(PyTypeObject(*))DynPy_GetAddr(233))

#ifdef PyFloat_GetMax
#	undef PyFloat_GetMax
#endif
#define PyFloat_GetMax ((double(*)(void))DynPy_GetAddr(234))

#ifdef PyFloat_GetMin
#	undef PyFloat_GetMin
#endif
#define PyFloat_GetMin ((double(*)(void))DynPy_GetAddr(235))

#ifdef PyFloat_GetInfo
#	undef PyFloat_GetInfo
#endif
#define PyFloat_GetInfo ((PyObject *(*)(void))DynPy_GetAddr(236))

#ifdef PyFloat_FromString
#	undef PyFloat_FromString
#endif
#define PyFloat_FromString ((PyObject *(*)(PyObject*, char** junk))DynPy_GetAddr(237))

#ifdef PyFloat_FromDouble
#	undef PyFloat_FromDouble
#endif
#define PyFloat_FromDouble ((PyObject *(*)(double))DynPy_GetAddr(238))

#ifdef PyFloat_AsDouble
#	undef PyFloat_AsDouble
#endif
#define PyFloat_AsDouble ((double(*)(PyObject *))DynPy_GetAddr(239))

#ifdef PyFloat_AsReprString
#	undef PyFloat_AsReprString
#endif
#define PyFloat_AsReprString ((void(*)(char*, PyFloatObject *v))DynPy_GetAddr(240))

#ifdef PyFloat_AsString
#	undef PyFloat_AsString
#endif
#define PyFloat_AsString ((void(*)(char*, PyFloatObject *v))DynPy_GetAddr(241))

#ifdef _PyFloat_Pack4
#	undef _PyFloat_Pack4
#endif
#define _PyFloat_Pack4 ((int(*)(double x, unsigned char *p, int le))DynPy_GetAddr(242))

#ifdef _PyFloat_Pack8
#	undef _PyFloat_Pack8
#endif
#define _PyFloat_Pack8 ((int(*)(double x, unsigned char *p, int le))DynPy_GetAddr(243))

#ifdef _PyFloat_Unpack4
#	undef _PyFloat_Unpack4
#endif
#define _PyFloat_Unpack4 ((double(*)(const unsigned char *p, int le))DynPy_GetAddr(244))

#ifdef _PyFloat_Unpack8
#	undef _PyFloat_Unpack8
#endif
#define _PyFloat_Unpack8 ((double(*)(const unsigned char *p, int le))DynPy_GetAddr(245))

#ifdef PyFloat_ClearFreeList
#	undef PyFloat_ClearFreeList
#endif
#define PyFloat_ClearFreeList ((int(*)(void))DynPy_GetAddr(246))

#ifdef _PyFloat_FormatAdvanced
#	undef _PyFloat_FormatAdvanced
#endif
#define _PyFloat_FormatAdvanced ((PyObject *(*)(PyObject *obj, char *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(247))

#ifdef _Py_double_round
#	undef _Py_double_round
#endif
#define _Py_double_round ((PyObject *(*)(double x, int ndigits))DynPy_GetAddr(248))

#ifdef _Py_c_sum
#	undef _Py_c_sum
#endif
#define _Py_c_sum ((Py_complex(*)(Py_complex, Py_complex))DynPy_GetAddr(249))

#ifdef _Py_c_diff
#	undef _Py_c_diff
#endif
#define _Py_c_diff ((Py_complex(*)(Py_complex, Py_complex))DynPy_GetAddr(250))

#ifdef _Py_c_neg
#	undef _Py_c_neg
#endif
#define _Py_c_neg ((Py_complex(*)(Py_complex))DynPy_GetAddr(251))

#ifdef _Py_c_prod
#	undef _Py_c_prod
#endif
#define _Py_c_prod ((Py_complex(*)(Py_complex, Py_complex))DynPy_GetAddr(252))

#ifdef _Py_c_quot
#	undef _Py_c_quot
#endif
#define _Py_c_quot ((Py_complex(*)(Py_complex, Py_complex))DynPy_GetAddr(253))

#ifdef _Py_c_pow
#	undef _Py_c_pow
#endif
#define _Py_c_pow ((Py_complex(*)(Py_complex, Py_complex))DynPy_GetAddr(254))

#ifdef _Py_c_abs
#	undef _Py_c_abs
#endif
#define _Py_c_abs ((double(*)(Py_complex))DynPy_GetAddr(255))

#ifdef PyComplex_Type
#	undef PyComplex_Type
#endif
#define PyComplex_Type (*(PyTypeObject(*))DynPy_GetAddr(256))

#ifdef PyComplex_FromCComplex
#	undef PyComplex_FromCComplex
#endif
#define PyComplex_FromCComplex ((PyObject *(*)(Py_complex))DynPy_GetAddr(257))

#ifdef PyComplex_FromDoubles
#	undef PyComplex_FromDoubles
#endif
#define PyComplex_FromDoubles ((PyObject *(*)(double real, double imag))DynPy_GetAddr(258))

#ifdef PyComplex_RealAsDouble
#	undef PyComplex_RealAsDouble
#endif
#define PyComplex_RealAsDouble ((double(*)(PyObject *op))DynPy_GetAddr(259))

#ifdef PyComplex_ImagAsDouble
#	undef PyComplex_ImagAsDouble
#endif
#define PyComplex_ImagAsDouble ((double(*)(PyObject *op))DynPy_GetAddr(260))

#ifdef PyComplex_AsCComplex
#	undef PyComplex_AsCComplex
#endif
#define PyComplex_AsCComplex ((Py_complex(*)(PyObject *op))DynPy_GetAddr(261))

#ifdef _PyComplex_FormatAdvanced
#	undef _PyComplex_FormatAdvanced
#endif
#define _PyComplex_FormatAdvanced ((PyObject *(*)(PyObject *obj, char *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(262))

#ifdef PyRange_Type
#	undef PyRange_Type
#endif
#define PyRange_Type (*(PyTypeObject(*))DynPy_GetAddr(263))

#ifdef PyBaseString_Type
#	undef PyBaseString_Type
#endif
#define PyBaseString_Type (*(PyTypeObject(*))DynPy_GetAddr(264))

#ifdef PyString_Type
#	undef PyString_Type
#endif
#define PyString_Type (*(PyTypeObject(*))DynPy_GetAddr(265))

#ifdef PyString_FromStringAndSize
#	undef PyString_FromStringAndSize
#endif
#define PyString_FromStringAndSize ((PyObject *(*)(const char *, Py_ssize_t))DynPy_GetAddr(266))

#ifdef PyString_FromString
#	undef PyString_FromString
#endif
#define PyString_FromString ((PyObject *(*)(const char *))DynPy_GetAddr(267))

#ifdef PyString_FromFormatV
#	undef PyString_FromFormatV
#endif
#define PyString_FromFormatV ((PyObject *(*)(const char*, va_list))DynPy_GetAddr(268))

#ifdef PyString_FromFormat
#	undef PyString_FromFormat
#endif
#define PyString_FromFormat ((PyObject *(*)(const char*, ...))DynPy_GetAddr(269))

#ifdef PyString_Size
#	undef PyString_Size
#endif
#define PyString_Size ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(270))

#ifdef PyString_AsString
#	undef PyString_AsString
#endif
#define PyString_AsString ((char *(*)(PyObject *))DynPy_GetAddr(271))

#ifdef PyString_Repr
#	undef PyString_Repr
#endif
#define PyString_Repr ((PyObject *(*)(PyObject *, int))DynPy_GetAddr(272))

#ifdef PyString_Concat
#	undef PyString_Concat
#endif
#define PyString_Concat ((void(*)(PyObject **, PyObject *))DynPy_GetAddr(273))

#ifdef PyString_ConcatAndDel
#	undef PyString_ConcatAndDel
#endif
#define PyString_ConcatAndDel ((void(*)(PyObject **, PyObject *))DynPy_GetAddr(274))

#ifdef _PyString_Resize
#	undef _PyString_Resize
#endif
#define _PyString_Resize ((int(*)(PyObject **, Py_ssize_t))DynPy_GetAddr(275))

#ifdef _PyString_Eq
#	undef _PyString_Eq
#endif
#define _PyString_Eq ((int(*)(PyObject *, PyObject*))DynPy_GetAddr(276))

#ifdef PyString_Format
#	undef PyString_Format
#endif
#define PyString_Format ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(277))

#ifdef _PyString_FormatLong
#	undef _PyString_FormatLong
#endif
#define _PyString_FormatLong ((PyObject *(*)(PyObject*, int, int, int, char**, int*))DynPy_GetAddr(278))

#ifdef PyString_DecodeEscape
#	undef PyString_DecodeEscape
#endif
#define PyString_DecodeEscape ((PyObject *(*)(const char *, Py_ssize_t, const char *, Py_ssize_t, const char *))DynPy_GetAddr(279))

#ifdef PyString_InternInPlace
#	undef PyString_InternInPlace
#endif
#define PyString_InternInPlace ((void(*)(PyObject **))DynPy_GetAddr(280))

#ifdef PyString_InternImmortal
#	undef PyString_InternImmortal
#endif
#define PyString_InternImmortal ((void(*)(PyObject **))DynPy_GetAddr(281))

#ifdef PyString_InternFromString
#	undef PyString_InternFromString
#endif
#define PyString_InternFromString ((PyObject *(*)(const char *))DynPy_GetAddr(282))

#ifdef _Py_ReleaseInternedStrings
#	undef _Py_ReleaseInternedStrings
#endif
#define _Py_ReleaseInternedStrings ((void(*)(void))DynPy_GetAddr(283))

#ifdef _PyString_Join
#	undef _PyString_Join
#endif
#define _PyString_Join ((PyObject *(*)(PyObject *sep, PyObject *x))DynPy_GetAddr(284))

#ifdef PyString_Decode
#	undef PyString_Decode
#endif
#define PyString_Decode ((PyObject*(*)( const char *s, Py_ssize_t size, const char *encoding, const char *errors ))DynPy_GetAddr(285))

#ifdef PyString_Encode
#	undef PyString_Encode
#endif
#define PyString_Encode ((PyObject*(*)( const char *s, Py_ssize_t size, const char *encoding, const char *errors ))DynPy_GetAddr(286))

#ifdef PyString_AsEncodedObject
#	undef PyString_AsEncodedObject
#endif
#define PyString_AsEncodedObject ((PyObject*(*)( PyObject *str, const char *encoding, const char *errors ))DynPy_GetAddr(287))

#ifdef PyString_AsEncodedString
#	undef PyString_AsEncodedString
#endif
#define PyString_AsEncodedString ((PyObject*(*)( PyObject *str, const char *encoding, const char *errors ))DynPy_GetAddr(288))

#ifdef PyString_AsDecodedObject
#	undef PyString_AsDecodedObject
#endif
#define PyString_AsDecodedObject ((PyObject*(*)( PyObject *str, const char *encoding, const char *errors ))DynPy_GetAddr(289))

#ifdef PyString_AsDecodedString
#	undef PyString_AsDecodedString
#endif
#define PyString_AsDecodedString ((PyObject*(*)( PyObject *str, const char *encoding, const char *errors ))DynPy_GetAddr(290))

#ifdef PyString_AsStringAndSize
#	undef PyString_AsStringAndSize
#endif
#define PyString_AsStringAndSize ((int(*)( register PyObject *obj, register char **s, register Py_ssize_t *len ))DynPy_GetAddr(291))

#ifdef _PyString_InsertThousandsGrouping
#	undef _PyString_InsertThousandsGrouping
#endif
#define _PyString_InsertThousandsGrouping ((Py_ssize_t(*)(char *buffer, Py_ssize_t n_buffer, char *digits, Py_ssize_t n_digits, Py_ssize_t min_width, const char *grouping, const char *thousands_sep))DynPy_GetAddr(292))

#ifdef _PyBytes_FormatAdvanced
#	undef _PyBytes_FormatAdvanced
#endif
#define _PyBytes_FormatAdvanced ((PyObject *(*)(PyObject *obj, char *format_spec, Py_ssize_t format_spec_len))DynPy_GetAddr(293))

#ifdef PyMemoryView_Type
#	undef PyMemoryView_Type
#endif
#define PyMemoryView_Type (*(PyTypeObject(*))DynPy_GetAddr(294))

#ifdef PyMemoryView_GetContiguous
#	undef PyMemoryView_GetContiguous
#endif
#define PyMemoryView_GetContiguous ((PyObject *(*)(PyObject *base, int buffertype, char fort))DynPy_GetAddr(295))

#ifdef PyMemoryView_FromObject
#	undef PyMemoryView_FromObject
#endif
#define PyMemoryView_FromObject ((PyObject *(*)(PyObject *base))DynPy_GetAddr(296))

#ifdef PyMemoryView_FromBuffer
#	undef PyMemoryView_FromBuffer
#endif
#define PyMemoryView_FromBuffer ((PyObject *(*)(Py_buffer *info))DynPy_GetAddr(297))

#ifdef PyBuffer_Type
#	undef PyBuffer_Type
#endif
#define PyBuffer_Type (*(PyTypeObject(*))DynPy_GetAddr(298))

#ifdef PyBuffer_FromObject
#	undef PyBuffer_FromObject
#endif
#define PyBuffer_FromObject ((PyObject *(*)(PyObject *base, Py_ssize_t offset, Py_ssize_t size))DynPy_GetAddr(299))

#ifdef PyBuffer_FromReadWriteObject
#	undef PyBuffer_FromReadWriteObject
#endif
#define PyBuffer_FromReadWriteObject ((PyObject *(*)(PyObject *base, Py_ssize_t offset, Py_ssize_t size))DynPy_GetAddr(300))

#ifdef PyBuffer_FromMemory
#	undef PyBuffer_FromMemory
#endif
#define PyBuffer_FromMemory ((PyObject *(*)(void *ptr, Py_ssize_t size))DynPy_GetAddr(301))

#ifdef PyBuffer_FromReadWriteMemory
#	undef PyBuffer_FromReadWriteMemory
#endif
#define PyBuffer_FromReadWriteMemory ((PyObject *(*)(void *ptr, Py_ssize_t size))DynPy_GetAddr(302))

#ifdef PyBuffer_New
#	undef PyBuffer_New
#endif
#define PyBuffer_New ((PyObject *(*)(Py_ssize_t size))DynPy_GetAddr(303))

#ifdef PyByteArray_Type
#	undef PyByteArray_Type
#endif
#define PyByteArray_Type (*(PyTypeObject(*))DynPy_GetAddr(304))

#ifdef PyByteArrayIter_Type
#	undef PyByteArrayIter_Type
#endif
#define PyByteArrayIter_Type (*(PyTypeObject(*))DynPy_GetAddr(305))

#ifdef PyByteArray_FromObject
#	undef PyByteArray_FromObject
#endif
#define PyByteArray_FromObject ((PyObject *(*)(PyObject *))DynPy_GetAddr(306))

#ifdef PyByteArray_Concat
#	undef PyByteArray_Concat
#endif
#define PyByteArray_Concat ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(307))

#ifdef PyByteArray_FromStringAndSize
#	undef PyByteArray_FromStringAndSize
#endif
#define PyByteArray_FromStringAndSize ((PyObject *(*)(const char *, Py_ssize_t))DynPy_GetAddr(308))

#ifdef PyByteArray_Size
#	undef PyByteArray_Size
#endif
#define PyByteArray_Size ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(309))

#ifdef PyByteArray_AsString
#	undef PyByteArray_AsString
#endif
#define PyByteArray_AsString ((char *(*)(PyObject *))DynPy_GetAddr(310))

#ifdef PyByteArray_Resize
#	undef PyByteArray_Resize
#endif
#define PyByteArray_Resize ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(311))

#ifdef PyTuple_Type
#	undef PyTuple_Type
#endif
#define PyTuple_Type (*(PyTypeObject(*))DynPy_GetAddr(312))

#ifdef PyTuple_New
#	undef PyTuple_New
#endif
#define PyTuple_New ((PyObject *(*)(Py_ssize_t size))DynPy_GetAddr(313))

#ifdef PyTuple_Size
#	undef PyTuple_Size
#endif
#define PyTuple_Size ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(314))

#ifdef PyTuple_GetItem
#	undef PyTuple_GetItem
#endif
#define PyTuple_GetItem ((PyObject *(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(315))

#ifdef PyTuple_SetItem
#	undef PyTuple_SetItem
#endif
#define PyTuple_SetItem ((int(*)(PyObject *, Py_ssize_t, PyObject *))DynPy_GetAddr(316))

#ifdef PyTuple_GetSlice
#	undef PyTuple_GetSlice
#endif
#define PyTuple_GetSlice ((PyObject *(*)(PyObject *, Py_ssize_t, Py_ssize_t))DynPy_GetAddr(317))

#ifdef _PyTuple_Resize
#	undef _PyTuple_Resize
#endif
#define _PyTuple_Resize ((int(*)(PyObject **, Py_ssize_t))DynPy_GetAddr(318))

#ifdef PyTuple_Pack
#	undef PyTuple_Pack
#endif
#define PyTuple_Pack ((PyObject *(*)(Py_ssize_t, ...))DynPy_GetAddr(319))

#ifdef _PyTuple_MaybeUntrack
#	undef _PyTuple_MaybeUntrack
#endif
#define _PyTuple_MaybeUntrack ((void(*)(PyObject *))DynPy_GetAddr(320))

#ifdef PyTuple_ClearFreeList
#	undef PyTuple_ClearFreeList
#endif
#define PyTuple_ClearFreeList ((int(*)(void))DynPy_GetAddr(321))

#ifdef PyList_Type
#	undef PyList_Type
#endif
#define PyList_Type (*(PyTypeObject(*))DynPy_GetAddr(322))

#ifdef PyList_New
#	undef PyList_New
#endif
#define PyList_New ((PyObject *(*)(Py_ssize_t size))DynPy_GetAddr(323))

#ifdef PyList_Size
#	undef PyList_Size
#endif
#define PyList_Size ((Py_ssize_t(*)(PyObject *))DynPy_GetAddr(324))

#ifdef PyList_GetItem
#	undef PyList_GetItem
#endif
#define PyList_GetItem ((PyObject *(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(325))

#ifdef PyList_SetItem
#	undef PyList_SetItem
#endif
#define PyList_SetItem ((int(*)(PyObject *, Py_ssize_t, PyObject *))DynPy_GetAddr(326))

#ifdef PyList_Insert
#	undef PyList_Insert
#endif
#define PyList_Insert ((int(*)(PyObject *, Py_ssize_t, PyObject *))DynPy_GetAddr(327))

#ifdef PyList_Append
#	undef PyList_Append
#endif
#define PyList_Append ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(328))

#ifdef PyList_GetSlice
#	undef PyList_GetSlice
#endif
#define PyList_GetSlice ((PyObject *(*)(PyObject *, Py_ssize_t, Py_ssize_t))DynPy_GetAddr(329))

#ifdef PyList_SetSlice
#	undef PyList_SetSlice
#endif
#define PyList_SetSlice ((int(*)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *))DynPy_GetAddr(330))

#ifdef PyList_Sort
#	undef PyList_Sort
#endif
#define PyList_Sort ((int(*)(PyObject *))DynPy_GetAddr(331))

#ifdef PyList_Reverse
#	undef PyList_Reverse
#endif
#define PyList_Reverse ((int(*)(PyObject *))DynPy_GetAddr(332))

#ifdef PyList_AsTuple
#	undef PyList_AsTuple
#endif
#define PyList_AsTuple ((PyObject *(*)(PyObject *))DynPy_GetAddr(333))

#ifdef _PyList_Extend
#	undef _PyList_Extend
#endif
#define _PyList_Extend ((PyObject *(*)(PyListObject *, PyObject *))DynPy_GetAddr(334))

#ifdef PyDict_Type
#	undef PyDict_Type
#endif
#define PyDict_Type (*(PyTypeObject(*))DynPy_GetAddr(335))

#ifdef PyDictIterKey_Type
#	undef PyDictIterKey_Type
#endif
#define PyDictIterKey_Type (*(PyTypeObject(*))DynPy_GetAddr(336))

#ifdef PyDictIterValue_Type
#	undef PyDictIterValue_Type
#endif
#define PyDictIterValue_Type (*(PyTypeObject(*))DynPy_GetAddr(337))

#ifdef PyDictIterItem_Type
#	undef PyDictIterItem_Type
#endif
#define PyDictIterItem_Type (*(PyTypeObject(*))DynPy_GetAddr(338))

#ifdef PyDictKeys_Type
#	undef PyDictKeys_Type
#endif
#define PyDictKeys_Type (*(PyTypeObject(*))DynPy_GetAddr(339))

#ifdef PyDictItems_Type
#	undef PyDictItems_Type
#endif
#define PyDictItems_Type (*(PyTypeObject(*))DynPy_GetAddr(340))

#ifdef PyDictValues_Type
#	undef PyDictValues_Type
#endif
#define PyDictValues_Type (*(PyTypeObject(*))DynPy_GetAddr(341))

#ifdef PyDict_New
#	undef PyDict_New
#endif
#define PyDict_New ((PyObject *(*)(void))DynPy_GetAddr(342))

#ifdef PyDict_GetItem
#	undef PyDict_GetItem
#endif
#define PyDict_GetItem ((PyObject *(*)(PyObject *mp, PyObject *key))DynPy_GetAddr(343))

#ifdef PyDict_SetItem
#	undef PyDict_SetItem
#endif
#define PyDict_SetItem ((int(*)(PyObject *mp, PyObject *key, PyObject *item))DynPy_GetAddr(344))

#ifdef PyDict_DelItem
#	undef PyDict_DelItem
#endif
#define PyDict_DelItem ((int(*)(PyObject *mp, PyObject *key))DynPy_GetAddr(345))

#ifdef PyDict_Clear
#	undef PyDict_Clear
#endif
#define PyDict_Clear ((void(*)(PyObject *mp))DynPy_GetAddr(346))

#ifdef PyDict_Next
#	undef PyDict_Next
#endif
#define PyDict_Next ((int(*)( PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value))DynPy_GetAddr(347))

#ifdef _PyDict_Next
#	undef _PyDict_Next
#endif
#define _PyDict_Next ((int(*)( PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, long *hash))DynPy_GetAddr(348))

#ifdef PyDict_Keys
#	undef PyDict_Keys
#endif
#define PyDict_Keys ((PyObject *(*)(PyObject *mp))DynPy_GetAddr(349))

#ifdef PyDict_Values
#	undef PyDict_Values
#endif
#define PyDict_Values ((PyObject *(*)(PyObject *mp))DynPy_GetAddr(350))

#ifdef PyDict_Items
#	undef PyDict_Items
#endif
#define PyDict_Items ((PyObject *(*)(PyObject *mp))DynPy_GetAddr(351))

#ifdef PyDict_Size
#	undef PyDict_Size
#endif
#define PyDict_Size ((Py_ssize_t(*)(PyObject *mp))DynPy_GetAddr(352))

#ifdef PyDict_Copy
#	undef PyDict_Copy
#endif
#define PyDict_Copy ((PyObject *(*)(PyObject *mp))DynPy_GetAddr(353))

#ifdef PyDict_Contains
#	undef PyDict_Contains
#endif
#define PyDict_Contains ((int(*)(PyObject *mp, PyObject *key))DynPy_GetAddr(354))

#ifdef _PyDict_Contains
#	undef _PyDict_Contains
#endif
#define _PyDict_Contains ((int(*)(PyObject *mp, PyObject *key, long hash))DynPy_GetAddr(355))

#ifdef _PyDict_NewPresized
#	undef _PyDict_NewPresized
#endif
#define _PyDict_NewPresized ((PyObject *(*)(Py_ssize_t minused))DynPy_GetAddr(356))

#ifdef _PyDict_MaybeUntrack
#	undef _PyDict_MaybeUntrack
#endif
#define _PyDict_MaybeUntrack ((void(*)(PyObject *mp))DynPy_GetAddr(357))

#ifdef PyDict_Update
#	undef PyDict_Update
#endif
#define PyDict_Update ((int(*)(PyObject *mp, PyObject *other))DynPy_GetAddr(358))

#ifdef PyDict_Merge
#	undef PyDict_Merge
#endif
#define PyDict_Merge ((int(*)(PyObject *mp, PyObject *other, int override))DynPy_GetAddr(359))

#ifdef PyDict_MergeFromSeq2
#	undef PyDict_MergeFromSeq2
#endif
#define PyDict_MergeFromSeq2 ((int(*)(PyObject *d, PyObject *seq2, int override))DynPy_GetAddr(360))

#ifdef PyDict_GetItemString
#	undef PyDict_GetItemString
#endif
#define PyDict_GetItemString ((PyObject *(*)(PyObject *dp, const char *key))DynPy_GetAddr(361))

#ifdef PyDict_SetItemString
#	undef PyDict_SetItemString
#endif
#define PyDict_SetItemString ((int(*)(PyObject *dp, const char *key, PyObject *item))DynPy_GetAddr(362))

#ifdef PyDict_DelItemString
#	undef PyDict_DelItemString
#endif
#define PyDict_DelItemString ((int(*)(PyObject *dp, const char *key))DynPy_GetAddr(363))

#ifdef PyEnum_Type
#	undef PyEnum_Type
#endif
#define PyEnum_Type (*(PyTypeObject(*))DynPy_GetAddr(364))

#ifdef PyReversed_Type
#	undef PyReversed_Type
#endif
#define PyReversed_Type (*(PyTypeObject(*))DynPy_GetAddr(365))

#ifdef PySet_Type
#	undef PySet_Type
#endif
#define PySet_Type (*(PyTypeObject(*))DynPy_GetAddr(366))

#ifdef PyFrozenSet_Type
#	undef PyFrozenSet_Type
#endif
#define PyFrozenSet_Type (*(PyTypeObject(*))DynPy_GetAddr(367))

#ifdef PySet_New
#	undef PySet_New
#endif
#define PySet_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(368))

#ifdef PyFrozenSet_New
#	undef PyFrozenSet_New
#endif
#define PyFrozenSet_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(369))

#ifdef PySet_Size
#	undef PySet_Size
#endif
#define PySet_Size ((Py_ssize_t(*)(PyObject *anyset))DynPy_GetAddr(370))

#ifdef PySet_Clear
#	undef PySet_Clear
#endif
#define PySet_Clear ((int(*)(PyObject *set))DynPy_GetAddr(371))

#ifdef PySet_Contains
#	undef PySet_Contains
#endif
#define PySet_Contains ((int(*)(PyObject *anyset, PyObject *key))DynPy_GetAddr(372))

#ifdef PySet_Discard
#	undef PySet_Discard
#endif
#define PySet_Discard ((int(*)(PyObject *set, PyObject *key))DynPy_GetAddr(373))

#ifdef PySet_Add
#	undef PySet_Add
#endif
#define PySet_Add ((int(*)(PyObject *set, PyObject *key))DynPy_GetAddr(374))

#ifdef _PySet_Next
#	undef _PySet_Next
#endif
#define _PySet_Next ((int(*)(PyObject *set, Py_ssize_t *pos, PyObject **key))DynPy_GetAddr(375))

#ifdef _PySet_NextEntry
#	undef _PySet_NextEntry
#endif
#define _PySet_NextEntry ((int(*)(PyObject *set, Py_ssize_t *pos, PyObject **key, long *hash))DynPy_GetAddr(376))

#ifdef PySet_Pop
#	undef PySet_Pop
#endif
#define PySet_Pop ((PyObject *(*)(PyObject *set))DynPy_GetAddr(377))

#ifdef _PySet_Update
#	undef _PySet_Update
#endif
#define _PySet_Update ((int(*)(PyObject *set, PyObject *iterable))DynPy_GetAddr(378))

#ifdef PyCFunction_Type
#	undef PyCFunction_Type
#endif
#define PyCFunction_Type (*(PyTypeObject(*))DynPy_GetAddr(379))

#ifdef PyCFunction_GetFunction
#	undef PyCFunction_GetFunction
#endif
#define PyCFunction_GetFunction ((PyCFunction(*)(PyObject *))DynPy_GetAddr(380))

#ifdef PyCFunction_GetSelf
#	undef PyCFunction_GetSelf
#endif
#define PyCFunction_GetSelf ((PyObject *(*)(PyObject *))DynPy_GetAddr(381))

#ifdef PyCFunction_GetFlags
#	undef PyCFunction_GetFlags
#endif
#define PyCFunction_GetFlags ((int(*)(PyObject *))DynPy_GetAddr(382))

#ifdef PyCFunction_Call
#	undef PyCFunction_Call
#endif
#define PyCFunction_Call ((PyObject *(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(383))

#ifdef Py_FindMethod
#	undef Py_FindMethod
#endif
#define Py_FindMethod ((PyObject *(*)(PyMethodDef[], PyObject *, const char *))DynPy_GetAddr(384))

#ifdef PyCFunction_NewEx
#	undef PyCFunction_NewEx
#endif
#define PyCFunction_NewEx ((PyObject *(*)(PyMethodDef *, PyObject *, PyObject *))DynPy_GetAddr(385))

#ifdef Py_FindMethodInChain
#	undef Py_FindMethodInChain
#endif
#define Py_FindMethodInChain ((PyObject *(*)(PyMethodChain *, PyObject *, const char *))DynPy_GetAddr(386))

#ifdef PyCFunction_ClearFreeList
#	undef PyCFunction_ClearFreeList
#endif
#define PyCFunction_ClearFreeList ((int(*)(void))DynPy_GetAddr(387))

#ifdef PyModule_Type
#	undef PyModule_Type
#endif
#define PyModule_Type (*(PyTypeObject(*))DynPy_GetAddr(388))

#ifdef PyModule_New
#	undef PyModule_New
#endif
#define PyModule_New ((PyObject *(*)(const char *))DynPy_GetAddr(389))

#ifdef PyModule_GetDict
#	undef PyModule_GetDict
#endif
#define PyModule_GetDict ((PyObject *(*)(PyObject *))DynPy_GetAddr(390))

#ifdef PyModule_GetName
#	undef PyModule_GetName
#endif
#define PyModule_GetName ((char *(*)(PyObject *))DynPy_GetAddr(391))

#ifdef PyModule_GetFilename
#	undef PyModule_GetFilename
#endif
#define PyModule_GetFilename ((char *(*)(PyObject *))DynPy_GetAddr(392))

#ifdef _PyModule_Clear
#	undef _PyModule_Clear
#endif
#define _PyModule_Clear ((void(*)(PyObject *))DynPy_GetAddr(393))

#ifdef PyFunction_Type
#	undef PyFunction_Type
#endif
#define PyFunction_Type (*(PyTypeObject(*))DynPy_GetAddr(394))

#ifdef PyFunction_New
#	undef PyFunction_New
#endif
#define PyFunction_New ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(395))

#ifdef PyFunction_GetCode
#	undef PyFunction_GetCode
#endif
#define PyFunction_GetCode ((PyObject *(*)(PyObject *))DynPy_GetAddr(396))

#ifdef PyFunction_GetGlobals
#	undef PyFunction_GetGlobals
#endif
#define PyFunction_GetGlobals ((PyObject *(*)(PyObject *))DynPy_GetAddr(397))

#ifdef PyFunction_GetModule
#	undef PyFunction_GetModule
#endif
#define PyFunction_GetModule ((PyObject *(*)(PyObject *))DynPy_GetAddr(398))

#ifdef PyFunction_GetDefaults
#	undef PyFunction_GetDefaults
#endif
#define PyFunction_GetDefaults ((PyObject *(*)(PyObject *))DynPy_GetAddr(399))

#ifdef PyFunction_SetDefaults
#	undef PyFunction_SetDefaults
#endif
#define PyFunction_SetDefaults ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(400))

#ifdef PyFunction_GetClosure
#	undef PyFunction_GetClosure
#endif
#define PyFunction_GetClosure ((PyObject *(*)(PyObject *))DynPy_GetAddr(401))

#ifdef PyFunction_SetClosure
#	undef PyFunction_SetClosure
#endif
#define PyFunction_SetClosure ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(402))

#ifdef PyClassMethod_Type
#	undef PyClassMethod_Type
#endif
#define PyClassMethod_Type (*(PyTypeObject(*))DynPy_GetAddr(403))

#ifdef PyStaticMethod_Type
#	undef PyStaticMethod_Type
#endif
#define PyStaticMethod_Type (*(PyTypeObject(*))DynPy_GetAddr(404))

#ifdef PyClassMethod_New
#	undef PyClassMethod_New
#endif
#define PyClassMethod_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(405))

#ifdef PyStaticMethod_New
#	undef PyStaticMethod_New
#endif
#define PyStaticMethod_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(406))

#ifdef PyClass_Type
#	undef PyClass_Type
#endif
#define PyClass_Type (*(PyTypeObject(*))DynPy_GetAddr(407))

#ifdef PyInstance_Type
#	undef PyInstance_Type
#endif
#define PyInstance_Type (*(PyTypeObject(*))DynPy_GetAddr(408))

#ifdef PyMethod_Type
#	undef PyMethod_Type
#endif
#define PyMethod_Type (*(PyTypeObject(*))DynPy_GetAddr(409))

#ifdef PyClass_New
#	undef PyClass_New
#endif
#define PyClass_New ((PyObject *(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(410))

#ifdef PyInstance_New
#	undef PyInstance_New
#endif
#define PyInstance_New ((PyObject *(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(411))

#ifdef PyInstance_NewRaw
#	undef PyInstance_NewRaw
#endif
#define PyInstance_NewRaw ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(412))

#ifdef PyMethod_New
#	undef PyMethod_New
#endif
#define PyMethod_New ((PyObject *(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(413))

#ifdef PyMethod_Function
#	undef PyMethod_Function
#endif
#define PyMethod_Function ((PyObject *(*)(PyObject *))DynPy_GetAddr(414))

#ifdef PyMethod_Self
#	undef PyMethod_Self
#endif
#define PyMethod_Self ((PyObject *(*)(PyObject *))DynPy_GetAddr(415))

#ifdef PyMethod_Class
#	undef PyMethod_Class
#endif
#define PyMethod_Class ((PyObject *(*)(PyObject *))DynPy_GetAddr(416))

#ifdef _PyInstance_Lookup
#	undef _PyInstance_Lookup
#endif
#define _PyInstance_Lookup ((PyObject *(*)(PyObject *pinst, PyObject *name))DynPy_GetAddr(417))

#ifdef PyClass_IsSubclass
#	undef PyClass_IsSubclass
#endif
#define PyClass_IsSubclass ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(418))

#ifdef PyMethod_ClearFreeList
#	undef PyMethod_ClearFreeList
#endif
#define PyMethod_ClearFreeList ((int(*)(void))DynPy_GetAddr(419))

#ifdef PyFile_Type
#	undef PyFile_Type
#endif
#define PyFile_Type (*(PyTypeObject(*))DynPy_GetAddr(420))

#ifdef PyFile_FromString
#	undef PyFile_FromString
#endif
#define PyFile_FromString ((PyObject *(*)(char *, char *))DynPy_GetAddr(421))

#ifdef PyFile_SetBufSize
#	undef PyFile_SetBufSize
#endif
#define PyFile_SetBufSize ((void(*)(PyObject *, int))DynPy_GetAddr(422))

#ifdef PyFile_SetEncoding
#	undef PyFile_SetEncoding
#endif
#define PyFile_SetEncoding ((int(*)(PyObject *, const char *))DynPy_GetAddr(423))

#ifdef PyFile_SetEncodingAndErrors
#	undef PyFile_SetEncodingAndErrors
#endif
#define PyFile_SetEncodingAndErrors ((int(*)(PyObject *, const char *, char *errors))DynPy_GetAddr(424))

#ifdef PyFile_FromFile
#	undef PyFile_FromFile
#endif
#define PyFile_FromFile ((PyObject *(*)(FILE *, char *, char *, int (*))DynPy_GetAddr(425))

#ifdef PyFile_AsFile
#	undef PyFile_AsFile
#endif
#define PyFile_AsFile ((FILE *(*)(PyObject *))DynPy_GetAddr(426))

#ifdef PyFile_IncUseCount
#	undef PyFile_IncUseCount
#endif
#define PyFile_IncUseCount ((void(*)(PyFileObject *))DynPy_GetAddr(427))

#ifdef PyFile_DecUseCount
#	undef PyFile_DecUseCount
#endif
#define PyFile_DecUseCount ((void(*)(PyFileObject *))DynPy_GetAddr(428))

#ifdef PyFile_Name
#	undef PyFile_Name
#endif
#define PyFile_Name ((PyObject *(*)(PyObject *))DynPy_GetAddr(429))

#ifdef PyFile_GetLine
#	undef PyFile_GetLine
#endif
#define PyFile_GetLine ((PyObject *(*)(PyObject *, int))DynPy_GetAddr(430))

#ifdef PyFile_WriteObject
#	undef PyFile_WriteObject
#endif
#define PyFile_WriteObject ((int(*)(PyObject *, PyObject *, int))DynPy_GetAddr(431))

#ifdef PyFile_SoftSpace
#	undef PyFile_SoftSpace
#endif
#define PyFile_SoftSpace ((int(*)(PyObject *, int))DynPy_GetAddr(432))

#ifdef PyFile_WriteString
#	undef PyFile_WriteString
#endif
#define PyFile_WriteString ((int(*)(const char *, PyObject *))DynPy_GetAddr(433))

#ifdef PyObject_AsFileDescriptor
#	undef PyObject_AsFileDescriptor
#endif
#define PyObject_AsFileDescriptor ((int(*)(PyObject *))DynPy_GetAddr(434))

#ifdef Py_FileSystemDefaultEncoding
#	undef Py_FileSystemDefaultEncoding
#endif
#define Py_FileSystemDefaultEncoding (*(const char *(*))DynPy_GetAddr(435))

#ifdef PyCObject_Type
#	undef PyCObject_Type
#endif
#define PyCObject_Type (*(PyTypeObject(*))DynPy_GetAddr(436))

#ifdef PyCObject_FromVoidPtr
#	undef PyCObject_FromVoidPtr
#endif
#define PyCObject_FromVoidPtr ((PyObject *(*)( void *cobj, void (*destruct))DynPy_GetAddr(437))

#ifdef PyCObject_FromVoidPtrAndDesc
#	undef PyCObject_FromVoidPtrAndDesc
#endif
#define PyCObject_FromVoidPtrAndDesc ((PyObject *(*)( void *cobj, void *desc, void (*destruct))DynPy_GetAddr(438))

#ifdef PyCObject_AsVoidPtr
#	undef PyCObject_AsVoidPtr
#endif
#define PyCObject_AsVoidPtr ((void *(*)(PyObject *))DynPy_GetAddr(439))

#ifdef PyCObject_GetDesc
#	undef PyCObject_GetDesc
#endif
#define PyCObject_GetDesc ((void *(*)(PyObject *))DynPy_GetAddr(440))

#ifdef PyCObject_Import
#	undef PyCObject_Import
#endif
#define PyCObject_Import ((void *(*)(char *module_name, char *cobject_name))DynPy_GetAddr(441))

#ifdef PyCObject_SetVoidPtr
#	undef PyCObject_SetVoidPtr
#endif
#define PyCObject_SetVoidPtr ((int(*)(PyObject *self, void *cobj))DynPy_GetAddr(442))

#ifdef PyCapsule_Type
#	undef PyCapsule_Type
#endif
#define PyCapsule_Type (*(PyTypeObject(*))DynPy_GetAddr(443))

#ifdef PyCapsule_New
#	undef PyCapsule_New
#endif
#define PyCapsule_New ((PyObject *(*)( void *pointer, const char *name, PyCapsule_Destructor destructor))DynPy_GetAddr(444))

#ifdef PyCapsule_GetPointer
#	undef PyCapsule_GetPointer
#endif
#define PyCapsule_GetPointer ((void *(*)(PyObject *capsule, const char *name))DynPy_GetAddr(445))

#ifdef PyCapsule_GetDestructor
#	undef PyCapsule_GetDestructor
#endif
#define PyCapsule_GetDestructor ((PyCapsule_Destructor(*)(PyObject *capsule))DynPy_GetAddr(446))

#ifdef PyCapsule_GetName
#	undef PyCapsule_GetName
#endif
#define PyCapsule_GetName ((const char *(*)(PyObject *capsule))DynPy_GetAddr(447))

#ifdef PyCapsule_GetContext
#	undef PyCapsule_GetContext
#endif
#define PyCapsule_GetContext ((void *(*)(PyObject *capsule))DynPy_GetAddr(448))

#ifdef PyCapsule_IsValid
#	undef PyCapsule_IsValid
#endif
#define PyCapsule_IsValid ((int(*)(PyObject *capsule, const char *name))DynPy_GetAddr(449))

#ifdef PyCapsule_SetPointer
#	undef PyCapsule_SetPointer
#endif
#define PyCapsule_SetPointer ((int(*)(PyObject *capsule, void *pointer))DynPy_GetAddr(450))

#ifdef PyCapsule_SetDestructor
#	undef PyCapsule_SetDestructor
#endif
#define PyCapsule_SetDestructor ((int(*)(PyObject *capsule, PyCapsule_Destructor destructor))DynPy_GetAddr(451))

#ifdef PyCapsule_SetName
#	undef PyCapsule_SetName
#endif
#define PyCapsule_SetName ((int(*)(PyObject *capsule, const char *name))DynPy_GetAddr(452))

#ifdef PyCapsule_SetContext
#	undef PyCapsule_SetContext
#endif
#define PyCapsule_SetContext ((int(*)(PyObject *capsule, void *context))DynPy_GetAddr(453))

#ifdef PyCapsule_Import
#	undef PyCapsule_Import
#endif
#define PyCapsule_Import ((void *(*)(const char *name, int no_block))DynPy_GetAddr(454))

#ifdef PyTraceBack_Here
#	undef PyTraceBack_Here
#endif
#define PyTraceBack_Here ((int(*)(struct _frame *))DynPy_GetAddr(455))

#ifdef PyTraceBack_Print
#	undef PyTraceBack_Print
#endif
#define PyTraceBack_Print ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(456))

#ifdef _Py_DisplaySourceLine
#	undef _Py_DisplaySourceLine
#endif
#define _Py_DisplaySourceLine ((int(*)(PyObject *, const char *, int, int))DynPy_GetAddr(457))

#ifdef PyTraceBack_Type
#	undef PyTraceBack_Type
#endif
#define PyTraceBack_Type (*(PyTypeObject(*))DynPy_GetAddr(458))

#ifdef _Py_EllipsisObject
#	undef _Py_EllipsisObject
#endif
#define _Py_EllipsisObject (*(PyObject(*))DynPy_GetAddr(459))

#ifdef PySlice_Type
#	undef PySlice_Type
#endif
#define PySlice_Type (*(PyTypeObject(*))DynPy_GetAddr(460))

#ifdef PyEllipsis_Type
#	undef PyEllipsis_Type
#endif
#define PyEllipsis_Type (*(PyTypeObject(*))DynPy_GetAddr(461))

#ifdef PySlice_New
#	undef PySlice_New
#endif
#define PySlice_New ((PyObject *(*)(PyObject* start, PyObject* stop, PyObject* step))DynPy_GetAddr(462))

#ifdef _PySlice_FromIndices
#	undef _PySlice_FromIndices
#endif
#define _PySlice_FromIndices ((PyObject *(*)(Py_ssize_t start, Py_ssize_t stop))DynPy_GetAddr(463))

#ifdef PySlice_GetIndices
#	undef PySlice_GetIndices
#endif
#define PySlice_GetIndices ((int(*)(PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step))DynPy_GetAddr(464))

#ifdef PySlice_GetIndicesEx
#	undef PySlice_GetIndicesEx
#endif
#define PySlice_GetIndicesEx ((int(*)(PySliceObject *r, Py_ssize_t length, Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step, Py_ssize_t *slicelength))DynPy_GetAddr(465))

#ifdef PyCell_Type
#	undef PyCell_Type
#endif
#define PyCell_Type (*(PyTypeObject(*))DynPy_GetAddr(466))

#ifdef PyCell_New
#	undef PyCell_New
#endif
#define PyCell_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(467))

#ifdef PyCell_Get
#	undef PyCell_Get
#endif
#define PyCell_Get ((PyObject *(*)(PyObject *))DynPy_GetAddr(468))

#ifdef PyCell_Set
#	undef PyCell_Set
#endif
#define PyCell_Set ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(469))

#ifdef PySeqIter_Type
#	undef PySeqIter_Type
#endif
#define PySeqIter_Type (*(PyTypeObject(*))DynPy_GetAddr(470))

#ifdef PySeqIter_New
#	undef PySeqIter_New
#endif
#define PySeqIter_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(471))

#ifdef PyCallIter_Type
#	undef PyCallIter_Type
#endif
#define PyCallIter_Type (*(PyTypeObject(*))DynPy_GetAddr(472))

#ifdef PyCallIter_New
#	undef PyCallIter_New
#endif
#define PyCallIter_New ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(473))

#ifdef PyGen_Type
#	undef PyGen_Type
#endif
#define PyGen_Type (*(PyTypeObject(*))DynPy_GetAddr(474))

#ifdef PyGen_New
#	undef PyGen_New
#endif
#define PyGen_New ((PyObject *(*)(struct _frame *))DynPy_GetAddr(475))

#ifdef PyGen_NeedsFinalizing
#	undef PyGen_NeedsFinalizing
#endif
#define PyGen_NeedsFinalizing ((int(*)(PyGenObject *))DynPy_GetAddr(476))

#ifdef PyWrapperDescr_Type
#	undef PyWrapperDescr_Type
#endif
#define PyWrapperDescr_Type (*(PyTypeObject(*))DynPy_GetAddr(477))

#ifdef PyDictProxy_Type
#	undef PyDictProxy_Type
#endif
#define PyDictProxy_Type (*(PyTypeObject(*))DynPy_GetAddr(478))

#ifdef PyGetSetDescr_Type
#	undef PyGetSetDescr_Type
#endif
#define PyGetSetDescr_Type (*(PyTypeObject(*))DynPy_GetAddr(479))

#ifdef PyMemberDescr_Type
#	undef PyMemberDescr_Type
#endif
#define PyMemberDescr_Type (*(PyTypeObject(*))DynPy_GetAddr(480))

#ifdef PyDescr_NewMethod
#	undef PyDescr_NewMethod
#endif
#define PyDescr_NewMethod ((PyObject *(*)(PyTypeObject *, PyMethodDef *))DynPy_GetAddr(481))

#ifdef PyDescr_NewClassMethod
#	undef PyDescr_NewClassMethod
#endif
#define PyDescr_NewClassMethod ((PyObject *(*)(PyTypeObject *, PyMethodDef *))DynPy_GetAddr(482))

#ifdef PyDescr_NewMember
#	undef PyDescr_NewMember
#endif
#define PyDescr_NewMember ((PyObject *(*)(PyTypeObject *, struct PyMemberDef *))DynPy_GetAddr(483))

#ifdef PyDescr_NewGetSet
#	undef PyDescr_NewGetSet
#endif
#define PyDescr_NewGetSet ((PyObject *(*)(PyTypeObject *, struct PyGetSetDef *))DynPy_GetAddr(484))

#ifdef PyDescr_NewWrapper
#	undef PyDescr_NewWrapper
#endif
#define PyDescr_NewWrapper ((PyObject *(*)(PyTypeObject *, struct wrapperbase *, void *))DynPy_GetAddr(485))

#ifdef PyDictProxy_New
#	undef PyDictProxy_New
#endif
#define PyDictProxy_New ((PyObject *(*)(PyObject *))DynPy_GetAddr(486))

#ifdef PyWrapper_New
#	undef PyWrapper_New
#endif
#define PyWrapper_New ((PyObject *(*)(PyObject *, PyObject *))DynPy_GetAddr(487))

#ifdef PyProperty_Type
#	undef PyProperty_Type
#endif
#define PyProperty_Type (*(PyTypeObject(*))DynPy_GetAddr(488))

#ifdef _PyWarnings_Init
#	undef _PyWarnings_Init
#endif
#define _PyWarnings_Init ((void(*)(void))DynPy_GetAddr(489))

#ifdef PyErr_WarnEx
#	undef PyErr_WarnEx
#endif
#define PyErr_WarnEx ((int(*)(PyObject *, const char *, Py_ssize_t))DynPy_GetAddr(490))

#ifdef PyErr_WarnExplicit
#	undef PyErr_WarnExplicit
#endif
#define PyErr_WarnExplicit ((int(*)(PyObject *, const char *, const char *, int, const char *, PyObject *))DynPy_GetAddr(491))

#ifdef _PyWeakref_RefType
#	undef _PyWeakref_RefType
#endif
#define _PyWeakref_RefType (*(PyTypeObject(*))DynPy_GetAddr(492))

#ifdef _PyWeakref_ProxyType
#	undef _PyWeakref_ProxyType
#endif
#define _PyWeakref_ProxyType (*(PyTypeObject(*))DynPy_GetAddr(493))

#ifdef _PyWeakref_CallableProxyType
#	undef _PyWeakref_CallableProxyType
#endif
#define _PyWeakref_CallableProxyType (*(PyTypeObject(*))DynPy_GetAddr(494))

#ifdef PyWeakref_NewRef
#	undef PyWeakref_NewRef
#endif
#define PyWeakref_NewRef ((PyObject *(*)(PyObject *ob, PyObject *callback))DynPy_GetAddr(495))

#ifdef PyWeakref_NewProxy
#	undef PyWeakref_NewProxy
#endif
#define PyWeakref_NewProxy ((PyObject *(*)(PyObject *ob, PyObject *callback))DynPy_GetAddr(496))

#ifdef PyWeakref_GetObject
#	undef PyWeakref_GetObject
#endif
#define PyWeakref_GetObject ((PyObject *(*)(PyObject *ref))DynPy_GetAddr(497))

#ifdef _PyWeakref_GetWeakrefCount
#	undef _PyWeakref_GetWeakrefCount
#endif
#define _PyWeakref_GetWeakrefCount ((Py_ssize_t(*)(PyWeakReference *head))DynPy_GetAddr(498))

#ifdef _PyWeakref_ClearRef
#	undef _PyWeakref_ClearRef
#endif
#define _PyWeakref_ClearRef ((void(*)(PyWeakReference *self))DynPy_GetAddr(499))

#ifdef PyCodec_Register
#	undef PyCodec_Register
#endif
#define PyCodec_Register ((int(*)( PyObject *search_function ))DynPy_GetAddr(500))

#ifdef _PyCodec_Lookup
#	undef _PyCodec_Lookup
#endif
#define _PyCodec_Lookup ((PyObject *(*)( const char *encoding ))DynPy_GetAddr(501))

#ifdef PyCodec_Encode
#	undef PyCodec_Encode
#endif
#define PyCodec_Encode ((PyObject *(*)( PyObject *object, const char *encoding, const char *errors ))DynPy_GetAddr(502))

#ifdef PyCodec_Decode
#	undef PyCodec_Decode
#endif
#define PyCodec_Decode ((PyObject *(*)( PyObject *object, const char *encoding, const char *errors ))DynPy_GetAddr(503))

#ifdef PyCodec_Encoder
#	undef PyCodec_Encoder
#endif
#define PyCodec_Encoder ((PyObject *(*)( const char *encoding ))DynPy_GetAddr(504))

#ifdef PyCodec_Decoder
#	undef PyCodec_Decoder
#endif
#define PyCodec_Decoder ((PyObject *(*)( const char *encoding ))DynPy_GetAddr(505))

#ifdef PyCodec_IncrementalEncoder
#	undef PyCodec_IncrementalEncoder
#endif
#define PyCodec_IncrementalEncoder ((PyObject *(*)( const char *encoding, const char *errors ))DynPy_GetAddr(506))

#ifdef PyCodec_IncrementalDecoder
#	undef PyCodec_IncrementalDecoder
#endif
#define PyCodec_IncrementalDecoder ((PyObject *(*)( const char *encoding, const char *errors ))DynPy_GetAddr(507))

#ifdef PyCodec_StreamReader
#	undef PyCodec_StreamReader
#endif
#define PyCodec_StreamReader ((PyObject *(*)( const char *encoding, PyObject *stream, const char *errors ))DynPy_GetAddr(508))

#ifdef PyCodec_StreamWriter
#	undef PyCodec_StreamWriter
#endif
#define PyCodec_StreamWriter ((PyObject *(*)( const char *encoding, PyObject *stream, const char *errors ))DynPy_GetAddr(509))

#ifdef PyCodec_RegisterError
#	undef PyCodec_RegisterError
#endif
#define PyCodec_RegisterError ((int(*)(const char *name, PyObject *error))DynPy_GetAddr(510))

#ifdef PyCodec_LookupError
#	undef PyCodec_LookupError
#endif
#define PyCodec_LookupError ((PyObject *(*)(const char *name))DynPy_GetAddr(511))

#ifdef PyCodec_StrictErrors
#	undef PyCodec_StrictErrors
#endif
#define PyCodec_StrictErrors ((PyObject *(*)(PyObject *exc))DynPy_GetAddr(512))

#ifdef PyCodec_IgnoreErrors
#	undef PyCodec_IgnoreErrors
#endif
#define PyCodec_IgnoreErrors ((PyObject *(*)(PyObject *exc))DynPy_GetAddr(513))

#ifdef PyCodec_ReplaceErrors
#	undef PyCodec_ReplaceErrors
#endif
#define PyCodec_ReplaceErrors ((PyObject *(*)(PyObject *exc))DynPy_GetAddr(514))

#ifdef PyCodec_XMLCharRefReplaceErrors
#	undef PyCodec_XMLCharRefReplaceErrors
#endif
#define PyCodec_XMLCharRefReplaceErrors ((PyObject *(*)(PyObject *exc))DynPy_GetAddr(515))

#ifdef PyCodec_BackslashReplaceErrors
#	undef PyCodec_BackslashReplaceErrors
#endif
#define PyCodec_BackslashReplaceErrors ((PyObject *(*)(PyObject *exc))DynPy_GetAddr(516))

#ifdef PyErr_SetNone
#	undef PyErr_SetNone
#endif
#define PyErr_SetNone ((void(*)(PyObject *))DynPy_GetAddr(517))

#ifdef PyErr_SetObject
#	undef PyErr_SetObject
#endif
#define PyErr_SetObject ((void(*)(PyObject *, PyObject *))DynPy_GetAddr(518))

#ifdef PyErr_SetString
#	undef PyErr_SetString
#endif
#define PyErr_SetString ((void(*)(PyObject *, const char *))DynPy_GetAddr(519))

#ifdef PyErr_Occurred
#	undef PyErr_Occurred
#endif
#define PyErr_Occurred ((PyObject *(*)(void))DynPy_GetAddr(520))

#ifdef PyErr_Clear
#	undef PyErr_Clear
#endif
#define PyErr_Clear ((void(*)(void))DynPy_GetAddr(521))

#ifdef PyErr_Fetch
#	undef PyErr_Fetch
#endif
#define PyErr_Fetch ((void(*)(PyObject **, PyObject **, PyObject **))DynPy_GetAddr(522))

#ifdef PyErr_Restore
#	undef PyErr_Restore
#endif
#define PyErr_Restore ((void(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(523))

#ifdef PyErr_GivenExceptionMatches
#	undef PyErr_GivenExceptionMatches
#endif
#define PyErr_GivenExceptionMatches ((int(*)(PyObject *, PyObject *))DynPy_GetAddr(524))

#ifdef PyErr_ExceptionMatches
#	undef PyErr_ExceptionMatches
#endif
#define PyErr_ExceptionMatches ((int(*)(PyObject *))DynPy_GetAddr(525))

#ifdef PyErr_NormalizeException
#	undef PyErr_NormalizeException
#endif
#define PyErr_NormalizeException ((void(*)(PyObject**, PyObject**, PyObject**))DynPy_GetAddr(526))

#ifdef PyExc_BaseException
#	undef PyExc_BaseException
#endif
#define PyExc_BaseException (*(PyObject *(*))DynPy_GetAddr(527))

#ifdef PyExc_Exception
#	undef PyExc_Exception
#endif
#define PyExc_Exception (*(PyObject *(*))DynPy_GetAddr(528))

#ifdef PyExc_StopIteration
#	undef PyExc_StopIteration
#endif
#define PyExc_StopIteration (*(PyObject *(*))DynPy_GetAddr(529))

#ifdef PyExc_GeneratorExit
#	undef PyExc_GeneratorExit
#endif
#define PyExc_GeneratorExit (*(PyObject *(*))DynPy_GetAddr(530))

#ifdef PyExc_StandardError
#	undef PyExc_StandardError
#endif
#define PyExc_StandardError (*(PyObject *(*))DynPy_GetAddr(531))

#ifdef PyExc_ArithmeticError
#	undef PyExc_ArithmeticError
#endif
#define PyExc_ArithmeticError (*(PyObject *(*))DynPy_GetAddr(532))

#ifdef PyExc_LookupError
#	undef PyExc_LookupError
#endif
#define PyExc_LookupError (*(PyObject *(*))DynPy_GetAddr(533))

#ifdef PyExc_AssertionError
#	undef PyExc_AssertionError
#endif
#define PyExc_AssertionError (*(PyObject *(*))DynPy_GetAddr(534))

#ifdef PyExc_AttributeError
#	undef PyExc_AttributeError
#endif
#define PyExc_AttributeError (*(PyObject *(*))DynPy_GetAddr(535))

#ifdef PyExc_EOFError
#	undef PyExc_EOFError
#endif
#define PyExc_EOFError (*(PyObject *(*))DynPy_GetAddr(536))

#ifdef PyExc_FloatingPointError
#	undef PyExc_FloatingPointError
#endif
#define PyExc_FloatingPointError (*(PyObject *(*))DynPy_GetAddr(537))

#ifdef PyExc_EnvironmentError
#	undef PyExc_EnvironmentError
#endif
#define PyExc_EnvironmentError (*(PyObject *(*))DynPy_GetAddr(538))

#ifdef PyExc_IOError
#	undef PyExc_IOError
#endif
#define PyExc_IOError (*(PyObject *(*))DynPy_GetAddr(539))

#ifdef PyExc_OSError
#	undef PyExc_OSError
#endif
#define PyExc_OSError (*(PyObject *(*))DynPy_GetAddr(540))

#ifdef PyExc_ImportError
#	undef PyExc_ImportError
#endif
#define PyExc_ImportError (*(PyObject *(*))DynPy_GetAddr(541))

#ifdef PyExc_IndexError
#	undef PyExc_IndexError
#endif
#define PyExc_IndexError (*(PyObject *(*))DynPy_GetAddr(542))

#ifdef PyExc_KeyError
#	undef PyExc_KeyError
#endif
#define PyExc_KeyError (*(PyObject *(*))DynPy_GetAddr(543))

#ifdef PyExc_KeyboardInterrupt
#	undef PyExc_KeyboardInterrupt
#endif
#define PyExc_KeyboardInterrupt (*(PyObject *(*))DynPy_GetAddr(544))

#ifdef PyExc_MemoryError
#	undef PyExc_MemoryError
#endif
#define PyExc_MemoryError (*(PyObject *(*))DynPy_GetAddr(545))

#ifdef PyExc_NameError
#	undef PyExc_NameError
#endif
#define PyExc_NameError (*(PyObject *(*))DynPy_GetAddr(546))

#ifdef PyExc_OverflowError
#	undef PyExc_OverflowError
#endif
#define PyExc_OverflowError (*(PyObject *(*))DynPy_GetAddr(547))

#ifdef PyExc_RuntimeError
#	undef PyExc_RuntimeError
#endif
#define PyExc_RuntimeError (*(PyObject *(*))DynPy_GetAddr(548))

#ifdef PyExc_NotImplementedError
#	undef PyExc_NotImplementedError
#endif
#define PyExc_NotImplementedError (*(PyObject *(*))DynPy_GetAddr(549))

#ifdef PyExc_SyntaxError
#	undef PyExc_SyntaxError
#endif
#define PyExc_SyntaxError (*(PyObject *(*))DynPy_GetAddr(550))

#ifdef PyExc_IndentationError
#	undef PyExc_IndentationError
#endif
#define PyExc_IndentationError (*(PyObject *(*))DynPy_GetAddr(551))

#ifdef PyExc_TabError
#	undef PyExc_TabError
#endif
#define PyExc_TabError (*(PyObject *(*))DynPy_GetAddr(552))

#ifdef PyExc_ReferenceError
#	undef PyExc_ReferenceError
#endif
#define PyExc_ReferenceError (*(PyObject *(*))DynPy_GetAddr(553))

#ifdef PyExc_SystemError
#	undef PyExc_SystemError
#endif
#define PyExc_SystemError (*(PyObject *(*))DynPy_GetAddr(554))

#ifdef PyExc_SystemExit
#	undef PyExc_SystemExit
#endif
#define PyExc_SystemExit (*(PyObject *(*))DynPy_GetAddr(555))

#ifdef PyExc_TypeError
#	undef PyExc_TypeError
#endif
#define PyExc_TypeError (*(PyObject *(*))DynPy_GetAddr(556))

#ifdef PyExc_UnboundLocalError
#	undef PyExc_UnboundLocalError
#endif
#define PyExc_UnboundLocalError (*(PyObject *(*))DynPy_GetAddr(557))

#ifdef PyExc_UnicodeError
#	undef PyExc_UnicodeError
#endif
#define PyExc_UnicodeError (*(PyObject *(*))DynPy_GetAddr(558))

#ifdef PyExc_UnicodeEncodeError
#	undef PyExc_UnicodeEncodeError
#endif
#define PyExc_UnicodeEncodeError (*(PyObject *(*))DynPy_GetAddr(559))

#ifdef PyExc_UnicodeDecodeError
#	undef PyExc_UnicodeDecodeError
#endif
#define PyExc_UnicodeDecodeError (*(PyObject *(*))DynPy_GetAddr(560))

#ifdef PyExc_UnicodeTranslateError
#	undef PyExc_UnicodeTranslateError
#endif
#define PyExc_UnicodeTranslateError (*(PyObject *(*))DynPy_GetAddr(561))

#ifdef PyExc_ValueError
#	undef PyExc_ValueError
#endif
#define PyExc_ValueError (*(PyObject *(*))DynPy_GetAddr(562))

#ifdef PyExc_ZeroDivisionError
#	undef PyExc_ZeroDivisionError
#endif
#define PyExc_ZeroDivisionError (*(PyObject *(*))DynPy_GetAddr(563))

#ifdef PyExc_WindowsError
#	undef PyExc_WindowsError
#endif
#define PyExc_WindowsError (*(PyObject *(*))DynPy_GetAddr(564))

#ifdef PyExc_BufferError
#	undef PyExc_BufferError
#endif
#define PyExc_BufferError (*(PyObject *(*))DynPy_GetAddr(565))

#ifdef PyExc_MemoryErrorInst
#	undef PyExc_MemoryErrorInst
#endif
#define PyExc_MemoryErrorInst (*(PyObject *(*))DynPy_GetAddr(566))

#ifdef PyExc_RecursionErrorInst
#	undef PyExc_RecursionErrorInst
#endif
#define PyExc_RecursionErrorInst (*(PyObject *(*))DynPy_GetAddr(567))

#ifdef PyExc_Warning
#	undef PyExc_Warning
#endif
#define PyExc_Warning (*(PyObject *(*))DynPy_GetAddr(568))

#ifdef PyExc_UserWarning
#	undef PyExc_UserWarning
#endif
#define PyExc_UserWarning (*(PyObject *(*))DynPy_GetAddr(569))

#ifdef PyExc_DeprecationWarning
#	undef PyExc_DeprecationWarning
#endif
#define PyExc_DeprecationWarning (*(PyObject *(*))DynPy_GetAddr(570))

#ifdef PyExc_PendingDeprecationWarning
#	undef PyExc_PendingDeprecationWarning
#endif
#define PyExc_PendingDeprecationWarning (*(PyObject *(*))DynPy_GetAddr(571))

#ifdef PyExc_SyntaxWarning
#	undef PyExc_SyntaxWarning
#endif
#define PyExc_SyntaxWarning (*(PyObject *(*))DynPy_GetAddr(572))

#ifdef PyExc_RuntimeWarning
#	undef PyExc_RuntimeWarning
#endif
#define PyExc_RuntimeWarning (*(PyObject *(*))DynPy_GetAddr(573))

#ifdef PyExc_FutureWarning
#	undef PyExc_FutureWarning
#endif
#define PyExc_FutureWarning (*(PyObject *(*))DynPy_GetAddr(574))

#ifdef PyExc_ImportWarning
#	undef PyExc_ImportWarning
#endif
#define PyExc_ImportWarning (*(PyObject *(*))DynPy_GetAddr(575))

#ifdef PyExc_UnicodeWarning
#	undef PyExc_UnicodeWarning
#endif
#define PyExc_UnicodeWarning (*(PyObject *(*))DynPy_GetAddr(576))

#ifdef PyExc_BytesWarning
#	undef PyExc_BytesWarning
#endif
#define PyExc_BytesWarning (*(PyObject *(*))DynPy_GetAddr(577))

#ifdef PyErr_BadArgument
#	undef PyErr_BadArgument
#endif
#define PyErr_BadArgument ((int(*)(void))DynPy_GetAddr(578))

#ifdef PyErr_NoMemory
#	undef PyErr_NoMemory
#endif
#define PyErr_NoMemory ((PyObject *(*)(void))DynPy_GetAddr(579))

#ifdef PyErr_SetFromErrno
#	undef PyErr_SetFromErrno
#endif
#define PyErr_SetFromErrno ((PyObject *(*)(PyObject *))DynPy_GetAddr(580))

#ifdef PyErr_SetFromErrnoWithFilenameObject
#	undef PyErr_SetFromErrnoWithFilenameObject
#endif
#define PyErr_SetFromErrnoWithFilenameObject ((PyObject *(*)( PyObject *, PyObject *))DynPy_GetAddr(581))

#ifdef PyErr_SetFromErrnoWithFilename
#	undef PyErr_SetFromErrnoWithFilename
#endif
#define PyErr_SetFromErrnoWithFilename ((PyObject *(*)( PyObject *, const char *))DynPy_GetAddr(582))

#ifdef PyErr_SetFromErrnoWithUnicodeFilename
#	undef PyErr_SetFromErrnoWithUnicodeFilename
#endif
#define PyErr_SetFromErrnoWithUnicodeFilename ((PyObject *(*)( PyObject *, const Py_UNICODE *))DynPy_GetAddr(583))

#ifdef PyErr_Format
#	undef PyErr_Format
#endif
#define PyErr_Format ((PyObject *(*)(PyObject *, const char *, ...))DynPy_GetAddr(584))

#ifdef PyErr_SetFromWindowsErrWithFilename
#	undef PyErr_SetFromWindowsErrWithFilename
#endif
#define PyErr_SetFromWindowsErrWithFilename ((PyObject *(*)( int, const char *))DynPy_GetAddr(585))

#ifdef PyErr_SetFromWindowsErrWithUnicodeFilename
#	undef PyErr_SetFromWindowsErrWithUnicodeFilename
#endif
#define PyErr_SetFromWindowsErrWithUnicodeFilename ((PyObject *(*)( int, const Py_UNICODE *))DynPy_GetAddr(586))

#ifdef PyErr_SetFromWindowsErr
#	undef PyErr_SetFromWindowsErr
#endif
#define PyErr_SetFromWindowsErr ((PyObject *(*)(int))DynPy_GetAddr(587))

#ifdef PyErr_SetExcFromWindowsErrWithFilenameObject
#	undef PyErr_SetExcFromWindowsErrWithFilenameObject
#endif
#define PyErr_SetExcFromWindowsErrWithFilenameObject ((PyObject *(*)( PyObject *,int, PyObject *))DynPy_GetAddr(588))

#ifdef PyErr_SetExcFromWindowsErrWithFilename
#	undef PyErr_SetExcFromWindowsErrWithFilename
#endif
#define PyErr_SetExcFromWindowsErrWithFilename ((PyObject *(*)( PyObject *,int, const char *))DynPy_GetAddr(589))

#ifdef PyErr_SetExcFromWindowsErrWithUnicodeFilename
#	undef PyErr_SetExcFromWindowsErrWithUnicodeFilename
#endif
#define PyErr_SetExcFromWindowsErrWithUnicodeFilename ((PyObject *(*)( PyObject *,int, const Py_UNICODE *))DynPy_GetAddr(590))

#ifdef PyErr_SetExcFromWindowsErr
#	undef PyErr_SetExcFromWindowsErr
#endif
#define PyErr_SetExcFromWindowsErr ((PyObject *(*)(PyObject *, int))DynPy_GetAddr(591))

#ifdef _PyErr_BadInternalCall
#	undef _PyErr_BadInternalCall
#endif
#define _PyErr_BadInternalCall ((void(*)(char *filename, int lineno))DynPy_GetAddr(592))

#ifdef PyErr_NewException
#	undef PyErr_NewException
#endif
#define PyErr_NewException ((PyObject *(*)( char *name, PyObject *base, PyObject *dict))DynPy_GetAddr(593))

#ifdef PyErr_NewExceptionWithDoc
#	undef PyErr_NewExceptionWithDoc
#endif
#define PyErr_NewExceptionWithDoc ((PyObject *(*)( char *name, char *doc, PyObject *base, PyObject *dict))DynPy_GetAddr(594))

#ifdef PyErr_WriteUnraisable
#	undef PyErr_WriteUnraisable
#endif
#define PyErr_WriteUnraisable ((void(*)(PyObject *))DynPy_GetAddr(595))

#ifdef PyErr_CheckSignals
#	undef PyErr_CheckSignals
#endif
#define PyErr_CheckSignals ((int(*)(void))DynPy_GetAddr(596))

#ifdef PyErr_SetInterrupt
#	undef PyErr_SetInterrupt
#endif
#define PyErr_SetInterrupt ((void(*)(void))DynPy_GetAddr(597))

#ifdef PyErr_SyntaxLocation
#	undef PyErr_SyntaxLocation
#endif
#define PyErr_SyntaxLocation ((void(*)(const char *, int))DynPy_GetAddr(598))

#ifdef PyErr_ProgramText
#	undef PyErr_ProgramText
#endif
#define PyErr_ProgramText ((PyObject *(*)(const char *, int))DynPy_GetAddr(599))

#ifdef PyUnicodeDecodeError_Create
#	undef PyUnicodeDecodeError_Create
#endif
#define PyUnicodeDecodeError_Create ((PyObject *(*)( const char *, const char *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *))DynPy_GetAddr(600))

#ifdef PyUnicodeEncodeError_Create
#	undef PyUnicodeEncodeError_Create
#endif
#define PyUnicodeEncodeError_Create ((PyObject *(*)( const char *, const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *))DynPy_GetAddr(601))

#ifdef PyUnicodeTranslateError_Create
#	undef PyUnicodeTranslateError_Create
#endif
#define PyUnicodeTranslateError_Create ((PyObject *(*)( const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *))DynPy_GetAddr(602))

#ifdef PyUnicodeEncodeError_GetEncoding
#	undef PyUnicodeEncodeError_GetEncoding
#endif
#define PyUnicodeEncodeError_GetEncoding ((PyObject *(*)(PyObject *))DynPy_GetAddr(603))

#ifdef PyUnicodeDecodeError_GetEncoding
#	undef PyUnicodeDecodeError_GetEncoding
#endif
#define PyUnicodeDecodeError_GetEncoding ((PyObject *(*)(PyObject *))DynPy_GetAddr(604))

#ifdef PyUnicodeEncodeError_GetObject
#	undef PyUnicodeEncodeError_GetObject
#endif
#define PyUnicodeEncodeError_GetObject ((PyObject *(*)(PyObject *))DynPy_GetAddr(605))

#ifdef PyUnicodeDecodeError_GetObject
#	undef PyUnicodeDecodeError_GetObject
#endif
#define PyUnicodeDecodeError_GetObject ((PyObject *(*)(PyObject *))DynPy_GetAddr(606))

#ifdef PyUnicodeTranslateError_GetObject
#	undef PyUnicodeTranslateError_GetObject
#endif
#define PyUnicodeTranslateError_GetObject ((PyObject *(*)(PyObject *))DynPy_GetAddr(607))

#ifdef PyUnicodeEncodeError_GetStart
#	undef PyUnicodeEncodeError_GetStart
#endif
#define PyUnicodeEncodeError_GetStart ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(608))

#ifdef PyUnicodeDecodeError_GetStart
#	undef PyUnicodeDecodeError_GetStart
#endif
#define PyUnicodeDecodeError_GetStart ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(609))

#ifdef PyUnicodeTranslateError_GetStart
#	undef PyUnicodeTranslateError_GetStart
#endif
#define PyUnicodeTranslateError_GetStart ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(610))

#ifdef PyUnicodeEncodeError_SetStart
#	undef PyUnicodeEncodeError_SetStart
#endif
#define PyUnicodeEncodeError_SetStart ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(611))

#ifdef PyUnicodeDecodeError_SetStart
#	undef PyUnicodeDecodeError_SetStart
#endif
#define PyUnicodeDecodeError_SetStart ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(612))

#ifdef PyUnicodeTranslateError_SetStart
#	undef PyUnicodeTranslateError_SetStart
#endif
#define PyUnicodeTranslateError_SetStart ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(613))

#ifdef PyUnicodeEncodeError_GetEnd
#	undef PyUnicodeEncodeError_GetEnd
#endif
#define PyUnicodeEncodeError_GetEnd ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(614))

#ifdef PyUnicodeDecodeError_GetEnd
#	undef PyUnicodeDecodeError_GetEnd
#endif
#define PyUnicodeDecodeError_GetEnd ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(615))

#ifdef PyUnicodeTranslateError_GetEnd
#	undef PyUnicodeTranslateError_GetEnd
#endif
#define PyUnicodeTranslateError_GetEnd ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(616))

#ifdef PyUnicodeEncodeError_SetEnd
#	undef PyUnicodeEncodeError_SetEnd
#endif
#define PyUnicodeEncodeError_SetEnd ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(617))

#ifdef PyUnicodeDecodeError_SetEnd
#	undef PyUnicodeDecodeError_SetEnd
#endif
#define PyUnicodeDecodeError_SetEnd ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(618))

#ifdef PyUnicodeTranslateError_SetEnd
#	undef PyUnicodeTranslateError_SetEnd
#endif
#define PyUnicodeTranslateError_SetEnd ((int(*)(PyObject *, Py_ssize_t))DynPy_GetAddr(619))

#ifdef PyUnicodeEncodeError_GetReason
#	undef PyUnicodeEncodeError_GetReason
#endif
#define PyUnicodeEncodeError_GetReason ((PyObject *(*)(PyObject *))DynPy_GetAddr(620))

#ifdef PyUnicodeDecodeError_GetReason
#	undef PyUnicodeDecodeError_GetReason
#endif
#define PyUnicodeDecodeError_GetReason ((PyObject *(*)(PyObject *))DynPy_GetAddr(621))

#ifdef PyUnicodeTranslateError_GetReason
#	undef PyUnicodeTranslateError_GetReason
#endif
#define PyUnicodeTranslateError_GetReason ((PyObject *(*)(PyObject *))DynPy_GetAddr(622))

#ifdef PyUnicodeEncodeError_SetReason
#	undef PyUnicodeEncodeError_SetReason
#endif
#define PyUnicodeEncodeError_SetReason ((int(*)( PyObject *, const char *))DynPy_GetAddr(623))

#ifdef PyUnicodeDecodeError_SetReason
#	undef PyUnicodeDecodeError_SetReason
#endif
#define PyUnicodeDecodeError_SetReason ((int(*)( PyObject *, const char *))DynPy_GetAddr(624))

#ifdef PyUnicodeTranslateError_SetReason
#	undef PyUnicodeTranslateError_SetReason
#endif
#define PyUnicodeTranslateError_SetReason ((int(*)( PyObject *, const char *))DynPy_GetAddr(625))

#ifdef PyOS_snprintf
#	undef PyOS_snprintf
#endif
#define PyOS_snprintf ((int(*)(char *str, size_t size, const char *format, ...))DynPy_GetAddr(626))

#ifdef PyOS_vsnprintf
#	undef PyOS_vsnprintf
#endif
#define PyOS_vsnprintf ((int(*)(char *str, size_t size, const char *format, va_list va))DynPy_GetAddr(627))

#ifdef PyInterpreterState_New
#	undef PyInterpreterState_New
#endif
#define PyInterpreterState_New ((PyInterpreterState *(*)(void))DynPy_GetAddr(628))

#ifdef PyInterpreterState_Clear
#	undef PyInterpreterState_Clear
#endif
#define PyInterpreterState_Clear ((void(*)(PyInterpreterState *))DynPy_GetAddr(629))

#ifdef PyInterpreterState_Delete
#	undef PyInterpreterState_Delete
#endif
#define PyInterpreterState_Delete ((void(*)(PyInterpreterState *))DynPy_GetAddr(630))

#ifdef PyThreadState_New
#	undef PyThreadState_New
#endif
#define PyThreadState_New ((PyThreadState *(*)(PyInterpreterState *))DynPy_GetAddr(631))

#ifdef _PyThreadState_Prealloc
#	undef _PyThreadState_Prealloc
#endif
#define _PyThreadState_Prealloc ((PyThreadState *(*)(PyInterpreterState *))DynPy_GetAddr(632))

#ifdef _PyThreadState_Init
#	undef _PyThreadState_Init
#endif
#define _PyThreadState_Init ((void(*)(PyThreadState *))DynPy_GetAddr(633))

#ifdef PyThreadState_Clear
#	undef PyThreadState_Clear
#endif
#define PyThreadState_Clear ((void(*)(PyThreadState *))DynPy_GetAddr(634))

#ifdef PyThreadState_Delete
#	undef PyThreadState_Delete
#endif
#define PyThreadState_Delete ((void(*)(PyThreadState *))DynPy_GetAddr(635))

#ifdef PyThreadState_DeleteCurrent
#	undef PyThreadState_DeleteCurrent
#endif
#define PyThreadState_DeleteCurrent ((void(*)(void))DynPy_GetAddr(636))

#ifdef _PyGILState_Reinit
#	undef _PyGILState_Reinit
#endif
#define _PyGILState_Reinit ((void(*)(void))DynPy_GetAddr(637))

#ifdef PyThreadState_Get
#	undef PyThreadState_Get
#endif
#define PyThreadState_Get ((PyThreadState *(*)(void))DynPy_GetAddr(638))

#ifdef PyThreadState_Swap
#	undef PyThreadState_Swap
#endif
#define PyThreadState_Swap ((PyThreadState *(*)(PyThreadState *))DynPy_GetAddr(639))

#ifdef PyThreadState_GetDict
#	undef PyThreadState_GetDict
#endif
#define PyThreadState_GetDict ((PyObject *(*)(void))DynPy_GetAddr(640))

#ifdef PyThreadState_SetAsyncExc
#	undef PyThreadState_SetAsyncExc
#endif
#define PyThreadState_SetAsyncExc ((int(*)(long, PyObject *))DynPy_GetAddr(641))

#ifdef _PyThreadState_Current
#	undef _PyThreadState_Current
#endif
#define _PyThreadState_Current (*(PyThreadState *(*))DynPy_GetAddr(642))

#ifdef PyGILState_Ensure
#	undef PyGILState_Ensure
#endif
#define PyGILState_Ensure ((PyGILState_STATE(*)(void))DynPy_GetAddr(643))

#ifdef PyGILState_Release
#	undef PyGILState_Release
#endif
#define PyGILState_Release ((void(*)(PyGILState_STATE))DynPy_GetAddr(644))

#ifdef PyGILState_GetThisThreadState
#	undef PyGILState_GetThisThreadState
#endif
#define PyGILState_GetThisThreadState ((PyThreadState *(*)(void))DynPy_GetAddr(645))

#ifdef _PyThread_CurrentFrames
#	undef _PyThread_CurrentFrames
#endif
#define _PyThread_CurrentFrames ((PyObject *(*)(void))DynPy_GetAddr(646))

#ifdef PyInterpreterState_Head
#	undef PyInterpreterState_Head
#endif
#define PyInterpreterState_Head ((PyInterpreterState *(*)(void))DynPy_GetAddr(647))

#ifdef PyInterpreterState_Next
#	undef PyInterpreterState_Next
#endif
#define PyInterpreterState_Next ((PyInterpreterState *(*)(PyInterpreterState *))DynPy_GetAddr(648))

#ifdef PyInterpreterState_ThreadHead
#	undef PyInterpreterState_ThreadHead
#endif
#define PyInterpreterState_ThreadHead ((PyThreadState *(*)(PyInterpreterState *))DynPy_GetAddr(649))

#ifdef PyThreadState_Next
#	undef PyThreadState_Next
#endif
#define PyThreadState_Next ((PyThreadState *(*)(PyThreadState *))DynPy_GetAddr(650))

#ifdef _PyThreadState_GetFrame
#	undef _PyThreadState_GetFrame
#endif
#define _PyThreadState_GetFrame (*(PyThreadFrameGetter(*))DynPy_GetAddr(651))

#ifdef PyArena_New
#	undef PyArena_New
#endif
#define PyArena_New ((PyArena *(*)(void))DynPy_GetAddr(652))

#ifdef PyArena_Free
#	undef PyArena_Free
#endif
#define PyArena_Free ((void(*)(PyArena *))DynPy_GetAddr(653))

#ifdef PyArena_Malloc
#	undef PyArena_Malloc
#endif
#define PyArena_Malloc ((void *(*)(PyArena *, size_t size))DynPy_GetAddr(654))

#ifdef PyArena_AddPyObject
#	undef PyArena_AddPyObject
#endif
#define PyArena_AddPyObject ((int(*)(PyArena *, PyObject *))DynPy_GetAddr(655))

#ifdef _Py_VaBuildValue_SizeT
#	undef _Py_VaBuildValue_SizeT
#endif
#define _Py_VaBuildValue_SizeT ((PyObject *(*)(const char *, va_list))DynPy_GetAddr(656))

#ifdef PyArg_Parse
#	undef PyArg_Parse
#endif
#define PyArg_Parse ((int(*)(PyObject *, const char *, ...))DynPy_GetAddr(657))

#ifdef PyArg_ParseTuple
#	undef PyArg_ParseTuple
#endif
#define PyArg_ParseTuple ((int(*)(PyObject *, const char *, ...))DynPy_GetAddr(658))

#ifdef PyArg_ParseTupleAndKeywords
#	undef PyArg_ParseTupleAndKeywords
#endif
#define PyArg_ParseTupleAndKeywords ((int(*)(PyObject *, PyObject *, const char *, char **, ...))DynPy_GetAddr(659))

#ifdef PyArg_UnpackTuple
#	undef PyArg_UnpackTuple
#endif
#define PyArg_UnpackTuple ((int(*)(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...))DynPy_GetAddr(660))

#ifdef Py_BuildValue
#	undef Py_BuildValue
#endif
#define Py_BuildValue ((PyObject *(*)(const char *, ...))DynPy_GetAddr(661))

#ifdef _Py_BuildValue_SizeT
#	undef _Py_BuildValue_SizeT
#endif
#define _Py_BuildValue_SizeT ((PyObject *(*)(const char *, ...))DynPy_GetAddr(662))

#ifdef _PyArg_NoKeywords
#	undef _PyArg_NoKeywords
#endif
#define _PyArg_NoKeywords ((int(*)(const char *funcname, PyObject *kw))DynPy_GetAddr(663))

#ifdef PyArg_VaParse
#	undef PyArg_VaParse
#endif
#define PyArg_VaParse ((int(*)(PyObject *, const char *, va_list))DynPy_GetAddr(664))

#ifdef PyArg_VaParseTupleAndKeywords
#	undef PyArg_VaParseTupleAndKeywords
#endif
#define PyArg_VaParseTupleAndKeywords ((int(*)(PyObject *, PyObject *, const char *, char **, va_list))DynPy_GetAddr(665))

#ifdef Py_VaBuildValue
#	undef Py_VaBuildValue
#endif
#define Py_VaBuildValue ((PyObject *(*)(const char *, va_list))DynPy_GetAddr(666))

#ifdef PyModule_AddObject
#	undef PyModule_AddObject
#endif
#define PyModule_AddObject ((int(*)(PyObject *, const char *, PyObject *))DynPy_GetAddr(667))

#ifdef PyModule_AddIntConstant
#	undef PyModule_AddIntConstant
#endif
#define PyModule_AddIntConstant ((int(*)(PyObject *, const char *, long))DynPy_GetAddr(668))

#ifdef PyModule_AddStringConstant
#	undef PyModule_AddStringConstant
#endif
#define PyModule_AddStringConstant ((int(*)(PyObject *, const char *, const char *))DynPy_GetAddr(669))

#ifdef Py_InitModule4
#	undef Py_InitModule4
#endif
#define Py_InitModule4 ((PyObject *(*)(const char *name, PyMethodDef *methods, const char *doc, PyObject *self, int apiver))DynPy_GetAddr(670))

#ifdef _Py_PackageContext
#	undef _Py_PackageContext
#endif
#define _Py_PackageContext (*(char *(*))DynPy_GetAddr(671))

#ifdef Py_SetProgramName
#	undef Py_SetProgramName
#endif
#define Py_SetProgramName ((void(*)(char *))DynPy_GetAddr(672))

#ifdef Py_GetProgramName
#	undef Py_GetProgramName
#endif
#define Py_GetProgramName ((char *(*)(void))DynPy_GetAddr(673))

#ifdef Py_SetPythonHome
#	undef Py_SetPythonHome
#endif
#define Py_SetPythonHome ((void(*)(char *))DynPy_GetAddr(674))

#ifdef Py_GetPythonHome
#	undef Py_GetPythonHome
#endif
#define Py_GetPythonHome ((char *(*)(void))DynPy_GetAddr(675))

#ifdef Py_Initialize
#	undef Py_Initialize
#endif
#define Py_Initialize ((void(*)(void))DynPy_GetAddr(676))

#ifdef Py_InitializeEx
#	undef Py_InitializeEx
#endif
#define Py_InitializeEx ((void(*)(int))DynPy_GetAddr(677))

#ifdef Py_Finalize
#	undef Py_Finalize
#endif
#define Py_Finalize ((void(*)(void))DynPy_GetAddr(678))

#ifdef Py_IsInitialized
#	undef Py_IsInitialized
#endif
#define Py_IsInitialized ((int(*)(void))DynPy_GetAddr(679))

#ifdef Py_NewInterpreter
#	undef Py_NewInterpreter
#endif
#define Py_NewInterpreter ((PyThreadState *(*)(void))DynPy_GetAddr(680))

#ifdef Py_EndInterpreter
#	undef Py_EndInterpreter
#endif
#define Py_EndInterpreter ((void(*)(PyThreadState *))DynPy_GetAddr(681))

#ifdef PyRun_AnyFileFlags
#	undef PyRun_AnyFileFlags
#endif
#define PyRun_AnyFileFlags ((int(*)(FILE *, const char *, PyCompilerFlags *))DynPy_GetAddr(682))

#ifdef PyRun_AnyFileExFlags
#	undef PyRun_AnyFileExFlags
#endif
#define PyRun_AnyFileExFlags ((int(*)(FILE *, const char *, int, PyCompilerFlags *))DynPy_GetAddr(683))

#ifdef PyRun_SimpleStringFlags
#	undef PyRun_SimpleStringFlags
#endif
#define PyRun_SimpleStringFlags ((int(*)(const char *, PyCompilerFlags *))DynPy_GetAddr(684))

#ifdef PyRun_SimpleFileExFlags
#	undef PyRun_SimpleFileExFlags
#endif
#define PyRun_SimpleFileExFlags ((int(*)(FILE *, const char *, int, PyCompilerFlags *))DynPy_GetAddr(685))

#ifdef PyRun_InteractiveOneFlags
#	undef PyRun_InteractiveOneFlags
#endif
#define PyRun_InteractiveOneFlags ((int(*)(FILE *, const char *, PyCompilerFlags *))DynPy_GetAddr(686))

#ifdef PyRun_InteractiveLoopFlags
#	undef PyRun_InteractiveLoopFlags
#endif
#define PyRun_InteractiveLoopFlags ((int(*)(FILE *, const char *, PyCompilerFlags *))DynPy_GetAddr(687))

#ifdef PyParser_ASTFromString
#	undef PyParser_ASTFromString
#endif
#define PyParser_ASTFromString ((struct _mod *(*)(const char *, const char *, int, PyCompilerFlags *flags, PyArena *))DynPy_GetAddr(688))

#ifdef PyParser_ASTFromFile
#	undef PyParser_ASTFromFile
#endif
#define PyParser_ASTFromFile ((struct _mod *(*)(FILE *, const char *, int, char *, char *, PyCompilerFlags *, int *, PyArena *))DynPy_GetAddr(689))

#ifdef PyParser_SimpleParseStringFlags
#	undef PyParser_SimpleParseStringFlags
#endif
#define PyParser_SimpleParseStringFlags ((struct _node *(*)(const char *, int, int))DynPy_GetAddr(690))

#ifdef PyParser_SimpleParseFileFlags
#	undef PyParser_SimpleParseFileFlags
#endif
#define PyParser_SimpleParseFileFlags ((struct _node *(*)(FILE *, const char *, int, int))DynPy_GetAddr(691))

#ifdef PyRun_StringFlags
#	undef PyRun_StringFlags
#endif
#define PyRun_StringFlags ((PyObject *(*)(const char *, int, PyObject *, PyObject *, PyCompilerFlags *))DynPy_GetAddr(692))

#ifdef PyRun_FileExFlags
#	undef PyRun_FileExFlags
#endif
#define PyRun_FileExFlags ((PyObject *(*)(FILE *, const char *, int, PyObject *, PyObject *, int, PyCompilerFlags *))DynPy_GetAddr(693))

#ifdef Py_CompileStringFlags
#	undef Py_CompileStringFlags
#endif
#define Py_CompileStringFlags ((PyObject *(*)(const char *, const char *, int, PyCompilerFlags *))DynPy_GetAddr(694))

#ifdef Py_SymtableString
#	undef Py_SymtableString
#endif
#define Py_SymtableString ((struct symtable *(*)(const char *, const char *, int))DynPy_GetAddr(695))

#ifdef PyErr_Print
#	undef PyErr_Print
#endif
#define PyErr_Print ((void(*)(void))DynPy_GetAddr(696))

#ifdef PyErr_PrintEx
#	undef PyErr_PrintEx
#endif
#define PyErr_PrintEx ((void(*)(int))DynPy_GetAddr(697))

#ifdef PyErr_Display
#	undef PyErr_Display
#endif
#define PyErr_Display ((void(*)(PyObject *, PyObject *, PyObject *))DynPy_GetAddr(698))

#ifdef Py_AtExit
#	undef Py_AtExit
#endif
#define Py_AtExit ((int(*)(void (*func))DynPy_GetAddr(699))

#ifdef Py_Exit
#	undef Py_Exit
#endif
#define Py_Exit ((void(*)(int))DynPy_GetAddr(700))

#ifdef Py_FdIsInteractive
#	undef Py_FdIsInteractive
#endif
#define Py_FdIsInteractive ((int(*)(FILE *, const char *))DynPy_GetAddr(701))

#ifdef Py_Main
#	undef Py_Main
#endif
#define Py_Main ((int(*)(int argc, char **argv))DynPy_GetAddr(702))

#ifdef Py_GetProgramFullPath
#	undef Py_GetProgramFullPath
#endif
#define Py_GetProgramFullPath ((char *(*)(void))DynPy_GetAddr(703))

#ifdef Py_GetPrefix
#	undef Py_GetPrefix
#endif
#define Py_GetPrefix ((char *(*)(void))DynPy_GetAddr(704))

#ifdef Py_GetExecPrefix
#	undef Py_GetExecPrefix
#endif
#define Py_GetExecPrefix ((char *(*)(void))DynPy_GetAddr(705))

#ifdef Py_GetPath
#	undef Py_GetPath
#endif
#define Py_GetPath ((char *(*)(void))DynPy_GetAddr(706))

#ifdef Py_GetVersion
#	undef Py_GetVersion
#endif
#define Py_GetVersion ((const char *(*)(void))DynPy_GetAddr(707))

#ifdef Py_GetPlatform
#	undef Py_GetPlatform
#endif
#define Py_GetPlatform ((const char *(*)(void))DynPy_GetAddr(708))

#ifdef Py_GetCopyright
#	undef Py_GetCopyright
#endif
#define Py_GetCopyright ((const char *(*)(void))DynPy_GetAddr(709))

#ifdef Py_GetCompiler
#	undef Py_GetCompiler
#endif
#define Py_GetCompiler ((const char *(*)(void))DynPy_GetAddr(710))

#ifdef Py_GetBuildInfo
#	undef Py_GetBuildInfo
#endif
#define Py_GetBuildInfo ((const char *(*)(void))DynPy_GetAddr(711))

#ifdef _Py_svnversion
#	undef _Py_svnversion
#endif
#define _Py_svnversion ((const char *(*)(void))DynPy_GetAddr(712))

#ifdef Py_SubversionRevision
#	undef Py_SubversionRevision
#endif
#define Py_SubversionRevision ((const char *(*)(void))DynPy_GetAddr(713))

#ifdef Py_SubversionShortBranch
#	undef Py_SubversionShortBranch
#endif
#define Py_SubversionShortBranch ((const char *(*)(void))DynPy_GetAddr(714))

#ifdef _Py_hgidentifier
#	undef _Py_hgidentifier
#endif
#define _Py_hgidentifier ((const char *(*)(void))DynPy_GetAddr(715))

#ifdef _Py_hgversion
#	undef _Py_hgversion
#endif
#define _Py_hgversion ((const char *(*)(void))DynPy_GetAddr(716))

#ifdef _PyBuiltin_Init
#	undef _PyBuiltin_Init
#endif
#define _PyBuiltin_Init ((PyObject *(*)(void))DynPy_GetAddr(717))

#ifdef _PySys_Init
#	undef _PySys_Init
#endif
#define _PySys_Init ((PyObject *(*)(void))DynPy_GetAddr(718))

#ifdef _PyImport_Init
#	undef _PyImport_Init
#endif
#define _PyImport_Init ((void(*)(void))DynPy_GetAddr(719))

#ifdef _PyExc_Init
#	undef _PyExc_Init
#endif
#define _PyExc_Init ((void(*)(void))DynPy_GetAddr(720))

#ifdef _PyImportHooks_Init
#	undef _PyImportHooks_Init
#endif
#define _PyImportHooks_Init ((void(*)(void))DynPy_GetAddr(721))

#ifdef _PyFrame_Init
#	undef _PyFrame_Init
#endif
#define _PyFrame_Init ((int(*)(void))DynPy_GetAddr(722))

#ifdef _PyInt_Init
#	undef _PyInt_Init
#endif
#define _PyInt_Init ((int(*)(void))DynPy_GetAddr(723))

#ifdef _PyLong_Init
#	undef _PyLong_Init
#endif
#define _PyLong_Init ((int(*)(void))DynPy_GetAddr(724))

#ifdef _PyFloat_Init
#	undef _PyFloat_Init
#endif
#define _PyFloat_Init ((void(*)(void))DynPy_GetAddr(725))

#ifdef PyByteArray_Init
#	undef PyByteArray_Init
#endif
#define PyByteArray_Init ((int(*)(void))DynPy_GetAddr(726))

#ifdef _PyExc_Fini
#	undef _PyExc_Fini
#endif
#define _PyExc_Fini ((void(*)(void))DynPy_GetAddr(727))

#ifdef _PyImport_Fini
#	undef _PyImport_Fini
#endif
#define _PyImport_Fini ((void(*)(void))DynPy_GetAddr(728))

#ifdef PyMethod_Fini
#	undef PyMethod_Fini
#endif
#define PyMethod_Fini ((void(*)(void))DynPy_GetAddr(729))

#ifdef PyFrame_Fini
#	undef PyFrame_Fini
#endif
#define PyFrame_Fini ((void(*)(void))DynPy_GetAddr(730))

#ifdef PyCFunction_Fini
#	undef PyCFunction_Fini
#endif
#define PyCFunction_Fini ((void(*)(void))DynPy_GetAddr(731))

#ifdef PyDict_Fini
#	undef PyDict_Fini
#endif
#define PyDict_Fini ((void(*)(void))DynPy_GetAddr(732))

#ifdef PyTuple_Fini
#	undef PyTuple_Fini
#endif
#define PyTuple_Fini ((void(*)(void))DynPy_GetAddr(733))

#ifdef PyList_Fini
#	undef PyList_Fini
#endif
#define PyList_Fini ((void(*)(void))DynPy_GetAddr(734))

#ifdef PySet_Fini
#	undef PySet_Fini
#endif
#define PySet_Fini ((void(*)(void))DynPy_GetAddr(735))

#ifdef PyString_Fini
#	undef PyString_Fini
#endif
#define PyString_Fini ((void(*)(void))DynPy_GetAddr(736))

#ifdef PyInt_Fini
#	undef PyInt_Fini
#endif
#define PyInt_Fini ((void(*)(void))DynPy_GetAddr(737))

#ifdef PyFloat_Fini
#	undef PyFloat_Fini
#endif
#define PyFloat_Fini ((void(*)(void))DynPy_GetAddr(738))

#ifdef PyOS_FiniInterrupts
#	undef PyOS_FiniInterrupts
#endif
#define PyOS_FiniInterrupts ((void(*)(void))DynPy_GetAddr(739))

#ifdef PyByteArray_Fini
#	undef PyByteArray_Fini
#endif
#define PyByteArray_Fini ((void(*)(void))DynPy_GetAddr(740))

#ifdef PyOS_Readline
#	undef PyOS_Readline
#endif
#define PyOS_Readline ((char *(*)(FILE *, FILE *, char *))DynPy_GetAddr(741))

#ifdef _PyOS_ReadlineTState
#	undef _PyOS_ReadlineTState
#endif
#define _PyOS_ReadlineTState (*(PyThreadState*(*))DynPy_GetAddr(742))

#ifdef PyOS_CheckStack
#	undef PyOS_CheckStack
#endif
#define PyOS_CheckStack ((int(*)(void))DynPy_GetAddr(743))

#ifdef PyOS_getsig
#	undef PyOS_getsig
#endif
#define PyOS_getsig ((PyOS_sighandler_t(*)(int))DynPy_GetAddr(744))

#ifdef PyOS_setsig
#	undef PyOS_setsig
#endif
#define PyOS_setsig ((PyOS_sighandler_t(*)(int, PyOS_sighandler_t))DynPy_GetAddr(745))

#ifdef PyEval_CallObjectWithKeywords
#	undef PyEval_CallObjectWithKeywords
#endif
#define PyEval_CallObjectWithKeywords ((PyObject *(*)( PyObject *, PyObject *, PyObject *))DynPy_GetAddr(746))

#ifdef PyEval_CallFunction
#	undef PyEval_CallFunction
#endif
#define PyEval_CallFunction ((PyObject *(*)(PyObject *obj, const char *format, ...))DynPy_GetAddr(747))

#ifdef PyEval_CallMethod
#	undef PyEval_CallMethod
#endif
#define PyEval_CallMethod ((PyObject *(*)(PyObject *obj, const char *methodname, const char *format, ...))DynPy_GetAddr(748))

#ifdef PyEval_SetProfile
#	undef PyEval_SetProfile
#endif
#define PyEval_SetProfile ((void(*)(Py_tracefunc, PyObject *))DynPy_GetAddr(749))

#ifdef PyEval_SetTrace
#	undef PyEval_SetTrace
#endif
#define PyEval_SetTrace ((void(*)(Py_tracefunc, PyObject *))DynPy_GetAddr(750))

#ifdef PyEval_GetBuiltins
#	undef PyEval_GetBuiltins
#endif
#define PyEval_GetBuiltins ((PyObject *(*)(void))DynPy_GetAddr(751))

#ifdef PyEval_GetGlobals
#	undef PyEval_GetGlobals
#endif
#define PyEval_GetGlobals ((PyObject *(*)(void))DynPy_GetAddr(752))

#ifdef PyEval_GetLocals
#	undef PyEval_GetLocals
#endif
#define PyEval_GetLocals ((PyObject *(*)(void))DynPy_GetAddr(753))

#ifdef PyEval_GetFrame
#	undef PyEval_GetFrame
#endif
#define PyEval_GetFrame ((struct _frame *(*)(void))DynPy_GetAddr(754))

#ifdef PyEval_GetRestricted
#	undef PyEval_GetRestricted
#endif
#define PyEval_GetRestricted ((int(*)(void))DynPy_GetAddr(755))

#ifdef PyEval_MergeCompilerFlags
#	undef PyEval_MergeCompilerFlags
#endif
#define PyEval_MergeCompilerFlags ((int(*)(PyCompilerFlags *cf))DynPy_GetAddr(756))

#ifdef Py_FlushLine
#	undef Py_FlushLine
#endif
#define Py_FlushLine ((int(*)(void))DynPy_GetAddr(757))

#ifdef Py_AddPendingCall
#	undef Py_AddPendingCall
#endif
#define Py_AddPendingCall ((int(*)(int (*func))DynPy_GetAddr(758))

#ifdef Py_MakePendingCalls
#	undef Py_MakePendingCalls
#endif
#define Py_MakePendingCalls ((int(*)(void))DynPy_GetAddr(759))

#ifdef Py_SetRecursionLimit
#	undef Py_SetRecursionLimit
#endif
#define Py_SetRecursionLimit ((void(*)(int))DynPy_GetAddr(760))

#ifdef Py_GetRecursionLimit
#	undef Py_GetRecursionLimit
#endif
#define Py_GetRecursionLimit ((int(*)(void))DynPy_GetAddr(761))

#ifdef _Py_CheckRecursiveCall
#	undef _Py_CheckRecursiveCall
#endif
#define _Py_CheckRecursiveCall ((int(*)(char *where))DynPy_GetAddr(762))

#ifdef _Py_CheckRecursionLimit
#	undef _Py_CheckRecursionLimit
#endif
#define _Py_CheckRecursionLimit (*(int(*))DynPy_GetAddr(763))

#ifdef PyEval_GetFuncName
#	undef PyEval_GetFuncName
#endif
#define PyEval_GetFuncName ((const char *(*)(PyObject *))DynPy_GetAddr(764))

#ifdef PyEval_GetFuncDesc
#	undef PyEval_GetFuncDesc
#endif
#define PyEval_GetFuncDesc ((const char *(*)(PyObject *))DynPy_GetAddr(765))

#ifdef PyEval_GetCallStats
#	undef PyEval_GetCallStats
#endif
#define PyEval_GetCallStats ((PyObject *(*)(PyObject *))DynPy_GetAddr(766))

#ifdef PyEval_EvalFrame
#	undef PyEval_EvalFrame
#endif
#define PyEval_EvalFrame ((PyObject *(*)(struct _frame *))DynPy_GetAddr(767))

#ifdef PyEval_EvalFrameEx
#	undef PyEval_EvalFrameEx
#endif
#define PyEval_EvalFrameEx ((PyObject *(*)(struct _frame *f, int exc))DynPy_GetAddr(768))

#ifdef _Py_Ticker
#	undef _Py_Ticker
#endif
#define _Py_Ticker (*(volatile int(*))DynPy_GetAddr(769))

#ifdef _Py_CheckInterval
#	undef _Py_CheckInterval
#endif
#define _Py_CheckInterval (*(int(*))DynPy_GetAddr(770))

#ifdef PyEval_SaveThread
#	undef PyEval_SaveThread
#endif
#define PyEval_SaveThread ((PyThreadState *(*)(void))DynPy_GetAddr(771))

#ifdef PyEval_RestoreThread
#	undef PyEval_RestoreThread
#endif
#define PyEval_RestoreThread ((void(*)(PyThreadState *))DynPy_GetAddr(772))

#ifdef PyEval_ThreadsInitialized
#	undef PyEval_ThreadsInitialized
#endif
#define PyEval_ThreadsInitialized ((int(*)(void))DynPy_GetAddr(773))

#ifdef PyEval_InitThreads
#	undef PyEval_InitThreads
#endif
#define PyEval_InitThreads ((void(*)(void))DynPy_GetAddr(774))

#ifdef PyEval_AcquireLock
#	undef PyEval_AcquireLock
#endif
#define PyEval_AcquireLock ((void(*)(void))DynPy_GetAddr(775))

#ifdef PyEval_ReleaseLock
#	undef PyEval_ReleaseLock
#endif
#define PyEval_ReleaseLock ((void(*)(void))DynPy_GetAddr(776))

#ifdef PyEval_AcquireThread
#	undef PyEval_AcquireThread
#endif
#define PyEval_AcquireThread ((void(*)(PyThreadState *tstate))DynPy_GetAddr(777))

#ifdef PyEval_ReleaseThread
#	undef PyEval_ReleaseThread
#endif
#define PyEval_ReleaseThread ((void(*)(PyThreadState *tstate))DynPy_GetAddr(778))

#ifdef PyEval_ReInitThreads
#	undef PyEval_ReInitThreads
#endif
#define PyEval_ReInitThreads ((void(*)(void))DynPy_GetAddr(779))

#ifdef _PyEval_SliceIndex
#	undef _PyEval_SliceIndex
#endif
#define _PyEval_SliceIndex ((int(*)(PyObject *, Py_ssize_t *))DynPy_GetAddr(780))

#ifdef PySys_GetObject
#	undef PySys_GetObject
#endif
#define PySys_GetObject ((PyObject *(*)(char *))DynPy_GetAddr(781))

#ifdef PySys_SetObject
#	undef PySys_SetObject
#endif
#define PySys_SetObject ((int(*)(char *, PyObject *))DynPy_GetAddr(782))

#ifdef PySys_GetFile
#	undef PySys_GetFile
#endif
#define PySys_GetFile ((FILE *(*)(char *, FILE *))DynPy_GetAddr(783))

#ifdef PySys_SetArgv
#	undef PySys_SetArgv
#endif
#define PySys_SetArgv ((void(*)(int, char **))DynPy_GetAddr(784))

#ifdef PySys_SetArgvEx
#	undef PySys_SetArgvEx
#endif
#define PySys_SetArgvEx ((void(*)(int, char **, int))DynPy_GetAddr(785))

#ifdef PySys_SetPath
#	undef PySys_SetPath
#endif
#define PySys_SetPath ((void(*)(char *))DynPy_GetAddr(786))

#ifdef PySys_WriteStdout
#	undef PySys_WriteStdout
#endif
#define PySys_WriteStdout ((void(*)(const char *format, ...))DynPy_GetAddr(787))

#ifdef PySys_WriteStderr
#	undef PySys_WriteStderr
#endif
#define PySys_WriteStderr ((void(*)(const char *format, ...))DynPy_GetAddr(788))

#ifdef PySys_ResetWarnOptions
#	undef PySys_ResetWarnOptions
#endif
#define PySys_ResetWarnOptions ((void(*)(void))DynPy_GetAddr(789))

#ifdef PySys_AddWarnOption
#	undef PySys_AddWarnOption
#endif
#define PySys_AddWarnOption ((void(*)(char *))DynPy_GetAddr(790))

#ifdef PySys_HasWarnOptions
#	undef PySys_HasWarnOptions
#endif
#define PySys_HasWarnOptions ((int(*)(void))DynPy_GetAddr(791))

#ifdef PyOS_InterruptOccurred
#	undef PyOS_InterruptOccurred
#endif
#define PyOS_InterruptOccurred ((int(*)(void))DynPy_GetAddr(792))

#ifdef PyOS_InitInterrupts
#	undef PyOS_InitInterrupts
#endif
#define PyOS_InitInterrupts ((void(*)(void))DynPy_GetAddr(793))

#ifdef PyOS_AfterFork
#	undef PyOS_AfterFork
#endif
#define PyOS_AfterFork ((void(*)(void))DynPy_GetAddr(794))

#ifdef PyImport_GetMagicNumber
#	undef PyImport_GetMagicNumber
#endif
#define PyImport_GetMagicNumber ((long(*)(void))DynPy_GetAddr(795))

#ifdef PyImport_ExecCodeModule
#	undef PyImport_ExecCodeModule
#endif
#define PyImport_ExecCodeModule ((PyObject *(*)(char *name, PyObject *co))DynPy_GetAddr(796))

#ifdef PyImport_ExecCodeModuleEx
#	undef PyImport_ExecCodeModuleEx
#endif
#define PyImport_ExecCodeModuleEx ((PyObject *(*)( char *name, PyObject *co, char *pathname))DynPy_GetAddr(797))

#ifdef PyImport_GetModuleDict
#	undef PyImport_GetModuleDict
#endif
#define PyImport_GetModuleDict ((PyObject *(*)(void))DynPy_GetAddr(798))

#ifdef PyImport_AddModule
#	undef PyImport_AddModule
#endif
#define PyImport_AddModule ((PyObject *(*)(const char *name))DynPy_GetAddr(799))

#ifdef PyImport_ImportModule
#	undef PyImport_ImportModule
#endif
#define PyImport_ImportModule ((PyObject *(*)(const char *name))DynPy_GetAddr(800))

#ifdef PyImport_ImportModuleNoBlock
#	undef PyImport_ImportModuleNoBlock
#endif
#define PyImport_ImportModuleNoBlock ((PyObject *(*)(const char *))DynPy_GetAddr(801))

#ifdef PyImport_ImportModuleLevel
#	undef PyImport_ImportModuleLevel
#endif
#define PyImport_ImportModuleLevel ((PyObject *(*)(char *name, PyObject *globals, PyObject *locals, PyObject *fromlist, int level))DynPy_GetAddr(802))

#ifdef PyImport_GetImporter
#	undef PyImport_GetImporter
#endif
#define PyImport_GetImporter ((PyObject *(*)(PyObject *path))DynPy_GetAddr(803))

#ifdef PyImport_Import
#	undef PyImport_Import
#endif
#define PyImport_Import ((PyObject *(*)(PyObject *name))DynPy_GetAddr(804))

#ifdef PyImport_ReloadModule
#	undef PyImport_ReloadModule
#endif
#define PyImport_ReloadModule ((PyObject *(*)(PyObject *m))DynPy_GetAddr(805))

#ifdef PyImport_Cleanup
#	undef PyImport_Cleanup
#endif
#define PyImport_Cleanup ((void(*)(void))DynPy_GetAddr(806))

#ifdef PyImport_ImportFrozenModule
#	undef PyImport_ImportFrozenModule
#endif
#define PyImport_ImportFrozenModule ((int(*)(char *))DynPy_GetAddr(807))

#ifdef _PyImport_AcquireLock
#	undef _PyImport_AcquireLock
#endif
#define _PyImport_AcquireLock ((void(*)(void))DynPy_GetAddr(808))

#ifdef _PyImport_ReleaseLock
#	undef _PyImport_ReleaseLock
#endif
#define _PyImport_ReleaseLock ((int(*)(void))DynPy_GetAddr(809))

#ifdef _PyImport_FindModule
#	undef _PyImport_FindModule
#endif
#define _PyImport_FindModule ((struct filedescr *(*)( const char *, PyObject *, char *, size_t, FILE **, PyObject **))DynPy_GetAddr(810))

#ifdef _PyImport_IsScript
#	undef _PyImport_IsScript
#endif
#define _PyImport_IsScript ((int(*)(struct filedescr *))DynPy_GetAddr(811))

#ifdef _PyImport_ReInitLock
#	undef _PyImport_ReInitLock
#endif
#define _PyImport_ReInitLock ((void(*)(void))DynPy_GetAddr(812))

#ifdef _PyImport_FindExtension
#	undef _PyImport_FindExtension
#endif
#define _PyImport_FindExtension ((PyObject *(*)(char *, char *))DynPy_GetAddr(813))

#ifdef _PyImport_FixupExtension
#	undef _PyImport_FixupExtension
#endif
#define _PyImport_FixupExtension ((PyObject *(*)(char *, char *))DynPy_GetAddr(814))

#ifdef PyNullImporter_Type
#	undef PyNullImporter_Type
#endif
#define PyNullImporter_Type (*(PyTypeObject(*))DynPy_GetAddr(815))

#ifdef PyImport_Inittab
#	undef PyImport_Inittab
#endif
#define PyImport_Inittab (*(struct _inittab *(*))DynPy_GetAddr(816))

#ifdef PyImport_AppendInittab
#	undef PyImport_AppendInittab
#endif
#define PyImport_AppendInittab ((int(*)(const char *name, void (*initfunc))DynPy_GetAddr(817))

#ifdef PyImport_ExtendInittab
#	undef PyImport_ExtendInittab
#endif
#define PyImport_ExtendInittab ((int(*)(struct _inittab *newtab))DynPy_GetAddr(818))

#ifdef PyImport_FrozenModules
#	undef PyImport_FrozenModules
#endif
#define PyImport_FrozenModules (*(struct _frozen *(*))DynPy_GetAddr(819))

#ifdef PyObject_Cmp
#	undef PyObject_Cmp
#endif
#define PyObject_Cmp ((int(*)(PyObject *o1, PyObject *o2, int *result))DynPy_GetAddr(820))

#ifdef PyObject_Call
#	undef PyObject_Call
#endif
#define PyObject_Call ((PyObject *(*)(PyObject *callable_object, PyObject *args, PyObject *kw))DynPy_GetAddr(821))

#ifdef PyObject_CallObject
#	undef PyObject_CallObject
#endif
#define PyObject_CallObject ((PyObject *(*)(PyObject *callable_object, PyObject *args))DynPy_GetAddr(822))

#ifdef PyObject_CallFunction
#	undef PyObject_CallFunction
#endif
#define PyObject_CallFunction ((PyObject *(*)(PyObject *callable_object, char *format, ...))DynPy_GetAddr(823))

#ifdef PyObject_CallMethod
#	undef PyObject_CallMethod
#endif
#define PyObject_CallMethod ((PyObject *(*)(PyObject *o, char *m, char *format, ...))DynPy_GetAddr(824))

#ifdef _PyObject_CallFunction_SizeT
#	undef _PyObject_CallFunction_SizeT
#endif
#define _PyObject_CallFunction_SizeT ((PyObject *(*)(PyObject *callable, char *format, ...))DynPy_GetAddr(825))

#ifdef _PyObject_CallMethod_SizeT
#	undef _PyObject_CallMethod_SizeT
#endif
#define _PyObject_CallMethod_SizeT ((PyObject *(*)(PyObject *o, char *name, char *format, ...))DynPy_GetAddr(826))

#ifdef PyObject_CallFunctionObjArgs
#	undef PyObject_CallFunctionObjArgs
#endif
#define PyObject_CallFunctionObjArgs ((PyObject *(*)(PyObject *callable, ...))DynPy_GetAddr(827))

#ifdef PyObject_CallMethodObjArgs
#	undef PyObject_CallMethodObjArgs
#endif
#define PyObject_CallMethodObjArgs ((PyObject *(*)(PyObject *o, PyObject *m, ...))DynPy_GetAddr(828))

#ifdef PyObject_Type
#	undef PyObject_Type
#endif
#define PyObject_Type ((PyObject *(*)(PyObject *o))DynPy_GetAddr(829))

#ifdef PyObject_Size
#	undef PyObject_Size
#endif
#define PyObject_Size ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(830))

#ifdef PyObject_Length
#	undef PyObject_Length
#endif
#define PyObject_Length ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(831))

#ifdef _PyObject_LengthHint
#	undef _PyObject_LengthHint
#endif
#define _PyObject_LengthHint ((Py_ssize_t(*)(PyObject *o, Py_ssize_t))DynPy_GetAddr(832))

#ifdef PyObject_GetItem
#	undef PyObject_GetItem
#endif
#define PyObject_GetItem ((PyObject *(*)(PyObject *o, PyObject *key))DynPy_GetAddr(833))

#ifdef PyObject_SetItem
#	undef PyObject_SetItem
#endif
#define PyObject_SetItem ((int(*)(PyObject *o, PyObject *key, PyObject *v))DynPy_GetAddr(834))

#ifdef PyObject_DelItemString
#	undef PyObject_DelItemString
#endif
#define PyObject_DelItemString ((int(*)(PyObject *o, char *key))DynPy_GetAddr(835))

#ifdef PyObject_DelItem
#	undef PyObject_DelItem
#endif
#define PyObject_DelItem ((int(*)(PyObject *o, PyObject *key))DynPy_GetAddr(836))

#ifdef PyObject_AsCharBuffer
#	undef PyObject_AsCharBuffer
#endif
#define PyObject_AsCharBuffer ((int(*)(PyObject *obj, const char **buffer, Py_ssize_t *buffer_len))DynPy_GetAddr(837))

#ifdef PyObject_CheckReadBuffer
#	undef PyObject_CheckReadBuffer
#endif
#define PyObject_CheckReadBuffer ((int(*)(PyObject *obj))DynPy_GetAddr(838))

#ifdef PyObject_AsReadBuffer
#	undef PyObject_AsReadBuffer
#endif
#define PyObject_AsReadBuffer ((int(*)(PyObject *obj, const void **buffer, Py_ssize_t *buffer_len))DynPy_GetAddr(839))

#ifdef PyObject_AsWriteBuffer
#	undef PyObject_AsWriteBuffer
#endif
#define PyObject_AsWriteBuffer ((int(*)(PyObject *obj, void **buffer, Py_ssize_t *buffer_len))DynPy_GetAddr(840))

#ifdef PyObject_GetBuffer
#	undef PyObject_GetBuffer
#endif
#define PyObject_GetBuffer ((int(*)(PyObject *obj, Py_buffer *view, int flags))DynPy_GetAddr(841))

#ifdef PyBuffer_GetPointer
#	undef PyBuffer_GetPointer
#endif
#define PyBuffer_GetPointer ((void *(*)(Py_buffer *view, Py_ssize_t *indices))DynPy_GetAddr(842))

#ifdef PyBuffer_ToContiguous
#	undef PyBuffer_ToContiguous
#endif
#define PyBuffer_ToContiguous ((int(*)(void *buf, Py_buffer *view, Py_ssize_t len, char fort))DynPy_GetAddr(843))

#ifdef PyBuffer_FromContiguous
#	undef PyBuffer_FromContiguous
#endif
#define PyBuffer_FromContiguous ((int(*)(Py_buffer *view, void *buf, Py_ssize_t len, char fort))DynPy_GetAddr(844))

#ifdef PyObject_CopyData
#	undef PyObject_CopyData
#endif
#define PyObject_CopyData ((int(*)(PyObject *dest, PyObject *src))DynPy_GetAddr(845))

#ifdef PyBuffer_IsContiguous
#	undef PyBuffer_IsContiguous
#endif
#define PyBuffer_IsContiguous ((int(*)(Py_buffer *view, char fort))DynPy_GetAddr(846))

#ifdef PyBuffer_FillContiguousStrides
#	undef PyBuffer_FillContiguousStrides
#endif
#define PyBuffer_FillContiguousStrides ((void(*)(int ndims, Py_ssize_t *shape, Py_ssize_t *strides, int itemsize, char fort))DynPy_GetAddr(847))

#ifdef PyBuffer_FillInfo
#	undef PyBuffer_FillInfo
#endif
#define PyBuffer_FillInfo ((int(*)(Py_buffer *view, PyObject *o, void *buf, Py_ssize_t len, int readonly, int flags))DynPy_GetAddr(848))

#ifdef PyBuffer_Release
#	undef PyBuffer_Release
#endif
#define PyBuffer_Release ((void(*)(Py_buffer *view))DynPy_GetAddr(849))

#ifdef PyObject_Format
#	undef PyObject_Format
#endif
#define PyObject_Format ((PyObject *(*)(PyObject* obj, PyObject *format_spec))DynPy_GetAddr(850))

#ifdef PyObject_GetIter
#	undef PyObject_GetIter
#endif
#define PyObject_GetIter ((PyObject *(*)(PyObject *))DynPy_GetAddr(851))

#ifdef PyIter_Next
#	undef PyIter_Next
#endif
#define PyIter_Next ((PyObject *(*)(PyObject *))DynPy_GetAddr(852))

#ifdef PyNumber_Check
#	undef PyNumber_Check
#endif
#define PyNumber_Check ((int(*)(PyObject *o))DynPy_GetAddr(853))

#ifdef PyNumber_Add
#	undef PyNumber_Add
#endif
#define PyNumber_Add ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(854))

#ifdef PyNumber_Subtract
#	undef PyNumber_Subtract
#endif
#define PyNumber_Subtract ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(855))

#ifdef PyNumber_Multiply
#	undef PyNumber_Multiply
#endif
#define PyNumber_Multiply ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(856))

#ifdef PyNumber_Divide
#	undef PyNumber_Divide
#endif
#define PyNumber_Divide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(857))

#ifdef PyNumber_FloorDivide
#	undef PyNumber_FloorDivide
#endif
#define PyNumber_FloorDivide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(858))

#ifdef PyNumber_TrueDivide
#	undef PyNumber_TrueDivide
#endif
#define PyNumber_TrueDivide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(859))

#ifdef PyNumber_Remainder
#	undef PyNumber_Remainder
#endif
#define PyNumber_Remainder ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(860))

#ifdef PyNumber_Divmod
#	undef PyNumber_Divmod
#endif
#define PyNumber_Divmod ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(861))

#ifdef PyNumber_Power
#	undef PyNumber_Power
#endif
#define PyNumber_Power ((PyObject *(*)(PyObject *o1, PyObject *o2, PyObject *o3))DynPy_GetAddr(862))

#ifdef PyNumber_Negative
#	undef PyNumber_Negative
#endif
#define PyNumber_Negative ((PyObject *(*)(PyObject *o))DynPy_GetAddr(863))

#ifdef PyNumber_Positive
#	undef PyNumber_Positive
#endif
#define PyNumber_Positive ((PyObject *(*)(PyObject *o))DynPy_GetAddr(864))

#ifdef PyNumber_Absolute
#	undef PyNumber_Absolute
#endif
#define PyNumber_Absolute ((PyObject *(*)(PyObject *o))DynPy_GetAddr(865))

#ifdef PyNumber_Invert
#	undef PyNumber_Invert
#endif
#define PyNumber_Invert ((PyObject *(*)(PyObject *o))DynPy_GetAddr(866))

#ifdef PyNumber_Lshift
#	undef PyNumber_Lshift
#endif
#define PyNumber_Lshift ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(867))

#ifdef PyNumber_Rshift
#	undef PyNumber_Rshift
#endif
#define PyNumber_Rshift ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(868))

#ifdef PyNumber_And
#	undef PyNumber_And
#endif
#define PyNumber_And ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(869))

#ifdef PyNumber_Xor
#	undef PyNumber_Xor
#endif
#define PyNumber_Xor ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(870))

#ifdef PyNumber_Or
#	undef PyNumber_Or
#endif
#define PyNumber_Or ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(871))

#ifdef PyNumber_Index
#	undef PyNumber_Index
#endif
#define PyNumber_Index ((PyObject *(*)(PyObject *o))DynPy_GetAddr(872))

#ifdef PyNumber_AsSsize_t
#	undef PyNumber_AsSsize_t
#endif
#define PyNumber_AsSsize_t ((Py_ssize_t(*)(PyObject *o, PyObject *exc))DynPy_GetAddr(873))

#ifdef _PyNumber_ConvertIntegralToInt
#	undef _PyNumber_ConvertIntegralToInt
#endif
#define _PyNumber_ConvertIntegralToInt ((PyObject *(*)( PyObject *integral, const char* error_format))DynPy_GetAddr(874))

#ifdef PyNumber_Int
#	undef PyNumber_Int
#endif
#define PyNumber_Int ((PyObject *(*)(PyObject *o))DynPy_GetAddr(875))

#ifdef PyNumber_Long
#	undef PyNumber_Long
#endif
#define PyNumber_Long ((PyObject *(*)(PyObject *o))DynPy_GetAddr(876))

#ifdef PyNumber_Float
#	undef PyNumber_Float
#endif
#define PyNumber_Float ((PyObject *(*)(PyObject *o))DynPy_GetAddr(877))

#ifdef PyNumber_InPlaceAdd
#	undef PyNumber_InPlaceAdd
#endif
#define PyNumber_InPlaceAdd ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(878))

#ifdef PyNumber_InPlaceSubtract
#	undef PyNumber_InPlaceSubtract
#endif
#define PyNumber_InPlaceSubtract ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(879))

#ifdef PyNumber_InPlaceMultiply
#	undef PyNumber_InPlaceMultiply
#endif
#define PyNumber_InPlaceMultiply ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(880))

#ifdef PyNumber_InPlaceDivide
#	undef PyNumber_InPlaceDivide
#endif
#define PyNumber_InPlaceDivide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(881))

#ifdef PyNumber_InPlaceFloorDivide
#	undef PyNumber_InPlaceFloorDivide
#endif
#define PyNumber_InPlaceFloorDivide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(882))

#ifdef PyNumber_InPlaceTrueDivide
#	undef PyNumber_InPlaceTrueDivide
#endif
#define PyNumber_InPlaceTrueDivide ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(883))

#ifdef PyNumber_InPlaceRemainder
#	undef PyNumber_InPlaceRemainder
#endif
#define PyNumber_InPlaceRemainder ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(884))

#ifdef PyNumber_InPlacePower
#	undef PyNumber_InPlacePower
#endif
#define PyNumber_InPlacePower ((PyObject *(*)(PyObject *o1, PyObject *o2, PyObject *o3))DynPy_GetAddr(885))

#ifdef PyNumber_InPlaceLshift
#	undef PyNumber_InPlaceLshift
#endif
#define PyNumber_InPlaceLshift ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(886))

#ifdef PyNumber_InPlaceRshift
#	undef PyNumber_InPlaceRshift
#endif
#define PyNumber_InPlaceRshift ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(887))

#ifdef PyNumber_InPlaceAnd
#	undef PyNumber_InPlaceAnd
#endif
#define PyNumber_InPlaceAnd ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(888))

#ifdef PyNumber_InPlaceXor
#	undef PyNumber_InPlaceXor
#endif
#define PyNumber_InPlaceXor ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(889))

#ifdef PyNumber_InPlaceOr
#	undef PyNumber_InPlaceOr
#endif
#define PyNumber_InPlaceOr ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(890))

#ifdef PyNumber_ToBase
#	undef PyNumber_ToBase
#endif
#define PyNumber_ToBase ((PyObject *(*)(PyObject *n, int base))DynPy_GetAddr(891))

#ifdef PySequence_Check
#	undef PySequence_Check
#endif
#define PySequence_Check ((int(*)(PyObject *o))DynPy_GetAddr(892))

#ifdef PySequence_Size
#	undef PySequence_Size
#endif
#define PySequence_Size ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(893))

#ifdef PySequence_Length
#	undef PySequence_Length
#endif
#define PySequence_Length ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(894))

#ifdef PySequence_Concat
#	undef PySequence_Concat
#endif
#define PySequence_Concat ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(895))

#ifdef PySequence_Repeat
#	undef PySequence_Repeat
#endif
#define PySequence_Repeat ((PyObject *(*)(PyObject *o, Py_ssize_t count))DynPy_GetAddr(896))

#ifdef PySequence_GetItem
#	undef PySequence_GetItem
#endif
#define PySequence_GetItem ((PyObject *(*)(PyObject *o, Py_ssize_t i))DynPy_GetAddr(897))

#ifdef PySequence_GetSlice
#	undef PySequence_GetSlice
#endif
#define PySequence_GetSlice ((PyObject *(*)(PyObject *o, Py_ssize_t i1, Py_ssize_t i2))DynPy_GetAddr(898))

#ifdef PySequence_SetItem
#	undef PySequence_SetItem
#endif
#define PySequence_SetItem ((int(*)(PyObject *o, Py_ssize_t i, PyObject *v))DynPy_GetAddr(899))

#ifdef PySequence_DelItem
#	undef PySequence_DelItem
#endif
#define PySequence_DelItem ((int(*)(PyObject *o, Py_ssize_t i))DynPy_GetAddr(900))

#ifdef PySequence_SetSlice
#	undef PySequence_SetSlice
#endif
#define PySequence_SetSlice ((int(*)(PyObject *o, Py_ssize_t i1, Py_ssize_t i2, PyObject *v))DynPy_GetAddr(901))

#ifdef PySequence_DelSlice
#	undef PySequence_DelSlice
#endif
#define PySequence_DelSlice ((int(*)(PyObject *o, Py_ssize_t i1, Py_ssize_t i2))DynPy_GetAddr(902))

#ifdef PySequence_Tuple
#	undef PySequence_Tuple
#endif
#define PySequence_Tuple ((PyObject *(*)(PyObject *o))DynPy_GetAddr(903))

#ifdef PySequence_List
#	undef PySequence_List
#endif
#define PySequence_List ((PyObject *(*)(PyObject *o))DynPy_GetAddr(904))

#ifdef PySequence_Fast
#	undef PySequence_Fast
#endif
#define PySequence_Fast ((PyObject *(*)(PyObject *o, const char* m))DynPy_GetAddr(905))

#ifdef PySequence_Count
#	undef PySequence_Count
#endif
#define PySequence_Count ((Py_ssize_t(*)(PyObject *o, PyObject *value))DynPy_GetAddr(906))

#ifdef PySequence_Contains
#	undef PySequence_Contains
#endif
#define PySequence_Contains ((int(*)(PyObject *seq, PyObject *ob))DynPy_GetAddr(907))

#ifdef _PySequence_IterSearch
#	undef _PySequence_IterSearch
#endif
#define _PySequence_IterSearch ((Py_ssize_t(*)(PyObject *seq, PyObject *obj, int operation))DynPy_GetAddr(908))

#ifdef PySequence_In
#	undef PySequence_In
#endif
#define PySequence_In ((int(*)(PyObject *o, PyObject *value))DynPy_GetAddr(909))

#ifdef PySequence_Index
#	undef PySequence_Index
#endif
#define PySequence_Index ((Py_ssize_t(*)(PyObject *o, PyObject *value))DynPy_GetAddr(910))

#ifdef PySequence_InPlaceConcat
#	undef PySequence_InPlaceConcat
#endif
#define PySequence_InPlaceConcat ((PyObject *(*)(PyObject *o1, PyObject *o2))DynPy_GetAddr(911))

#ifdef PySequence_InPlaceRepeat
#	undef PySequence_InPlaceRepeat
#endif
#define PySequence_InPlaceRepeat ((PyObject *(*)(PyObject *o, Py_ssize_t count))DynPy_GetAddr(912))

#ifdef PyMapping_Check
#	undef PyMapping_Check
#endif
#define PyMapping_Check ((int(*)(PyObject *o))DynPy_GetAddr(913))

#ifdef PyMapping_Size
#	undef PyMapping_Size
#endif
#define PyMapping_Size ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(914))

#ifdef PyMapping_Length
#	undef PyMapping_Length
#endif
#define PyMapping_Length ((Py_ssize_t(*)(PyObject *o))DynPy_GetAddr(915))

#ifdef PyMapping_HasKeyString
#	undef PyMapping_HasKeyString
#endif
#define PyMapping_HasKeyString ((int(*)(PyObject *o, char *key))DynPy_GetAddr(916))

#ifdef PyMapping_HasKey
#	undef PyMapping_HasKey
#endif
#define PyMapping_HasKey ((int(*)(PyObject *o, PyObject *key))DynPy_GetAddr(917))

#ifdef PyMapping_GetItemString
#	undef PyMapping_GetItemString
#endif
#define PyMapping_GetItemString ((PyObject *(*)(PyObject *o, char *key))DynPy_GetAddr(918))

#ifdef PyMapping_SetItemString
#	undef PyMapping_SetItemString
#endif
#define PyMapping_SetItemString ((int(*)(PyObject *o, char *key, PyObject *value))DynPy_GetAddr(919))

#ifdef PyObject_IsInstance
#	undef PyObject_IsInstance
#endif
#define PyObject_IsInstance ((int(*)(PyObject *object, PyObject *typeorclass))DynPy_GetAddr(920))

#ifdef PyObject_IsSubclass
#	undef PyObject_IsSubclass
#endif
#define PyObject_IsSubclass ((int(*)(PyObject *object, PyObject *typeorclass))DynPy_GetAddr(921))

#ifdef _PyObject_RealIsInstance
#	undef _PyObject_RealIsInstance
#endif
#define _PyObject_RealIsInstance ((int(*)(PyObject *inst, PyObject *cls))DynPy_GetAddr(922))

#ifdef _PyObject_RealIsSubclass
#	undef _PyObject_RealIsSubclass
#endif
#define _PyObject_RealIsSubclass ((int(*)(PyObject *derived, PyObject *cls))DynPy_GetAddr(923))

#ifdef _Py_add_one_to_index_F
#	undef _Py_add_one_to_index_F
#endif
#define _Py_add_one_to_index_F ((void(*)(int nd, Py_ssize_t *index, const Py_ssize_t *shape))DynPy_GetAddr(924))

#ifdef _Py_add_one_to_index_C
#	undef _Py_add_one_to_index_C
#endif
#define _Py_add_one_to_index_C ((void(*)(int nd, Py_ssize_t *index, const Py_ssize_t *shape))DynPy_GetAddr(925))

#ifdef PyCode_Type
#	undef PyCode_Type
#endif
#define PyCode_Type (*(PyTypeObject(*))DynPy_GetAddr(926))

#ifdef PyCode_New
#	undef PyCode_New
#endif
#define PyCode_New ((PyCodeObject *(*)( int, int, int, int, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *, int, PyObject *))DynPy_GetAddr(927))

#ifdef PyCode_NewEmpty
#	undef PyCode_NewEmpty
#endif
#define PyCode_NewEmpty ((PyCodeObject *(*)(const char *filename, const char *funcname, int firstlineno))DynPy_GetAddr(928))

#ifdef PyCode_Addr2Line
#	undef PyCode_Addr2Line
#endif
#define PyCode_Addr2Line ((int(*)(PyCodeObject *, int))DynPy_GetAddr(929))

#ifdef _PyCode_CheckLineNumber
#	undef _PyCode_CheckLineNumber
#endif
#define _PyCode_CheckLineNumber ((int(*)(PyCodeObject* co, int lasti, PyAddrPair *bounds))DynPy_GetAddr(930))

#ifdef PyCode_Optimize
#	undef PyCode_Optimize
#endif
#define PyCode_Optimize ((PyObject*(*)(PyObject *code, PyObject* consts, PyObject *names, PyObject *lineno_obj))DynPy_GetAddr(931))

#ifdef PyNode_Compile
#	undef PyNode_Compile
#endif
#define PyNode_Compile ((PyCodeObject *(*)(struct _node *, const char *))DynPy_GetAddr(932))

#ifdef PyAST_Compile
#	undef PyAST_Compile
#endif
#define PyAST_Compile ((PyCodeObject *(*)(struct _mod *, const char *, PyCompilerFlags *, PyArena *))DynPy_GetAddr(933))

#ifdef PyFuture_FromAST
#	undef PyFuture_FromAST
#endif
#define PyFuture_FromAST ((PyFutureFeatures *(*)(struct _mod *, const char *))DynPy_GetAddr(934))

#ifdef PyEval_EvalCode
#	undef PyEval_EvalCode
#endif
#define PyEval_EvalCode ((PyObject *(*)(PyCodeObject *, PyObject *, PyObject *))DynPy_GetAddr(935))

#ifdef PyEval_EvalCodeEx
#	undef PyEval_EvalCodeEx
#endif
#define PyEval_EvalCodeEx ((PyObject *(*)(PyCodeObject *co, PyObject *globals, PyObject *locals, PyObject **args, int argc, PyObject **kwds, int kwdc, PyObject **defs, int defc, PyObject *closure))DynPy_GetAddr(936))

#ifdef _PyEval_CallTracing
#	undef _PyEval_CallTracing
#endif
#define _PyEval_CallTracing ((PyObject *(*)(PyObject *func, PyObject *args))DynPy_GetAddr(937))

#ifdef PyOS_ascii_strtod
#	undef PyOS_ascii_strtod
#endif
#define PyOS_ascii_strtod ((double(*)(const char *str, char **ptr))DynPy_GetAddr(938))

#ifdef PyOS_ascii_atof
#	undef PyOS_ascii_atof
#endif
#define PyOS_ascii_atof ((double(*)(const char *str))DynPy_GetAddr(939))

#ifdef PyOS_ascii_formatd
#	undef PyOS_ascii_formatd
#endif
#define PyOS_ascii_formatd ((char *(*)(char *buffer, size_t buf_len, const char *format, double d))DynPy_GetAddr(940))

#ifdef PyOS_string_to_double
#	undef PyOS_string_to_double
#endif
#define PyOS_string_to_double ((double(*)(const char *str, char **endptr, PyObject *overflow_exception))DynPy_GetAddr(941))

#ifdef PyOS_double_to_string
#	undef PyOS_double_to_string
#endif
#define PyOS_double_to_string ((char *(*)(double val, char format_code, int precision, int flags, int *type))DynPy_GetAddr(942))

#ifdef _Py_parse_inf_or_nan
#	undef _Py_parse_inf_or_nan
#endif
#define _Py_parse_inf_or_nan ((double(*)(const char *p, char **endptr))DynPy_GetAddr(943))

#ifdef PyOS_mystrnicmp
#	undef PyOS_mystrnicmp
#endif
#define PyOS_mystrnicmp ((int(*)(const char *, const char *, Py_ssize_t))DynPy_GetAddr(944))

#ifdef PyOS_mystricmp
#	undef PyOS_mystricmp
#endif
#define PyOS_mystricmp ((int(*)(const char *, const char *))DynPy_GetAddr(945))

#ifdef _Py_dg_strtod
#	undef _Py_dg_strtod
#endif
#define _Py_dg_strtod ((double(*)(const char *str, char **ptr))DynPy_GetAddr(946))

#ifdef _Py_dg_dtoa
#	undef _Py_dg_dtoa
#endif
#define _Py_dg_dtoa ((char *(*)(double d, int mode, int ndigits, int *decpt, int *sign, char **rve))DynPy_GetAddr(947))

#ifdef _Py_dg_freedtoa
#	undef _Py_dg_freedtoa
#endif
#define _Py_dg_freedtoa ((void(*)(char *s))DynPy_GetAddr(948))

#ifdef _Py_Mangle
#	undef _Py_Mangle
#endif
#define _Py_Mangle ((PyObject*(*)(PyObject *p, PyObject *name))DynPy_GetAddr(949))

#ifdef PyFrame_Type
#	undef PyFrame_Type
#endif
#define PyFrame_Type (*(PyTypeObject(*))DynPy_GetAddr(950))

#ifdef PyFrame_New
#	undef PyFrame_New
#endif
#define PyFrame_New ((PyFrameObject *(*)(PyThreadState *, PyCodeObject *, PyObject *, PyObject *))DynPy_GetAddr(951))

#ifdef PyFrame_BlockSetup
#	undef PyFrame_BlockSetup
#endif
#define PyFrame_BlockSetup ((void(*)(PyFrameObject *, int, int, int))DynPy_GetAddr(952))

#ifdef PyFrame_BlockPop
#	undef PyFrame_BlockPop
#endif
#define PyFrame_BlockPop ((PyTryBlock *(*)(PyFrameObject *))DynPy_GetAddr(953))

#ifdef PyFrame_LocalsToFast
#	undef PyFrame_LocalsToFast
#endif
#define PyFrame_LocalsToFast ((void(*)(PyFrameObject *, int))DynPy_GetAddr(954))

#ifdef PyFrame_FastToLocals
#	undef PyFrame_FastToLocals
#endif
#define PyFrame_FastToLocals ((void(*)(PyFrameObject *))DynPy_GetAddr(955))

#ifdef PyFrame_ClearFreeList
#	undef PyFrame_ClearFreeList
#endif
#define PyFrame_ClearFreeList ((int(*)(void))DynPy_GetAddr(956))

#ifdef PyFrame_GetLineNumber
#	undef PyFrame_GetLineNumber
#endif
#define PyFrame_GetLineNumber ((int(*)(PyFrameObject *))DynPy_GetAddr(957))

#ifdef PyMember_Get
#	undef PyMember_Get
#endif
#define PyMember_Get ((PyObject *(*)(const char *, struct memberlist *, const char *))DynPy_GetAddr(958))

#ifdef PyMember_Set
#	undef PyMember_Set
#endif
#define PyMember_Set ((int(*)(char *, struct memberlist *, const char *, PyObject *))DynPy_GetAddr(959))

#ifdef PyMember_GetOne
#	undef PyMember_GetOne
#endif
#define PyMember_GetOne ((PyObject *(*)(const char *, struct PyMemberDef *))DynPy_GetAddr(960))

#ifdef PyMember_SetOne
#	undef PyMember_SetOne
#endif
#define PyMember_SetOne ((int(*)(char *, struct PyMemberDef *, PyObject *))DynPy_GetAddr(961))