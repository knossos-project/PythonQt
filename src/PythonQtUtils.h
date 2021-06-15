#ifndef _PYTHONQTUTILS_H
#define _PYTHONQTUTILS_H

/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtUtils.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2014-09
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"
#include "PythonQtSystem.h"

#include <QByteArray>
#include <QMetaMethod>

namespace PythonQtUtils
{
  inline QByteArray signature(const QMetaMethod& method) {
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
    return method.methodSignature();
#else
    return QByteArray(method.signature());
#endif
  }

  inline QByteArray methodName(const QMetaMethod& method) {
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
    return method.name();
#else
    QByteArray sig(method.signature());
    int idx = sig.indexOf('(');
    sig = sig.left(idx);
    return sig;
#endif
  }

  inline QByteArray typeName(const QMetaMethod& method) {
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
    QByteArray result = method.typeName();
    if (result == "void") {
      return QByteArray();
    } else {
      return result;
    }
#else
    return method.typeName();
#endif
  }

  //! Returns of the python object is a class type
  inline bool isPythonClassType(PyObject* obj) {
#ifdef PY3K
    return PyType_Check(obj);
#else
    // support old-style classes and new style classes
    return (obj->ob_type == &LoadPythonSymbol(PyClass_Type) || obj->ob_type == &LoadPythonSymbol(PyType_Type));
#endif
  }
}

#endif

