#include "com_trolltech_qt_gui4.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qboxlayout.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextformat.h>
#include <qtransform.h>
#include <qtreewidget.h>
#include <qundostack.h>

PythonQtShell_QTextTableCellFormat::~PythonQtShell_QTextTableCellFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableCellFormat(fmt); }

qreal  PythonQtWrapper_QTextTableCellFormat::bottomBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::bottomBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::bottomBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomPadding());
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::leftBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::leftBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::rightBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::rightBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightPadding());
}

void PythonQtWrapper_QTextTableCellFormat::setBorder(QTextTableCellFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setBorder(width));
}

void PythonQtWrapper_QTextTableCellFormat::setBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBorderBrush(brush));
}

void PythonQtWrapper_QTextTableCellFormat::setBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setBorderStyle(style));
}

void PythonQtWrapper_QTextTableCellFormat::setBottomBorder(QTextTableCellFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setBottomBorder(width));
}

void PythonQtWrapper_QTextTableCellFormat::setBottomBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBottomBorderBrush(brush));
}

void PythonQtWrapper_QTextTableCellFormat::setBottomBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setBottomBorderStyle(style));
}

void PythonQtWrapper_QTextTableCellFormat::setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setBottomPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftBorder(QTextTableCellFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setLeftBorder(width));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setLeftBorderBrush(brush));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setLeftBorderStyle(style));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setLeftPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setRightBorder(QTextTableCellFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setRightBorder(width));
}

void PythonQtWrapper_QTextTableCellFormat::setRightBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setRightBorderBrush(brush));
}

void PythonQtWrapper_QTextTableCellFormat::setRightBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setRightBorderStyle(style));
}

void PythonQtWrapper_QTextTableCellFormat::setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setRightPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setTopBorder(QTextTableCellFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTopBorder(width));
}

void PythonQtWrapper_QTextTableCellFormat::setTopBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setTopBorderBrush(brush));
}

void PythonQtWrapper_QTextTableCellFormat::setTopBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setTopBorderStyle(style));
}

void PythonQtWrapper_QTextTableCellFormat::setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setTopPadding(padding));
}

qreal  PythonQtWrapper_QTextTableCellFormat::topBorder(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorder());
}

QBrush  PythonQtWrapper_QTextTableCellFormat::topBorderBrush(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextTableCellFormat::topBorderStyle(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topBorderStyle());
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topPadding());
}



PythonQtShell_QTextTableFormat::~PythonQtShell_QTextTableFormat() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat(const QTextFormat&  fmt)
{ 
return new PythonQtShell_QTextTableFormat(fmt); }

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

bool  PythonQtWrapper_QTextTableFormat::borderCollapse(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderCollapse());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

void PythonQtWrapper_QTextTableFormat::clearColumnWidthConstraints(QTextTableFormat* theWrappedObject)
{
  ( theWrappedObject->clearColumnWidthConstraints());
}

QList<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

int  PythonQtWrapper_QTextTableFormat::columns(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

int  PythonQtWrapper_QTextTableFormat::headerRowCount(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->headerRowCount());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextTableFormat::setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextTableFormat::setBorderCollapse(QTextTableFormat* theWrappedObject, bool  borderCollapse)
{
  ( theWrappedObject->setBorderCollapse(borderCollapse));
}

void PythonQtWrapper_QTextTableFormat::setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setCellPadding(padding));
}

void PythonQtWrapper_QTextTableFormat::setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setCellSpacing(spacing));
}

void PythonQtWrapper_QTextTableFormat::setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QList<QTextLength >&  constraints)
{
  ( theWrappedObject->setColumnWidthConstraints(constraints));
}

void PythonQtWrapper_QTextTableFormat::setColumns(QTextTableFormat* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumns(columns));
}

void PythonQtWrapper_QTextTableFormat::setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count)
{
  ( theWrappedObject->setHeaderRowCount(count));
}



PythonQtShell_QTileRules::~PythonQtShell_QTileRules() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule)
{ 
return new PythonQtShell_QTileRules(horizontalRule, verticalRule); }

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  rule)
{ 
return new PythonQtShell_QTileRules(rule); }



