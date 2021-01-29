#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qboxlayout.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qtextformat.h>
#include <qtooltip.h>
#include <qtransform.h>
#include <qtreewidget.h>
#include <qundostack.h>
#include <qwhatsthis.h>



class PythonQtShell_QTextTableCellFormat : public QTextTableCellFormat
{
public:
    PythonQtShell_QTextTableCellFormat():QTextTableCellFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableCellFormat(const QTextFormat&  fmt):QTextTableCellFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextTableCellFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextTableCellFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableCellFormat* new_QTextTableCellFormat();
QTextTableCellFormat* new_QTextTableCellFormat(const QTextFormat&  fmt);
QTextTableCellFormat* new_QTextTableCellFormat(const QTextTableCellFormat& other) {
PythonQtShell_QTextTableCellFormat* a = new PythonQtShell_QTextTableCellFormat();
*((QTextTableCellFormat*)a) = other;
return a; }
void delete_QTextTableCellFormat(QTextTableCellFormat* obj) { delete obj; }
   qreal  bottomBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  bottomBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  bottomBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  bottomPadding(QTextTableCellFormat* theWrappedObject) const;
   bool  isValid(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  leftBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  leftBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  leftPadding(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  rightBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  rightBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  rightPadding(QTextTableCellFormat* theWrappedObject) const;
   void setBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setBottomBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setBottomBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setLeftBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setLeftBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setLeftBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setRightBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setRightBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setRightBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   void setTopBorder(QTextTableCellFormat* theWrappedObject, qreal  width);
   void setTopBorderBrush(QTextTableCellFormat* theWrappedObject, const QBrush&  brush);
   void setTopBorderStyle(QTextTableCellFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style);
   void setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding);
   qreal  topBorder(QTextTableCellFormat* theWrappedObject) const;
   QBrush  topBorderBrush(QTextTableCellFormat* theWrappedObject) const;
   QTextFrameFormat::BorderStyle  topBorderStyle(QTextTableCellFormat* theWrappedObject) const;
   qreal  topPadding(QTextTableCellFormat* theWrappedObject) const;
    bool __nonzero__(QTextTableCellFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QTextTableFormat : public QTextTableFormat
{
public:
    PythonQtShell_QTextTableFormat():QTextTableFormat(),_wrapper(NULL) {};
    PythonQtShell_QTextTableFormat(const QTextFormat&  fmt):QTextTableFormat(fmt),_wrapper(NULL) {};

   ~PythonQtShell_QTextTableFormat();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTextTableFormat : public QObject
{ Q_OBJECT
public:
public slots:
QTextTableFormat* new_QTextTableFormat();
QTextTableFormat* new_QTextTableFormat(const QTextFormat&  fmt);
QTextTableFormat* new_QTextTableFormat(const QTextTableFormat& other) {
PythonQtShell_QTextTableFormat* a = new PythonQtShell_QTextTableFormat();
*((QTextTableFormat*)a) = other;
return a; }
void delete_QTextTableFormat(QTextTableFormat* obj) { delete obj; }
   Qt::Alignment  alignment(QTextTableFormat* theWrappedObject) const;
   bool  borderCollapse(QTextTableFormat* theWrappedObject) const;
   qreal  cellPadding(QTextTableFormat* theWrappedObject) const;
   qreal  cellSpacing(QTextTableFormat* theWrappedObject) const;
   void clearColumnWidthConstraints(QTextTableFormat* theWrappedObject);
   QList<QTextLength >  columnWidthConstraints(QTextTableFormat* theWrappedObject) const;
   int  columns(QTextTableFormat* theWrappedObject) const;
   int  headerRowCount(QTextTableFormat* theWrappedObject) const;
   bool  isValid(QTextTableFormat* theWrappedObject) const;
   void setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment);
   void setBorderCollapse(QTextTableFormat* theWrappedObject, bool  borderCollapse);
   void setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding);
   void setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing);
   void setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QList<QTextLength >&  constraints);
   void setColumns(QTextTableFormat* theWrappedObject, int  columns);
   void setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count);
    bool __nonzero__(QTextTableFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QTileRules : public QTileRules
{
public:
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(NULL) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(NULL) {};

   ~PythonQtShell_QTileRules();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTileRules : public QObject
{ Q_OBJECT
public:
public slots:
QTileRules* new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule);
QTileRules* new_QTileRules(Qt::TileRule  rule = Qt::StretchTile);
void delete_QTileRules(QTileRules* obj) { delete obj; }
void py_set_horizontal(QTileRules* theWrappedObject, Qt::TileRule  horizontal){ theWrappedObject->horizontal = horizontal; }
Qt::TileRule  py_get_horizontal(QTileRules* theWrappedObject){ return theWrappedObject->horizontal; }
void py_set_vertical(QTileRules* theWrappedObject, Qt::TileRule  vertical){ theWrappedObject->vertical = vertical; }
Qt::TileRule  py_get_vertical(QTileRules* theWrappedObject){ return theWrappedObject->vertical; }
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QTime  time, QWidget*  parent = nullptr):QTimeEdit(time, parent),_wrapper(NULL) {};
    PythonQtShell_QTimeEdit(QWidget*  parent = nullptr):QTimeEdit(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTimeEdit();

virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTimeEdit : public QTimeEdit
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QTimeEdit::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QTimeEdit::qt_metacast(arg__1); }
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QTime  time, QWidget*  parent = nullptr);
QTimeEdit* new_QTimeEdit(QWidget*  parent = nullptr);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; }
   const QMetaObject*  metaObject(QTimeEdit* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QTimeEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTimeEdit*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QTimeEdit* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QTimeEdit* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QTimeEdit*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   void userTimeChanged(QTimeEdit* theWrappedObject, QTime  time);
};





