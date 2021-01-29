#include "com_trolltech_qt_core_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QTextDocument>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qtransform.h>
#include <qurl.h>

QDate* PythonQtWrapper_QDate::new_QDate(int  y, int  m, int  d)
{
return new QDate(y, m, d); }

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, qint64  days) const
{
  return ( theWrappedObject->addDays(days));
}

QDate  PythonQtWrapper_QDate::addMonths(QDate* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QDate  PythonQtWrapper_QDate::addYears(QDate* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

int  PythonQtWrapper_QDate::day(QDate* theWrappedObject) const
{
  return ( theWrappedObject->day());
}

int  PythonQtWrapper_QDate::dayOfWeek(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfWeek());
}

int  PythonQtWrapper_QDate::dayOfYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfYear());
}

int  PythonQtWrapper_QDate::daysInMonth(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInMonth());
}

int  PythonQtWrapper_QDate::daysInYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInYear());
}

qint64  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, QDate  d) const
{
  return ( theWrappedObject->daysTo(d));
}

QDateTime  PythonQtWrapper_QDate::endOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds) const
{
  return ( theWrappedObject->endOfDay(spec, offsetSeconds));
}

QDateTime  PythonQtWrapper_QDate::endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->endOfDay(zone));
}

QDate  PythonQtWrapper_QDate::fromJulianDay(QDate* theWrappedObject, qint64  jd_)
{
  return ( theWrappedObject->fromJulianDay(jd_));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  string, Qt::DateFormat  format)
{
  return (QDate::fromString(string, format));
}

void PythonQtWrapper_QDate::getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day) const
{
  ( theWrappedObject->getDate(year, month, day));
}

bool  PythonQtWrapper_QDate::static_QDate_isLeapYear(int  year)
{
  return (QDate::isLeapYear(year));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QDate::static_QDate_isValid(int  y, int  m, int  d)
{
  return (QDate::isValid(y, m, d));
}

int  PythonQtWrapper_QDate::month(QDate* theWrappedObject) const
{
  return ( theWrappedObject->month());
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QDate::setDate(QDate* theWrappedObject, int  year, int  month, int  day)
{
  return ( theWrappedObject->setDate(year, month, day));
}

QDateTime  PythonQtWrapper_QDate::startOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds) const
{
  return ( theWrappedObject->startOfDay(spec, offsetSeconds));
}

QDateTime  PythonQtWrapper_QDate::startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->startOfDay(zone));
}

qint64  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  format) const
{
  return ( theWrappedObject->toString(format));
}

int  PythonQtWrapper_QDate::weekNumber(QDate* theWrappedObject, int*  yearNum) const
{
  return ( theWrappedObject->weekNumber(yearNum));
}

int  PythonQtWrapper_QDate::year(QDate* theWrappedObject) const
{
  return ( theWrappedObject->year());
}

QString PythonQtWrapper_QDate::py_toString(QDate* obj) { return obj->toString(); }


QLineF* PythonQtWrapper_QLineF::new_QLineF()
{
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
return new QLineF(x1, y1, x2, y2); }

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angleTo(l));
}

QPointF  PythonQtWrapper_QLineF::center(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QLineF  PythonQtWrapper_QLineF::fromPolar(QLineF* theWrappedObject, qreal  length, qreal  angle)
{
  return ( theWrappedObject->fromPolar(length, angle));
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->normalVector());
}

bool  PythonQtWrapper_QLineF::__ne__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLineF::__eq__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAt(t));
}

void PythonQtWrapper_QLineF::setAngle(QLineF* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setAngle(angle));
}

void PythonQtWrapper_QLineF::setLength(QLineF* theWrappedObject, qreal  len)
{
  ( theWrappedObject->setLength(len));
}

void PythonQtWrapper_QLineF::setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QLineF::setP1(QLineF* theWrappedObject, const QPointF&  p1)
{
  ( theWrappedObject->setP1(p1));
}

void PythonQtWrapper_QLineF::setP2(QLineF* theWrappedObject, const QPointF&  p2)
{
  ( theWrappedObject->setP2(p2));
}

void PythonQtWrapper_QLineF::setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