PythonQtShell_QTimeEdit::~PythonQtShell_QTimeEdit() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QTimeEdit::metaObject() const
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
  return QTimeEdit::metaObject();
}
void*  PythonQtShell_QTimeEdit::qt_metacast(const char*  arg__1)
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
  return QTimeEdit::qt_metacast(arg__1);
}
QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(QTime  time, QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(time, parent); }

QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(parent); }

const QMetaObject*  PythonQtWrapper_QTimeEdit::metaObject(QTimeEdit* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QTimeEdit::qt_metacast(QTimeEdit* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}

void PythonQtWrapper_QTimeEdit::userTimeChanged(QTimeEdit* theWrappedObject, QTime  time)
{
  ( theWrappedObject->userTimeChanged(time));
}



PythonQtShell_QToolBarChangeEvent::~PythonQtShell_QToolBarChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QToolBarChangeEvent*  PythonQtShell_QToolBarChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QToolBarChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QToolBarChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QToolBarChangeEvent**)args[0]);
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
  return QToolBarChangeEvent::clone();
}
QToolBarChangeEvent* PythonQtWrapper_QToolBarChangeEvent::new_QToolBarChangeEvent(bool  t)
{ 
return new PythonQtShell_QToolBarChangeEvent(t); }

QToolBarChangeEvent*  PythonQtWrapper_QToolBarChangeEvent::clone(QToolBarChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QToolBarChangeEvent*  PythonQtWrapper_QToolBarChangeEvent::operator_assign(QToolBarChangeEvent* theWrappedObject, QToolBarChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QToolBarChangeEvent::toggle(QToolBarChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->toggle());
}



QFont  PythonQtWrapper_QToolTip::static_QToolTip_font()
{
  return (QToolTip::font());
}

void PythonQtWrapper_QToolTip::static_QToolTip_hideText()
{
  (QToolTip::hideText());
}

bool  PythonQtWrapper_QToolTip::static_QToolTip_isVisible()
{
  return (QToolTip::isVisible());
}

QPalette  PythonQtWrapper_QToolTip::static_QToolTip_palette()
{
  return (QToolTip::palette());
}

void PythonQtWrapper_QToolTip::static_QToolTip_setFont(const QFont&  arg__1)
{
  (QToolTip::setFont(arg__1));
}

void PythonQtWrapper_QToolTip::static_QToolTip_setPalette(const QPalette&  arg__1)
{
  (QToolTip::setPalette(arg__1));
}

QString  PythonQtWrapper_QToolTip::static_QToolTip_text()
{
  return (QToolTip::text());
}



PythonQtShell_QTouchEvent::~PythonQtShell_QTouchEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTouchEvent*  PythonQtShell_QTouchEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTouchEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTouchEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QTouchEvent**)args[0]);
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
  return QTouchEvent::clone();
}
bool  PythonQtShell_QTouchEvent::isBeginEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isBeginEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isBeginEvent", methodInfo, result);
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
  return QTouchEvent::isBeginEvent();
}
bool  PythonQtShell_QTouchEvent::isEndEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEndEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEndEvent", methodInfo, result);
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
  return QTouchEvent::isEndEvent();
}
bool  PythonQtShell_QTouchEvent::isUpdateEvent() const
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
  return QTouchEvent::isUpdateEvent();
}
QTouchEvent*  PythonQtWrapper_QTouchEvent::clone(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QTouchEvent::isBeginEvent(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->isBeginEvent());
}

bool  PythonQtWrapper_QTouchEvent::isEndEvent(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->isEndEvent());
}

bool  PythonQtWrapper_QTouchEvent::isUpdateEvent(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->isUpdateEvent());
}

QTouchEvent*  PythonQtWrapper_QTouchEvent::operator_assign(QTouchEvent* theWrappedObject, QTouchEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QObject*  PythonQtWrapper_QTouchEvent::target(QTouchEvent* theWrappedObject) const
{
  return ( theWrappedObject->target());
}



QTransform* PythonQtWrapper_QTransform::new_QTransform()
{ 
return new QTransform(); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy)
{ 
return new QTransform(h11, h12, h21, h22, dx, dy); }

QTransform  PythonQtWrapper_QTransform::adjoint(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->adjoint());
}