class PythonQtShell_QToolBarChangeEvent : public QToolBarChangeEvent
{
public:
    PythonQtShell_QToolBarChangeEvent(QToolBarChangeEvent&  arg__1):QToolBarChangeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QToolBarChangeEvent(bool  t):QToolBarChangeEvent(t),_wrapper(NULL) {};

   ~PythonQtShell_QToolBarChangeEvent();

virtual QToolBarChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolBarChangeEvent : public QToolBarChangeEvent
{ public:
inline QToolBarChangeEvent&  promoted_operator_assign(QToolBarChangeEvent&  arg__1) { return this->operator=(arg__1); }
inline QToolBarChangeEvent*  py_q_clone() const { return QToolBarChangeEvent::clone(); }
};

class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; }
   QToolBarChangeEvent*  clone(QToolBarChangeEvent* theWrappedObject) const;
   QToolBarChangeEvent*  py_q_clone(QToolBarChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QToolBarChangeEvent*)theWrappedObject)->py_q_clone());}
   QToolBarChangeEvent*  operator_assign(QToolBarChangeEvent* theWrappedObject, QToolBarChangeEvent&  arg__1);
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; }
   QFont  static_QToolTip_font();
   void static_QToolTip_hideText();
   bool  static_QToolTip_isVisible();
   QPalette  static_QToolTip_palette();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   QString  static_QToolTip_text();
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QTouchEvent&  arg__1):QTouchEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QTouchEvent();

