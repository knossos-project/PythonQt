#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextformat.h>
#include <qtransform.h>



class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public slots:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = nullptr);
QBitmap* new_QBitmap(int  w, int  h);
QBitmap* new_QBitmap(const QBitmap& other) {
QBitmap* a = new QBitmap();
*((QBitmap*)a) = other;
return a; }
void delete_QBitmap(QBitmap* obj) { delete obj; }
   void clear(QBitmap* theWrappedObject);
   QBitmap  static_QBitmap_fromImage(QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  static_QBitmap_fromPixmap(const QPixmap&  pixmap);
   void swap(QBitmap* theWrappedObject, QBitmap&  other);
   QBitmap  transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const;
};





class PythonQtWrapper_QPolygon : public QObject
{ Q_OBJECT
public:
public slots:
QPolygon* new_QPolygon(const QList<QPoint >&  v);
QPolygon* new_QPolygon(const QRect&  r, bool  closed = false);
void delete_QPolygon(QPolygon* obj) { delete obj; }
   QPolygon  __mul__(QPolygon* theWrappedObject, const QTransform&  m);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   QPolygon  translated(QPolygon* theWrappedObject, const QPoint&  offset) const;
    QString py_toString(QPolygon*);
};





class PythonQtWrapper_QRegion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RegionType )
enum RegionType{
  Rectangle = QRegion::Rectangle,   Ellipse = QRegion::Ellipse};
public slots:
QRegion* new_QRegion();
QRegion* new_QRegion(const QBitmap&  bitmap);
QRegion* new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule = Qt::OddEvenFill);
QRegion* new_QRegion(const QRect&  r, QRegion::RegionType  t = QRegion::Rectangle);
QRegion* new_QRegion(const QRegion&  region);
QRegion* new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t = QRegion::Rectangle);
void delete_QRegion(QRegion* obj) { delete obj; }
   QRegion  __mul__(QRegion* theWrappedObject, const QTransform&  m);
   void writeTo(QRegion* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QRegion* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QRegion*);
};





class PythonQtWrapper_QTextLength : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  VariableLength = QTextLength::VariableLength,   FixedLength = QTextLength::FixedLength,   PercentageLength = QTextLength::PercentageLength};
public slots:
QTextLength* new_QTextLength();
QTextLength* new_QTextLength(QTextLength::Type  type, qreal  value);
QTextLength* new_QTextLength(const QTextLength& other) {
QTextLength* a = new QTextLength();
*((QTextLength*)a) = other;
return a; }
void delete_QTextLength(QTextLength* obj) { delete obj; }
   bool  __ne__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1);
   qreal  rawValue(QTextLength* theWrappedObject) const;
   QTextLength::Type  type(QTextLength* theWrappedObject) const;
   qreal  value(QTextLength* theWrappedObject, qreal  maximumLength) const;
    QString py_toString(QTextLength*);
};


