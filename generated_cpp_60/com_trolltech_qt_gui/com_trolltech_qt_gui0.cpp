#include "com_trolltech_qt_gui0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QImage>
#include <QPair>
#include <QPixmap>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaccessible.h>
#include <qboxlayout.h>
#include <qclipboard.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfontinfo.h>
#include <qgesturerecognizer.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qiconengine.h>
#include <qpaintdevice.h>
#include <qpainterpath.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qurl.h>

PythonQtShell_QAbstractTableModel::~PythonQtShell_QAbstractTableModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QAbstractTableModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::dropMimeData(data0, action1, row2, column3, parent4);
}
Qt::ItemFlags  PythonQtShell_QAbstractTableModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue{};
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
          } else {
            returnValue = *((Qt::ItemFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::flags(index0);
}
QModelIndex  PythonQtShell_QAbstractTableModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("index");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::index(row0, column1, parent2);
}
const QMetaObject*  PythonQtShell_QAbstractTableModel::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::metaObject();
}
void*  PythonQtShell_QAbstractTableModel::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::qt_metacast(arg__1);
}
QModelIndex  PythonQtShell_QAbstractTableModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sibling");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&idx2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QAbstractTableModel::sibling(row0, column1, idx2);
}
QAbstractTableModel* PythonQtWrapper_QAbstractTableModel::new_QAbstractTableModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractTableModel(parent); }

bool  PythonQtWrapper_QAbstractTableModel::dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->dropMimeData(data, action, row, column, parent));
}

Qt::ItemFlags  PythonQtWrapper_QAbstractTableModel::flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->flags(index));
}

QModelIndex  PythonQtWrapper_QAbstractTableModel::index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->index(row, column, parent));
}

const QMetaObject*  PythonQtWrapper_QAbstractTableModel::metaObject(QAbstractTableModel* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QAbstractTableModel::qt_metacast(QAbstractTableModel* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

QModelIndex  PythonQtWrapper_QAbstractTableModel::sibling(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
  return ( theWrappedObject->sibling(row, column, idx));
}



PythonQtShell_QAccessibleEvent::~PythonQtShell_QAccessibleEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QAccessibleEvent* PythonQtWrapper_QAccessibleEvent::new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ)
{ 
return new PythonQtShell_QAccessibleEvent(obj, typ); }

int  PythonQtWrapper_QAccessibleEvent::child(QAccessibleEvent* theWrappedObject) const
{
  return ( theWrappedObject->child());
}

QObject*  PythonQtWrapper_QAccessibleEvent::object(QAccessibleEvent* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

void PythonQtWrapper_QAccessibleEvent::setChild(QAccessibleEvent* theWrappedObject, int  chld)
{
  ( theWrappedObject->setChild(chld));
}

QAccessible::Event  PythonQtWrapper_QAccessibleEvent::type(QAccessibleEvent* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QAccessibleEvent::py_toString(QAccessibleEvent* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QActionEvent::~PythonQtShell_QActionEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QActionEvent*  PythonQtShell_QActionEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QActionEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QActionEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QActionEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QActionEvent::clone();
}
QActionEvent* PythonQtWrapper_QActionEvent::new_QActionEvent(int  type, QAction*  action, QAction*  before)
{ 
return new PythonQtShell_QActionEvent(type, action, before); }

QAction*  PythonQtWrapper_QActionEvent::action(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->action());
}

QAction*  PythonQtWrapper_QActionEvent::before(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->before());
}

QActionEvent*  PythonQtWrapper_QActionEvent::clone(QActionEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QActionEvent*  PythonQtWrapper_QActionEvent::operator_assign(QActionEvent* theWrappedObject, QActionEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QBackingStore* PythonQtWrapper_QBackingStore::new_QBackingStore(QWindow*  window)
{ 
return new QBackingStore(window); }

void PythonQtWrapper_QBackingStore::beginPaint(QBackingStore* theWrappedObject, const QRegion&  arg__1)
{
  ( theWrappedObject->beginPaint(arg__1));
}

void PythonQtWrapper_QBackingStore::endPaint(QBackingStore* theWrappedObject)
{
  ( theWrappedObject->endPaint());
}

void PythonQtWrapper_QBackingStore::flush(QBackingStore* theWrappedObject, const QRegion&  region, QWindow*  window, const QPoint&  offset)
{
  ( theWrappedObject->flush(region, window, offset));
}

bool  PythonQtWrapper_QBackingStore::hasStaticContents(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->hasStaticContents());
}

QPaintDevice*  PythonQtWrapper_QBackingStore::paintDevice(QBackingStore* theWrappedObject)
{
  return ( theWrappedObject->paintDevice());
}

void PythonQtWrapper_QBackingStore::resize(QBackingStore* theWrappedObject, const QSize&  size)
{
  ( theWrappedObject->resize(size));
}

bool  PythonQtWrapper_QBackingStore::scroll(QBackingStore* theWrappedObject, const QRegion&  area, int  dx, int  dy)
{
  return ( theWrappedObject->scroll(area, dx, dy));
}

void PythonQtWrapper_QBackingStore::setStaticContents(QBackingStore* theWrappedObject, const QRegion&  region)
{
  ( theWrappedObject->setStaticContents(region));
}

QSize  PythonQtWrapper_QBackingStore::size(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QRegion  PythonQtWrapper_QBackingStore::staticContents(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->staticContents());
}

QWindow*  PythonQtWrapper_QBackingStore::window(QBackingStore* theWrappedObject) const
{
  return ( theWrappedObject->window());
}



PythonQtShell_QClipboard::~PythonQtShell_QClipboard() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QClipboard::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QClipboard::metaObject();
}
void*  PythonQtShell_QClipboard::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QClipboard::qt_metacast(arg__1);
}
QClipboard* PythonQtWrapper_QClipboard::new_QClipboard()
{ 
return new PythonQtShell_QClipboard(); }