virtual QTouchEvent*  clone() const;
virtual bool  isBeginEvent() const;
virtual bool  isEndEvent() const;
virtual bool  isUpdateEvent() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTouchEvent : public QTouchEvent
{ public:
inline QTouchEvent&  promoted_operator_assign(QTouchEvent&  arg__1) { return this->operator=(arg__1); }
inline QTouchEvent*  py_q_clone() const { return QTouchEvent::clone(); }
inline bool  py_q_isBeginEvent() const { return QTouchEvent::isBeginEvent(); }
inline bool  py_q_isEndEvent() const { return QTouchEvent::isEndEvent(); }
inline bool  py_q_isUpdateEvent() const { return QTouchEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; }
   QTouchEvent*  clone(QTouchEvent* theWrappedObject) const;
   QTouchEvent*  py_q_clone(QTouchEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTouchEvent*)theWrappedObject)->py_q_clone());}
   bool  isBeginEvent(QTouchEvent* theWrappedObject) const;
   bool  py_q_isBeginEvent(QTouchEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTouchEvent*)theWrappedObject)->py_q_isBeginEvent());}
   bool  isEndEvent(QTouchEvent* theWrappedObject) const;
   bool  py_q_isEndEvent(QTouchEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTouchEvent*)theWrappedObject)->py_q_isEndEvent());}
   bool  isUpdateEvent(QTouchEvent* theWrappedObject) const;
   bool  py_q_isUpdateEvent(QTouchEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTouchEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QTouchEvent*  operator_assign(QTouchEvent* theWrappedObject, QTouchEvent&  arg__1);
   QObject*  target(QTouchEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; }
   QTransform  adjoint(QTransform* theWrappedObject) const;
   QTransform  asAffineMatrix(QTransform* theWrappedObject);
   qreal  determinant(QTransform* theWrappedObject) const;
   qreal  dx(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   void reset(QTransform* theWrappedObject);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
    QString py_toString(QTransform*);
};





class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(treeview, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, const QStringList&  strings, int  type = Type):QTreeWidgetItem(treeview, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, int  type = Type):QTreeWidgetItem(treeview, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(NULL) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(NULL) {};

   ~PythonQtShell_QTreeWidgetItem();

virtual QTreeWidgetItem*  clone() const;
virtual QVariant  data(int  column, int  role) const;
virtual void read(QDataStream&  in);
virtual void setData(int  column, int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QTreeWidgetItem*  py_q_clone() const { return QTreeWidgetItem::clone(); }
inline QVariant  py_q_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void py_q_read(QDataStream&  in) { QTreeWidgetItem::read(in); }
inline void py_q_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
inline void py_q_write(QDataStream&  out) const { QTreeWidgetItem::write(out); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChildIndicatorPolicy ItemType )
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; }
   void addChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void addChildren(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  py_q_clone(QTreeWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_clone());}
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QVariant  py_q_data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_data(column, role));}
   void emitDataChanged(QTreeWidgetItem* theWrappedObject);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void read(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QTreeWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_read(in));}
   void removeChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToPython<QTreeWidgetItem* >  child);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void py_q_setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_setData(column, role, value));}
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   PythonQtPassOwnershipToPython<QTreeWidgetItem*  > takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* >  > takeChildren(QTreeWidgetItem* theWrappedObject);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   void write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = nullptr):QUndoCommand(parent),_wrapper(NULL) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr):QUndoCommand(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QUndoCommand();

virtual int  id() const;
virtual bool  mergeWith(const QUndoCommand*  other);
virtual void redo();
virtual void undo();

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline int  py_q_id() const { return QUndoCommand::id(); }
inline bool  py_q_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void py_q_redo() { QUndoCommand::redo(); }
inline void py_q_undo() { QUndoCommand::undo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = nullptr);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; }
   QString  actionText(QUndoCommand* theWrappedObject) const;
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   int  childCount(QUndoCommand* theWrappedObject) const;
   int  id(QUndoCommand* theWrappedObject) const;
   int  py_q_id(QUndoCommand* theWrappedObject) const{  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_id());}
   bool  isObsolete(QUndoCommand* theWrappedObject) const;
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   bool  py_q_mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other){  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_mergeWith(other));}
   void redo(QUndoCommand* theWrappedObject);
   void py_q_redo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_redo());}
   void setObsolete(QUndoCommand* theWrappedObject, bool  obsolete);
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   QString  text(QUndoCommand* theWrappedObject) const;
   void undo(QUndoCommand* theWrappedObject);
   void py_q_undo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_undo());}
};





class PythonQtShell_QVBoxLayout : public QVBoxLayout
{
public:
    PythonQtShell_QVBoxLayout():QVBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QVBoxLayout(QWidget*  parent):QVBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVBoxLayout();

virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QVBoxLayout : public QVBoxLayout
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QVBoxLayout::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QVBoxLayout::qt_metacast(arg__1); }
};

class PythonQtWrapper_QVBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QVBoxLayout* new_QVBoxLayout();
QVBoxLayout* new_QVBoxLayout(QWidget*  parent);
void delete_QVBoxLayout(QVBoxLayout* obj) { delete obj; }
   const QMetaObject*  metaObject(QVBoxLayout* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QVBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QVBoxLayout*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QVBoxLayout* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QVBoxLayout* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QVBoxLayout*)theWrappedObject)->py_q_qt_metacast(arg__1));}
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; }
   QAction*  static_QWhatsThis_createAction(QObject*  parent = nullptr);
   void static_QWhatsThis_enterWhatsThisMode();
   void static_QWhatsThis_hideText();
   bool  static_QWhatsThis_inWhatsThisMode();
   void static_QWhatsThis_leaveWhatsThisMode();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = nullptr);
};





class PythonQtShell_QWhatsThisClickedEvent : public QWhatsThisClickedEvent
{
public:
    PythonQtShell_QWhatsThisClickedEvent(QWhatsThisClickedEvent&  arg__1):QWhatsThisClickedEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QWhatsThisClickedEvent(const QString&  href):QWhatsThisClickedEvent(href),_wrapper(NULL) {};

