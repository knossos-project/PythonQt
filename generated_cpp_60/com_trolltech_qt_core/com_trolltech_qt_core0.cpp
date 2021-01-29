#include "com_trolltech_qt_core0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearraymatcher.h>
#include <qcommandlineparser.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdiriterator.h>
#include <qevent.h>
#include <qlogging.h>
#include <qloggingcategory.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedatabase.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsemaphore.h>
#include <qstringmatcher.h>
#include <qurl.h>

PythonQtShell_QAbstractListModel::~PythonQtShell_QAbstractListModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QAbstractListModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
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
  return QAbstractListModel::dropMimeData(data0, action1, row2, column3, parent4);
}
Qt::ItemFlags  PythonQtShell_QAbstractListModel::flags(const QModelIndex&  index0) const
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
  return QAbstractListModel::flags(index0);
}
QModelIndex  PythonQtShell_QAbstractListModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
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
  return QAbstractListModel::index(row0, column1, parent2);
}
const QMetaObject*  PythonQtShell_QAbstractListModel::metaObject() const
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
  return QAbstractListModel::metaObject();
}
void*  PythonQtShell_QAbstractListModel::qt_metacast(const char*  arg__1)
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
  return QAbstractListModel::qt_metacast(arg__1);
}
QModelIndex  PythonQtShell_QAbstractListModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
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
  return QAbstractListModel::sibling(row0, column1, idx2);
}
QAbstractListModel* PythonQtWrapper_QAbstractListModel::new_QAbstractListModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractListModel(parent); }

bool  PythonQtWrapper_QAbstractListModel::dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->dropMimeData(data, action, row, column, parent));
}

Qt::ItemFlags  PythonQtWrapper_QAbstractListModel::flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->flags(index));
}

QModelIndex  PythonQtWrapper_QAbstractListModel::index(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->index(row, column, parent));
}

const QMetaObject*  PythonQtWrapper_QAbstractListModel::metaObject(QAbstractListModel* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QAbstractListModel::qt_metacast(QAbstractListModel* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

QModelIndex  PythonQtWrapper_QAbstractListModel::sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
  return ( theWrappedObject->sibling(row, column, idx));
}



PythonQtShell_QApplicationStateChangeEvent::~PythonQtShell_QApplicationStateChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QApplicationStateChangeEvent*  PythonQtShell_QApplicationStateChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QApplicationStateChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QApplicationStateChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QApplicationStateChangeEvent**)args[0]);
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
  return QApplicationStateChangeEvent::clone();
}
QApplicationStateChangeEvent* PythonQtWrapper_QApplicationStateChangeEvent::new_QApplicationStateChangeEvent(Qt::ApplicationState  state)
{ 
return new PythonQtShell_QApplicationStateChangeEvent(state); }

Qt::ApplicationState  PythonQtWrapper_QApplicationStateChangeEvent::applicationState(QApplicationStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->applicationState());
}

QApplicationStateChangeEvent*  PythonQtWrapper_QApplicationStateChangeEvent::clone(QApplicationStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QApplicationStateChangeEvent*  PythonQtWrapper_QApplicationStateChangeEvent::operator_assign(QApplicationStateChangeEvent* theWrappedObject, QApplicationStateChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher()
{ 
return new QByteArrayMatcher(); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArray&  pattern)
{ 
return new QByteArrayMatcher(pattern); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArrayMatcher&  other)
{ 
return new QByteArrayMatcher(other); }

QByteArray  PythonQtWrapper_QByteArrayMatcher::pattern(QByteArrayMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

void PythonQtWrapper_QByteArrayMatcher::setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}



PythonQtShell_QChildEvent::~PythonQtShell_QChildEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QChildEvent*  PythonQtShell_QChildEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QChildEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QChildEvent**)args[0]);
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
  return QChildEvent::clone();
}
QChildEvent* PythonQtWrapper_QChildEvent::new_QChildEvent(QEvent::Type  type, QObject*  child)
{ 
return new PythonQtShell_QChildEvent(type, child); }

bool  PythonQtWrapper_QChildEvent::added(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->added());
}

QObject*  PythonQtWrapper_QChildEvent::child(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->child());
}