const QMetaObject* PythonQtShell_QClipboard::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QClipboard::staticMetaObject);
  } else {
    return &QClipboard::staticMetaObject;
  }
}
int PythonQtShell_QClipboard::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QClipboard::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QClipboard::changed(QClipboard* theWrappedObject, QClipboard::Mode  mode)
{
  ( theWrappedObject->changed(mode));
}

void PythonQtWrapper_QClipboard::clear(QClipboard* theWrappedObject, QClipboard::Mode  mode)
{
  ( theWrappedObject->clear(mode));
}

void PythonQtWrapper_QClipboard::dataChanged(QClipboard* theWrappedObject)
{
  ( theWrappedObject->dataChanged());
}

void PythonQtWrapper_QClipboard::findBufferChanged(QClipboard* theWrappedObject)
{
  ( theWrappedObject->findBufferChanged());
}

QImage  PythonQtWrapper_QClipboard::image(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
  return ( theWrappedObject->image(mode));
}

const QMetaObject*  PythonQtWrapper_QClipboard::metaObject(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const QMimeData*  PythonQtWrapper_QClipboard::mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
  return ( theWrappedObject->mimeData(mode));
}

bool  PythonQtWrapper_QClipboard::ownsClipboard(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->ownsClipboard());
}

bool  PythonQtWrapper_QClipboard::ownsFindBuffer(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->ownsFindBuffer());
}

bool  PythonQtWrapper_QClipboard::ownsSelection(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->ownsSelection());
}

QPixmap  PythonQtWrapper_QClipboard::pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
  return ( theWrappedObject->pixmap(mode));
}

void*  PythonQtWrapper_QClipboard::qt_metacast(QClipboard* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

void PythonQtWrapper_QClipboard::selectionChanged(QClipboard* theWrappedObject)
{
  ( theWrappedObject->selectionChanged());
}

void PythonQtWrapper_QClipboard::setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode)
{
  ( theWrappedObject->setImage(arg__1, mode));
}

void PythonQtWrapper_QClipboard::setMimeData(QClipboard* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data, QClipboard::Mode  mode)
{
  ( theWrappedObject->setMimeData(data, mode));
}

void PythonQtWrapper_QClipboard::setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode)
{
  ( theWrappedObject->setPixmap(arg__1, mode));
}

void PythonQtWrapper_QClipboard::setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode)
{
  ( theWrappedObject->setText(arg__1, mode));
}

bool  PythonQtWrapper_QClipboard::supportsFindBuffer(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->supportsFindBuffer());
}

bool  PythonQtWrapper_QClipboard::supportsSelection(QClipboard* theWrappedObject) const
{
  return ( theWrappedObject->supportsSelection());
}

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QClipboard::Mode  mode) const
{
  return ( theWrappedObject->text(mode));
}

QString  PythonQtWrapper_QClipboard::text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode) const
{
  return ( theWrappedObject->text(subtype, mode));
}



PythonQtShell_QCloseEvent::~PythonQtShell_QCloseEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCloseEvent* PythonQtWrapper_QCloseEvent::new_QCloseEvent()
{ 
return new PythonQtShell_QCloseEvent(); }

QCloseEvent*  PythonQtWrapper_QCloseEvent::operator_assign(QCloseEvent* theWrappedObject, QCloseEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient()
{ 
return new QConicalGradient(); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(const QPointF&  center, qreal  startAngle)
{ 
return new QConicalGradient(center, startAngle); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle)
{ 
return new QConicalGradient(cx, cy, startAngle); }

qreal  PythonQtWrapper_QConicalGradient::angle(QConicalGradient* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

QPointF  PythonQtWrapper_QConicalGradient::center(QConicalGradient* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

void PythonQtWrapper_QConicalGradient::setAngle(QConicalGradient* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setAngle(angle));
}

void PythonQtWrapper_QConicalGradient::setCenter(QConicalGradient* theWrappedObject, const QPointF&  center)
{
  ( theWrappedObject->setCenter(center));
}

void PythonQtWrapper_QConicalGradient::setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->setCenter(x, y));
}



PythonQtShell_QContextMenuEvent::~PythonQtShell_QContextMenuEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QContextMenuEvent*  PythonQtShell_QContextMenuEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QContextMenuEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QContextMenuEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QContextMenuEvent::clone();
}
void PythonQtShell_QContextMenuEvent::setTimestamp(quint64  timestamp0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setTimestamp");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "quint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&timestamp0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QContextMenuEvent::setTimestamp(timestamp0);
}
QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos)
{ 
return new PythonQtShell_QContextMenuEvent(reason, pos); }

QContextMenuEvent* PythonQtWrapper_QContextMenuEvent::new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QContextMenuEvent(reason, pos, globalPos, modifiers); }

