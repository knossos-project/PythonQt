#pragma once

// singular non-data symbol as workaround
// because it only creates 0.0 when called via delay load helper
#define PyFloat_FromDouble LoadPythonSymbol(PyFloat_FromDouble)

#define PyAsyncGen_Type LoadPythonSymbol(PyAsyncGen_Type)
#define PyBaseObject_Type LoadPythonSymbol(PyBaseObject_Type)
#define PyBool_Type LoadPythonSymbol(PyBool_Type)
#define PyByteArrayIter_Type LoadPythonSymbol(PyByteArrayIter_Type)
#define PyByteArray_Type LoadPythonSymbol(PyByteArray_Type)
#define PyBytesIter_Type LoadPythonSymbol(PyBytesIter_Type)
#define PyBytes_Type LoadPythonSymbol(PyBytes_Type)
#define PyCFunction_Type LoadPythonSymbol(PyCFunction_Type)
#define PyCMethod_Type LoadPythonSymbol(PyCMethod_Type)
#define PyCallIter_Type LoadPythonSymbol(PyCallIter_Type)
#define PyCapsule_Type LoadPythonSymbol(PyCapsule_Type)
#define PyCell_Type LoadPythonSymbol(PyCell_Type)
#define PyClassMethodDescr_Type LoadPythonSymbol(PyClassMethodDescr_Type)
#define PyClassMethod_Type LoadPythonSymbol(PyClassMethod_Type)
#define PyCode_Type LoadPythonSymbol(PyCode_Type)
#define PyComplex_Type LoadPythonSymbol(PyComplex_Type)
#define PyContextToken_Type LoadPythonSymbol(PyContextToken_Type)
#define PyContextVar_Type LoadPythonSymbol(PyContextVar_Type)
#define PyContext_Type LoadPythonSymbol(PyContext_Type)
#define PyCoro_Type LoadPythonSymbol(PyCoro_Type)
#define PyDictItems_Type LoadPythonSymbol(PyDictItems_Type)
#define PyDictIterItem_Type LoadPythonSymbol(PyDictIterItem_Type)
#define PyDictIterKey_Type LoadPythonSymbol(PyDictIterKey_Type)
#define PyDictIterValue_Type LoadPythonSymbol(PyDictIterValue_Type)
#define PyDictKeys_Type LoadPythonSymbol(PyDictKeys_Type)
#define PyDictProxy_Type LoadPythonSymbol(PyDictProxy_Type)
#define PyDictRevIterItem_Type LoadPythonSymbol(PyDictRevIterItem_Type)
#define PyDictRevIterKey_Type LoadPythonSymbol(PyDictRevIterKey_Type)
#define PyDictRevIterValue_Type LoadPythonSymbol(PyDictRevIterValue_Type)
#define PyDictValues_Type LoadPythonSymbol(PyDictValues_Type)
#define PyDict_Type LoadPythonSymbol(PyDict_Type)
#define PyEllipsis_Type LoadPythonSymbol(PyEllipsis_Type)
#define PyEnum_Type LoadPythonSymbol(PyEnum_Type)
#define PyExc_ArithmeticError LoadPythonSymbol(PyExc_ArithmeticError)
#define PyExc_AssertionError LoadPythonSymbol(PyExc_AssertionError)
#define PyExc_AttributeError LoadPythonSymbol(PyExc_AttributeError)
#define PyExc_BaseException LoadPythonSymbol(PyExc_BaseException)
#define PyExc_BaseExceptionGroup LoadPythonSymbol(PyExc_BaseExceptionGroup)
#define PyExc_BlockingIOError LoadPythonSymbol(PyExc_BlockingIOError)
#define PyExc_BrokenPipeError LoadPythonSymbol(PyExc_BrokenPipeError)
#define PyExc_BufferError LoadPythonSymbol(PyExc_BufferError)
#define PyExc_BytesWarning LoadPythonSymbol(PyExc_BytesWarning)
#define PyExc_ChildProcessError LoadPythonSymbol(PyExc_ChildProcessError)
#define PyExc_ConnectionAbortedError LoadPythonSymbol(PyExc_ConnectionAbortedError)
#define PyExc_ConnectionError LoadPythonSymbol(PyExc_ConnectionError)
#define PyExc_ConnectionRefusedError LoadPythonSymbol(PyExc_ConnectionRefusedError)
#define PyExc_ConnectionResetError LoadPythonSymbol(PyExc_ConnectionResetError)
#define PyExc_DeprecationWarning LoadPythonSymbol(PyExc_DeprecationWarning)
#define PyExc_EOFError LoadPythonSymbol(PyExc_EOFError)
#define PyExc_EncodingWarning LoadPythonSymbol(PyExc_EncodingWarning)
#define PyExc_EnvironmentError LoadPythonSymbol(PyExc_EnvironmentError)
#define PyExc_Exception LoadPythonSymbol(PyExc_Exception)
#define PyExc_FileExistsError LoadPythonSymbol(PyExc_FileExistsError)
#define PyExc_FileNotFoundError LoadPythonSymbol(PyExc_FileNotFoundError)
#define PyExc_FloatingPointError LoadPythonSymbol(PyExc_FloatingPointError)
#define PyExc_FutureWarning LoadPythonSymbol(PyExc_FutureWarning)
#define PyExc_GeneratorExit LoadPythonSymbol(PyExc_GeneratorExit)
#define PyExc_IOError LoadPythonSymbol(PyExc_IOError)
#define PyExc_ImportError LoadPythonSymbol(PyExc_ImportError)
#define PyExc_ImportWarning LoadPythonSymbol(PyExc_ImportWarning)
#define PyExc_IndentationError LoadPythonSymbol(PyExc_IndentationError)
#define PyExc_IndexError LoadPythonSymbol(PyExc_IndexError)
#define PyExc_InterruptedError LoadPythonSymbol(PyExc_InterruptedError)
#define PyExc_IsADirectoryError LoadPythonSymbol(PyExc_IsADirectoryError)
#define PyExc_KeyError LoadPythonSymbol(PyExc_KeyError)
#define PyExc_KeyboardInterrupt LoadPythonSymbol(PyExc_KeyboardInterrupt)
#define PyExc_LookupError LoadPythonSymbol(PyExc_LookupError)
#define PyExc_MemoryError LoadPythonSymbol(PyExc_MemoryError)
#define PyExc_ModuleNotFoundError LoadPythonSymbol(PyExc_ModuleNotFoundError)
#define PyExc_NameError LoadPythonSymbol(PyExc_NameError)
#define PyExc_NotADirectoryError LoadPythonSymbol(PyExc_NotADirectoryError)
#define PyExc_NotImplementedError LoadPythonSymbol(PyExc_NotImplementedError)
#define PyExc_OSError LoadPythonSymbol(PyExc_OSError)
#define PyExc_OverflowError LoadPythonSymbol(PyExc_OverflowError)
#define PyExc_PendingDeprecationWarning LoadPythonSymbol(PyExc_PendingDeprecationWarning)
#define PyExc_PermissionError LoadPythonSymbol(PyExc_PermissionError)
#define PyExc_ProcessLookupError LoadPythonSymbol(PyExc_ProcessLookupError)
#define PyExc_RecursionError LoadPythonSymbol(PyExc_RecursionError)
#define PyExc_ReferenceError LoadPythonSymbol(PyExc_ReferenceError)
#define PyExc_ResourceWarning LoadPythonSymbol(PyExc_ResourceWarning)
#define PyExc_RuntimeError LoadPythonSymbol(PyExc_RuntimeError)
#define PyExc_RuntimeWarning LoadPythonSymbol(PyExc_RuntimeWarning)
#define PyExc_StopAsyncIteration LoadPythonSymbol(PyExc_StopAsyncIteration)
#define PyExc_StopIteration LoadPythonSymbol(PyExc_StopIteration)
#define PyExc_SyntaxError LoadPythonSymbol(PyExc_SyntaxError)
#define PyExc_SyntaxWarning LoadPythonSymbol(PyExc_SyntaxWarning)
#define PyExc_SystemError LoadPythonSymbol(PyExc_SystemError)
#define PyExc_SystemExit LoadPythonSymbol(PyExc_SystemExit)
#define PyExc_TabError LoadPythonSymbol(PyExc_TabError)
#define PyExc_TimeoutError LoadPythonSymbol(PyExc_TimeoutError)
#define PyExc_TypeError LoadPythonSymbol(PyExc_TypeError)
#define PyExc_UnboundLocalError LoadPythonSymbol(PyExc_UnboundLocalError)
#define PyExc_UnicodeDecodeError LoadPythonSymbol(PyExc_UnicodeDecodeError)
#define PyExc_UnicodeEncodeError LoadPythonSymbol(PyExc_UnicodeEncodeError)
#define PyExc_UnicodeError LoadPythonSymbol(PyExc_UnicodeError)
#define PyExc_UnicodeTranslateError LoadPythonSymbol(PyExc_UnicodeTranslateError)
#define PyExc_UnicodeWarning LoadPythonSymbol(PyExc_UnicodeWarning)
#define PyExc_UserWarning LoadPythonSymbol(PyExc_UserWarning)
#define PyExc_ValueError LoadPythonSymbol(PyExc_ValueError)
#define PyExc_Warning LoadPythonSymbol(PyExc_Warning)
#define PyExc_WindowsError LoadPythonSymbol(PyExc_WindowsError)
#define PyExc_ZeroDivisionError LoadPythonSymbol(PyExc_ZeroDivisionError)
#define PyFilter_Type LoadPythonSymbol(PyFilter_Type)
#define PyFloat_Type LoadPythonSymbol(PyFloat_Type)
#define PyFrame_Type LoadPythonSymbol(PyFrame_Type)
#define PyFrozenSet_Type LoadPythonSymbol(PyFrozenSet_Type)
#define PyFunction_Type LoadPythonSymbol(PyFunction_Type)
#define PyGen_Type LoadPythonSymbol(PyGen_Type)
#define PyGetSetDescr_Type LoadPythonSymbol(PyGetSetDescr_Type)
#define PyImport_FrozenModules LoadPythonSymbol(PyImport_FrozenModules)
#define PyImport_Inittab LoadPythonSymbol(PyImport_Inittab)
#define PyInstanceMethod_Type LoadPythonSymbol(PyInstanceMethod_Type)
#define PyListIter_Type LoadPythonSymbol(PyListIter_Type)
#define PyListRevIter_Type LoadPythonSymbol(PyListRevIter_Type)
#define PyList_Type LoadPythonSymbol(PyList_Type)
#define PyLongRangeIter_Type LoadPythonSymbol(PyLongRangeIter_Type)
#define PyLong_Type LoadPythonSymbol(PyLong_Type)
#define PyMap_Type LoadPythonSymbol(PyMap_Type)
#define PyMemberDescr_Type LoadPythonSymbol(PyMemberDescr_Type)
#define PyMemoryView_Type LoadPythonSymbol(PyMemoryView_Type)
#define PyMethodDescr_Type LoadPythonSymbol(PyMethodDescr_Type)
#define PyMethod_Type LoadPythonSymbol(PyMethod_Type)
#define PyModuleDef_Type LoadPythonSymbol(PyModuleDef_Type)
#define PyModule_Type LoadPythonSymbol(PyModule_Type)
#define PyODictItems_Type LoadPythonSymbol(PyODictItems_Type)
#define PyODictIter_Type LoadPythonSymbol(PyODictIter_Type)
#define PyODictKeys_Type LoadPythonSymbol(PyODictKeys_Type)
#define PyODictValues_Type LoadPythonSymbol(PyODictValues_Type)
#define PyODict_Type LoadPythonSymbol(PyODict_Type)
#define PyOS_InputHook LoadPythonSymbol(PyOS_InputHook)
#define PyOS_ReadlineFunctionPointer LoadPythonSymbol(PyOS_ReadlineFunctionPointer)
#define PyPickleBuffer_Type LoadPythonSymbol(PyPickleBuffer_Type)
#define PyProperty_Type LoadPythonSymbol(PyProperty_Type)
#define PyRangeIter_Type LoadPythonSymbol(PyRangeIter_Type)
#define PyRange_Type LoadPythonSymbol(PyRange_Type)
#define PyReversed_Type LoadPythonSymbol(PyReversed_Type)
#define PySeqIter_Type LoadPythonSymbol(PySeqIter_Type)
#define PySetIter_Type LoadPythonSymbol(PySetIter_Type)
#define PySet_Type LoadPythonSymbol(PySet_Type)
#define PySlice_Type LoadPythonSymbol(PySlice_Type)
#define PyStaticMethod_Type LoadPythonSymbol(PyStaticMethod_Type)
#define PyStdPrinter_Type LoadPythonSymbol(PyStdPrinter_Type)
#define PyStructSequence_UnnamedField LoadPythonSymbol(PyStructSequence_UnnamedField)
#define PySuper_Type LoadPythonSymbol(PySuper_Type)
#define PyTraceBack_Type LoadPythonSymbol(PyTraceBack_Type)
#define PyTupleIter_Type LoadPythonSymbol(PyTupleIter_Type)
#define PyTuple_Type LoadPythonSymbol(PyTuple_Type)
#define PyType_Type LoadPythonSymbol(PyType_Type)
#define PyUnicodeIter_Type LoadPythonSymbol(PyUnicodeIter_Type)
#define PyUnicode_Type LoadPythonSymbol(PyUnicode_Type)
#define PyWrapperDescr_Type LoadPythonSymbol(PyWrapperDescr_Type)
#define PyZip_Type LoadPythonSymbol(PyZip_Type)
#define Py_BytesWarningFlag LoadPythonSymbol(Py_BytesWarningFlag)
#define Py_DebugFlag LoadPythonSymbol(Py_DebugFlag)
#define Py_DontWriteBytecodeFlag LoadPythonSymbol(Py_DontWriteBytecodeFlag)
#define Py_FileSystemDefaultEncodeErrors LoadPythonSymbol(Py_FileSystemDefaultEncodeErrors)
#define Py_FileSystemDefaultEncoding LoadPythonSymbol(Py_FileSystemDefaultEncoding)
#define Py_FrozenFlag LoadPythonSymbol(Py_FrozenFlag)
#define Py_GenericAliasType LoadPythonSymbol(Py_GenericAliasType)
#define Py_HasFileSystemDefaultEncoding LoadPythonSymbol(Py_HasFileSystemDefaultEncoding)
#define Py_HashRandomizationFlag LoadPythonSymbol(Py_HashRandomizationFlag)
#define Py_IgnoreEnvironmentFlag LoadPythonSymbol(Py_IgnoreEnvironmentFlag)
#define Py_InspectFlag LoadPythonSymbol(Py_InspectFlag)
#define Py_InteractiveFlag LoadPythonSymbol(Py_InteractiveFlag)
#define Py_IsolatedFlag LoadPythonSymbol(Py_IsolatedFlag)
#define Py_LegacyWindowsFSEncodingFlag LoadPythonSymbol(Py_LegacyWindowsFSEncodingFlag)
#define Py_LegacyWindowsStdioFlag LoadPythonSymbol(Py_LegacyWindowsStdioFlag)
#define Py_NoSiteFlag LoadPythonSymbol(Py_NoSiteFlag)
#define Py_NoUserSiteDirectory LoadPythonSymbol(Py_NoUserSiteDirectory)
#define Py_OptimizeFlag LoadPythonSymbol(Py_OptimizeFlag)
#define Py_QuietFlag LoadPythonSymbol(Py_QuietFlag)
#define Py_UTF8Mode LoadPythonSymbol(Py_UTF8Mode)
#define Py_UnbufferedStdioFlag LoadPythonSymbol(Py_UnbufferedStdioFlag)
#define Py_VerboseFlag LoadPythonSymbol(Py_VerboseFlag)
#define Py_Version LoadPythonSymbol(Py_Version)
#define Py_hexdigits LoadPythonSymbol(Py_hexdigits)
#define _PyAsyncGenASend_Type LoadPythonSymbol(_PyAsyncGenASend_Type)
#define _PyAsyncGenAThrow_Type LoadPythonSymbol(_PyAsyncGenAThrow_Type)
#define _PyAsyncGenWrappedValue_Type LoadPythonSymbol(_PyAsyncGenWrappedValue_Type)
#define _PyBufferWrapper_Type LoadPythonSymbol(_PyBufferWrapper_Type)
#define _PyByteArray_empty_string LoadPythonSymbol(_PyByteArray_empty_string)
#define _PyCoroWrapper_Type LoadPythonSymbol(_PyCoroWrapper_Type)
#define _PyImport_FrozenBootstrap LoadPythonSymbol(_PyImport_FrozenBootstrap)
#define _PyImport_FrozenStdlib LoadPythonSymbol(_PyImport_FrozenStdlib)
#define _PyImport_FrozenTest LoadPythonSymbol(_PyImport_FrozenTest)
#define _PyInterpreterID_Type LoadPythonSymbol(_PyInterpreterID_Type)
#define _PyLong_DigitValue LoadPythonSymbol(_PyLong_DigitValue)
#define _PyManagedBuffer_Type LoadPythonSymbol(_PyManagedBuffer_Type)
#define _PyMethodWrapper_Type LoadPythonSymbol(_PyMethodWrapper_Type)
#define _PyNamespace_Type LoadPythonSymbol(_PyNamespace_Type)
#define _PyNone_Type LoadPythonSymbol(_PyNone_Type)
#define _PyNotImplemented_Type LoadPythonSymbol(_PyNotImplemented_Type)
#define _PyOS_ReadlineTState LoadPythonSymbol(_PyOS_ReadlineTState)
#define _PyParser_TokenNames LoadPythonSymbol(_PyParser_TokenNames)
#define _PyRuntime LoadPythonSymbol(_PyRuntime)
#define _PySet_Dummy LoadPythonSymbol(_PySet_Dummy)
#define _PyWeakref_CallableProxyType LoadPythonSymbol(_PyWeakref_CallableProxyType)
#define _PyWeakref_ProxyType LoadPythonSymbol(_PyWeakref_ProxyType)
#define _PyWeakref_RefType LoadPythonSymbol(_PyWeakref_RefType)
#define _Py_EllipsisObject LoadPythonSymbol(_Py_EllipsisObject)
#define _Py_FalseStruct LoadPythonSymbol(_Py_FalseStruct)
#define _Py_HasFileSystemDefaultEncodeErrors LoadPythonSymbol(_Py_HasFileSystemDefaultEncodeErrors)
#define _Py_HashSecret LoadPythonSymbol(_Py_HashSecret)
#define _Py_NoneStruct LoadPythonSymbol(_Py_NoneStruct)
#define _Py_NotImplementedStruct LoadPythonSymbol(_Py_NotImplementedStruct)
#define _Py_SwappedOp LoadPythonSymbol(_Py_SwappedOp)
#define _Py_TrueStruct LoadPythonSymbol(_Py_TrueStruct)
#define _Py_ascii_whitespace LoadPythonSymbol(_Py_ascii_whitespace)
#define _Py_ctype_table LoadPythonSymbol(_Py_ctype_table)
#define _Py_ctype_tolower LoadPythonSymbol(_Py_ctype_tolower)
#define _Py_ctype_toupper LoadPythonSymbol(_Py_ctype_toupper)