QChildEvent*  PythonQtWrapper_QChildEvent::clone(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QChildEvent*  PythonQtWrapper_QChildEvent::operator_assign(QChildEvent* theWrappedObject, QChildEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QChildEvent::polished(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->polished());
}

bool  PythonQtWrapper_QChildEvent::removed(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->removed());
}



QCommandLineOption  PythonQtWrapper_QCommandLineParser::addHelpOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addHelpOption());
}

bool  PythonQtWrapper_QCommandLineParser::addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption)
{
  return ( theWrappedObject->addOption(commandLineOption));
}

bool  PythonQtWrapper_QCommandLineParser::addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options)
{
  return ( theWrappedObject->addOptions(options));
}

void PythonQtWrapper_QCommandLineParser::addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax)
{
  ( theWrappedObject->addPositionalArgument(name, description, syntax));
}

QCommandLineOption  PythonQtWrapper_QCommandLineParser::addVersionOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addVersionOption());
}

QString  PythonQtWrapper_QCommandLineParser::applicationDescription(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->applicationDescription());
}

void PythonQtWrapper_QCommandLineParser::clearPositionalArguments(QCommandLineParser* theWrappedObject)
{
  ( theWrappedObject->clearPositionalArguments());
}

QString  PythonQtWrapper_QCommandLineParser::errorText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->errorText());
}

QString  PythonQtWrapper_QCommandLineParser::helpText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->helpText());
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->isSet(option));
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isSet(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::optionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->optionNames());
}

bool  PythonQtWrapper_QCommandLineParser::parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments)
{
  return ( theWrappedObject->parse(arguments));
}

QStringList  PythonQtWrapper_QCommandLineParser::positionalArguments(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->positionalArguments());
}

void PythonQtWrapper_QCommandLineParser::process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app)
{
  ( theWrappedObject->process(app));
}

void PythonQtWrapper_QCommandLineParser::process(QCommandLineParser* theWrappedObject, const QStringList&  arguments)
{
  ( theWrappedObject->process(arguments));
}

void PythonQtWrapper_QCommandLineParser::setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description)
{
  ( theWrappedObject->setApplicationDescription(description));
}

void PythonQtWrapper_QCommandLineParser::setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode)
{
  ( theWrappedObject->setOptionsAfterPositionalArgumentsMode(mode));
}

void PythonQtWrapper_QCommandLineParser::setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode)
{
  ( theWrappedObject->setSingleDashWordOptionMode(parsingMode));
}

void PythonQtWrapper_QCommandLineParser::showHelp(QCommandLineParser* theWrappedObject, int  exitCode)
{
  ( theWrappedObject->showHelp(exitCode));
}

void PythonQtWrapper_QCommandLineParser::showVersion(QCommandLineParser* theWrappedObject)
{
  ( theWrappedObject->showVersion());
}

QString  PythonQtWrapper_QCommandLineParser::static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation, int  n)
{
  return (QCommandLineParser::tr(sourceText, disambiguation, n));
}

QStringList  PythonQtWrapper_QCommandLineParser::unknownOptionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->unknownOptionNames());
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->value(option));
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->values(option));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->values(name));
}



void PythonQtWrapper_QDataStream::abortTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->abortTransaction());
}

bool  PythonQtWrapper_QDataStream::atEnd(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QDataStream::ByteOrder  PythonQtWrapper_QDataStream::byteOrder(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->byteOrder());
}

bool  PythonQtWrapper_QDataStream::commitTransaction(QDataStream* theWrappedObject)
{
  return ( theWrappedObject->commitTransaction());
}

QIODevice*  PythonQtWrapper_QDataStream::device(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QDataStream::FloatingPointPrecision  PythonQtWrapper_QDataStream::floatingPointPrecision(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->floatingPointPrecision());
}

bool  PythonQtWrapper_QDataStream::isDeviceTransactionStarted(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->isDeviceTransactionStarted());
}

QDataStream*  PythonQtWrapper_QDataStream::__lshift__(QDataStream* theWrappedObject, char  i)
{
  return &( (*theWrappedObject) <<i);
}

QDataStream*  PythonQtWrapper_QDataStream::__rshift__(QDataStream* theWrappedObject, char&  i)
{
  return &( (*theWrappedObject) >>i);
}

void PythonQtWrapper_QDataStream::resetStatus(QDataStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

void PythonQtWrapper_QDataStream::rollbackTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->rollbackTransaction());
}