const QPoint*  PythonQtWrapper_QContextMenuEvent::globalPos(QContextMenuEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QContextMenuEvent::globalX(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QContextMenuEvent::globalY(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

QContextMenuEvent*  PythonQtWrapper_QContextMenuEvent::operator_assign(QContextMenuEvent* theWrappedObject, QContextMenuEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QPoint*  PythonQtWrapper_QContextMenuEvent::pos(QContextMenuEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

QContextMenuEvent::Reason  PythonQtWrapper_QContextMenuEvent::reason(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}

int  PythonQtWrapper_QContextMenuEvent::x(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QContextMenuEvent::y(QContextMenuEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QDateEdit::~PythonQtShell_QDateEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QDateEdit::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDateEdit::metaObject();
}
void*  PythonQtShell_QDateEdit::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDateEdit::qt_metacast(arg__1);
}
QDateEdit* PythonQtWrapper_QDateEdit::new_QDateEdit(QDate  date, QWidget*  parent)
{ 
return new PythonQtShell_QDateEdit(date, parent); }

QDateEdit* PythonQtWrapper_QDateEdit::new_QDateEdit(QWidget*  parent)
{ 
return new PythonQtShell_QDateEdit(parent); }

const QMetaObject*  PythonQtWrapper_QDateEdit::metaObject(QDateEdit* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QDateEdit::qt_metacast(QDateEdit* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

void PythonQtWrapper_QDateEdit::userDateChanged(QDateEdit* theWrappedObject, QDate  date)
{
  ( theWrappedObject->userDateChanged(date));
}



PythonQtShell_QDesktopServices::~PythonQtShell_QDesktopServices() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDesktopServices* PythonQtWrapper_QDesktopServices::new_QDesktopServices()
{ 
return new PythonQtShell_QDesktopServices(); }

bool  PythonQtWrapper_QDesktopServices::static_QDesktopServices_openUrl(const QUrl&  url)
{
  return (QDesktopServices::openUrl(url));
}

void PythonQtWrapper_QDesktopServices::static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method)
{
  (QDesktopServices::setUrlHandler(scheme, receiver, method));
}

void PythonQtWrapper_QDesktopServices::static_QDesktopServices_unsetUrlHandler(const QString&  scheme)
{
  (QDesktopServices::unsetUrlHandler(scheme));
}



PythonQtShell_QDragEnterEvent::~PythonQtShell_QDragEnterEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragMoveEvent*  PythonQtShell_QDragEnterEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDragMoveEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDragMoveEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDragEnterEvent::clone();
}
QDragEnterEvent* PythonQtWrapper_QDragEnterEvent::new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers)
{ 
return new PythonQtShell_QDragEnterEvent(pos, actions, data, buttons, modifiers); }

QDragEnterEvent*  PythonQtWrapper_QDragEnterEvent::operator_assign(QDragEnterEvent* theWrappedObject, QDragEnterEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDragLeaveEvent::~PythonQtShell_QDragLeaveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragLeaveEvent* PythonQtWrapper_QDragLeaveEvent::new_QDragLeaveEvent()
{ 
return new PythonQtShell_QDragLeaveEvent(); }

QDragLeaveEvent*  PythonQtWrapper_QDragLeaveEvent::operator_assign(QDragLeaveEvent* theWrappedObject, QDragLeaveEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDragMoveEvent::~PythonQtShell_QDragMoveEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDragMoveEvent*  PythonQtShell_QDragMoveEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDragMoveEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDragMoveEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDragMoveEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDragMoveEvent::clone();
}
QDragMoveEvent* PythonQtWrapper_QDragMoveEvent::new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new PythonQtShell_QDragMoveEvent(pos, actions, data, buttons, modifiers, type); }

void PythonQtWrapper_QDragMoveEvent::accept(QDragMoveEvent* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->accept(r));
}

QRect  PythonQtWrapper_QDragMoveEvent::answerRect(QDragMoveEvent* theWrappedObject) const
{
  return ( theWrappedObject->answerRect());
}

void PythonQtWrapper_QDragMoveEvent::ignore(QDragMoveEvent* theWrappedObject, const QRect&  r)
{
  ( theWrappedObject->ignore(r));
}

QDragMoveEvent*  PythonQtWrapper_QDragMoveEvent::operator_assign(QDragMoveEvent* theWrappedObject, QDragMoveEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QDropEvent::~PythonQtShell_QDropEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDropEvent*  PythonQtShell_QDropEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDropEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDropEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QDropEvent::clone();
}
QDropEvent* PythonQtWrapper_QDropEvent::new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type)
{ 
return new PythonQtShell_QDropEvent(pos, actions, data, buttons, modifiers, type); }

void PythonQtWrapper_QDropEvent::acceptProposedAction(QDropEvent* theWrappedObject)
{
  ( theWrappedObject->acceptProposedAction());
}

Qt::MouseButtons  PythonQtWrapper_QDropEvent::buttons(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->buttons());
}

QDropEvent*  PythonQtWrapper_QDropEvent::clone(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

Qt::DropAction  PythonQtWrapper_QDropEvent::dropAction(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->dropAction());
}

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::keyboardModifiers(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->keyboardModifiers());
}

const QMimeData*  PythonQtWrapper_QDropEvent::mimeData(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mimeData());
}

Qt::KeyboardModifiers  PythonQtWrapper_QDropEvent::modifiers(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->modifiers());
}

Qt::MouseButtons  PythonQtWrapper_QDropEvent::mouseButtons(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->mouseButtons());
}

QDropEvent*  PythonQtWrapper_QDropEvent::operator_assign(QDropEvent* theWrappedObject, QDropEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QDropEvent::pos(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QDropEvent::posF(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}

QPointF  PythonQtWrapper_QDropEvent::position(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

Qt::DropActions  PythonQtWrapper_QDropEvent::possibleActions(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->possibleActions());
}

Qt::DropAction  PythonQtWrapper_QDropEvent::proposedAction(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->proposedAction());
}

void PythonQtWrapper_QDropEvent::setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action)
{
  ( theWrappedObject->setDropAction(action));
}

QObject*  PythonQtWrapper_QDropEvent::source(QDropEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



PythonQtShell_QEnterEvent::~PythonQtShell_QEnterEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QEnterEvent*  PythonQtShell_QEnterEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QEnterEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QEnterEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QEnterEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEnterEvent::clone();
}
QEnterEvent*  PythonQtWrapper_QEnterEvent::clone(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QPoint  PythonQtWrapper_QEnterEvent::globalPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QEnterEvent::globalX(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QEnterEvent::globalY(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

QPointF  PythonQtWrapper_QEnterEvent::localPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->localPos());
}

QEnterEvent*  PythonQtWrapper_QEnterEvent::operator_assign(QEnterEvent* theWrappedObject, QEnterEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QEnterEvent::pos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QEnterEvent::screenPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->screenPos());
}

QPointF  PythonQtWrapper_QEnterEvent::windowPos(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->windowPos());
}

