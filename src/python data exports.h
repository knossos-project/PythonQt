#pragma once

#include <libloaderapi.h>

#include <boost/preprocessor/stringize.hpp>

#include <QDebug>

//#define optpy python27
#define optpy python310

static auto pythonDll = [](){
    static auto pythonDll = GetModuleHandle(BOOST_PP_STRINGIZE(optpy.dll));
    if (pythonDll == nullptr) {
        throw 1;
    }
    //qDebug() << "pythonDll" << pythonDll;
    return pythonDll;
};
static auto GetProcAddress2 = [](auto name){
    //qDebug() << pythonDll() << name << reinterpret_cast<std::size_t>(GetProcAddress(pythonDll(), name));
    return GetProcAddress(pythonDll(), name);
};

#define LoadPythonSymbol(name) (*reinterpret_cast<decltype(name)*>(GetProcAddress2(#name)))


#include BOOST_PP_STRINGIZE(optpy data exports.h)