void PythonQtWrapper_QDataStream::setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1)
{
  ( theWrappedObject->setByteOrder(arg__1));
}

void PythonQtWrapper_QDataStream::setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1)
{
  ( theWrappedObject->setDevice(arg__1));
}

void PythonQtWrapper_QDataStream::setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision)
{
  ( theWrappedObject->setFloatingPointPrecision(precision));
}

void PythonQtWrapper_QDataStream::setStatus(QDataStream* theWrappedObject, QDataStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

void PythonQtWrapper_QDataStream::setVersion(QDataStream* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setVersion(arg__1));
}

int  PythonQtWrapper_QDataStream::skipRawData(QDataStream* theWrappedObject, int  len)
{
  return ( theWrappedObject->skipRawData(len));
}

void PythonQtWrapper_QDataStream::startTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->startTransaction());
}

QDataStream::Status  PythonQtWrapper_QDataStream::status(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

int  PythonQtWrapper_QDataStream::version(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->version());
}



PythonQtShell_QDeferredDeleteEvent::~PythonQtShell_QDeferredDeleteEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDeferredDeleteEvent*  PythonQtShell_QDeferredDeleteEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDeferredDeleteEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDeferredDeleteEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDeferredDeleteEvent**)args[0]);
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
  return QDeferredDeleteEvent::clone();
}
QDeferredDeleteEvent* PythonQtWrapper_QDeferredDeleteEvent::new_QDeferredDeleteEvent()
{ 
return new PythonQtShell_QDeferredDeleteEvent(); }

QDeferredDeleteEvent*  PythonQtWrapper_QDeferredDeleteEvent::clone(QDeferredDeleteEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

int  PythonQtWrapper_QDeferredDeleteEvent::loopLevel(QDeferredDeleteEvent* theWrappedObject) const
{
  return ( theWrappedObject->loopLevel());
}

QDeferredDeleteEvent*  PythonQtWrapper_QDeferredDeleteEvent::operator_assign(QDeferredDeleteEvent* theWrappedObject, QDeferredDeleteEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



QFileInfo  PythonQtWrapper_QDirIterator::fileInfo(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileInfo());
}

QString  PythonQtWrapper_QDirIterator::fileName(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QDirIterator::filePath(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QDirIterator::hasNext(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

QString  PythonQtWrapper_QDirIterator::next(QDirIterator* theWrappedObject)
{
  return ( theWrappedObject->next());
}

QString  PythonQtWrapper_QDirIterator::path(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->path());
}



PythonQtShell_QDynamicPropertyChangeEvent::~PythonQtShell_QDynamicPropertyChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QDynamicPropertyChangeEvent*  PythonQtShell_QDynamicPropertyChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QDynamicPropertyChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QDynamicPropertyChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QDynamicPropertyChangeEvent**)args[0]);
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
  return QDynamicPropertyChangeEvent::clone();
}
QDynamicPropertyChangeEvent* PythonQtWrapper_QDynamicPropertyChangeEvent::new_QDynamicPropertyChangeEvent(const QByteArray&  name)
{ 
return new PythonQtShell_QDynamicPropertyChangeEvent(name); }

QDynamicPropertyChangeEvent*  PythonQtWrapper_QDynamicPropertyChangeEvent::clone(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QDynamicPropertyChangeEvent*  PythonQtWrapper_QDynamicPropertyChangeEvent::operator_assign(QDynamicPropertyChangeEvent* theWrappedObject, QDynamicPropertyChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QByteArray  PythonQtWrapper_QDynamicPropertyChangeEvent::propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}



PythonQtShell_QFactoryInterface::~PythonQtShell_QFactoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QFactoryInterface::keys() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("keys");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("keys", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
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
  return QStringList();
}
QFactoryInterface* PythonQtWrapper_QFactoryInterface::new_QFactoryInterface()
{ 
return new PythonQtShell_QFactoryInterface(); }

QStringList  PythonQtWrapper_QFactoryInterface::keys(QFactoryInterface* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}



PythonQtShell_QJsonParseError::~PythonQtShell_QJsonParseError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonParseError* PythonQtWrapper_QJsonParseError::new_QJsonParseError()
{ 
return new PythonQtShell_QJsonParseError(); }

QString  PythonQtWrapper_QJsonParseError::errorString(QJsonParseError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}



bool  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_isDebugBuild()
{
  return (QLibraryInfo::isDebugBuild());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  location)
{
  return (QLibraryInfo::location(location));
}

QStringList  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_platformPluginArguments(const QString&  platformName)
{
  return (QLibraryInfo::platformPluginArguments(platformName));
}



const char*  PythonQtWrapper_QLoggingCategory::categoryName(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->categoryName());
}