QTransform  PythonQtWrapper_QTransform::asAffineMatrix(QTransform* theWrappedObject)
{
  return ( theWrappedObject->asAffineMatrix());
}

qreal  PythonQtWrapper_QTransform::determinant(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->determinant());
}

qreal  PythonQtWrapper_QTransform::dx(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QTransform::dy(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QTransform  PythonQtWrapper_QTransform::static_QTransform_fromScale(qreal  dx, qreal  dy)
{
  return (QTransform::fromScale(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::static_QTransform_fromTranslate(qreal  dx, qreal  dy)
{
  return (QTransform::fromTranslate(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::inverted(QTransform* theWrappedObject, bool*  invertible) const
{
  return ( theWrappedObject->inverted(invertible));
}

bool  PythonQtWrapper_QTransform::isAffine(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isAffine());
}

bool  PythonQtWrapper_QTransform::isIdentity(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isIdentity());
}

bool  PythonQtWrapper_QTransform::isInvertible(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isInvertible());
}

bool  PythonQtWrapper_QTransform::isRotating(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isRotating());
}

bool  PythonQtWrapper_QTransform::isScaling(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isScaling());
}

bool  PythonQtWrapper_QTransform::isTranslating(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->isTranslating());
}

qreal  PythonQtWrapper_QTransform::m11(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m11());
}

qreal  PythonQtWrapper_QTransform::m12(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m12());
}

qreal  PythonQtWrapper_QTransform::m13(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m13());
}

qreal  PythonQtWrapper_QTransform::m21(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m21());
}

qreal  PythonQtWrapper_QTransform::m22(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m22());
}

qreal  PythonQtWrapper_QTransform::m23(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m23());
}

qreal  PythonQtWrapper_QTransform::m31(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m31());
}

qreal  PythonQtWrapper_QTransform::m32(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m32());
}

qreal  PythonQtWrapper_QTransform::m33(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->m33());
}

QLine  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLine&  l) const
{
  return ( theWrappedObject->map(l));
}

QLineF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->map(l));
}

QPainterPath  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPainterPath&  p) const
{
  return ( theWrappedObject->map(p));
}

QPoint  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->map(p));
}

QPointF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->map(p));
}

QPolygon  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygon&  a) const
{
  return ( theWrappedObject->map(a));
}

QPolygonF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygonF&  a) const
{
  return ( theWrappedObject->map(a));
}

QRegion  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QRegion&  r) const
{
  return ( theWrappedObject->map(r));
}

QRect  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

QRectF  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const
{
  return ( theWrappedObject->mapRect(arg__1));
}

QPolygon  PythonQtWrapper_QTransform::mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->mapToPolygon(r));
}

bool  PythonQtWrapper_QTransform::__ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

QTransform  PythonQtWrapper_QTransform::multiplied(QTransform* theWrappedObject, const QTransform&  o) const
{
  return ( (*theWrappedObject)* o);
}

QTransform  PythonQtWrapper_QTransform::__mul__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)* n);
}

QTransform*  PythonQtWrapper_QTransform::__imul__(QTransform* theWrappedObject, const QTransform&  arg__1)
{
  return &( (*theWrappedObject)*= arg__1);
}

QTransform*  PythonQtWrapper_QTransform::__imul__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)*= div);
}

QTransform  PythonQtWrapper_QTransform::__add__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)+ n);
}

QTransform*  PythonQtWrapper_QTransform::__iadd__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)+= div);
}

QTransform  PythonQtWrapper_QTransform::__sub__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)- n);
}

QTransform*  PythonQtWrapper_QTransform::__isub__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)-= div);
}

QTransform  PythonQtWrapper_QTransform::__div__(QTransform* theWrappedObject, qreal  n)
{
  return ( (*theWrappedObject)/ n);
}

QTransform*  PythonQtWrapper_QTransform::__idiv__(QTransform* theWrappedObject, qreal  div)
{
  return &( (*theWrappedObject)/= div);
}