int  PythonQtWrapper_QEnterEvent::x(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QEnterEvent::y(QEnterEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QExposeEvent::~PythonQtShell_QExposeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QExposeEvent*  PythonQtShell_QExposeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QExposeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QExposeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QExposeEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QExposeEvent::clone();
}
QExposeEvent* PythonQtWrapper_QExposeEvent::new_QExposeEvent(const QRegion&  m_region)
{ 
return new PythonQtShell_QExposeEvent(m_region); }

QExposeEvent*  PythonQtWrapper_QExposeEvent::clone(QExposeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QExposeEvent*  PythonQtWrapper_QExposeEvent::operator_assign(QExposeEvent* theWrappedObject, QExposeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QRegion*  PythonQtWrapper_QExposeEvent::region(QExposeEvent* theWrappedObject) const
{
  return &( theWrappedObject->region());
}



PythonQtShell_QFileOpenEvent::~PythonQtShell_QFileOpenEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QFileOpenEvent*  PythonQtShell_QFileOpenEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileOpenEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileOpenEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QFileOpenEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileOpenEvent::clone();
}
QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QString&  file)
{ 
return new PythonQtShell_QFileOpenEvent(file); }

QFileOpenEvent* PythonQtWrapper_QFileOpenEvent::new_QFileOpenEvent(const QUrl&  url)
{ 
return new PythonQtShell_QFileOpenEvent(url); }

QFileOpenEvent*  PythonQtWrapper_QFileOpenEvent::clone(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QString  PythonQtWrapper_QFileOpenEvent::file(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->file());
}

bool  PythonQtWrapper_QFileOpenEvent::openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const
{
  return ( theWrappedObject->openFile(file, flags));
}

QFileOpenEvent*  PythonQtWrapper_QFileOpenEvent::operator_assign(QFileOpenEvent* theWrappedObject, QFileOpenEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QUrl  PythonQtWrapper_QFileOpenEvent::url(QFileOpenEvent* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QFocusEvent::~PythonQtShell_QFocusEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QFocusEvent*  PythonQtShell_QFocusEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFocusEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QFocusEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFocusEvent::clone();
}
QFocusEvent* PythonQtWrapper_QFocusEvent::new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason)
{ 
return new PythonQtShell_QFocusEvent(type, reason); }

QFocusEvent*  PythonQtWrapper_QFocusEvent::clone(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QFocusEvent::gotFocus(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->gotFocus());
}

bool  PythonQtWrapper_QFocusEvent::lostFocus(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->lostFocus());
}

QFocusEvent*  PythonQtWrapper_QFocusEvent::operator_assign(QFocusEvent* theWrappedObject, QFocusEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

Qt::FocusReason  PythonQtWrapper_QFocusEvent::reason(QFocusEvent* theWrappedObject) const
{
  return ( theWrappedObject->reason());
}



QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFont&  arg__1)
{ 
return new QFontInfo(arg__1); }

QFontInfo* PythonQtWrapper_QFontInfo::new_QFontInfo(const QFontInfo&  arg__1)
{ 
return new QFontInfo(arg__1); }

bool  PythonQtWrapper_QFontInfo::bold(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->bold());
}

bool  PythonQtWrapper_QFontInfo::exactMatch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->exactMatch());
}

QString  PythonQtWrapper_QFontInfo::family(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->family());
}

bool  PythonQtWrapper_QFontInfo::fixedPitch(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->fixedPitch());
}

bool  PythonQtWrapper_QFontInfo::italic(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->italic());
}

int  PythonQtWrapper_QFontInfo::legacyWeight(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->legacyWeight());
}

bool  PythonQtWrapper_QFontInfo::overline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->overline());
}

int  PythonQtWrapper_QFontInfo::pixelSize(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pixelSize());
}

int  PythonQtWrapper_QFontInfo::pointSize(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pointSize());
}

qreal  PythonQtWrapper_QFontInfo::pointSizeF(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->pointSizeF());
}

bool  PythonQtWrapper_QFontInfo::strikeOut(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->strikeOut());
}

QFont::Style  PythonQtWrapper_QFontInfo::style(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->style());
}

QFont::StyleHint  PythonQtWrapper_QFontInfo::styleHint(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleHint());
}

QString  PythonQtWrapper_QFontInfo::styleName(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->styleName());
}

void PythonQtWrapper_QFontInfo::swap(QFontInfo* theWrappedObject, QFontInfo&  other)
{
  ( theWrappedObject->swap(other));
}

bool  PythonQtWrapper_QFontInfo::underline(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->underline());
}

int  PythonQtWrapper_QFontInfo::weight(QFontInfo* theWrappedObject) const
{
  return ( theWrappedObject->weight());
}



QGestureEvent* PythonQtWrapper_QGestureEvent::new_QGestureEvent(const QList<QGesture* >&  gestures)
{ 
return new QGestureEvent(gestures); }

void PythonQtWrapper_QGestureEvent::accept(QGestureEvent* theWrappedObject, QGesture*  arg__1)
{
  ( theWrappedObject->accept(arg__1));
}

void PythonQtWrapper_QGestureEvent::accept(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1)
{
  ( theWrappedObject->accept(arg__1));
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::activeGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->activeGestures());
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::canceledGestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->canceledGestures());
}

QGesture*  PythonQtWrapper_QGestureEvent::gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const
{
  return ( theWrappedObject->gesture(type));
}

QList<QGesture* >  PythonQtWrapper_QGestureEvent::gestures(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->gestures());
}

void PythonQtWrapper_QGestureEvent::ignore(QGestureEvent* theWrappedObject, QGesture*  arg__1)
{
  ( theWrappedObject->ignore(arg__1));
}