   ~PythonQtShell_QWhatsThisClickedEvent();

virtual QWhatsThisClickedEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWhatsThisClickedEvent : public QWhatsThisClickedEvent
{ public:
inline QWhatsThisClickedEvent&  promoted_operator_assign(QWhatsThisClickedEvent&  arg__1) { return this->operator=(arg__1); }
inline QWhatsThisClickedEvent*  py_q_clone() const { return QWhatsThisClickedEvent::clone(); }
};

class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; }
   QWhatsThisClickedEvent*  clone(QWhatsThisClickedEvent* theWrappedObject) const;
   QWhatsThisClickedEvent*  py_q_clone(QWhatsThisClickedEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWhatsThisClickedEvent*)theWrappedObject)->py_q_clone());}
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
   QWhatsThisClickedEvent*  operator_assign(QWhatsThisClickedEvent* theWrappedObject, QWhatsThisClickedEvent&  arg__1);
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(QWheelEvent&  arg__1):QWheelEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QWheelEvent();

virtual QWheelEvent*  clone() const;
virtual bool  isBeginEvent() const;
virtual bool  isEndEvent() const;
virtual bool  isUpdateEvent() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWheelEvent : public QWheelEvent
{ public:
inline QWheelEvent&  promoted_operator_assign(QWheelEvent&  arg__1) { return this->operator=(arg__1); }
inline QWheelEvent*  py_q_clone() const { return QWheelEvent::clone(); }
inline bool  py_q_isBeginEvent() const { return QWheelEvent::isBeginEvent(); }
inline bool  py_q_isEndEvent() const { return QWheelEvent::isEndEvent(); }
inline bool  py_q_isUpdateEvent() const { return QWheelEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; }
   QPoint  angleDelta(QWheelEvent* theWrappedObject) const;
   QWheelEvent*  clone(QWheelEvent* theWrappedObject) const;
   QWheelEvent*  py_q_clone(QWheelEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWheelEvent*)theWrappedObject)->py_q_clone());}
   bool  hasPixelDelta(QWheelEvent* theWrappedObject) const;
   bool  inverted(QWheelEvent* theWrappedObject) const;
   bool  isBeginEvent(QWheelEvent* theWrappedObject) const;
   bool  py_q_isBeginEvent(QWheelEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWheelEvent*)theWrappedObject)->py_q_isBeginEvent());}
   bool  isEndEvent(QWheelEvent* theWrappedObject) const;
   bool  py_q_isEndEvent(QWheelEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWheelEvent*)theWrappedObject)->py_q_isEndEvent());}
   bool  isInverted(QWheelEvent* theWrappedObject) const;
   bool  isUpdateEvent(QWheelEvent* theWrappedObject) const;
   bool  py_q_isUpdateEvent(QWheelEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWheelEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QWheelEvent*  operator_assign(QWheelEvent* theWrappedObject, QWheelEvent&  arg__1);
   Qt::ScrollPhase  phase(QWheelEvent* theWrappedObject) const;
   QPoint  pixelDelta(QWheelEvent* theWrappedObject) const;
   void qt_check_for_QGADGET_macro(QWheelEvent* theWrappedObject);
   Qt::MouseEventSource  source(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QWidgetItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QWidgetItem::geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  py_q_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QWidgetItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  py_q_widget() const { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; }
   QSizePolicy::ControlTypes  py_q_controlTypes(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  py_q_expandingDirections(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_hasHeightForWidth(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   bool  py_q_isEmpty(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_sizeHint());}
   QWidget*  py_q_widget(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QWidgetItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QWindowStateChangeEvent : public QWindowStateChangeEvent
{
public:
    PythonQtShell_QWindowStateChangeEvent(Qt::WindowStates  oldState, bool  isOverride = false):QWindowStateChangeEvent(oldState, isOverride),_wrapper(NULL) {};
    PythonQtShell_QWindowStateChangeEvent(QWindowStateChangeEvent&  arg__1):QWindowStateChangeEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QWindowStateChangeEvent();

virtual QWindowStateChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWindowStateChangeEvent : public QWindowStateChangeEvent
{ public:
inline QWindowStateChangeEvent&  promoted_operator_assign(QWindowStateChangeEvent&  arg__1) { return this->operator=(arg__1); }
inline QWindowStateChangeEvent*  py_q_clone() const { return QWindowStateChangeEvent::clone(); }
};

class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  oldState, bool  isOverride = false);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; }
   QWindowStateChangeEvent*  clone(QWindowStateChangeEvent* theWrappedObject) const;
   QWindowStateChangeEvent*  py_q_clone(QWindowStateChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindowStateChangeEvent*)theWrappedObject)->py_q_clone());}
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
   QWindowStateChangeEvent*  operator_assign(QWindowStateChangeEvent* theWrappedObject, QWindowStateChangeEvent&  arg__1);
};