void PythonQtWrapper_QTransform::writeTo(QTransform* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTransform::__eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

void PythonQtWrapper_QTransform::readFrom(QTransform* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result)
{
  return (QTransform::quadToQuad(one, two, result));
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result)
{
  return (QTransform::quadToSquare(quad, result));
}

void PythonQtWrapper_QTransform::reset(QTransform* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QTransform*  PythonQtWrapper_QTransform::rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
  return &( theWrappedObject->rotate(a, axis));
}

QTransform*  PythonQtWrapper_QTransform::rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
  return &( theWrappedObject->rotateRadians(a, axis));
}

QTransform*  PythonQtWrapper_QTransform::scale(QTransform* theWrappedObject, qreal  sx, qreal  sy)
{
  return &( theWrappedObject->scale(sx, sy));
}

void PythonQtWrapper_QTransform::setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33)
{
  ( theWrappedObject->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33));
}

QTransform*  PythonQtWrapper_QTransform::shear(QTransform* theWrappedObject, qreal  sh, qreal  sv)
{
  return &( theWrappedObject->shear(sh, sv));
}

bool  PythonQtWrapper_QTransform::static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result)
{
  return (QTransform::squareToQuad(square, result));
}

QTransform*  PythonQtWrapper_QTransform::translate(QTransform* theWrappedObject, qreal  dx, qreal  dy)
{
  return &( theWrappedObject->translate(dx, dy));
}

QTransform  PythonQtWrapper_QTransform::transposed(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

QTransform::TransformationType  PythonQtWrapper_QTransform::type(QTransform* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QTransform::py_toString(QTransform* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QTreeWidgetItem::~PythonQtShell_QTreeWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTreeWidgetItem*  PythonQtShell_QTreeWidgetItem::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTreeWidgetItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTreeWidgetItem* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QTreeWidgetItem**)args[0]);
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
  return QTreeWidgetItem::clone();
}
QVariant  PythonQtShell_QTreeWidgetItem::data(int  column0, int  role1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {NULL, (void*)&column0, (void*)&role1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
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
  return QTreeWidgetItem::data(column0, role1);
}
void PythonQtShell_QTreeWidgetItem::read(QDataStream&  in0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("read");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&in0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTreeWidgetItem::read(in0);
}
void PythonQtShell_QTreeWidgetItem::setData(int  column0, int  role1, const QVariant&  value2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "int" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&column0, (void*)&role1, (void*)&value2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTreeWidgetItem::setData(column0, role1, value2);
}
void PythonQtShell_QTreeWidgetItem::write(QDataStream&  out0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("write");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QDataStream&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&out0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTreeWidgetItem::write(out0);
}
QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(treeview, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(treeview, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(treeview, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, QTreeWidgetItem*  after, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(parent, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(const QStringList&  strings, int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(int  type)
{ 
return new PythonQtShell_QTreeWidgetItem(type); }

void PythonQtWrapper_QTreeWidgetItem::addChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child)
{
  ( theWrappedObject->addChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::addChildren(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children)
{
  ( theWrappedObject->addChildren(children));
}

QBrush  PythonQtWrapper_QTreeWidgetItem::background(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->background(column));
}

Qt::CheckState  PythonQtWrapper_QTreeWidgetItem::checkState(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->checkState(column));
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::child(QTreeWidgetItem* theWrappedObject, int  index) const
{
  return ( theWrappedObject->child(index));
}

int  PythonQtWrapper_QTreeWidgetItem::childCount(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->childCount());
}

QTreeWidgetItem::ChildIndicatorPolicy  PythonQtWrapper_QTreeWidgetItem::childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->childIndicatorPolicy());
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::clone(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

int  PythonQtWrapper_QTreeWidgetItem::columnCount(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->columnCount());
}

QVariant  PythonQtWrapper_QTreeWidgetItem::data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const
{
  return ( theWrappedObject->data(column, role));
}

void PythonQtWrapper_QTreeWidgetItem::emitDataChanged(QTreeWidgetItem* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->promoted_emitDataChanged());
}

Qt::ItemFlags  PythonQtWrapper_QTreeWidgetItem::flags(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QFont  PythonQtWrapper_QTreeWidgetItem::font(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->font(column));
}

QBrush  PythonQtWrapper_QTreeWidgetItem::foreground(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->foreground(column));
}

QIcon  PythonQtWrapper_QTreeWidgetItem::icon(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->icon(column));
}

int  PythonQtWrapper_QTreeWidgetItem::indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const
{
  return ( theWrappedObject->indexOfChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::insertChild(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child)
{
  ( theWrappedObject->insertChild(index, child));
}

void PythonQtWrapper_QTreeWidgetItem::insertChildren(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children)
{
  ( theWrappedObject->insertChildren(index, children));
}

bool  PythonQtWrapper_QTreeWidgetItem::isDisabled(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isDisabled());
}

bool  PythonQtWrapper_QTreeWidgetItem::isExpanded(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isExpanded());
}

bool  PythonQtWrapper_QTreeWidgetItem::isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isFirstColumnSpanned());
}