void PythonQtWrapper_QGestureEvent::ignore(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1)
{
  ( theWrappedObject->ignore(arg__1));
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

bool  PythonQtWrapper_QGestureEvent::isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const
{
  return ( theWrappedObject->isAccepted(arg__1));
}

QPointF  PythonQtWrapper_QGestureEvent::mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const
{
  return ( theWrappedObject->mapToGraphicsScene(gesturePoint));
}

void PythonQtWrapper_QGestureEvent::setAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1, bool  arg__2)
{
  ( theWrappedObject->setAccepted(arg__1, arg__2));
}

void PythonQtWrapper_QGestureEvent::setAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1, bool  arg__2)
{
  ( theWrappedObject->setAccepted(arg__1, arg__2));
}

void PythonQtWrapper_QGestureEvent::setWidget(QGestureEvent* theWrappedObject, QWidget*  widget)
{
  ( theWrappedObject->setWidget(widget));
}

QWidget*  PythonQtWrapper_QGestureEvent::widget(QGestureEvent* theWrappedObject) const
{
  return ( theWrappedObject->widget());
}

QString PythonQtWrapper_QGestureEvent::py_toString(QGestureEvent* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGestureRecognizer::~PythonQtShell_QGestureRecognizer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QGesture*  PythonQtShell_QGestureRecognizer::create(QObject*  target0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("create");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGesture*" , "QObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QGesture* returnValue{};
      void* args[2] = {NULL, (void*)&target0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("create", methodInfo, result);
          } else {
            returnValue = *((QGesture**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGestureRecognizer::create(target0);
}
QGestureRecognizer::Result  PythonQtShell_QGestureRecognizer::recognize(QGesture*  state0, QObject*  watched1, QEvent*  event2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("recognize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QGestureRecognizer::Result" , "QGesture*" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QGestureRecognizer::Result returnValue{};
      void* args[4] = {NULL, (void*)&state0, (void*)&watched1, (void*)&event2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("recognize", methodInfo, result);
          } else {
            returnValue = *((QGestureRecognizer::Result*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGestureRecognizer::Result();
}
void PythonQtShell_QGestureRecognizer::reset(QGesture*  state0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGesture*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&state0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGestureRecognizer::reset(state0);
}
QGestureRecognizer* PythonQtWrapper_QGestureRecognizer::new_QGestureRecognizer()
{ 
return new PythonQtShell_QGestureRecognizer(); }

QGesture*  PythonQtWrapper_QGestureRecognizer::create(QGestureRecognizer* theWrappedObject, QObject*  target)
{
  return ( theWrappedObject->create(target));
}

QGestureRecognizer::Result  PythonQtWrapper_QGestureRecognizer::recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->recognize(state, watched, event));
}

Qt::GestureType  PythonQtWrapper_QGestureRecognizer::static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer)
{
  return (QGestureRecognizer::registerRecognizer(recognizer));
}

void PythonQtWrapper_QGestureRecognizer::reset(QGestureRecognizer* theWrappedObject, QGesture*  state)
{
  ( theWrappedObject->reset(state));
}

void PythonQtWrapper_QGestureRecognizer::static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType  type)
{
  (QGestureRecognizer::unregisterRecognizer(type));
}



PythonQtShell_QGraphicsItemAnimation::~PythonQtShell_QGraphicsItemAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QGraphicsItemAnimation::afterAnimationStep(qreal  step0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("afterAnimationStep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&step0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsItemAnimation::afterAnimationStep(step0);
}
void PythonQtShell_QGraphicsItemAnimation::beforeAnimationStep(qreal  step0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("beforeAnimationStep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&step0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsItemAnimation::beforeAnimationStep(step0);
}
const QMetaObject*  PythonQtShell_QGraphicsItemAnimation::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsItemAnimation::metaObject();
}
void*  PythonQtShell_QGraphicsItemAnimation::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsItemAnimation::qt_metacast(arg__1);
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

const QMetaObject* PythonQtShell_QGraphicsItemAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsItemAnimation::staticMetaObject);
  } else {
    return &QGraphicsItemAnimation::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsItemAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsItemAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsItemAnimation::afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_afterAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
  ( ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_beforeAnimationStep(step));
}

void PythonQtWrapper_QGraphicsItemAnimation::clear(QGraphicsItemAnimation* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->horizontalShearAt(step));
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->item());
}

const QMetaObject*  PythonQtWrapper_QGraphicsItemAnimation::metaObject(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->posAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->posList());
}

void*  PythonQtWrapper_QGraphicsItemAnimation::qt_metacast(QGraphicsItemAnimation* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->rotationAt(step));
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->rotationList());
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->scaleList());
}

void PythonQtWrapper_QGraphicsItemAnimation::setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item)
{
  ( theWrappedObject->setItem(item));
}

void PythonQtWrapper_QGraphicsItemAnimation::setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos)
{
  ( theWrappedObject->setPosAt(step, pos));
}

void PythonQtWrapper_QGraphicsItemAnimation::setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle)
{
  ( theWrappedObject->setRotationAt(step, angle));
}

void PythonQtWrapper_QGraphicsItemAnimation::setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy)
{
  ( theWrappedObject->setScaleAt(step, sx, sy));
}

void PythonQtWrapper_QGraphicsItemAnimation::setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv)
{
  ( theWrappedObject->setShearAt(step, sh, sv));
}

void PythonQtWrapper_QGraphicsItemAnimation::setStep(QGraphicsItemAnimation* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setStep(x));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine)
{
  ( theWrappedObject->setTimeLine(timeLine));
}

void PythonQtWrapper_QGraphicsItemAnimation::setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy)
{
  ( theWrappedObject->setTranslationAt(step, dx, dy));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->shearList());
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->timeLine());
}

QTransform  PythonQtWrapper_QGraphicsItemAnimation::transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->transformAt(step));
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
  return ( theWrappedObject->translationList());
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalScaleAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->verticalShearAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->xTranslationAt(step));
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->yTranslationAt(step));
}