QLoggingCategory*  PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_defaultCategory()
{
  return (QLoggingCategory::defaultCategory());
}

bool  PythonQtWrapper_QLoggingCategory::isCriticalEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isCriticalEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isDebugEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isDebugEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const
{
  return ( theWrappedObject->isEnabled(type));
}

bool  PythonQtWrapper_QLoggingCategory::isInfoEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isInfoEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isWarningEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isWarningEnabled());
}

void PythonQtWrapper_QLoggingCategory::setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable)
{
  ( theWrappedObject->setEnabled(type, enable));
}

void PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_setFilterRules(const QString&  rules)
{
  (QLoggingCategory::setFilterRules(rules));
}



bool  PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method)
{
  return (QMessageAuthenticationCode::hash(message, key, method));
}

void PythonQtWrapper_QMessageAuthenticationCode::reset(QMessageAuthenticationCode* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::result(QMessageAuthenticationCode* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

void PythonQtWrapper_QMessageAuthenticationCode::setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->setKey(key));
}



PythonQtShell_QMessageLogContext::~PythonQtShell_QMessageLogContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMessageLogContext* PythonQtWrapper_QMessageLogContext::new_QMessageLogContext()
{ 
return new PythonQtShell_QMessageLogContext(); }



PythonQtShell_QMessageLogger::~PythonQtShell_QMessageLogger() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger()
{ 
return new PythonQtShell_QMessageLogger(); }

QMessageLogger  PythonQtWrapper_QMessageLogger::context(QMessageLogger* theWrappedObject)
{
  return ( theWrappedObject->context());
}



PythonQtShell_QMetaClassInfo::~PythonQtShell_QMetaClassInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new PythonQtShell_QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaEnum::enumName(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enumName());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isScoped(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isScoped());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::key(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->key(index));
}

int  PythonQtWrapper_QMetaEnum::keyCount(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->keyCount());
}

int  PythonQtWrapper_QMetaEnum::keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok) const
{
  return ( theWrappedObject->keyToValue(key, ok));
}

int  PythonQtWrapper_QMetaEnum::keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok) const
{
  return ( theWrappedObject->keysToValue(keys, ok));
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

int  PythonQtWrapper_QMetaEnum::value(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->value(index));
}

const char*  PythonQtWrapper_QMetaEnum::valueToKey(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKey(value));
}

QByteArray  PythonQtWrapper_QMetaEnum::valueToKeys(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKeys(value));
}



const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isAlias(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isAlias());
}

bool  PythonQtWrapper_QMetaProperty::isBindable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isBindable());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isDesignable());
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isRequired(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isRequired());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isScriptable());
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isStored());
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isUser());
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QMetaType  PythonQtWrapper_QMetaProperty::metaType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->metaType());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

int  PythonQtWrapper_QMetaProperty::notifySignalIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignalIndex());
}

int  PythonQtWrapper_QMetaProperty::propertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyIndex());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