bool  PythonQtWrapper_QTreeWidgetItem::isHidden(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QTreeWidgetItem::isSelected(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->isSelected());
}

void PythonQtWrapper_QTreeWidgetItem::writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QTreeWidgetItem::readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::parent(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

void PythonQtWrapper_QTreeWidgetItem::read(QTreeWidgetItem* theWrappedObject, QDataStream&  in)
{
  ( theWrappedObject->read(in));
}

void PythonQtWrapper_QTreeWidgetItem::removeChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToPython<QTreeWidgetItem* >  child)
{
  ( theWrappedObject->removeChild(child));
}

void PythonQtWrapper_QTreeWidgetItem::setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(column, brush));
}

void PythonQtWrapper_QTreeWidgetItem::setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state)
{
  ( theWrappedObject->setCheckState(column, state));
}

void PythonQtWrapper_QTreeWidgetItem::setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy)
{
  ( theWrappedObject->setChildIndicatorPolicy(policy));
}

void PythonQtWrapper_QTreeWidgetItem::setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value)
{
  ( theWrappedObject->setData(column, role, value));
}

void PythonQtWrapper_QTreeWidgetItem::setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled)
{
  ( theWrappedObject->setDisabled(disabled));
}

void PythonQtWrapper_QTreeWidgetItem::setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand)
{
  ( theWrappedObject->setExpanded(expand));
}

void PythonQtWrapper_QTreeWidgetItem::setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span)
{
  ( theWrappedObject->setFirstColumnSpanned(span));
}

void PythonQtWrapper_QTreeWidgetItem::setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
  ( theWrappedObject->setFlags(flags));
}

void PythonQtWrapper_QTreeWidgetItem::setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font)
{
  ( theWrappedObject->setFont(column, font));
}

void PythonQtWrapper_QTreeWidgetItem::setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(column, brush));
}

void PythonQtWrapper_QTreeWidgetItem::setHidden(QTreeWidgetItem* theWrappedObject, bool  hide)
{
  ( theWrappedObject->setHidden(hide));
}

void PythonQtWrapper_QTreeWidgetItem::setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon)
{
  ( theWrappedObject->setIcon(column, icon));
}

void PythonQtWrapper_QTreeWidgetItem::setSelected(QTreeWidgetItem* theWrappedObject, bool  select)
{
  ( theWrappedObject->setSelected(select));
}

void PythonQtWrapper_QTreeWidgetItem::setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size)
{
  ( theWrappedObject->setSizeHint(column, size));
}

void PythonQtWrapper_QTreeWidgetItem::setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip)
{
  ( theWrappedObject->setStatusTip(column, statusTip));
}

void PythonQtWrapper_QTreeWidgetItem::setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text)
{
  ( theWrappedObject->setText(column, text));
}

void PythonQtWrapper_QTreeWidgetItem::setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment)
{
  ( theWrappedObject->setTextAlignment(column, alignment));
}

void PythonQtWrapper_QTreeWidgetItem::setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip)
{
  ( theWrappedObject->setToolTip(column, toolTip));
}

void PythonQtWrapper_QTreeWidgetItem::setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis)
{
  ( theWrappedObject->setWhatsThis(column, whatsThis));
}

QSize  PythonQtWrapper_QTreeWidgetItem::sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->sizeHint(column));
}

void PythonQtWrapper_QTreeWidgetItem::sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sortChildren(column, order));
}

QString  PythonQtWrapper_QTreeWidgetItem::statusTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->statusTip(column));
}