PythonQtShell_QGraphicsObject::~PythonQtShell_QGraphicsObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QGraphicsObject::event(QEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsObject::event(ev0);
}
const QMetaObject*  PythonQtShell_QGraphicsObject::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsObject::metaObject();
}
void*  PythonQtShell_QGraphicsObject::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsObject::qt_metacast(arg__1);
}
QGraphicsObject* PythonQtWrapper_QGraphicsObject::new_QGraphicsObject(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsObject(parent); }

const QMetaObject* PythonQtShell_QGraphicsObject::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsObject::staticMetaObject);
  } else {
    return &QGraphicsObject::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsObject::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsObject::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsObject::childrenChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->childrenChanged());
}

void PythonQtWrapper_QGraphicsObject::enabledChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->enabledChanged());
}

bool  PythonQtWrapper_QGraphicsObject::event(QGraphicsObject* theWrappedObject, QEvent*  ev)
{
  return ( ((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->promoted_event(ev));
}

void PythonQtWrapper_QGraphicsObject::grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags)
{
  ( theWrappedObject->grabGesture(type, flags));
}

void PythonQtWrapper_QGraphicsObject::heightChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->heightChanged());
}

const QMetaObject*  PythonQtWrapper_QGraphicsObject::metaObject(QGraphicsObject* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void PythonQtWrapper_QGraphicsObject::opacityChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->opacityChanged());
}

void PythonQtWrapper_QGraphicsObject::parentChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->parentChanged());
}

void*  PythonQtWrapper_QGraphicsObject::qt_metacast(QGraphicsObject* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

void PythonQtWrapper_QGraphicsObject::rotationChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->rotationChanged());
}

void PythonQtWrapper_QGraphicsObject::scaleChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->scaleChanged());
}

void PythonQtWrapper_QGraphicsObject::ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type)
{
  ( theWrappedObject->ungrabGesture(type));
}

void PythonQtWrapper_QGraphicsObject::updateMicroFocus(QGraphicsObject* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->promoted_updateMicroFocus());
}

void PythonQtWrapper_QGraphicsObject::visibleChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->visibleChanged());
}

void PythonQtWrapper_QGraphicsObject::widthChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->widthChanged());
}

void PythonQtWrapper_QGraphicsObject::xChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->xChanged());
}

void PythonQtWrapper_QGraphicsObject::yChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->yChanged());
}

void PythonQtWrapper_QGraphicsObject::zChanged(QGraphicsObject* theWrappedObject)
{
  ( theWrappedObject->zChanged());
}

QString PythonQtWrapper_QGraphicsObject::py_toString(QGraphicsObject* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QGraphicsTextItem::~PythonQtShell_QGraphicsTextItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRectF  PythonQtShell_QGraphicsTextItem::boundingRect() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("boundingRect");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRectF"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRectF returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("boundingRect", methodInfo, result);
          } else {
            returnValue = *((QRectF*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::boundingRect();
}
bool  PythonQtShell_QGraphicsTextItem::contains(const QPointF&  point0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contains");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QPointF&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&point0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("contains", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::contains(point0);
}
void PythonQtShell_QGraphicsTextItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("contextMenuEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneContextMenuEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::contextMenuEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::dragEnterEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::dragLeaveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dragMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::dragMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneDragDropEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::dropEvent(event0);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  ev0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ev0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::event(ev0);
}
QVariant  PythonQtShell_QGraphicsTextItem::extension(const QVariant&  variant0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("extension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {NULL, (void*)&variant0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("extension", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::extension(variant0);
}
void PythonQtShell_QGraphicsTextItem::focusInEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusInEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::focusInEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::focusOutEvent(QFocusEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("focusOutEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QFocusEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::focusOutEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverEnterEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::hoverEnterEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverLeaveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::hoverLeaveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hoverMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::hoverMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::inputMethodEvent(QInputMethodEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QInputMethodEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::inputMethodEvent(event0);
}
QVariant  PythonQtShell_QGraphicsTextItem::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("inputMethodQuery");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue{};
      void* args[2] = {NULL, (void*)&query0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::inputMethodQuery(query0);
}
bool  PythonQtShell_QGraphicsTextItem::isObscuredBy(const QGraphicsItem*  item0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isObscuredBy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QGraphicsItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&item0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isObscuredBy", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::isObscuredBy(item0);
}
void PythonQtShell_QGraphicsTextItem::keyPressEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keyPressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::keyPressEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::keyReleaseEvent(QKeyEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keyReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QKeyEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::keyReleaseEvent(event0);
}
const QMetaObject*  PythonQtShell_QGraphicsTextItem::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::metaObject();
}
void PythonQtShell_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseDoubleClickEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::mouseDoubleClickEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseMoveEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::mouseMoveEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mousePressEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::mousePressEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mouseReleaseEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsSceneMouseEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::mouseReleaseEvent(event0);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::opaqueArea() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("opaqueArea");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("opaqueArea", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::opaqueArea();
}
void PythonQtShell_QGraphicsTextItem::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QStyleOptionGraphicsItem*" , "QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&painter0, (void*)&option1, (void*)&widget2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::paint(painter0, option1, widget2);
}
void*  PythonQtShell_QGraphicsTextItem::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::qt_metacast(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::sceneEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sceneEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sceneEvent", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::sceneEvent(event0);
}
void PythonQtShell_QGraphicsTextItem::setExtension(QGraphicsItem::Extension  extension0, const QVariant&  variant1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QGraphicsItem::Extension" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&extension0, (void*)&variant1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QGraphicsTextItem::setExtension(extension0, variant1);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::shape() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("shape");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainterPath"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainterPath returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("shape", methodInfo, result);
          } else {
            returnValue = *((QPainterPath*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::shape();
}
bool  PythonQtShell_QGraphicsTextItem::supportsExtension(QGraphicsItem::Extension  extension0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportsExtension");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QGraphicsItem::Extension"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&extension0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportsExtension", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::supportsExtension(extension0);
}
int  PythonQtShell_QGraphicsTextItem::type() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("type");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("type", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QGraphicsTextItem::type();
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(parent); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent); }

const QMetaObject* PythonQtShell_QGraphicsTextItem::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QGraphicsTextItem::staticMetaObject);
  } else {
    return &QGraphicsTextItem::staticMetaObject;
  }
}
int PythonQtShell_QGraphicsTextItem::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QGraphicsTextItem::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->boundingRect());
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
  return ( theWrappedObject->contains(point));
}

