#pragma once

#include <libloaderapi.h>

#include <boost/preprocessor/stringize.hpp>

#include <QDebug>

#ifndef optpy
    #error no optpy
#endif

static inline auto GetProcAddress2 = [](auto name){
    static auto pythonDll = GetModuleHandle(BOOST_PP_STRINGIZE(optpy.dll));
    if (pythonDll != nullptr) {
        if (const auto ad = GetProcAddress(pythonDll, name)) {
            return ad;
        } else {
            qDebug() << "GetProcAddress failed for" << name << "via" << pythonDll << "for" << BOOST_PP_STRINGIZE(optpy.dll);
            throw std::runtime_error(name);
        }
    } else {
        qDebug() << name << "invalid pythonDll" << BOOST_PP_STRINGIZE(optpy.dll);
        pythonDll = GetModuleHandle(BOOST_PP_STRINGIZE(optpy.dll));
        qDebug() << name << "pythonDll" << pythonDll;
        throw std::runtime_error(name + std::to_string(reinterpret_cast<std::size_t>(pythonDll)));
    }
    qDebug() << "nonono";
};

#define LoadPythonSymbol(name) (*reinterpret_cast<decltype(name)*>(GetProcAddress2(#name)))


#include BOOST_PP_STRINGIZE(optpy data exports.h)
