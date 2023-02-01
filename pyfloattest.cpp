#include <Python.h>

#include <Windows.h>
#include <delayimp.h>

#include <iostream>

// workaround
//#define LoadPythonSymbol(name) (*reinterpret_cast<decltype(name)*>(GetProcAddress(GetModuleHandle("python311.dll"), #name)))
//#define PyFloat_FromDouble LoadPythonSymbol(PyFloat_FromDouble)
//reinterpret_cast<decltype(&PyFloat_FromDouble)>(GetProcAddress(GetModuleHandle("python27.dll"), "PyFloat_FromDouble"))

int main() {
	__pfnDliNotifyHook2 = [](unsigned int dliNotify, PDelayLoadInfo info){
		std::cout << "__pfnDliNotifyHook2 " << dliNotify
			<< ' ' << info->cb
			<< ' ' << info->pidd
			<< ' ' << info->ppfn
			<< ' ' << info->szDll
			<< ' ' << info->dlp.fImportByName
			<< ' ' << (info->dlp.fImportByName ? info->dlp.szProcName : std::to_string(info->dlp.dwOrdinal))
			<< ' ' << info->hmodCur
			<< ' ' << info->pfnCur
			<< ' ' << info->dwLastError
			<< std::endl;
		return static_cast<FARPROC>(0);
	};
	__pfnDliFailureHook2 = [](unsigned int dliNotify, PDelayLoadInfo info){
		std::cout << "__pfnDliFailureHook2 " << dliNotify << info->szDll << ' ' << info->pidd << std::endl;
		if (dliNotify == dliFailLoadLib) {
			const auto msg = std::string("no ") + info->szDll;
			std::cerr << info->szDll << msg << std::endl;
			throw std::runtime_error(msg);
		}
		return static_cast<FARPROC>(0);
	};

	Py_Initialize();
	std::cout << Py_IsInitialized() << std::endl;
	std::cout << PyUnicode_AsUTF8(PyObject_Repr(PyFloat_FromDouble(12.1))) << std::endl;
	auto h = GetModuleHandle("python310.dll");
	std::cout << h << ' ';
	auto pa = GetProcAddress(h, "PyFloat_FromDouble");
	std::cout << pa << ' ';
	auto f = reinterpret_cast<decltype(&PyFloat_FromDouble)>(pa);
	std::cout << f << ' ';
	auto res = f(12.1);
	std::cout << res << ' ';
	auto rep = PyObject_Repr(res);
	std::cout << rep << ' ';
	auto str = PyUnicode_AsUTF8(rep);
	std::cout << str << std::endl;
}