void PythonQtWrapper_QGraphicsTextItem::contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_contextMenuEvent(event));
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextColor());
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QGraphicsTextItem::dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragEnterEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dragMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_dropEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsTextItem::extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_extension(variant));
}

void PythonQtWrapper_QGraphicsTextItem::focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_focusInEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_focusOutEvent(event));
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

void PythonQtWrapper_QGraphicsTextItem::hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverEnterEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverLeaveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_hoverMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_inputMethodEvent(event));
}

QVariant  PythonQtWrapper_QGraphicsTextItem::inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_inputMethodQuery(query));
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
  return ( theWrappedObject->isObscuredBy(item));
}

void PythonQtWrapper_QGraphicsTextItem::keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_keyPressEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_keyReleaseEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::linkActivated(QGraphicsTextItem* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->linkActivated(arg__1));
}

void PythonQtWrapper_QGraphicsTextItem::linkHovered(QGraphicsTextItem* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->linkHovered(arg__1));
}

void PythonQtWrapper_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseDoubleClickEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseMoveEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mousePressEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_mouseReleaseEvent(event));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->opaqueArea());
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
  ( theWrappedObject->paint(painter, option, widget));
}

bool  PythonQtWrapper_QGraphicsTextItem::sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_sceneEvent(event));
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
  ( theWrappedObject->setDefaultTextColor(c));
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QGraphicsTextItem::setExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension, const QVariant&  variant)
{
  ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_setExtension(extension, variant));
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QGraphicsTextItem::setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->shape());
}

bool  PythonQtWrapper_QGraphicsTextItem::supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const
{
  return ( ((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->promoted_supportsExtension(extension));
}

bool  PythonQtWrapper_QGraphicsTextItem::tabChangesFocus(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QHBoxLayout::~PythonQtShell_QHBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QHBoxLayout::metaObject() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaObject");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"const QMetaObject*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      const QMetaObject* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaObject", methodInfo, result);
          } else {
            returnValue = *((const QMetaObject**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHBoxLayout::metaObject();
}
void*  PythonQtShell_QHBoxLayout::qt_metacast(const char*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("qt_metacast");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"void*" , "const char*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("qt_metacast", methodInfo, result);
          } else {
            returnValue = *((void**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHBoxLayout::qt_metacast(arg__1);
}
QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout()
{ 
return new PythonQtShell_QHBoxLayout(); }

QHBoxLayout* PythonQtWrapper_QHBoxLayout::new_QHBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QHBoxLayout(parent); }

const QMetaObject*  PythonQtWrapper_QHBoxLayout::metaObject(QHBoxLayout* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QHBoxLayout::qt_metacast(QHBoxLayout* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}



PythonQtShell_QHelpEvent::~PythonQtShell_QHelpEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHelpEvent*  PythonQtShell_QHelpEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHelpEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHelpEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QHelpEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHelpEvent::clone();
}
QHelpEvent* PythonQtWrapper_QHelpEvent::new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos)
{ 
return new PythonQtShell_QHelpEvent(type, pos, globalPos); }

QHelpEvent*  PythonQtWrapper_QHelpEvent::clone(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

const QPoint*  PythonQtWrapper_QHelpEvent::globalPos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->globalPos());
}

int  PythonQtWrapper_QHelpEvent::globalX(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalX());
}

int  PythonQtWrapper_QHelpEvent::globalY(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->globalY());
}

QHelpEvent*  PythonQtWrapper_QHelpEvent::operator_assign(QHelpEvent* theWrappedObject, QHelpEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

const QPoint*  PythonQtWrapper_QHelpEvent::pos(QHelpEvent* theWrappedObject) const
{
  return &( theWrappedObject->pos());
}

int  PythonQtWrapper_QHelpEvent::x(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QHelpEvent::y(QHelpEvent* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



PythonQtShell_QHideEvent::~PythonQtShell_QHideEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHideEvent* PythonQtWrapper_QHideEvent::new_QHideEvent()
{ 
return new PythonQtShell_QHideEvent(); }

QHideEvent*  PythonQtWrapper_QHideEvent::operator_assign(QHideEvent* theWrappedObject, QHideEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QHoverEvent::~PythonQtShell_QHoverEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QHoverEvent*  PythonQtShell_QHoverEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHoverEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHoverEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QHoverEvent**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHoverEvent::clone();
}
bool  PythonQtShell_QHoverEvent::isUpdateEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isUpdateEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isUpdateEvent", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHoverEvent::isUpdateEvent();
}
QHoverEvent*  PythonQtWrapper_QHoverEvent::clone(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QHoverEvent::isUpdateEvent(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->isUpdateEvent());
}

QPoint  PythonQtWrapper_QHoverEvent::oldPos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPos());
}

QPointF  PythonQtWrapper_QHoverEvent::oldPosF(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldPosF());
}