QLineF  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->toLine());
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->unitVector());
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLineF::py_toString(QLineF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTime* PythonQtWrapper_QTime::new_QTime(int  h, int  m, int  s, int  ms)
{
return new QTime(h, m, s, ms); }

QTime  PythonQtWrapper_QTime::addMSecs(QTime* theWrappedObject, int  ms) const
{
  return ( theWrappedObject->addMSecs(ms));
}

QTime  PythonQtWrapper_QTime::addSecs(QTime* theWrappedObject, int  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
  return (QTime::currentTime());
}

QTime  PythonQtWrapper_QTime::fromMSecsSinceStartOfDay(QTime* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->fromMSecsSinceStartOfDay(msecs));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  string, Qt::DateFormat  format)
{
  return (QTime::fromString(string, format));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  string, const QString&  format)
{
  return (QTime::fromString(string, format));
}

int  PythonQtWrapper_QTime::hour(QTime* theWrappedObject) const
{
  return ( theWrappedObject->hour());
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTime::static_QTime_isValid(int  h, int  m, int  s, int  ms)
{
  return (QTime::isValid(h, m, s, ms));
}

int  PythonQtWrapper_QTime::minute(QTime* theWrappedObject) const
{
  return ( theWrappedObject->minute());
}

int  PythonQtWrapper_QTime::msec(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msec());
}

int  PythonQtWrapper_QTime::msecsSinceStartOfDay(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msecsSinceStartOfDay());
}

int  PythonQtWrapper_QTime::msecsTo(QTime* theWrappedObject, QTime  t) const
{
  return ( theWrappedObject->msecsTo(t));
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTime::second(QTime* theWrappedObject) const
{
  return ( theWrappedObject->second());
}

int  PythonQtWrapper_QTime::secsTo(QTime* theWrappedObject, QTime  t) const
{
  return ( theWrappedObject->secsTo(t));
}

bool  PythonQtWrapper_QTime::setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms)
{
  return ( theWrappedObject->setHMS(h, m, s, ms));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString PythonQtWrapper_QTime::py_toString(QTime* obj) { return obj->toString(); }


QUrl* PythonQtWrapper_QUrl::new_QUrl()
{
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{
return new QUrl(copy); }

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QUrl::py_toString(QUrl* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextStream*  PythonQtWrapper_Qt::static_Qt_bin(QTextStream&  s)
{
  return &(Qt::bin(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_bom(QTextStream&  s)
{
  return &(Qt::bom(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_center(QTextStream&  s)
{
  return &(Qt::center(s));
}

QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return (Qt::convertFromPlainText(plain, mode));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_dec(QTextStream&  s)
{
  return &(Qt::dec(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_endl(QTextStream&  s)
{
  return &(Qt::endl(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_fixed(QTextStream&  s)
{
  return &(Qt::fixed(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_flush(QTextStream&  s)
{
  return &(Qt::flush(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_forcepoint(QTextStream&  s)
{
  return &(Qt::forcepoint(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_forcesign(QTextStream&  s)
{
  return &(Qt::forcesign(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_hex(QTextStream&  s)
{
  return &(Qt::hex(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_left(QTextStream&  s)
{
  return &(Qt::left(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_lowercasebase(QTextStream&  s)
{
  return &(Qt::lowercasebase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_lowercasedigits(QTextStream&  s)
{
  return &(Qt::lowercasedigits(s));
}

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return (Qt::mightBeRichText(arg__1));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noforcepoint(QTextStream&  s)
{
  return &(Qt::noforcepoint(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noforcesign(QTextStream&  s)
{
  return &(Qt::noforcesign(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_noshowbase(QTextStream&  s)
{
  return &(Qt::noshowbase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_oct(QTextStream&  s)
{
  return &(Qt::oct(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_reset(QTextStream&  s)
{
  return &(Qt::reset(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_right(QTextStream&  s)
{
  return &(Qt::right(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_scientific(QTextStream&  s)
{
  return &(Qt::scientific(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_showbase(QTextStream&  s)
{
  return &(Qt::showbase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_uppercasebase(QTextStream&  s)
{
  return &(Qt::uppercasebase(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_uppercasedigits(QTextStream&  s)
{
  return &(Qt::uppercasedigits(s));
}

QTextStream*  PythonQtWrapper_Qt::static_Qt_ws(QTextStream&  s)
{
  return &(Qt::ws(s));
}


