	{ "PyMem_Malloc", NULL },
	{ "PyMem_Realloc", NULL },
	{ "PyMem_Free", NULL },
	{ "PyType_IsSubtype", NULL },
	{ "PyType_Ready", NULL },
	{ "PyType_GenericAlloc", NULL },
	{ "PyType_GenericNew", NULL },
	{ "_PyType_Lookup", NULL },
	{ "_PyObject_LookupSpecial", NULL },
	{ "PyType_ClearCache", NULL },
	{ "PyType_Modified", NULL },
	{ "PyObject_Print", NULL },
	{ "_PyObject_Dump", NULL },
	{ "PyObject_Repr", NULL },
	{ "_PyObject_Str", NULL },
	{ "PyObject_Str", NULL },
	{ "PyObject_Unicode", NULL },
	{ "PyObject_Compare", NULL },
	{ "PyObject_RichCompare", NULL },
	{ "PyObject_RichCompareBool", NULL },
	{ "PyObject_GetAttrString", NULL },
	{ "PyObject_SetAttrString", NULL },
	{ "PyObject_HasAttrString", NULL },
	{ "PyObject_GetAttr", NULL },
	{ "PyObject_SetAttr", NULL },
	{ "PyObject_HasAttr", NULL },
	{ "_PyObject_GetDictPtr", NULL },
	{ "PyObject_SelfIter", NULL },
	{ "_PyObject_NextNotImplemented", NULL },
	{ "PyObject_GenericGetAttr", NULL },
	{ "PyObject_GenericSetAttr", NULL },
	{ "PyObject_Hash", NULL },
	{ "PyObject_HashNotImplemented", NULL },
	{ "PyObject_IsTrue", NULL },
	{ "PyObject_Not", NULL },
	{ "PyCallable_Check", NULL },
	{ "PyNumber_Coerce", NULL },
	{ "PyNumber_CoerceEx", NULL },
	{ "PyObject_ClearWeakRefs", NULL },
	{ "_PyObject_SlotCompare", NULL },
	{ "_PyObject_GenericGetAttrWithDict", NULL },
	{ "_PyObject_GenericSetAttrWithDict", NULL },
	{ "PyObject_Dir", NULL },
	{ "Py_ReprEnter", NULL },
	{ "Py_ReprLeave", NULL },
	{ "_Py_HashDouble", NULL },
	{ "_Py_HashPointer", NULL },
	{ "Py_IncRef", NULL },
	{ "Py_DecRef", NULL },
	{ "_PyTrash_deposit_object", NULL },
	{ "_PyTrash_destroy_chain", NULL },
	{ "PyObject_Malloc", NULL },
	{ "PyObject_Realloc", NULL },
	{ "PyObject_Free", NULL },
	{ "PyObject_Init", NULL },
	{ "PyObject_InitVar", NULL },
	{ "_PyObject_New", NULL },
	{ "_PyObject_NewVar", NULL },
	{ "PyGC_Collect", NULL },
	{ "_PyObject_GC_Resize", NULL },
	{ "_PyObject_GC_Malloc", NULL },
	{ "_PyObject_GC_New", NULL },
	{ "_PyObject_GC_NewVar", NULL },
	{ "PyObject_GC_Track", NULL },
	{ "PyObject_GC_UnTrack", NULL },
	{ "PyObject_GC_Del", NULL },
	{ "Py_FatalError", NULL },
	{ "PyUnicodeUCS2_FromUnicode", NULL },
	{ "PyUnicodeUCS2_FromStringAndSize", NULL },
	{ "PyUnicodeUCS2_FromString", NULL },
	{ "PyUnicodeUCS2_AsUnicode", NULL },
	{ "PyUnicodeUCS2_GetSize", NULL },
	{ "Py_UNICODEPyUnicodeUCS2_GetMax", NULL },
	{ "PyUnicodeUCS2_Resize", NULL },
	{ "PyUnicodeUCS2_FromEncodedObject", NULL },
	{ "PyUnicodeUCS2_FromObject", NULL },
	{ "PyUnicodeUCS2_FromFormatV", NULL },
	{ "PyUnicodeUCS2_FromFormat", NULL },
	{ "_PyUnicode_FormatAdvanced", NULL },
	{ "PyUnicodeUCS2_FromWideChar", NULL },
	{ "PyUnicodeUCS2_AsWideChar", NULL },
	{ "PyUnicodeUCS2_FromOrdinal", NULL },
	{ "PyUnicodeUCS2_ClearFreelist", NULL },
	{ "_PyUnicodeUCS2_AsDefaultEncodedString", NULL },
	{ "PyUnicodeUCS2_GetDefaultEncoding", NULL },
	{ "PyUnicodeUCS2_SetDefaultEncoding", NULL },
	{ "PyUnicodeUCS2_Decode", NULL },
	{ "PyUnicodeUCS2_Encode", NULL },
	{ "PyUnicodeUCS2_AsEncodedObject", NULL },
	{ "PyUnicodeUCS2_AsEncodedString", NULL },
	{ "PyUnicode_BuildEncodingMap", NULL },
	{ "PyUnicode_DecodeUTF7", NULL },
	{ "PyUnicode_DecodeUTF7Stateful", NULL },
	{ "PyUnicode_EncodeUTF7", NULL },
	{ "PyUnicodeUCS2_DecodeUTF8", NULL },
	{ "PyUnicodeUCS2_DecodeUTF8Stateful", NULL },
	{ "PyUnicodeUCS2_AsUTF8String", NULL },
	{ "PyUnicodeUCS2_EncodeUTF8", NULL },
	{ "PyUnicodeUCS2_DecodeUTF32", NULL },
	{ "PyUnicodeUCS2_DecodeUTF32Stateful", NULL },
	{ "PyUnicodeUCS2_AsUTF32String", NULL },
	{ "PyUnicodeUCS2_EncodeUTF32", NULL },
	{ "PyUnicodeUCS2_DecodeUTF16", NULL },
	{ "PyUnicodeUCS2_DecodeUTF16Stateful", NULL },
	{ "PyUnicodeUCS2_AsUTF16String", NULL },
	{ "PyUnicodeUCS2_EncodeUTF16", NULL },
	{ "PyUnicodeUCS2_DecodeUnicodeEscape", NULL },
	{ "PyUnicodeUCS2_AsUnicodeEscapeString", NULL },
	{ "PyUnicodeUCS2_EncodeUnicodeEscape", NULL },
	{ "PyUnicodeUCS2_DecodeRawUnicodeEscape", NULL },
	{ "PyUnicodeUCS2_AsRawUnicodeEscapeString", NULL },
	{ "PyUnicodeUCS2_EncodeRawUnicodeEscape", NULL },
	{ "_PyUnicode_DecodeUnicodeInternal", NULL },
	{ "PyUnicodeUCS2_DecodeLatin1", NULL },
	{ "PyUnicodeUCS2_AsLatin1String", NULL },
	{ "PyUnicodeUCS2_EncodeLatin1", NULL },
	{ "PyUnicodeUCS2_DecodeASCII", NULL },
	{ "PyUnicodeUCS2_AsASCIIString", NULL },
	{ "PyUnicodeUCS2_EncodeASCII", NULL },
	{ "PyUnicodeUCS2_DecodeCharmap", NULL },
	{ "PyUnicodeUCS2_AsCharmapString", NULL },
	{ "PyUnicodeUCS2_EncodeCharmap", NULL },
	{ "PyUnicodeUCS2_TranslateCharmap", NULL },
	{ "PyUnicode_DecodeMBCS", NULL },
	{ "PyUnicode_DecodeMBCSStateful", NULL },
	{ "PyUnicode_AsMBCSString", NULL },
	{ "PyUnicode_EncodeMBCS", NULL },
	{ "PyUnicodeUCS2_EncodeDecimal", NULL },
	{ "PyUnicodeUCS2_Concat", NULL },
	{ "PyUnicodeUCS2_Split", NULL },
	{ "PyUnicodeUCS2_Splitlines", NULL },
	{ "PyUnicodeUCS2_Partition", NULL },
	{ "PyUnicodeUCS2_RPartition", NULL },
	{ "PyUnicodeUCS2_RSplit", NULL },
	{ "PyUnicodeUCS2_Translate", NULL },
	{ "PyUnicodeUCS2_Join", NULL },
	{ "PyUnicodeUCS2_Tailmatch", NULL },
	{ "PyUnicodeUCS2_Find", NULL },
	{ "PyUnicodeUCS2_Count", NULL },
	{ "PyUnicodeUCS2_Replace", NULL },
	{ "PyUnicodeUCS2_Compare", NULL },
	{ "PyUnicodeUCS2_RichCompare", NULL },
	{ "PyUnicodeUCS2_Format", NULL },
	{ "PyUnicodeUCS2_Contains", NULL },
	{ "_PyUnicode_XStrip", NULL },
	{ "_PyUnicodeUCS2_IsLowercase", NULL },
	{ "_PyUnicodeUCS2_IsUppercase", NULL },
	{ "_PyUnicodeUCS2_IsTitlecase", NULL },
	{ "_PyUnicodeUCS2_IsWhitespace", NULL },
	{ "_PyUnicodeUCS2_IsLinebreak", NULL },
	{ "Py_UNICODE_PyUnicodeUCS2_ToLowercase", NULL },
	{ "Py_UNICODE_PyUnicodeUCS2_ToUppercase", NULL },
	{ "Py_UNICODE_PyUnicodeUCS2_ToTitlecase", NULL },
	{ "_PyUnicodeUCS2_ToDecimalDigit", NULL },
	{ "_PyUnicodeUCS2_ToDigit", NULL },
	{ "_PyUnicodeUCS2_ToNumeric", NULL },
	{ "_PyUnicodeUCS2_IsDecimalDigit", NULL },
	{ "_PyUnicodeUCS2_IsDigit", NULL },
	{ "_PyUnicodeUCS2_IsNumeric", NULL },
	{ "_PyUnicodeUCS2_IsAlpha", NULL },
	{ "PyInt_FromString", NULL },
	{ "PyInt_FromUnicode", NULL },
	{ "PyInt_FromLong", NULL },
	{ "PyInt_FromSize_t", NULL },
	{ "PyInt_FromSsize_t", NULL },
	{ "PyInt_AsLong", NULL },
	{ "PyInt_AsSsize_t", NULL },
	{ "PyInt_AsUnsignedLongMask", NULL },
	{ "PyInt_AsUnsignedLongLongMask", NULL },
	{ "PyInt_GetMax", NULL },
	{ "PyOS_strtoul", NULL },
	{ "PyOS_strtol", NULL },
	{ "PyInt_ClearFreeList", NULL },
	{ "_PyInt_Format", NULL },
	{ "_PyInt_FormatAdvanced", NULL },
	{ "PyBool_FromLong", NULL },
	{ "PyLong_FromLong", NULL },
	{ "PyLong_FromUnsignedLong", NULL },
	{ "PyLong_FromDouble", NULL },
	{ "PyLong_FromSize_t", NULL },
	{ "PyLong_FromSsize_t", NULL },
	{ "PyLong_AsLong", NULL },
	{ "PyLong_AsLongAndOverflow", NULL },
	{ "PyLong_AsUnsignedLong", NULL },
	{ "PyLong_AsUnsignedLongMask", NULL },
	{ "PyLong_AsSsize_t", NULL },
	{ "PyLong_GetInfo", NULL },
	{ "_PyLong_Frexp", NULL },
	{ "PyLong_AsDouble", NULL },
	{ "PyLong_FromPtr", NULL },
	{ "PyLong_AsPtr", NULL },
	{ "PyLong_FromLongLong", NULL },
	{ "PyLong_FromUnsignedLongLong", NULL },
	{ "PyLong_AsLongLong", NULL },
	{ "PyLong_AsUnsignedLongLong", NULL },
	{ "PyLong_AsUnsignedLongLongMask", NULL },
	{ "PyLong_AsLongLongAndOverflow", NULL },
	{ "PyLong_FromString", NULL },
	{ "PyLong_FromUnicode", NULL },
	{ "_PyLong_Sign", NULL },
	{ "_PyLong_NumBits", NULL },
	{ "_PyLong_FromByteArray", NULL },
	{ "_PyLong_AsByteArray", NULL },
	{ "_PyLong_Format", NULL },
	{ "_PyLong_FormatAdvanced", NULL },
	{ "PyFloat_GetMax", NULL },
	{ "PyFloat_GetMin", NULL },
	{ "PyFloat_GetInfo", NULL },
	{ "PyFloat_FromString", NULL },
	{ "PyFloat_FromDouble", NULL },
	{ "PyFloat_AsDouble", NULL },
	{ "PyFloat_AsReprString", NULL },
	{ "PyFloat_AsString", NULL },
	{ "_PyFloat_Pack4", NULL },
	{ "_PyFloat_Pack8", NULL },
	{ "_PyFloat_Digits", NULL },
	{ "_PyFloat_DigitsInit", NULL },
	{ "_PyFloat_Unpack4", NULL },
	{ "_PyFloat_Unpack8", NULL },
	{ "PyFloat_ClearFreeList", NULL },
	{ "_PyFloat_FormatAdvanced", NULL },
	{ "_Py_double_round", NULL },
	{ "Py_complex_Py_c_sum", NULL },
	{ "Py_complex_Py_c_diff", NULL },
	{ "Py_complex_Py_c_neg", NULL },
	{ "Py_complex_Py_c_prod", NULL },
	{ "Py_complex_Py_c_quot", NULL },
	{ "Py_complex_Py_c_pow", NULL },
	{ "_Py_c_abs", NULL },
	{ "PyComplex_FromCComplex", NULL },
	{ "PyComplex_FromDoubles", NULL },
	{ "PyComplex_RealAsDouble", NULL },
	{ "PyComplex_ImagAsDouble", NULL },
	{ "Py_complexPyComplex_AsCComplex", NULL },
	{ "_PyComplex_FormatAdvanced", NULL },
	{ "PyString_FromStringAndSize", NULL },
	{ "PyString_FromString", NULL },
	{ "PyString_FromFormatV", NULL },
	{ "PyString_FromFormat", NULL },
	{ "PyString_Size", NULL },
	{ "PyString_AsString", NULL },
	{ "PyString_Repr", NULL },
	{ "PyString_Concat", NULL },
	{ "PyString_ConcatAndDel", NULL },
	{ "_PyString_Resize", NULL },
	{ "_PyString_Eq", NULL },
	{ "PyString_Format", NULL },
	{ "_PyString_FormatLong", NULL },
	{ "PyString_DecodeEscape", NULL },
	{ "PyString_InternInPlace", NULL },
	{ "PyString_InternImmortal", NULL },
	{ "PyString_InternFromString", NULL },
	{ "_Py_ReleaseInternedStrings", NULL },
	{ "_PyString_Join", NULL },
	{ "PyString_Decode", NULL },
	{ "PyString_Encode", NULL },
	{ "PyString_AsEncodedObject", NULL },
	{ "PyString_AsEncodedString", NULL },
	{ "PyString_AsDecodedObject", NULL },
	{ "PyString_AsDecodedString", NULL },
	{ "PyString_AsStringAndSize", NULL },
	{ "_PyString_InsertThousandsGroupingLocale", NULL },
	{ "_PyString_InsertThousandsGrouping", NULL },
	{ "_PyBytes_FormatAdvanced", NULL },
	{ "PyMemoryView_GetContiguous", NULL },
	{ "PyMemoryView_FromObject", NULL },
	{ "PyMemoryView_FromBuffer", NULL },
	{ "PyBuffer_FromObject", NULL },
	{ "PyBuffer_FromReadWriteObject", NULL },
	{ "PyBuffer_FromMemory", NULL },
	{ "PyBuffer_FromReadWriteMemory", NULL },
	{ "PyBuffer_New", NULL },
	{ "PyByteArray_FromObject", NULL },
	{ "PyByteArray_Concat", NULL },
	{ "PyByteArray_FromStringAndSize", NULL },
	{ "PyByteArray_Size", NULL },
	{ "PyByteArray_AsString", NULL },
	{ "PyByteArray_Resize", NULL },
	{ "PyTuple_New", NULL },
	{ "PyTuple_Size", NULL },
	{ "PyTuple_GetItem", NULL },
	{ "PyTuple_SetItem", NULL },
	{ "PyTuple_GetSlice", NULL },
	{ "_PyTuple_Resize", NULL },
	{ "PyTuple_Pack", NULL },
	{ "_PyTuple_MaybeUntrack", NULL },
	{ "PyTuple_ClearFreeList", NULL },
	{ "PyList_New", NULL },
	{ "PyList_Size", NULL },
	{ "PyList_GetItem", NULL },
	{ "PyList_SetItem", NULL },
	{ "PyList_Insert", NULL },
	{ "PyList_Append", NULL },
	{ "PyList_GetSlice", NULL },
	{ "PyList_SetSlice", NULL },
	{ "PyList_Sort", NULL },
	{ "PyList_Reverse", NULL },
	{ "PyList_AsTuple", NULL },
	{ "_PyList_Extend", NULL },
	{ "PyDict_New", NULL },
	{ "PyDict_GetItem", NULL },
	{ "PyDict_SetItem", NULL },
	{ "PyDict_DelItem", NULL },
	{ "PyDict_Clear", NULL },
	{ "PyDict_Next", NULL },
	{ "_PyDict_Next", NULL },
	{ "PyDict_Keys", NULL },
	{ "PyDict_Values", NULL },
	{ "PyDict_Items", NULL },
	{ "PyDict_Size", NULL },
	{ "PyDict_Copy", NULL },
	{ "PyDict_Contains", NULL },
	{ "_PyDict_Contains", NULL },
	{ "_PyDict_NewPresized", NULL },
	{ "_PyDict_MaybeUntrack", NULL },
	{ "PyDict_Update", NULL },
	{ "PyDict_Merge", NULL },
	{ "PyDict_MergeFromSeq2", NULL },
	{ "PyDict_GetItemString", NULL },
	{ "PyDict_SetItemString", NULL },
	{ "PyDict_DelItemString", NULL },
	{ "PySet_New", NULL },
	{ "PyFrozenSet_New", NULL },
	{ "PySet_Size", NULL },
	{ "PySet_Clear", NULL },
	{ "PySet_Contains", NULL },
	{ "PySet_Discard", NULL },
	{ "PySet_Add", NULL },
	{ "_PySet_Next", NULL },
	{ "_PySet_NextEntry", NULL },
	{ "PySet_Pop", NULL },
	{ "_PySet_Update", NULL },
	{ "PyCFunctionPyCFunction_GetFunction", NULL },
	{ "PyCFunction_GetSelf", NULL },
	{ "PyCFunction_GetFlags", NULL },
	{ "PyCFunction_Call", NULL },
	{ "Py_FindMethod", NULL },
	{ "PyCFunction_NewEx", NULL },
	{ "Py_FindMethodInChain", NULL },
	{ "PyCFunction_ClearFreeList", NULL },
	{ "PyModule_New", NULL },
	{ "PyModule_GetDict", NULL },
	{ "PyModule_GetName", NULL },
	{ "PyModule_GetFilename", NULL },
	{ "_PyModule_Clear", NULL },
	{ "PyFunction_New", NULL },
	{ "PyFunction_GetCode", NULL },
	{ "PyFunction_GetGlobals", NULL },
	{ "PyFunction_GetModule", NULL },
	{ "PyFunction_GetDefaults", NULL },
	{ "PyFunction_SetDefaults", NULL },
	{ "PyFunction_GetClosure", NULL },
	{ "PyFunction_SetClosure", NULL },
	{ "PyClassMethod_New", NULL },
	{ "PyStaticMethod_New", NULL },
	{ "PyClass_New", NULL },
	{ "PyInstance_New", NULL },
	{ "PyInstance_NewRaw", NULL },
	{ "PyMethod_New", NULL },
	{ "PyMethod_Function", NULL },
	{ "PyMethod_Self", NULL },
	{ "PyMethod_Class", NULL },
	{ "_PyInstance_Lookup", NULL },
	{ "PyClass_IsSubclass", NULL },
	{ "PyMethod_ClearFreeList", NULL },
	{ "PyFile_FromString", NULL },
	{ "PyFile_SetBufSize", NULL },
	{ "PyFile_SetEncoding", NULL },
	{ "PyFile_SetEncodingAndErrors", NULL },
	{ "PyFile_FromFile", NULL },
	{ "PyFile_AsFile", NULL },
	{ "PyFile_IncUseCount", NULL },
	{ "PyFile_DecUseCount", NULL },
	{ "PyFile_Name", NULL },
	{ "PyFile_GetLine", NULL },
	{ "PyFile_WriteObject", NULL },
	{ "PyFile_SoftSpace", NULL },
	{ "PyFile_WriteString", NULL },
	{ "PyObject_AsFileDescriptor", NULL },
	{ "Py_UniversalNewlineFgets", NULL },
	{ "Py_UniversalNewlineFread", NULL },
	{ "_PyFile_SanitizeMode", NULL },
	{ "PyCObject_FromPtr", NULL },
	{ "PyCObject_FromVoidPtrAndDesc", NULL },
	{ "PyCObject_AsPtr", NULL },
	{ "PyCObject_GetDesc", NULL },
	{ "PyCObject_Import", NULL },
	{ "PyCObject_SetPtr", NULL },
	{ "PyCapsule_New", NULL },
	{ "PyCapsule_GetPointer", NULL },
	{ "PyCapsule_DestructorPyCapsule_GetDestructor", NULL },
	{ "PyCapsule_GetName", NULL },
	{ "PyCapsule_GetContext", NULL },
	{ "PyCapsule_IsValid", NULL },
	{ "PyCapsule_SetPointer", NULL },
	{ "PyCapsule_SetDestructor", NULL },
	{ "PyCapsule_SetName", NULL },
	{ "PyCapsule_SetContext", NULL },
	{ "PyCapsule_Import", NULL },
	{ "PyTraceBack_Here", NULL },
	{ "PyTraceBack_Print", NULL },
	{ "_Py_DisplaySourceLine", NULL },
	{ "PySlice_New", NULL },
	{ "_PySlice_FromIndices", NULL },
	{ "PySlice_GetIndices", NULL },
	{ "PySlice_GetIndicesEx", NULL },
	{ "PyCell_New", NULL },
	{ "PyCell_Get", NULL },
	{ "PyCell_Set", NULL },
	{ "PySeqIter_New", NULL },
	{ "PyCallIter_New", NULL },
	{ "PyGen_New", NULL },
	{ "PyGen_NeedsFinalizing", NULL },
	{ "PyDescr_NewMethod", NULL },
	{ "PyDescr_NewClassMethod", NULL },
	{ "PyDescr_NewMember", NULL },
	{ "PyDescr_NewGetSet", NULL },
	{ "PyDescr_NewWrapper", NULL },
	{ "PyDictProxy_New", NULL },
	{ "PyWrapper_New", NULL },
	{ "_PyWarnings_Init", NULL },
	{ "PyErr_WarnEx", NULL },
	{ "PyErr_WarnExplicit", NULL },
	{ "PyWeakref_NewRef", NULL },
	{ "PyWeakref_NewProxy", NULL },
	{ "PyWeakref_GetObject", NULL },
	{ "_PyWeakref_GetWeakrefCount", NULL },
	{ "_PyWeakref_ClearRef", NULL },
	{ "PyCodec_Register", NULL },
	{ "_PyCodec_Lookup", NULL },
	{ "PyCodec_Encode", NULL },
	{ "PyCodec_Decode", NULL },
	{ "PyCodec_Encoder", NULL },
	{ "PyCodec_Decoder", NULL },
	{ "PyCodec_IncrementalEncoder", NULL },
	{ "PyCodec_IncrementalDecoder", NULL },
	{ "PyCodec_StreamReader", NULL },
	{ "PyCodec_StreamWriter", NULL },
	{ "PyCodec_RegisterError", NULL },
	{ "PyCodec_LookupError", NULL },
	{ "PyCodec_StrictErrors", NULL },
	{ "PyCodec_IgnoreErrors", NULL },
	{ "PyCodec_ReplaceErrors", NULL },
	{ "PyCodec_XMLCharRefReplaceErrors", NULL },
	{ "PyCodec_BackslashReplaceErrors", NULL },
	{ "PyErr_SetNone", NULL },
	{ "PyErr_SetObject", NULL },
	{ "PyErr_SetString", NULL },
	{ "PyErr_Occurred", NULL },
	{ "PyErr_Clear", NULL },
	{ "PyErr_Fetch", NULL },
	{ "PyErr_Restore", NULL },
	{ "PyErr_GivenExceptionMatches", NULL },
	{ "PyErr_ExceptionMatches", NULL },
	{ "PyErr_NormalizeException", NULL },
	{ "PyErr_BadArgument", NULL },
	{ "PyErr_NoMemory", NULL },
	{ "PyErr_SetFromErrno", NULL },
	{ "PyErr_SetFromErrnoWithFilenameObject", NULL },
	{ "PyErr_SetFromErrnoWithFilename", NULL },
	{ "PyErr_SetFromErrnoWithUnicodeFilename", NULL },
	{ "PyErr_Format", NULL },
	{ "PyErr_SetFromWindowsErrWithFilenameObject", NULL },
	{ "PyErr_SetFromWindowsErrWithFilename", NULL },
	{ "PyErr_SetFromWindowsErrWithUnicodeFilename", NULL },
	{ "PyErr_SetFromWindowsErr", NULL },
	{ "PyErr_SetExcFromWindowsErrWithFilenameObject", NULL },
	{ "PyErr_SetExcFromWindowsErrWithFilename", NULL },
	{ "PyErr_SetExcFromWindowsErrWithUnicodeFilename", NULL },
	{ "PyErr_SetExcFromWindowsErr", NULL },
	{ "PyErr_BadInternalCall", NULL },
	{ "_PyErr_BadInternalCall", NULL },
	{ "PyErr_NewException", NULL },
	{ "PyErr_NewExceptionWithDoc", NULL },
	{ "PyErr_WriteUnraisable", NULL },
	{ "PyErr_CheckSignals", NULL },
	{ "PyErr_SetInterrupt", NULL },
	{ "PySignal_SetWakeupFd", NULL },
	{ "PyErr_SyntaxLocation", NULL },
	{ "PyErr_ProgramText", NULL },
	{ "PyUnicodeDecodeError_Create", NULL },
	{ "PyUnicodeEncodeError_Create", NULL },
	{ "PyUnicodeTranslateError_Create", NULL },
	{ "PyUnicodeEncodeError_GetEncoding", NULL },
	{ "PyUnicodeDecodeError_GetEncoding", NULL },
	{ "PyUnicodeEncodeError_GetObject", NULL },
	{ "PyUnicodeDecodeError_GetObject", NULL },
	{ "PyUnicodeTranslateError_GetObject", NULL },
	{ "PyUnicodeEncodeError_GetStart", NULL },
	{ "PyUnicodeDecodeError_GetStart", NULL },
	{ "PyUnicodeTranslateError_GetStart", NULL },
	{ "PyUnicodeEncodeError_SetStart", NULL },
	{ "PyUnicodeDecodeError_SetStart", NULL },
	{ "PyUnicodeTranslateError_SetStart", NULL },
	{ "PyUnicodeEncodeError_GetEnd", NULL },
	{ "PyUnicodeDecodeError_GetEnd", NULL },
	{ "PyUnicodeTranslateError_GetEnd", NULL },
	{ "PyUnicodeEncodeError_SetEnd", NULL },
	{ "PyUnicodeDecodeError_SetEnd", NULL },
	{ "PyUnicodeTranslateError_SetEnd", NULL },
	{ "PyUnicodeEncodeError_GetReason", NULL },
	{ "PyUnicodeDecodeError_GetReason", NULL },
	{ "PyUnicodeTranslateError_GetReason", NULL },
	{ "PyUnicodeEncodeError_SetReason", NULL },
	{ "PyUnicodeDecodeError_SetReason", NULL },
	{ "PyUnicodeTranslateError_SetReason", NULL },
	{ "PyOS_snprintf", NULL },
	{ "PyOS_vsnprintf", NULL },
	{ "PyInterpreterState_New", NULL },
	{ "PyInterpreterState_Clear", NULL },
	{ "PyInterpreterState_Delete", NULL },
	{ "PyThreadState_New", NULL },
	{ "_PyThreadState_Prealloc", NULL },
	{ "_PyThreadState_Init", NULL },
	{ "PyThreadState_Clear", NULL },
	{ "PyThreadState_Delete", NULL },
	{ "PyThreadState_DeleteCurrent", NULL },
	{ "_PyGILState_Reinit", NULL },
	{ "PyThreadState_Get", NULL },
	{ "PyThreadState_Swap", NULL },
	{ "PyThreadState_GetDict", NULL },
	{ "PyThreadState_SetAsyncExc", NULL },
	{ "PyGILState_STATEPyGILState_Ensure", NULL },
	{ "PyGILState_Release", NULL },
	{ "PyGILState_GetThisThreadState", NULL },
	{ "_PyThread_CurrentFrames", NULL },
	{ "PyInterpreterState_Head", NULL },
	{ "PyInterpreterState_Next", NULL },
	{ "PyInterpreterState_ThreadHead", NULL },
	{ "PyThreadState_Next", NULL },
	{ "PyArena_New", NULL },
	{ "PyArena_Free", NULL },
	{ "PyArena_Malloc", NULL },
	{ "PyArena_AddPyObject", NULL },
	{ "_Py_VaBuildValue_SizeT", NULL },
	{ "PyArg_Parse", NULL },
	{ "PyArg_ParseTupleAndKeywords", NULL },
	{ "PyArg_UnpackTuple", NULL },
	{ "Py_BuildValue", NULL },
	{ "_Py_BuildValue_SizeT", NULL },
	{ "_PyArg_NoKeywords", NULL },
	{ "PyArg_VaParse", NULL },
	{ "PyArg_VaParseTupleAndKeywords", NULL },
	{ "Py_VaBuildValue", NULL },
	{ "PyModule_AddObject", NULL },
	{ "PyModule_AddIntConstant", NULL },
	{ "PyModule_AddStringConstant", NULL },
	{ "Py_InitModule4", NULL },
	{ "Py_SetProgramName", NULL },
	{ "Py_GetProgramName", NULL },
	{ "Py_SetPythonHome", NULL },
	{ "Py_GetPythonHome", NULL },
	{ "Py_Initialize", NULL },
	{ "Py_InitializeEx", NULL },
	{ "Py_Finalize", NULL },
	{ "Py_IsInitialized", NULL },
	{ "Py_NewInterpreter", NULL },
	{ "Py_EndInterpreter", NULL },
	{ "PyRun_AnyFileFlags", NULL },
	{ "PyRun_AnyFileExFlags", NULL },
	{ "PyRun_SimpleStringFlags", NULL },
	{ "PyRun_SimpleFileExFlags", NULL },
	{ "PyRun_InteractiveOneFlags", NULL },
	{ "PyRun_InteractiveLoopFlags", NULL },
	{ "PyParser_ASTFromString", NULL },
	{ "PyParser_ASTFromFile", NULL },
	{ "PyParser_SimpleParseStringFlags", NULL },
	{ "PyParser_SimpleParseFileFlags", NULL },
	{ "PyRun_StringFlags", NULL },
	{ "PyRun_FileExFlags", NULL },
	{ "Py_CompileStringFlags", NULL },
	{ "Py_SymtableString", NULL },
	{ "PyErr_Print", NULL },
	{ "PyErr_PrintEx", NULL },
	{ "PyErr_Display", NULL },
	{ "Py_AtExit", NULL },
	{ "Py_Exit", NULL },
	{ "Py_FdIsInteractive", NULL },
	{ "Py_Main", NULL },
	{ "Py_GetProgramFullPath", NULL },
	{ "Py_GetPrefix", NULL },
	{ "Py_GetExecPrefix", NULL },
	{ "Py_GetPath", NULL },
	{ "Py_GetVersion", NULL },
	{ "Py_GetPlatform", NULL },
	{ "Py_GetCopyright", NULL },
	{ "Py_GetCompiler", NULL },
	{ "Py_GetBuildInfo", NULL },
	{ "_Py_svnversion", NULL },
	{ "Py_SubversionRevision", NULL },
	{ "Py_SubversionShortBranch", NULL },
	{ "_Py_hgidentifier", NULL },
	{ "_Py_hgversion", NULL },
	{ "_PyBuiltin_Init", NULL },
	{ "_PySys_Init", NULL },
	{ "_PyImport_Init", NULL },
	{ "_PyExc_Init", NULL },
	{ "_PyImportHooks_Init", NULL },
	{ "_PyFrame_Init", NULL },
	{ "_PyInt_Init", NULL },
	{ "_PyLong_Init", NULL },
	{ "_PyFloat_Init", NULL },
	{ "PyByteArray_Init", NULL },
	{ "_PyExc_Fini", NULL },
	{ "_PyImport_Fini", NULL },
	{ "PyMethod_Fini", NULL },
	{ "PyFrame_Fini", NULL },
	{ "PyCFunction_Fini", NULL },
	{ "PyDict_Fini", NULL },
	{ "PyTuple_Fini", NULL },
	{ "PyList_Fini", NULL },
	{ "PySet_Fini", NULL },
	{ "PyString_Fini", NULL },
	{ "PyInt_Fini", NULL },
	{ "PyFloat_Fini", NULL },
	{ "PyOS_FiniInterrupts", NULL },
	{ "PyByteArray_Fini", NULL },
	{ "PyOS_Readline", NULL },
	{ "PyOS_CheckStack", NULL },
	{ "PyOS_sighandler_tPyOS_getsig", NULL },
	{ "PyOS_sighandler_tPyOS_setsig", NULL },
	{ "PyEval_CallObjectWithKeywords", NULL },
	{ "PyEval_CallFunction", NULL },
	{ "PyEval_CallMethod", NULL },
	{ "PyEval_SetProfile", NULL },
	{ "PyEval_SetTrace", NULL },
	{ "PyEval_GetBuiltins", NULL },
	{ "PyEval_GetGlobals", NULL },
	{ "PyEval_GetLocals", NULL },
	{ "PyEval_GetFrame", NULL },
	{ "PyEval_GetRestricted", NULL },
	{ "PyEval_MergeCompilerFlags", NULL },
	{ "Py_FlushLine", NULL },
	{ "Py_AddPendingCall", NULL },
	{ "Py_MakePendingCalls", NULL },
	{ "Py_SetRecursionLimit", NULL },
	{ "Py_GetRecursionLimit", NULL },
	{ "_Py_CheckRecursiveCall", NULL },
	{ "PyEval_GetFuncName", NULL },
	{ "PyEval_GetFuncDesc", NULL },
	{ "PyEval_GetCallStats", NULL },
	{ "PyEval_EvalFrame", NULL },
	{ "PyEval_EvalFrameEx", NULL },
	{ "PyEval_SaveThread", NULL },
	{ "PyEval_RestoreThread", NULL },
	{ "PyEval_ThreadsInitialized", NULL },
	{ "PyEval_InitThreads", NULL },
	{ "PyEval_AcquireLock", NULL },
	{ "PyEval_ReleaseLock", NULL },
	{ "PyEval_AcquireThread", NULL },
	{ "PyEval_ReleaseThread", NULL },
	{ "PyEval_ReInitThreads", NULL },
	{ "_PyEval_SliceIndex", NULL },
	{ "PySys_GetObject", NULL },
	{ "PySys_SetObject", NULL },
	{ "PySys_GetFile", NULL },
	{ "PySys_SetArgv", NULL },
	{ "PySys_SetArgvEx", NULL },
	{ "PySys_SetPath", NULL },
	{ "PySys_WriteStdout", NULL },
	{ "PySys_WriteStderr", NULL },
	{ "PySys_ResetWarnOptions", NULL },
	{ "PySys_AddWarnOption", NULL },
	{ "PySys_HasWarnOptions", NULL },
	{ "PyOS_InterruptOccurred", NULL },
	{ "PyOS_InitInterrupts", NULL },
	{ "PyOS_AfterFork", NULL },
	{ "PyImport_GetMagicNumber", NULL },
	{ "PyImport_ExecCodeModule", NULL },
	{ "PyImport_ExecCodeModuleEx", NULL },
	{ "PyImport_GetModuleDict", NULL },
	{ "PyImport_AddModule", NULL },
	{ "PyImport_ImportModule", NULL },
	{ "PyImport_ImportModuleNoBlock", NULL },
	{ "PyImport_ImportModuleLevel", NULL },
	{ "PyImport_GetImporter", NULL },
	{ "PyImport_Import", NULL },
	{ "PyImport_ReloadModule", NULL },
	{ "PyImport_Cleanup", NULL },
	{ "PyImport_ImportFrozenModule", NULL },
	{ "_PyImport_AcquireLock", NULL },
	{ "_PyImport_ReleaseLock", NULL },
	{ "_PyImport_FindModule", NULL },
	{ "_PyImport_IsScript", NULL },
	{ "_PyImport_ReInitLock", NULL },
	{ "_PyImport_FindExtension", NULL },
	{ "_PyImport_FixupExtension", NULL },
	{ "PyImport_AppendInittab", NULL },
	{ "PyImport_ExtendInittab", NULL },
	{ "PyObject_Cmp", NULL },
	{ "PyObject_Call", NULL },
	{ "PyObject_CallObject", NULL },
	{ "PyObject_CallFunction", NULL },
	{ "PyObject_CallMethod", NULL },
	{ "_PyObject_CallFunction_SizeT", NULL },
	{ "_PyObject_CallMethod_SizeT", NULL },
	{ "PyObject_CallFunctionObjArgs", NULL },
	{ "PyObject_CallMethodObjArgs", NULL },
	{ "PyObject_Type", NULL },
	{ "PyObject_Size", NULL },
	{ "PyObject_Length", NULL },
	{ "_PyObject_LengthHint", NULL },
	{ "PyObject_GetItem", NULL },
	{ "PyObject_SetItem", NULL },
	{ "PyObject_DelItemString", NULL },
	{ "PyObject_DelItem", NULL },
	{ "PyObject_AsCharBuffer", NULL },
	{ "PyObject_CheckReadBuffer", NULL },
	{ "PyObject_AsReadBuffer", NULL },
	{ "PyObject_AsWriteBuffer", NULL },
	{ "PyObject_GetBuffer", NULL },
	{ "PyBuffer_GetPointer", NULL },
	{ "PyBuffer_SizeFromFormat", NULL },
	{ "PyBuffer_ToContiguous", NULL },
	{ "PyBuffer_FromContiguous", NULL },
	{ "PyObject_CopyData", NULL },
	{ "PyBuffer_IsContiguous", NULL },
	{ "PyBuffer_FillContiguousStrides", NULL },
	{ "PyBuffer_FillInfo", NULL },
	{ "PyBuffer_Release", NULL },
	{ "PyObject_Format", NULL },
	{ "PyObject_GetIter", NULL },
	{ "PyIter_Next", NULL },
	{ "PyNumber_Check", NULL },
	{ "PyNumber_Add", NULL },
	{ "PyNumber_Subtract", NULL },
	{ "PyNumber_Multiply", NULL },
	{ "PyNumber_Divide", NULL },
	{ "PyNumber_FloorDivide", NULL },
	{ "PyNumber_TrueDivide", NULL },
	{ "PyNumber_Remainder", NULL },
	{ "PyNumber_Divmod", NULL },
	{ "PyNumber_Power", NULL },
	{ "PyNumber_Negative", NULL },
	{ "PyNumber_Positive", NULL },
	{ "PyNumber_Absolute", NULL },
	{ "PyNumber_Invert", NULL },
	{ "PyNumber_Lshift", NULL },
	{ "PyNumber_Rshift", NULL },
	{ "PyNumber_And", NULL },
	{ "PyNumber_Xor", NULL },
	{ "PyNumber_Or", NULL },
	{ "PyNumber_Index", NULL },
	{ "PyNumber_AsSsize_t", NULL },
	{ "_PyNumber_ConvertIntegralToInt", NULL },
	{ "PyNumber_Int", NULL },
	{ "PyNumber_Long", NULL },
	{ "PyNumber_Float", NULL },
	{ "PyNumber_InPlaceAdd", NULL },
	{ "PyNumber_InPlaceSubtract", NULL },
	{ "PyNumber_InPlaceMultiply", NULL },
	{ "PyNumber_InPlaceDivide", NULL },
	{ "PyNumber_InPlaceFloorDivide", NULL },
	{ "PyNumber_InPlaceTrueDivide", NULL },
	{ "PyNumber_InPlaceRemainder", NULL },
	{ "PyNumber_InPlacePower", NULL },
	{ "PyNumber_InPlaceLshift", NULL },
	{ "PyNumber_InPlaceRshift", NULL },
	{ "PyNumber_InPlaceAnd", NULL },
	{ "PyNumber_InPlaceXor", NULL },
	{ "PyNumber_InPlaceOr", NULL },
	{ "PyNumber_ToBase", NULL },
	{ "PySequence_Check", NULL },
	{ "PySequence_Size", NULL },
	{ "PySequence_Length", NULL },
	{ "PySequence_Concat", NULL },
	{ "PySequence_Repeat", NULL },
	{ "PySequence_GetItem", NULL },
	{ "PySequence_GetSlice", NULL },
	{ "PySequence_SetItem", NULL },
	{ "PySequence_DelItem", NULL },
	{ "PySequence_SetSlice", NULL },
	{ "PySequence_DelSlice", NULL },
	{ "PySequence_Tuple", NULL },
	{ "PySequence_List", NULL },
	{ "PySequence_Fast", NULL },
	{ "PySequence_Count", NULL },
	{ "PySequence_Contains", NULL },
	{ "_PySequence_IterSearch", NULL },
	{ "PySequence_In", NULL },
	{ "PySequence_Index", NULL },
	{ "PySequence_InPlaceConcat", NULL },
	{ "PySequence_InPlaceRepeat", NULL },
	{ "PyMapping_Check", NULL },
	{ "PyMapping_Size", NULL },
	{ "PyMapping_Length", NULL },
	{ "PyMapping_HasKeyString", NULL },
	{ "PyMapping_HasKey", NULL },
	{ "PyMapping_GetItemString", NULL },
	{ "PyMapping_SetItemString", NULL },
	{ "PyObject_IsInstance", NULL },
	{ "PyObject_IsSubclass", NULL },
	{ "_PyObject_RealIsInstance", NULL },
	{ "_PyObject_RealIsSubclass", NULL },
	{ "_Py_add_one_to_index_F", NULL },
	{ "_Py_add_one_to_index_C", NULL },
	{ "PyCode_New", NULL },
	{ "PyCode_NewEmpty", NULL },
	{ "PyCode_Addr2Line", NULL },
	{ "_PyCode_CheckLineNumber", NULL },
	{ "PyCode_Optimize", NULL },
	{ "PyNode_Compile", NULL },
	{ "PyAST_Compile", NULL },
	{ "PyFuture_FromAST", NULL },
	{ "PyEval_EvalCode", NULL },
	{ "PyEval_EvalCodeEx", NULL },
	{ "_PyEval_CallTracing", NULL },
	{ "PyOS_ascii_strtod", NULL },
	{ "PyOS_ascii_atof", NULL },
	{ "PyOS_ascii_formatd", NULL },
	{ "PyOS_string_to_double", NULL },
	{ "PyOS_double_to_string", NULL },
	{ "_Py_parse_inf_or_nan", NULL },
	{ "PyOS_mystrnicmp", NULL },
	{ "PyOS_mystricmp", NULL },
	{ "_Py_dg_strtod", NULL },
	{ "_Py_dg_dtoa", NULL },
	{ "_Py_dg_freedtoa", NULL },
	{ "_Py_Mangle", NULL },
	{ "_Py_NoneStruct", NULL },
	{ "_Py_NotImplementedStruct", NULL },
	{ "_Py_TrueStruct", NULL },
	{ "_Py_ZeroStruct", NULL },
	{ "PyList_Type", NULL },
	{ "PyTuple_Type", NULL },
	{ "PyString_Type", NULL },
	{ "_PyThreadState_Current", NULL },
	{ "PyFrame_New", NULL },
	{ "PyClass_Type", NULL },
	{ "PyInstance_Type", NULL },
	{ "PyMethod_Type", NULL },
	{ "PyExc_BaseException", NULL },
	{ "PyExc_Exception", NULL },
	{ "PyExc_StopIteration", NULL },
	{ "PyExc_GeneratorExit", NULL },
	{ "PyExc_StandardError", NULL },
	{ "PyExc_ArithmeticError", NULL },
	{ "PyExc_LookupError", NULL },
	{ "PyExc_AssertionError", NULL },
	{ "PyExc_AttributeError", NULL },
	{ "PyExc_EOFError", NULL },
	{ "PyExc_FloatingPointError", NULL },
	{ "PyExc_EnvironmentError", NULL },
	{ "PyExc_IOError", NULL },
	{ "PyExc_OSError", NULL },
	{ "PyExc_ImportError", NULL },
	{ "PyExc_IndexError", NULL },
	{ "PyExc_KeyError", NULL },
	{ "PyExc_KeyboardInterrupt", NULL },
	{ "PyExc_MemoryError", NULL },
	{ "PyExc_NameError", NULL },
	{ "PyExc_OverflowError", NULL },
	{ "PyExc_RuntimeError", NULL },
	{ "PyExc_NotImplementedError", NULL },
	{ "PyExc_SyntaxError", NULL },
	{ "PyExc_IndentationError", NULL },
	{ "PyExc_TabError", NULL },
	{ "PyExc_ReferenceError", NULL },
	{ "PyExc_SystemError", NULL },
	{ "PyExc_SystemExit", NULL },
	{ "PyExc_TypeError", NULL },
	{ "PyExc_UnboundLocalError", NULL },
	{ "PyExc_UnicodeError", NULL },
	{ "PyExc_UnicodeEncodeError", NULL },
	{ "PyExc_UnicodeDecodeError", NULL },
	{ "PyExc_UnicodeTranslateError", NULL },
	{ "PyExc_ValueError", NULL },
	{ "PyExc_ZeroDivisionError", NULL },
	{ "PyExc_WindowsError", NULL },
	{ "PyExc_BufferError", NULL },
	{ "PyExc_MemoryErrorInst", NULL },
	{ "PyExc_RecursionErrorInst", NULL },
	{ "PyExc_Warning", NULL },
	{ "PyExc_UserWarning", NULL },
	{ "PyExc_DeprecationWarning", NULL },
	{ "PyExc_PendingDeprecationWarning", NULL },
	{ "PyExc_SyntaxWarning", NULL },
	{ "PyExc_RuntimeWarning", NULL },
	{ "PyExc_FutureWarning", NULL },
	{ "PyExc_ImportWarning", NULL },
	{ "PyExc_UnicodeWarning", NULL },
	{ "PyExc_BytesWarning", NULL },
	{ "PyUnicode_Type", NULL },