QHoverEvent*  PythonQtWrapper_QHoverEvent::operator_assign(QHoverEvent* theWrappedObject, QHoverEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QPoint  PythonQtWrapper_QHoverEvent::pos(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QPointF  PythonQtWrapper_QHoverEvent::posF(QHoverEvent* theWrappedObject) const
{
  return ( theWrappedObject->posF());
}



PythonQtShell_QIconDragEvent::~PythonQtShell_QIconDragEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QIconDragEvent* PythonQtWrapper_QIconDragEvent::new_QIconDragEvent()
{ 
return new PythonQtShell_QIconDragEvent(); }

QIconDragEvent*  PythonQtWrapper_QIconDragEvent::operator_assign(QIconDragEvent* theWrappedObject, QIconDragEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QIconEngine::~PythonQtShell_QIconEngine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSize  PythonQtShell_QIconEngine::actualSize(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("actualSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QSize&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QSize returnValue{};
      void* args[4] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("actualSize", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::actualSize(size0, mode1, state2);
}
void PythonQtShell_QIconEngine::addFile(const QString&  fileName0, const QSize&  size1, QIcon::Mode  mode2, QIcon::State  state3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("addFile");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "const QSize&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {NULL, (void*)&fileName0, (void*)&size1, (void*)&mode2, (void*)&state3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIconEngine::addFile(fileName0, size1, mode2, state3);
}
void PythonQtShell_QIconEngine::addPixmap(const QPixmap&  pixmap0, QIcon::Mode  mode1, QIcon::State  state2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("addPixmap");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QPixmap&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&pixmap0, (void*)&mode1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIconEngine::addPixmap(pixmap0, mode1, state2);
}
QList<QSize >  PythonQtShell_QIconEngine::availableSizes(QIcon::Mode  mode0, QIcon::State  state1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("availableSizes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QSize >" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QList<QSize > returnValue{};
      void* args[3] = {NULL, (void*)&mode0, (void*)&state1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("availableSizes", methodInfo, result);
          } else {
            returnValue = *((QList<QSize >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::availableSizes(mode0, state1);
}
QIconEngine*  PythonQtShell_QIconEngine::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIconEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QIconEngine* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QIconEngine**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return 0;
}
QString  PythonQtShell_QIconEngine::iconName()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("iconName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("iconName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::iconName();
}
bool  PythonQtShell_QIconEngine::isNull()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isNull");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isNull", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::isNull();
}
QString  PythonQtShell_QIconEngine::key() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("key");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("key", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::key();
}
void PythonQtShell_QIconEngine::paint(QPainter*  painter0, const QRect&  rect1, QIcon::Mode  mode2, QIcon::State  state3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*" , "const QRect&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {NULL, (void*)&painter0, (void*)&rect1, (void*)&mode2, (void*)&state3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QPixmap  PythonQtShell_QIconEngine::pixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pixmap");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPixmap" , "const QSize&" , "QIcon::Mode" , "QIcon::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QPixmap returnValue{};
      void* args[4] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pixmap", methodInfo, result);
          } else {
            returnValue = *((QPixmap*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::pixmap(size0, mode1, state2);
}
bool  PythonQtShell_QIconEngine::read(QDataStream&  in0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("read");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&in0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("read", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::read(in0);
}
QPixmap  PythonQtShell_QIconEngine::scaledPixmap(const QSize&  size0, QIcon::Mode  mode1, QIcon::State  state2, qreal  scale3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("scaledPixmap");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPixmap" , "const QSize&" , "QIcon::Mode" , "QIcon::State" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QPixmap returnValue{};
      void* args[5] = {NULL, (void*)&size0, (void*)&mode1, (void*)&state2, (void*)&scale3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("scaledPixmap", methodInfo, result);
          } else {
            returnValue = *((QPixmap*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::scaledPixmap(size0, mode1, state2, scale3);
}
void PythonQtShell_QIconEngine::virtual_hook(int  id0, void*  data1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("virtual_hook");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "void*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&id0, (void*)&data1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIconEngine::virtual_hook(id0, data1);
}
bool  PythonQtShell_QIconEngine::write(QDataStream&  out0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("write");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&out0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("write", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIconEngine::write(out0);
}
QIconEngine* PythonQtWrapper_QIconEngine::new_QIconEngine()
{ 
return new PythonQtShell_QIconEngine(); }

QIconEngine* PythonQtWrapper_QIconEngine::new_QIconEngine(const QIconEngine&  other)
{ 
return new PythonQtShell_QIconEngine(other); }

QSize  PythonQtWrapper_QIconEngine::actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->actualSize(size, mode, state));
}

void PythonQtWrapper_QIconEngine::addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  ( theWrappedObject->addFile(fileName, size, mode, state));
}

void PythonQtWrapper_QIconEngine::addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state)
{
  ( theWrappedObject->addPixmap(pixmap, mode, state));
}

QList<QSize >  PythonQtWrapper_QIconEngine::availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->availableSizes(mode, state));
}

QIconEngine*  PythonQtWrapper_QIconEngine::clone(QIconEngine* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QString  PythonQtWrapper_QIconEngine::iconName(QIconEngine* theWrappedObject)
{
  return ( theWrappedObject->iconName());
}

bool  PythonQtWrapper_QIconEngine::isNull(QIconEngine* theWrappedObject)
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QIconEngine::key(QIconEngine* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

void PythonQtWrapper_QIconEngine::paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state)
{
  ( theWrappedObject->paint(painter, rect, mode, state));
}

QPixmap  PythonQtWrapper_QIconEngine::pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state)
{
  return ( theWrappedObject->pixmap(size, mode, state));
}

bool  PythonQtWrapper_QIconEngine::read(QIconEngine* theWrappedObject, QDataStream&  in)
{
  return ( theWrappedObject->read(in));
}

QPixmap  PythonQtWrapper_QIconEngine::scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale)
{
  return ( theWrappedObject->scaledPixmap(size, mode, state, scale));
}

void PythonQtWrapper_QIconEngine::virtual_hook(QIconEngine* theWrappedObject, int  id, void*  data)
{
  ( theWrappedObject->virtual_hook(id, data));
}

bool  PythonQtWrapper_QIconEngine::write(QIconEngine* theWrappedObject, QDataStream&  out) const
{
  return ( theWrappedObject->write(out));
}