QVariant  PythonQtWrapper_QMetaProperty::readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const
{
  return ( theWrappedObject->readOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::relativePropertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->relativePropertyIndex());
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

bool  PythonQtWrapper_QMetaProperty::resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const
{
  return ( theWrappedObject->resetOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::revision(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

int  PythonQtWrapper_QMetaProperty::typeId(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeId());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

int  PythonQtWrapper_QMetaProperty::userType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->userType());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}

bool  PythonQtWrapper_QMetaProperty::writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const
{
  return ( theWrappedObject->writeOnGadget(gadget, value));
}



QMetaType* PythonQtWrapper_QMetaType::new_QMetaType(int  type)
{ 
return new QMetaType(type); }

QMetaType  PythonQtWrapper_QMetaType::alignOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->alignOf());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canConvert(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_canView(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::canView(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::compare(lhs, rhs, typeId, result));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, void*  where, const void*  copy)
{
  return (QMetaType::construct(type, where, copy));
}

void*  PythonQtWrapper_QMetaType::construct(QMetaType* theWrappedObject, void*  where, const void*  copy) const
{
  return ( theWrappedObject->construct(where, copy));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(QMetaType  fromType, const void*  from, QMetaType  toType, void*  to)
{
  return (QMetaType::convert(fromType, from, toType, to));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId)
{
  return (QMetaType::convert(from, fromTypeId, to, toTypeId));
}

void*  PythonQtWrapper_QMetaType::create(QMetaType* theWrappedObject, const void*  copy) const
{
  return ( theWrappedObject->create(copy));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_create(int  type, const void*  copy)
{
  return (QMetaType::create(type, copy));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destroy(int  type, void*  data)
{
  (QMetaType::destroy(type, data));
}

void PythonQtWrapper_QMetaType::destroy(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destroy(data));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destruct(int  type, void*  where)
{
  (QMetaType::destruct(type, where));
}

void PythonQtWrapper_QMetaType::destruct(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destruct(data));
}

bool  PythonQtWrapper_QMetaType::equals(QMetaType* theWrappedObject, const void*  lhs, const void*  rhs) const
{
  return ( theWrappedObject->equals(lhs, rhs));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::equals(lhs, rhs, typeId, result));
}

QMetaType  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QMetaType  PythonQtWrapper_QMetaType::static_QMetaType_fromType()
{
  return (QMetaType::fromType());
}

QMetaType  PythonQtWrapper_QMetaType::fromType<T>(QMetaType* theWrappedObject)
{
  return ( theWrappedObject->fromType<T>());
}

QMetaType  PythonQtWrapper_QMetaType::fromType<T>(QMetaType* theWrappedObject)
{
  return ( theWrappedObject->fromType<T>());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredConverterFunction(fromType, toType));
}

bool  PythonQtWrapper_QMetaType::hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->hasRegisteredDebugStreamOperator());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId)
{
  return (QMetaType::hasRegisteredDebugStreamOperator(typeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredMutableViewFunction()
{
  return (QMetaType::hasRegisteredMutableViewFunction());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType)
{
  return (QMetaType::hasRegisteredMutableViewFunction(fromType, toType));
}

int  PythonQtWrapper_QMetaType::id(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QMetaType::isEqualityComparable(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isEqualityComparable());
}

bool  PythonQtWrapper_QMetaType::isOrdered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isOrdered());
}

bool  PythonQtWrapper_QMetaType::isRegistered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isRegistered());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_isRegistered(int  type)
{
  return (QMetaType::isRegistered(type));
}

