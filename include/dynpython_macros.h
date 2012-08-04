#ifdef DYNLOAD_PYTHON_RUNNING
#	define PyAPI_FUNC(RTYPE) PythonDynLoad_Func(RTYPE)
#	define PyAPI_DATA(RTYPE) PythonDynLoad_Data(RTYPE)
#	define PyMODINIT_FUNC PythonDynLoad_ModInit(void)
#else
#	ifdef __cplusplus
#		define PyAPI_FUNC(RTYPE) extern "C" RTYPE
#		define PyAPI_DATA(RTYPE) extern "C" RTYPE
#		define PyMODINIT_FUNC extern "C" void
#	else /* __cplusplus */
#		define PyAPI_FUNC(RTYPE) RTYPE
#		define PyAPI_DATA(RTYPE) RTYPE
#		define PyMODINIT_FUNC void
#	endif /* __cplusplus */
#endif /* DYNLOAD_PYTHON_RUNNING */