PythonQtPassOwnershipToPython<QTreeWidgetItem*  > PythonQtWrapper_QTreeWidgetItem::takeChild(QTreeWidgetItem* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeChild(index));
}

PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* >  > PythonQtWrapper_QTreeWidgetItem::takeChildren(QTreeWidgetItem* theWrappedObject)
{
  return ( theWrappedObject->takeChildren());
}

QString  PythonQtWrapper_QTreeWidgetItem::text(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->text(column));
}

int  PythonQtWrapper_QTreeWidgetItem::textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->textAlignment(column));
}

QString  PythonQtWrapper_QTreeWidgetItem::toolTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->toolTip(column));
}

QTreeWidget*  PythonQtWrapper_QTreeWidgetItem::treeWidget(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->treeWidget());
}

int  PythonQtWrapper_QTreeWidgetItem::type(QTreeWidgetItem* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QTreeWidgetItem::whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const
{
  return ( theWrappedObject->whatsThis(column));
}

void PythonQtWrapper_QTreeWidgetItem::write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const
{
  ( theWrappedObject->write(out));
}



PythonQtShell_QUndoCommand::~PythonQtShell_QUndoCommand() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QUndoCommand::id() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("id");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("id", methodInfo, result);
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
  return QUndoCommand::id();
}
bool  PythonQtShell_QUndoCommand::mergeWith(const QUndoCommand*  other0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mergeWith");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUndoCommand*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&other0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mergeWith", methodInfo, result);
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
  return QUndoCommand::mergeWith(other0);
}
void PythonQtShell_QUndoCommand::redo()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("redo");
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
  QUndoCommand::redo();
}
void PythonQtShell_QUndoCommand::undo()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("undo");
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
  QUndoCommand::undo();
}
QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(parent); }

QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(const QString&  text, QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(text, parent); }

QString  PythonQtWrapper_QUndoCommand::actionText(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->actionText());
}

const QUndoCommand*  PythonQtWrapper_QUndoCommand::child(QUndoCommand* theWrappedObject, int  index) const
{
  return ( theWrappedObject->child(index));
}

int  PythonQtWrapper_QUndoCommand::childCount(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->childCount());
}

int  PythonQtWrapper_QUndoCommand::id(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QUndoCommand::isObsolete(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->isObsolete());
}

bool  PythonQtWrapper_QUndoCommand::mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other)
{
  return ( theWrappedObject->mergeWith(other));
}

void PythonQtWrapper_QUndoCommand::redo(QUndoCommand* theWrappedObject)
{
  ( theWrappedObject->redo());
}

void PythonQtWrapper_QUndoCommand::setObsolete(QUndoCommand* theWrappedObject, bool  obsolete)
{
  ( theWrappedObject->setObsolete(obsolete));
}

void PythonQtWrapper_QUndoCommand::setText(QUndoCommand* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

QString  PythonQtWrapper_QUndoCommand::text(QUndoCommand* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

void PythonQtWrapper_QUndoCommand::undo(QUndoCommand* theWrappedObject)
{
  ( theWrappedObject->undo());
}



PythonQtShell_QVBoxLayout::~PythonQtShell_QVBoxLayout() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
const QMetaObject*  PythonQtShell_QVBoxLayout::metaObject() const
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
  return QVBoxLayout::metaObject();
}
void*  PythonQtShell_QVBoxLayout::qt_metacast(const char*  arg__1)
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
  return QVBoxLayout::qt_metacast(arg__1);
}
QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout()
{ 
return new PythonQtShell_QVBoxLayout(); }

QVBoxLayout* PythonQtWrapper_QVBoxLayout::new_QVBoxLayout(QWidget*  parent)
{ 
return new PythonQtShell_QVBoxLayout(parent); }