bool  PythonQtWrapper_QMetaType::isValid(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_load(QDataStream&  stream, int  type, void*  data)
{
  return (QMetaType::load(stream, type, data));
}

bool  PythonQtWrapper_QMetaType::load(QMetaType* theWrappedObject, QDataStream&  stream, void*  data) const
{
  return ( theWrappedObject->load(stream, data));
}

QMetaType  PythonQtWrapper_QMetaType::metaObject(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const QMetaObject*  PythonQtWrapper_QMetaType::static_QMetaType_metaObjectForType(int  type)
{
  return (QMetaType::metaObjectForType(type));
}

char*  PythonQtWrapper_QMetaType::name(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QMetaType::static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, QMetaType  type)
{
  (QMetaType::registerNormalizedTypedef(normalizedTypeName, type));
}

bool  PythonQtWrapper_QMetaType::save(QMetaType* theWrappedObject, QDataStream&  stream, const void*  data) const
{
  return ( theWrappedObject->save(stream, data));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_save(QDataStream&  stream, int  type, const void*  data)
{
  return (QMetaType::save(stream, type, data));
}

QMetaType  PythonQtWrapper_QMetaType::sizeOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->sizeOf());
}

int  PythonQtWrapper_QMetaType::static_QMetaType_sizeOf(int  type)
{
  return (QMetaType::sizeOf(type));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const QByteArray&  typeName)
{
  return (QMetaType::type(typeName));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const char*  typeName)
{
  return (QMetaType::type(typeName));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::static_QMetaType_typeFlags(int  type)
{
  return (QMetaType::typeFlags(type));
}

const char*  PythonQtWrapper_QMetaType::static_QMetaType_typeName(int  type)
{
  return (QMetaType::typeName(type));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterConverterFunction(QMetaType  from, QMetaType  to)
{
  (QMetaType::unregisterConverterFunction(from, to));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterMetaType(QMetaType  type)
{
  (QMetaType::unregisterMetaType(type));
}

void PythonQtWrapper_QMetaType::static_QMetaType_unregisterMutableViewFunction(QMetaType  from, QMetaType  to)
{
  (QMetaType::unregisterMutableViewFunction(from, to));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_view(QMetaType  fromType, void*  from, QMetaType  toType, void*  to)
{
  return (QMetaType::view(fromType, from, toType, to));
}



QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



PythonQtShell_QOperatingSystemVersion::~PythonQtShell_QOperatingSystemVersion() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersion* PythonQtWrapper_QOperatingSystemVersion::new_QOperatingSystemVersion()
{ 
return new PythonQtShell_QOperatingSystemVersion(); }

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::current(QOperatingSystemVersion* theWrappedObject)
{
  return ( theWrappedObject->current());
}

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::currentType(QOperatingSystemVersion* theWrappedObject)
{
  return ( theWrappedObject->currentType());
}

int  PythonQtWrapper_QOperatingSystemVersion::majorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::microVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->microVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::minorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QString  PythonQtWrapper_QOperatingSystemVersion::name(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

int  PythonQtWrapper_QOperatingSystemVersion::segmentCount(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->segmentCount());
}

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::type(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QOperatingSystemVersion::py_toString(QOperatingSystemVersion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const QRandomGenerator&  other)
{ 
return new QRandomGenerator64(other); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator64(begin, end); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(unsigned int  seedValue)
{ 
return new QRandomGenerator64(seedValue); }

void PythonQtWrapper_QRandomGenerator64::discard(QRandomGenerator64* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

quint64  PythonQtWrapper_QRandomGenerator64::generate(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_global()
{
  return (QRandomGenerator64::global());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::max(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->max());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::min(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->min());
}

quint64  PythonQtWrapper_QRandomGenerator64::operator_cast_(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_securelySeeded()
{
  return (QRandomGenerator64::securelySeeded());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_system()
{
  return (QRandomGenerator64::system());
}



QReadWriteLock*  PythonQtWrapper_QReadLocker::readWriteLock(QReadLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QReadLocker::relock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QReadLocker::unlock(QReadLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForRead());
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QRunnable::~PythonQtShell_QRunnable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRunnable::run()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("run");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
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
QRunnable* PythonQtWrapper_QRunnable::new_QRunnable()
{ 
return new PythonQtShell_QRunnable(); }

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
  return ( theWrappedObject->autoDelete());
}

void PythonQtWrapper_QRunnable::run(QRunnable* theWrappedObject)
{
  ( theWrappedObject->run());
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  autoDelete)
{
  ( theWrappedObject->setAutoDelete(autoDelete));
}



void PythonQtWrapper_QSemaphore::acquire(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->acquire(n));
}

int  PythonQtWrapper_QSemaphore::available(QSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->available());
}

void PythonQtWrapper_QSemaphore::release(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->release(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->tryAcquire(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout)
{
  return ( theWrappedObject->tryAcquire(n, timeout));
}



PythonQtShell_QSignalBlocker::~PythonQtShell_QSignalBlocker() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSignalBlocker* PythonQtWrapper_QSignalBlocker::new_QSignalBlocker()
{ 
return new PythonQtShell_QSignalBlocker(); }



QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

void PythonQtWrapper_QStringMatcher::setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

void PythonQtWrapper_QStringMatcher::setPattern(QStringMatcher* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}



PythonQtShell_QSysInfo::~PythonQtShell_QSysInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSysInfo* PythonQtWrapper_QSysInfo::new_QSysInfo()
{ 
return new PythonQtShell_QSysInfo(); }

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_bootUniqueId()
{
  return (QSysInfo::bootUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildAbi()
{
  return (QSysInfo::buildAbi());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildCpuArchitecture()
{
  return (QSysInfo::buildCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_currentCpuArchitecture()
{
  return (QSysInfo::currentCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelType()
{
  return (QSysInfo::kernelType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelVersion()
{
  return (QSysInfo::kernelVersion());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_machineHostName()
{
  return (QSysInfo::machineHostName());
}

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_machineUniqueId()
{
  return (QSysInfo::machineUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_prettyProductName()
{
  return (QSysInfo::prettyProductName());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productType()
{
  return (QSysInfo::productType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productVersion()
{
  return (QSysInfo::productVersion());
}


