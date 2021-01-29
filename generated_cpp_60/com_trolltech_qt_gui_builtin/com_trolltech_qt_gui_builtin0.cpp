#include "com_trolltech_qt_gui_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextformat.h>
#include <qtransform.h>

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap()
{ 
return new QBitmap(); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QPixmap&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QSize&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QString&  fileName, const char*  format)
{ 
return new QBitmap(fileName, format); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(int  w, int  h)
{ 
return new QBitmap(w, h); }

void PythonQtWrapper_QBitmap::clear(QBitmap* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QBitmap  PythonQtWrapper_QBitmap::static_QBitmap_fromImage(QImage&  image, Qt::ImageConversionFlags  flags)
{
  return (QBitmap::fromImage(image, flags));
}

QBitmap  PythonQtWrapper_QBitmap::static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags)
{
  return (QBitmap::fromImage(image, flags));
}

QBitmap  PythonQtWrapper_QBitmap::static_QBitmap_fromPixmap(const QPixmap&  pixmap)
{
  return (QBitmap::fromPixmap(pixmap));
}

void PythonQtWrapper_QBitmap::swap(QBitmap* theWrappedObject, QBitmap&  other)
{
  ( theWrappedObject->swap(other));
}

QBitmap  PythonQtWrapper_QBitmap::transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const
{
  return ( theWrappedObject->transformed(matrix));
}



QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(const QList<QPoint >&  v)
{ 
return new QPolygon(v); }

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(const QRect&  r, bool  closed)
{ 
return new QPolygon(r, closed); }

QPolygon  PythonQtWrapper_QPolygon::__mul__(QPolygon* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPolygon::writeTo(QPolygon* theWrappedObject, QDataStream&  stream)
{
  stream <<  (*theWrappedObject);
}

void PythonQtWrapper_QPolygon::readFrom(QPolygon* theWrappedObject, QDataStream&  stream)
{
  stream >>  (*theWrappedObject);
}

void PythonQtWrapper_QPolygon::translate(QPolygon* theWrappedObject, const QPoint&  offset)
{
  ( theWrappedObject->translate(offset));
}

QPolygon  PythonQtWrapper_QPolygon::translated(QPolygon* theWrappedObject, const QPoint&  offset) const
{
  return ( theWrappedObject->translated(offset));
}

QString PythonQtWrapper_QPolygon::py_toString(QPolygon* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRegion* PythonQtWrapper_QRegion::new_QRegion()
{ 
return new QRegion(); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QBitmap&  bitmap)
{ 
return new QRegion(bitmap); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule)
{ 
return new QRegion(pa, fillRule); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRect&  r, QRegion::RegionType  t)
{ 
return new QRegion(r, t); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRegion&  region)
{ 
return new QRegion(region); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t)
{ 
return new QRegion(x, y, w, h, t); }

QRegion  PythonQtWrapper_QRegion::__mul__(QRegion* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QRegion::writeTo(QRegion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QRegion::readFrom(QRegion* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QRegion::py_toString(QRegion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextLength* PythonQtWrapper_QTextLength::new_QTextLength()
{ 
return new QTextLength(); }

QTextLength* PythonQtWrapper_QTextLength::new_QTextLength(QTextLength::Type  type, qreal  value)
{ 
return new QTextLength(type, value); }

bool  PythonQtWrapper_QTextLength::__ne__(QTextLength* theWrappedObject, const QTextLength&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QTextLength::writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTextLength::__eq__(QTextLength* theWrappedObject, const QTextLength&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QTextLength::readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QTextLength::rawValue(QTextLength* theWrappedObject) const
{
  return ( theWrappedObject->rawValue());
}

QTextLength::Type  PythonQtWrapper_QTextLength::type(QTextLength* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

qreal  PythonQtWrapper_QTextLength::value(QTextLength* theWrappedObject, qreal  maximumLength) const
{
  return ( theWrappedObject->value(maximumLength));
}

QString PythonQtWrapper_QTextLength::py_toString(QTextLength* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