const QMetaObject*  PythonQtWrapper_QVBoxLayout::metaObject(QVBoxLayout* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

void*  PythonQtWrapper_QVBoxLayout::qt_metacast(QVBoxLayout* theWrappedObject, const char*  arg__1)
{
  return ( theWrappedObject->qt_metacast(arg__1));
}



QAction*  PythonQtWrapper_QWhatsThis::static_QWhatsThis_createAction(QObject*  parent)
{
  return (QWhatsThis::createAction(parent));
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_enterWhatsThisMode()
{
  (QWhatsThis::enterWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_hideText()
{
  (QWhatsThis::hideText());
}

bool  PythonQtWrapper_QWhatsThis::static_QWhatsThis_inWhatsThisMode()
{
  return (QWhatsThis::inWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_leaveWhatsThisMode()
{
  (QWhatsThis::leaveWhatsThisMode());
}

void PythonQtWrapper_QWhatsThis::static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w)
{
  (QWhatsThis::showText(pos, text, w));
}



PythonQtShell_QWhatsThisClickedEvent::~PythonQtShell_QWhatsThisClickedEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWhatsThisClickedEvent*  PythonQtShell_QWhatsThisClickedEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWhatsThisClickedEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWhatsThisClickedEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QWhatsThisClickedEvent**)args[0]);
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
  return QWhatsThisClickedEvent::clone();
}
QWhatsThisClickedEvent* PythonQtWrapper_QWhatsThisClickedEvent::new_QWhatsThisClickedEvent(const QString&  href)
{ 
return new PythonQtShell_QWhatsThisClickedEvent(href); }

QWhatsThisClickedEvent*  PythonQtWrapper_QWhatsThisClickedEvent::clone(QWhatsThisClickedEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

QString  PythonQtWrapper_QWhatsThisClickedEvent::href(QWhatsThisClickedEvent* theWrappedObject) const
{
  return ( theWrappedObject->href());
}

QWhatsThisClickedEvent*  PythonQtWrapper_QWhatsThisClickedEvent::operator_assign(QWhatsThisClickedEvent* theWrappedObject, QWhatsThisClickedEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}



PythonQtShell_QWheelEvent::~PythonQtShell_QWheelEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWheelEvent*  PythonQtShell_QWheelEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWheelEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWheelEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QWheelEvent**)args[0]);
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
  return QWheelEvent::clone();
}
bool  PythonQtShell_QWheelEvent::isBeginEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isBeginEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isBeginEvent", methodInfo, result);
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
  return QWheelEvent::isBeginEvent();
}
bool  PythonQtShell_QWheelEvent::isEndEvent() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEndEvent");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEndEvent", methodInfo, result);
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
  return QWheelEvent::isEndEvent();
}
bool  PythonQtShell_QWheelEvent::isUpdateEvent() const
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
  return QWheelEvent::isUpdateEvent();
}
QPoint  PythonQtWrapper_QWheelEvent::angleDelta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->angleDelta());
}

QWheelEvent*  PythonQtWrapper_QWheelEvent::clone(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QWheelEvent::hasPixelDelta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->hasPixelDelta());
}

bool  PythonQtWrapper_QWheelEvent::inverted(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->inverted());
}

bool  PythonQtWrapper_QWheelEvent::isBeginEvent(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->isBeginEvent());
}

bool  PythonQtWrapper_QWheelEvent::isEndEvent(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->isEndEvent());
}

bool  PythonQtWrapper_QWheelEvent::isInverted(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->isInverted());
}

bool  PythonQtWrapper_QWheelEvent::isUpdateEvent(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->isUpdateEvent());
}

QWheelEvent*  PythonQtWrapper_QWheelEvent::operator_assign(QWheelEvent* theWrappedObject, QWheelEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

Qt::ScrollPhase  PythonQtWrapper_QWheelEvent::phase(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->phase());
}

QPoint  PythonQtWrapper_QWheelEvent::pixelDelta(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->pixelDelta());
}

void PythonQtWrapper_QWheelEvent::qt_check_for_QGADGET_macro(QWheelEvent* theWrappedObject)
{
  ( theWrappedObject->qt_check_for_QGADGET_macro());
}

