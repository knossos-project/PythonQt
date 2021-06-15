#pragma once

#include <libloaderapi.h>

static auto pythonDll = [](){
    static auto pythonDll = GetModuleHandle("python27.dll");
    if (pythonDll == nullptr) {
        throw 1;
    }
    return pythonDll;
};

#define LoadPythonSymbol(name) (*((std::remove_reference_t<decltype(name)>*)GetProcAddress(pythonDll(), #name)))

#define PyBaseObject_Type LoadPythonSymbol(PyBaseObject_Type)
#define PyBaseString_Type LoadPythonSymbol(PyBaseString_Type)
#define PyBool_Type LoadPythonSymbol(PyBool_Type)
#define PyBuffer_Type LoadPythonSymbol(PyBuffer_Type)
#define PyByteArrayIter_Type LoadPythonSymbol(PyByteArrayIter_Type)
#define PyByteArray_Type LoadPythonSymbol(PyByteArray_Type)
#define PyCFunction_Type LoadPythonSymbol(PyCFunction_Type)
#define PyCObject_Type LoadPythonSymbol(PyCObject_Type)
#define PyCallIter_Type LoadPythonSymbol(PyCallIter_Type)
#define PyCapsule_Type LoadPythonSymbol(PyCapsule_Type)
#define PyCell_Type LoadPythonSymbol(PyCell_Type)
#define PyClassMethod_Type LoadPythonSymbol(PyClassMethod_Type)
#define PyClass_Type LoadPythonSymbol(PyClass_Type)
#define PyCode_Type LoadPythonSymbol(PyCode_Type)
#define PyComplex_Type LoadPythonSymbol(PyComplex_Type)
#define PyDictItems_Type LoadPythonSymbol(PyDictItems_Type)
#define PyDictIterItem_Type LoadPythonSymbol(PyDictIterItem_Type)
#define PyDictIterKey_Type LoadPythonSymbol(PyDictIterKey_Type)
#define PyDictIterValue_Type LoadPythonSymbol(PyDictIterValue_Type)
#define PyDictKeys_Type LoadPythonSymbol(PyDictKeys_Type)
#define PyDictProxy_Type LoadPythonSymbol(PyDictProxy_Type)
#define PyDictValues_Type LoadPythonSymbol(PyDictValues_Type)
#define PyDict_Type LoadPythonSymbol(PyDict_Type)
#define PyEllipsis_Type LoadPythonSymbol(PyEllipsis_Type)
#define PyEnum_Type LoadPythonSymbol(PyEnum_Type)
#define PyExc_ArithmeticError LoadPythonSymbol(PyExc_ArithmeticError)
#define PyExc_AssertionError LoadPythonSymbol(PyExc_AssertionError)
#define PyExc_AttributeError LoadPythonSymbol(PyExc_AttributeError)
#define PyExc_BaseException LoadPythonSymbol(PyExc_BaseException)
#define PyExc_BufferError LoadPythonSymbol(PyExc_BufferError)
#define PyExc_BytesWarning LoadPythonSymbol(PyExc_BytesWarning)
#define PyExc_DeprecationWarning LoadPythonSymbol(PyExc_DeprecationWarning)
#define PyExc_EOFError LoadPythonSymbol(PyExc_EOFError)
#define PyExc_EnvironmentError LoadPythonSymbol(PyExc_EnvironmentError)
#define PyExc_Exception LoadPythonSymbol(PyExc_Exception)
#define PyExc_FloatingPointError LoadPythonSymbol(PyExc_FloatingPointError)
#define PyExc_FutureWarning LoadPythonSymbol(PyExc_FutureWarning)
#define PyExc_GeneratorExit LoadPythonSymbol(PyExc_GeneratorExit)
#define PyExc_IOError LoadPythonSymbol(PyExc_IOError)
#define PyExc_ImportError LoadPythonSymbol(PyExc_ImportError)
#define PyExc_ImportWarning LoadPythonSymbol(PyExc_ImportWarning)
#define PyExc_IndentationError LoadPythonSymbol(PyExc_IndentationError)
#define PyExc_IndexError LoadPythonSymbol(PyExc_IndexError)
#define PyExc_KeyError LoadPythonSymbol(PyExc_KeyError)
#define PyExc_KeyboardInterrupt LoadPythonSymbol(PyExc_KeyboardInterrupt)
#define PyExc_LookupError LoadPythonSymbol(PyExc_LookupError)
#define PyExc_MemoryError LoadPythonSymbol(PyExc_MemoryError)
#define PyExc_MemoryErrorInst LoadPythonSymbol(PyExc_MemoryErrorInst)
#define PyExc_NameError LoadPythonSymbol(PyExc_NameError)
#define PyExc_NotImplementedError LoadPythonSymbol(PyExc_NotImplementedError)
#define PyExc_OSError LoadPythonSymbol(PyExc_OSError)
#define PyExc_OverflowError LoadPythonSymbol(PyExc_OverflowError)
#define PyExc_PendingDeprecationWarning LoadPythonSymbol(PyExc_PendingDeprecationWarning)
#define PyExc_RecursionErrorInst LoadPythonSymbol(PyExc_RecursionErrorInst)
#define PyExc_ReferenceError LoadPythonSymbol(PyExc_ReferenceError)
#define PyExc_RuntimeError LoadPythonSymbol(PyExc_RuntimeError)
#define PyExc_RuntimeWarning LoadPythonSymbol(PyExc_RuntimeWarning)
#define PyExc_StandardError LoadPythonSymbol(PyExc_StandardError)
#define PyExc_StopIteration LoadPythonSymbol(PyExc_StopIteration)
#define PyExc_SyntaxError LoadPythonSymbol(PyExc_SyntaxError)
#define PyExc_SyntaxWarning LoadPythonSymbol(PyExc_SyntaxWarning)
#define PyExc_SystemError LoadPythonSymbol(PyExc_SystemError)
#define PyExc_SystemExit LoadPythonSymbol(PyExc_SystemExit)
#define PyExc_TabError LoadPythonSymbol(PyExc_TabError)
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
#define PyFile_Type LoadPythonSymbol(PyFile_Type)
#define PyFloat_Type LoadPythonSymbol(PyFloat_Type)
#define PyFrame_Type LoadPythonSymbol(PyFrame_Type)
#define PyFrozenSet_Type LoadPythonSymbol(PyFrozenSet_Type)
#define PyFunction_Type LoadPythonSymbol(PyFunction_Type)
#define PyGen_Type LoadPythonSymbol(PyGen_Type)
#define PyGetSetDescr_Type LoadPythonSymbol(PyGetSetDescr_Type)
#define PyImport_FrozenModules LoadPythonSymbol(PyImport_FrozenModules)
#define PyImport_Inittab LoadPythonSymbol(PyImport_Inittab)
#define PyInstance_Type LoadPythonSymbol(PyInstance_Type)
#define PyInt_Type LoadPythonSymbol(PyInt_Type)
#define PyList_Type LoadPythonSymbol(PyList_Type)
#define PyLong_Type LoadPythonSymbol(PyLong_Type)
#define PyMemberDescr_Type LoadPythonSymbol(PyMemberDescr_Type)
#define PyMemoryView_Type LoadPythonSymbol(PyMemoryView_Type)
#define PyMethod_Type LoadPythonSymbol(PyMethod_Type)
#define PyModule_Type LoadPythonSymbol(PyModule_Type)
#define PyNullImporter_Type LoadPythonSymbol(PyNullImporter_Type)
#define PyOS_InputHook LoadPythonSymbol(PyOS_InputHook)
#define PyOS_ReadlineFunctionPointer LoadPythonSymbol(PyOS_ReadlineFunctionPointer)
#define PyProperty_Type LoadPythonSymbol(PyProperty_Type)
#define PyRange_Type LoadPythonSymbol(PyRange_Type)
#define PyReversed_Type LoadPythonSymbol(PyReversed_Type)
#define PySTEntry_Type LoadPythonSymbol(PySTEntry_Type)
#define PySeqIter_Type LoadPythonSymbol(PySeqIter_Type)
#define PySet_Type LoadPythonSymbol(PySet_Type)
#define PySlice_Type LoadPythonSymbol(PySlice_Type)
#define PyStaticMethod_Type LoadPythonSymbol(PyStaticMethod_Type)
#define PyString_Type LoadPythonSymbol(PyString_Type)
#define PySuper_Type LoadPythonSymbol(PySuper_Type)
#define PyTraceBack_Type LoadPythonSymbol(PyTraceBack_Type)
#define PyTuple_Type LoadPythonSymbol(PyTuple_Type)
#define PyType_Type LoadPythonSymbol(PyType_Type)
#define PyUnicode_Type LoadPythonSymbol(PyUnicode_Type)
#define PyWrapperDescr_Type LoadPythonSymbol(PyWrapperDescr_Type)
#define Py_BytesWarningFlag LoadPythonSymbol(Py_BytesWarningFlag)
#define Py_DebugFlag LoadPythonSymbol(Py_DebugFlag)
#define Py_DivisionWarningFlag LoadPythonSymbol(Py_DivisionWarningFlag)
#define Py_DontWriteBytecodeFlag LoadPythonSymbol(Py_DontWriteBytecodeFlag)
#define Py_FileSystemDefaultEncoding LoadPythonSymbol(Py_FileSystemDefaultEncoding)
#define Py_FrozenFlag LoadPythonSymbol(Py_FrozenFlag)
#define Py_HashRandomizationFlag LoadPythonSymbol(Py_HashRandomizationFlag)
#define Py_IgnoreEnvironmentFlag LoadPythonSymbol(Py_IgnoreEnvironmentFlag)
#define Py_InspectFlag LoadPythonSymbol(Py_InspectFlag)
#define Py_InteractiveFlag LoadPythonSymbol(Py_InteractiveFlag)
#define Py_NoSiteFlag LoadPythonSymbol(Py_NoSiteFlag)
#define Py_NoUserSiteDirectory LoadPythonSymbol(Py_NoUserSiteDirectory)
#define Py_OptimizeFlag LoadPythonSymbol(Py_OptimizeFlag)
#define Py_Py3kWarningFlag LoadPythonSymbol(Py_Py3kWarningFlag)
#define Py_TabcheckFlag LoadPythonSymbol(Py_TabcheckFlag)
#define Py_UnicodeFlag LoadPythonSymbol(Py_UnicodeFlag)
#define Py_UseClassExceptionsFlag LoadPythonSymbol(Py_UseClassExceptionsFlag)
#define Py_VerboseFlag LoadPythonSymbol(Py_VerboseFlag)
#define _PyByteArray_empty_string LoadPythonSymbol(_PyByteArray_empty_string)
#define _PyLong_DigitValue LoadPythonSymbol(_PyLong_DigitValue)
#define _PyOS_ReadlineTState LoadPythonSymbol(_PyOS_ReadlineTState)
#define _PyParser_Grammar LoadPythonSymbol(_PyParser_Grammar)
#define _PyParser_TokenNames LoadPythonSymbol(_PyParser_TokenNames)
#define _PyThreadState_Current LoadPythonSymbol(_PyThreadState_Current)
#define _PyThreadState_GetFrame LoadPythonSymbol(_PyThreadState_GetFrame)
#define _PyTrash_delete_later LoadPythonSymbol(_PyTrash_delete_later)
#define _PyTrash_delete_nesting LoadPythonSymbol(_PyTrash_delete_nesting)
#define _PyWeakref_CallableProxyType LoadPythonSymbol(_PyWeakref_CallableProxyType)
#define _PyWeakref_ProxyType LoadPythonSymbol(_PyWeakref_ProxyType)
#define _PyWeakref_RefType LoadPythonSymbol(_PyWeakref_RefType)
#define _Py_CheckInterval LoadPythonSymbol(_Py_CheckInterval)
#define _Py_CheckRecursionLimit LoadPythonSymbol(_Py_CheckRecursionLimit)
#define _Py_EllipsisObject LoadPythonSymbol(_Py_EllipsisObject)
#define _Py_HashSecret LoadPythonSymbol(_Py_HashSecret)
#define _Py_NoneStruct LoadPythonSymbol(_Py_NoneStruct)
#define _Py_NotImplementedStruct LoadPythonSymbol(_Py_NotImplementedStruct)
#define _Py_PackageContext LoadPythonSymbol(_Py_PackageContext)
#define _Py_QnewFlag LoadPythonSymbol(_Py_QnewFlag)
#define _Py_SwappedOp LoadPythonSymbol(_Py_SwappedOp)
#define _Py_Ticker LoadPythonSymbol(_Py_Ticker)
#define _Py_TrueStruct LoadPythonSymbol(_Py_TrueStruct)
#define _Py_ZeroStruct LoadPythonSymbol(_Py_ZeroStruct)
#define _Py_ascii_whitespace LoadPythonSymbol(_Py_ascii_whitespace)
#define _Py_ctype_table LoadPythonSymbol(_Py_ctype_table)
#define _Py_ctype_tolower LoadPythonSymbol(_Py_ctype_tolower)
#define _Py_ctype_toupper LoadPythonSymbol(_Py_ctype_toupper)