Qt::MouseEventSource  PythonQtWrapper_QWheelEvent::source(QWheelEvent* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



PythonQtShell_QWidgetItem::~PythonQtShell_QWidgetItem() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSizePolicy::ControlTypes  PythonQtShell_QWidgetItem::controlTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("controlTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSizePolicy::ControlTypes"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSizePolicy::ControlTypes returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("controlTypes", methodInfo, result);
          } else {
            returnValue = *((QSizePolicy::ControlTypes*)args[0]);
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
  return QWidgetItem::controlTypes();
}
Qt::Orientations  PythonQtShell_QWidgetItem::expandingDirections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("expandingDirections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::Orientations"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::Orientations returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expandingDirections", methodInfo, result);
          } else {
            returnValue = *((Qt::Orientations*)args[0]);
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
  return QWidgetItem::expandingDirections();
}
QRect  PythonQtShell_QWidgetItem::geometry() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("geometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QRect"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QRect returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("geometry", methodInfo, result);
          } else {
            returnValue = *((QRect*)args[0]);
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
  return QWidgetItem::geometry();
}
bool  PythonQtShell_QWidgetItem::hasHeightForWidth() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasHeightForWidth");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("hasHeightForWidth", methodInfo, result);
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
  return QWidgetItem::hasHeightForWidth();
}
int  PythonQtShell_QWidgetItem::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("heightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
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
  return QWidgetItem::heightForWidth(arg__1);
}
void PythonQtShell_QWidgetItem::invalidate()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("invalidate");
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
  QWidgetItem::invalidate();
}
bool  PythonQtShell_QWidgetItem::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QWidgetItem::isEmpty();
}
QLayout*  PythonQtShell_QWidgetItem::layout()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("layout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLayout* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("layout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
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
  return QWidgetItem::layout();
}
QSize  PythonQtShell_QWidgetItem::maximumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("maximumSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("maximumSize", methodInfo, result);
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
  return QWidgetItem::maximumSize();
}
int  PythonQtShell_QWidgetItem::minimumHeightForWidth(int  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumHeightForWidth");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumHeightForWidth", methodInfo, result);
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
  return QWidgetItem::minimumHeightForWidth(arg__1);
}
QSize  PythonQtShell_QWidgetItem::minimumSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("minimumSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("minimumSize", methodInfo, result);
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
  return QWidgetItem::minimumSize();
}
void PythonQtShell_QWidgetItem::setGeometry(const QRect&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setGeometry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QRect&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QWidgetItem::setGeometry(arg__1);
}
QSize  PythonQtShell_QWidgetItem::sizeHint() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sizeHint");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sizeHint", methodInfo, result);
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
  return QWidgetItem::sizeHint();
}
QSpacerItem*  PythonQtShell_QWidgetItem::spacerItem()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("spacerItem");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSpacerItem*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSpacerItem* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("spacerItem", methodInfo, result);
          } else {
            returnValue = *((QSpacerItem**)args[0]);
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
  return QWidgetItem::spacerItem();
}
QWidget*  PythonQtShell_QWidgetItem::widget() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("widget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWidget* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("widget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
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
  return QWidgetItem::widget();
}
QWidgetItem* PythonQtWrapper_QWidgetItem::new_QWidgetItem(QWidget*  w)
{ 
return new PythonQtShell_QWidgetItem(w); }



PythonQtShell_QWindowStateChangeEvent::~PythonQtShell_QWindowStateChangeEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QWindowStateChangeEvent*  PythonQtShell_QWindowStateChangeEvent::clone() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clone");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWindowStateChangeEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWindowStateChangeEvent* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("clone", methodInfo, result);
          } else {
            returnValue = *((QWindowStateChangeEvent**)args[0]);
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
  return QWindowStateChangeEvent::clone();
}
QWindowStateChangeEvent* PythonQtWrapper_QWindowStateChangeEvent::new_QWindowStateChangeEvent(Qt::WindowStates  oldState, bool  isOverride)
{ 
return new PythonQtShell_QWindowStateChangeEvent(oldState, isOverride); }

QWindowStateChangeEvent*  PythonQtWrapper_QWindowStateChangeEvent::clone(QWindowStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->clone());
}

bool  PythonQtWrapper_QWindowStateChangeEvent::isOverride(QWindowStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->isOverride());
}

Qt::WindowStates  PythonQtWrapper_QWindowStateChangeEvent::oldState(QWindowStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->oldState());
}

QWindowStateChangeEvent*  PythonQtWrapper_QWindowStateChangeEvent::operator_assign(QWindowStateChangeEvent* theWrappedObject, QWindowStateChangeEvent&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}


