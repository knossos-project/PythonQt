#include <PythonQt.h>
#include <QImage>
#include <QObject>
#include <QPair>
#include <QPixmap>
#include <QSize>
#include <QStringList>
#include <QTextCursor>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qaccessible.h>
#include <qbackingstore.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qclipboard.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdesktopservices.h>
#include <qevent.h>
#include <qfontinfo.h>
#include <qgesture.h>
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



class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = nullptr):QAbstractTableModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractTableModel();

virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractTableModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractTableModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QAbstractTableModel::index(row, column, parent); }
inline const QMetaObject*  py_q_metaObject() const { return QAbstractTableModel::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QAbstractTableModel::qt_metacast(arg__1); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractTableModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = nullptr);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; }
   bool  dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   bool  py_q_dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractTableModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  py_q_index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_index(row, column, parent));}
   const QMetaObject*  metaObject(QAbstractTableModel* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QAbstractTableModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QAbstractTableModel* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QAbstractTableModel* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   QModelIndex  sibling(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   QModelIndex  py_q_sibling(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractTableModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QAccessibleEvent : public QAccessibleEvent
{
public:
    PythonQtShell_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ):QAccessibleEvent(obj, typ),_wrapper(NULL) {};

   ~PythonQtShell_QAccessibleEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QAccessibleEvent : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleEvent* new_QAccessibleEvent(QObject*  obj, QAccessible::Event  typ);
void delete_QAccessibleEvent(QAccessibleEvent* obj) { delete obj; }
   int  child(QAccessibleEvent* theWrappedObject) const;
   QObject*  object(QAccessibleEvent* theWrappedObject) const;
   void setChild(QAccessibleEvent* theWrappedObject, int  chld);
   QAccessible::Event  type(QAccessibleEvent* theWrappedObject) const;
    QString py_toString(QAccessibleEvent*);
};





class PythonQtShell_QActionEvent : public QActionEvent
{
public:
    PythonQtShell_QActionEvent(QActionEvent&  arg__1):QActionEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QActionEvent(int  type, QAction*  action, QAction*  before = nullptr):QActionEvent(type, action, before),_wrapper(NULL) {};

   ~PythonQtShell_QActionEvent();

virtual QActionEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QActionEvent : public QActionEvent
{ public:
inline QActionEvent&  promoted_operator_assign(QActionEvent&  arg__1) { return this->operator=(arg__1); }
inline QActionEvent*  py_q_clone() const { return QActionEvent::clone(); }
};

class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = nullptr);
void delete_QActionEvent(QActionEvent* obj) { delete obj; }
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
   QActionEvent*  clone(QActionEvent* theWrappedObject) const;
   QActionEvent*  py_q_clone(QActionEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QActionEvent*)theWrappedObject)->py_q_clone());}
   QActionEvent*  operator_assign(QActionEvent* theWrappedObject, QActionEvent&  arg__1);
};





class PythonQtWrapper_QBackingStore : public QObject
{ Q_OBJECT
public:
public slots:
QBackingStore* new_QBackingStore(QWindow*  window);
void delete_QBackingStore(QBackingStore* obj) { delete obj; }
   void beginPaint(QBackingStore* theWrappedObject, const QRegion&  arg__1);
   void endPaint(QBackingStore* theWrappedObject);
   void flush(QBackingStore* theWrappedObject, const QRegion&  region, QWindow*  window = nullptr, const QPoint&  offset = QPoint());
   bool  hasStaticContents(QBackingStore* theWrappedObject) const;
   QPaintDevice*  paintDevice(QBackingStore* theWrappedObject);
   void resize(QBackingStore* theWrappedObject, const QSize&  size);
   bool  scroll(QBackingStore* theWrappedObject, const QRegion&  area, int  dx, int  dy);
   void setStaticContents(QBackingStore* theWrappedObject, const QRegion&  region);
   QSize  size(QBackingStore* theWrappedObject) const;
   QRegion  staticContents(QBackingStore* theWrappedObject) const;
   QWindow*  window(QBackingStore* theWrappedObject) const;
};





class PythonQtShell_QClipboard : public QClipboard
{
public:
    PythonQtShell_QClipboard():QClipboard(),_wrapper(NULL) {};

   ~PythonQtShell_QClipboard();

virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QClipboard : public QClipboard
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QClipboard::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QClipboard::qt_metacast(arg__1); }
};

class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
QClipboard* new_QClipboard();
   void changed(QClipboard* theWrappedObject, QClipboard::Mode  mode);
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   void dataChanged(QClipboard* theWrappedObject);
   void findBufferChanged(QClipboard* theWrappedObject);
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   const QMetaObject*  metaObject(QClipboard* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QClipboard* theWrappedObject) const{  return (((PythonQtPublicPromoter_QClipboard*)theWrappedObject)->py_q_metaObject());}
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void*  qt_metacast(QClipboard* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QClipboard* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QClipboard*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   void selectionChanged(QClipboard* theWrappedObject);
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setMimeData(QClipboard* theWrappedObject, PythonQtPassOwnershipToCPP<QMimeData* >  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
};





class PythonQtShell_QCloseEvent : public QCloseEvent
{
public:
    PythonQtShell_QCloseEvent():QCloseEvent(),_wrapper(NULL) {};
    PythonQtShell_QCloseEvent(QCloseEvent&  arg__1):QCloseEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QCloseEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QCloseEvent : public QCloseEvent
{ public:
inline QCloseEvent&  promoted_operator_assign(QCloseEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; }
   QCloseEvent*  operator_assign(QCloseEvent* theWrappedObject, QCloseEvent&  arg__1);
};





class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; }
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
};





class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent&  arg__1):QContextMenuEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QContextMenuEvent();

virtual QContextMenuEvent*  clone() const;
virtual void setTimestamp(quint64  timestamp);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QContextMenuEvent : public QContextMenuEvent
{ public:
inline QContextMenuEvent&  promoted_operator_assign(QContextMenuEvent&  arg__1) { return this->operator=(arg__1); }
inline QContextMenuEvent*  py_q_clone() const { return QContextMenuEvent::clone(); }
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public slots:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; }
   QContextMenuEvent*  py_q_clone(QContextMenuEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QContextMenuEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   int  globalX(QContextMenuEvent* theWrappedObject) const;
   int  globalY(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent*  operator_assign(QContextMenuEvent* theWrappedObject, QContextMenuEvent&  arg__1);
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
   int  x(QContextMenuEvent* theWrappedObject) const;
   int  y(QContextMenuEvent* theWrappedObject) const;
};





class PythonQtShell_QDateEdit : public QDateEdit
{
public:
    PythonQtShell_QDateEdit(QDate  date, QWidget*  parent = nullptr):QDateEdit(date, parent),_wrapper(NULL) {};
    PythonQtShell_QDateEdit(QWidget*  parent = nullptr):QDateEdit(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDateEdit();

virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDateEdit : public QDateEdit
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QDateEdit::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QDateEdit::qt_metacast(arg__1); }
};

class PythonQtWrapper_QDateEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateEdit* new_QDateEdit(QDate  date, QWidget*  parent = nullptr);
QDateEdit* new_QDateEdit(QWidget*  parent = nullptr);
void delete_QDateEdit(QDateEdit* obj) { delete obj; }
   const QMetaObject*  metaObject(QDateEdit* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QDateEdit* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDateEdit*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QDateEdit* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QDateEdit* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QDateEdit*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   void userDateChanged(QDateEdit* theWrappedObject, QDate  date);
};





class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(NULL) {};

   ~PythonQtShell_QDesktopServices();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; }
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
   void static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method);
   void static_QDesktopServices_unsetUrlHandler(const QString&  scheme);
};





class PythonQtShell_QDragEnterEvent : public QDragEnterEvent
{
public:
    PythonQtShell_QDragEnterEvent(QDragEnterEvent&  arg__1):QDragEnterEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QDragEnterEvent(pos, actions, data, buttons, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QDragEnterEvent();

virtual QDragMoveEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragEnterEvent : public QDragEnterEvent
{ public:
inline QDragEnterEvent&  promoted_operator_assign(QDragEnterEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; }
   QDragEnterEvent*  operator_assign(QDragEnterEvent* theWrappedObject, QDragEnterEvent&  arg__1);
};





class PythonQtShell_QDragLeaveEvent : public QDragLeaveEvent
{
public:
    PythonQtShell_QDragLeaveEvent():QDragLeaveEvent(),_wrapper(NULL) {};
    PythonQtShell_QDragLeaveEvent(QDragLeaveEvent&  arg__1):QDragLeaveEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QDragLeaveEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragLeaveEvent : public QDragLeaveEvent
{ public:
inline QDragLeaveEvent&  promoted_operator_assign(QDragLeaveEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; }
   QDragLeaveEvent*  operator_assign(QDragLeaveEvent* theWrappedObject, QDragLeaveEvent&  arg__1);
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(QDragMoveEvent&  arg__1):QDragMoveEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDragMoveEvent();

virtual QDragMoveEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDragMoveEvent : public QDragMoveEvent
{ public:
inline QDragMoveEvent&  promoted_operator_assign(QDragMoveEvent&  arg__1) { return this->operator=(arg__1); }
inline QDragMoveEvent*  py_q_clone() const { return QDragMoveEvent::clone(); }
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; }
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   QDragMoveEvent*  py_q_clone(QDragMoveEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDragMoveEvent*)theWrappedObject)->py_q_clone());}
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QDragMoveEvent*  operator_assign(QDragMoveEvent* theWrappedObject, QDragMoveEvent&  arg__1);
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(QDropEvent&  arg__1):QDropEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDropEvent();

virtual QDropEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDropEvent : public QDropEvent
{ public:
inline QDropEvent&  promoted_operator_assign(QDropEvent&  arg__1) { return this->operator=(arg__1); }
inline QDropEvent*  py_q_clone() const { return QDropEvent::clone(); }
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; }
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::MouseButtons  buttons(QDropEvent* theWrappedObject) const;
   QDropEvent*  clone(QDropEvent* theWrappedObject) const;
   QDropEvent*  py_q_clone(QDropEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDropEvent*)theWrappedObject)->py_q_clone());}
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  modifiers(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   QDropEvent*  operator_assign(QDropEvent* theWrappedObject, QDropEvent&  arg__1);
   QPoint  pos(QDropEvent* theWrappedObject) const;
   QPointF  posF(QDropEvent* theWrappedObject) const;
   QPointF  position(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   QObject*  source(QDropEvent* theWrappedObject) const;
};





class PythonQtShell_QEnterEvent : public QEnterEvent
{
public:
    PythonQtShell_QEnterEvent(QEnterEvent&  arg__1):QEnterEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QEnterEvent();

virtual QEnterEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QEnterEvent : public QEnterEvent
{ public:
inline QEnterEvent&  promoted_operator_assign(QEnterEvent&  arg__1) { return this->operator=(arg__1); }
inline QEnterEvent*  py_q_clone() const { return QEnterEvent::clone(); }
};

class PythonQtWrapper_QEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QEnterEvent(QEnterEvent* obj) { delete obj; }
   QEnterEvent*  clone(QEnterEvent* theWrappedObject) const;
   QEnterEvent*  py_q_clone(QEnterEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QEnterEvent*)theWrappedObject)->py_q_clone());}
   QPoint  globalPos(QEnterEvent* theWrappedObject) const;
   int  globalX(QEnterEvent* theWrappedObject) const;
   int  globalY(QEnterEvent* theWrappedObject) const;
   QPointF  localPos(QEnterEvent* theWrappedObject) const;
   QEnterEvent*  operator_assign(QEnterEvent* theWrappedObject, QEnterEvent&  arg__1);
   QPoint  pos(QEnterEvent* theWrappedObject) const;
   QPointF  screenPos(QEnterEvent* theWrappedObject) const;
   QPointF  windowPos(QEnterEvent* theWrappedObject) const;
   int  x(QEnterEvent* theWrappedObject) const;
   int  y(QEnterEvent* theWrappedObject) const;
};





class PythonQtShell_QExposeEvent : public QExposeEvent
{
public:
    PythonQtShell_QExposeEvent(QExposeEvent&  arg__1):QExposeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QExposeEvent(const QRegion&  m_region):QExposeEvent(m_region),_wrapper(NULL) {};

   ~PythonQtShell_QExposeEvent();

virtual QExposeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QExposeEvent : public QExposeEvent
{ public:
inline QExposeEvent&  promoted_operator_assign(QExposeEvent&  arg__1) { return this->operator=(arg__1); }
inline QExposeEvent*  py_q_clone() const { return QExposeEvent::clone(); }
};

class PythonQtWrapper_QExposeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QExposeEvent* new_QExposeEvent(const QRegion&  m_region);
void delete_QExposeEvent(QExposeEvent* obj) { delete obj; }
   QExposeEvent*  clone(QExposeEvent* theWrappedObject) const;
   QExposeEvent*  py_q_clone(QExposeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QExposeEvent*)theWrappedObject)->py_q_clone());}
   QExposeEvent*  operator_assign(QExposeEvent* theWrappedObject, QExposeEvent&  arg__1);
   const QRegion*  region(QExposeEvent* theWrappedObject) const;
};





class PythonQtShell_QFileOpenEvent : public QFileOpenEvent
{
public:
    PythonQtShell_QFileOpenEvent(QFileOpenEvent&  arg__1):QFileOpenEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QFileOpenEvent(const QString&  file):QFileOpenEvent(file),_wrapper(NULL) {};
    PythonQtShell_QFileOpenEvent(const QUrl&  url):QFileOpenEvent(url),_wrapper(NULL) {};

   ~PythonQtShell_QFileOpenEvent();

virtual QFileOpenEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFileOpenEvent : public QFileOpenEvent
{ public:
inline QFileOpenEvent&  promoted_operator_assign(QFileOpenEvent&  arg__1) { return this->operator=(arg__1); }
inline QFileOpenEvent*  py_q_clone() const { return QFileOpenEvent::clone(); }
};

class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; }
   QFileOpenEvent*  clone(QFileOpenEvent* theWrappedObject) const;
   QFileOpenEvent*  py_q_clone(QFileOpenEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileOpenEvent*)theWrappedObject)->py_q_clone());}
   QString  file(QFileOpenEvent* theWrappedObject) const;
   bool  openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const;
   QFileOpenEvent*  operator_assign(QFileOpenEvent* theWrappedObject, QFileOpenEvent&  arg__1);
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtShell_QFocusEvent : public QFocusEvent
{
public:
    PythonQtShell_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason):QFocusEvent(type, reason),_wrapper(NULL) {};
    PythonQtShell_QFocusEvent(QFocusEvent&  arg__1):QFocusEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QFocusEvent();

virtual QFocusEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFocusEvent : public QFocusEvent
{ public:
inline QFocusEvent&  promoted_operator_assign(QFocusEvent&  arg__1) { return this->operator=(arg__1); }
inline QFocusEvent*  py_q_clone() const { return QFocusEvent::clone(); }
};

class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; }
   QFocusEvent*  clone(QFocusEvent* theWrappedObject) const;
   QFocusEvent*  py_q_clone(QFocusEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFocusEvent*)theWrappedObject)->py_q_clone());}
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   QFocusEvent*  operator_assign(QFocusEvent* theWrappedObject, QFocusEvent&  arg__1);
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; }
   bool  bold(QFontInfo* theWrappedObject) const;
   bool  exactMatch(QFontInfo* theWrappedObject) const;
   QString  family(QFontInfo* theWrappedObject) const;
   bool  fixedPitch(QFontInfo* theWrappedObject) const;
   bool  italic(QFontInfo* theWrappedObject) const;
   int  legacyWeight(QFontInfo* theWrappedObject) const;
   bool  overline(QFontInfo* theWrappedObject) const;
   int  pixelSize(QFontInfo* theWrappedObject) const;
   int  pointSize(QFontInfo* theWrappedObject) const;
   qreal  pointSizeF(QFontInfo* theWrappedObject) const;
   bool  strikeOut(QFontInfo* theWrappedObject) const;
   QFont::Style  style(QFontInfo* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
   QString  styleName(QFontInfo* theWrappedObject) const;
   void swap(QFontInfo* theWrappedObject, QFontInfo&  other);
   bool  underline(QFontInfo* theWrappedObject) const;
   int  weight(QFontInfo* theWrappedObject) const;

   QFontInfo* new_QFontInfo() { return new QFontInfo(QFont()); }
   
};





class PythonQtWrapper_QGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGestureEvent* new_QGestureEvent(const QList<QGesture* >&  gestures);
void delete_QGestureEvent(QGestureEvent* obj) { delete obj; }
   void accept(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void accept(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   QList<QGesture* >  activeGestures(QGestureEvent* theWrappedObject) const;
   QList<QGesture* >  canceledGestures(QGestureEvent* theWrappedObject) const;
   QGesture*  gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const;
   QList<QGesture* >  gestures(QGestureEvent* theWrappedObject) const;
   void ignore(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void ignore(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   bool  isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const;
   bool  isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const;
   QPointF  mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const;
   void setAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1, bool  arg__2);
   void setAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1, bool  arg__2);
   void setWidget(QGestureEvent* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QGestureEvent* theWrappedObject) const;
    QString py_toString(QGestureEvent*);
};





class PythonQtShell_QGestureRecognizer : public QGestureRecognizer
{
public:
    PythonQtShell_QGestureRecognizer():QGestureRecognizer(),_wrapper(NULL) {};

   ~PythonQtShell_QGestureRecognizer();

virtual QGesture*  create(QObject*  target);
virtual QGestureRecognizer::Result  recognize(QGesture*  state, QObject*  watched, QEvent*  event);
virtual void reset(QGesture*  state);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGestureRecognizer : public QGestureRecognizer
{ public:
inline QGesture*  py_q_create(QObject*  target) { return QGestureRecognizer::create(target); }
inline QGestureRecognizer::Result  py_q_recognize(QGesture*  state, QObject*  watched, QEvent*  event) { return this->recognize(state, watched, event); }
inline void py_q_reset(QGesture*  state) { QGestureRecognizer::reset(state); }
};

class PythonQtWrapper_QGestureRecognizer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResultFlag )
Q_FLAGS(Result )
enum ResultFlag{
  Ignore = QGestureRecognizer::Ignore,   MayBeGesture = QGestureRecognizer::MayBeGesture,   TriggerGesture = QGestureRecognizer::TriggerGesture,   FinishGesture = QGestureRecognizer::FinishGesture,   CancelGesture = QGestureRecognizer::CancelGesture,   ResultState_Mask = QGestureRecognizer::ResultState_Mask,   ConsumeEventHint = QGestureRecognizer::ConsumeEventHint,   ResultHint_Mask = QGestureRecognizer::ResultHint_Mask};
Q_DECLARE_FLAGS(Result, ResultFlag)
public slots:
QGestureRecognizer* new_QGestureRecognizer();
void delete_QGestureRecognizer(QGestureRecognizer* obj) { delete obj; }
   QGesture*  create(QGestureRecognizer* theWrappedObject, QObject*  target);
   QGesture*  py_q_create(QGestureRecognizer* theWrappedObject, QObject*  target){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_create(target));}
   QGestureRecognizer::Result  recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event);
   QGestureRecognizer::Result  py_q_recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_recognize(state, watched, event));}
   Qt::GestureType  static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer);
   void reset(QGestureRecognizer* theWrappedObject, QGesture*  state);
   void py_q_reset(QGestureRecognizer* theWrappedObject, QGesture*  state){  (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_reset(state));}
   void static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType  type);
};





class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = nullptr):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemAnimation();

virtual void afterAnimationStep(qreal  step);
virtual void beforeAnimationStep(qreal  step);
virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_afterAnimationStep(qreal  step) { this->afterAnimationStep(step); }
inline void promoted_beforeAnimationStep(qreal  step) { this->beforeAnimationStep(step); }
inline void py_q_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
inline void py_q_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
inline const QMetaObject*  py_q_metaObject() const { return QGraphicsItemAnimation::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QGraphicsItemAnimation::qt_metacast(arg__1); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = nullptr);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; }
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_afterAnimationStep(step));}
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_beforeAnimationStep(step));}
   void clear(QGraphicsItemAnimation* theWrappedObject);
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   const QMetaObject*  metaObject(QGraphicsItemAnimation* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QGraphicsItemAnimation* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_metaObject());}
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   void*  qt_metacast(QGraphicsItemAnimation* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QGraphicsItemAnimation* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   void setStep(QGraphicsItemAnimation* theWrappedObject, qreal  x);
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   QTransform  transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};





class PythonQtShell_QGraphicsObject : public QGraphicsObject
{
public:
    PythonQtShell_QGraphicsObject(QGraphicsItem*  parent = nullptr):QGraphicsObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsObject();

virtual bool  event(QEvent*  ev);
virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsObject : public QGraphicsObject
{ public:
inline bool  promoted_event(QEvent*  ev) { return this->event(ev); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline bool  py_q_event(QEvent*  ev) { return QGraphicsObject::event(ev); }
inline const QMetaObject*  py_q_metaObject() const { return QGraphicsObject::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QGraphicsObject::qt_metacast(arg__1); }
};

class PythonQtWrapper_QGraphicsObject : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsObject* new_QGraphicsObject(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsObject(QGraphicsObject* obj) { delete obj; }
   void childrenChanged(QGraphicsObject* theWrappedObject);
   void enabledChanged(QGraphicsObject* theWrappedObject);
   bool  event(QGraphicsObject* theWrappedObject, QEvent*  ev);
   bool  py_q_event(QGraphicsObject* theWrappedObject, QEvent*  ev){  return (((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->py_q_event(ev));}
   void grabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void heightChanged(QGraphicsObject* theWrappedObject);
   const QMetaObject*  metaObject(QGraphicsObject* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QGraphicsObject* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->py_q_metaObject());}
   void opacityChanged(QGraphicsObject* theWrappedObject);
   void parentChanged(QGraphicsObject* theWrappedObject);
   void*  qt_metacast(QGraphicsObject* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QGraphicsObject* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QGraphicsObject*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   void rotationChanged(QGraphicsObject* theWrappedObject);
   void scaleChanged(QGraphicsObject* theWrappedObject);
   void ungrabGesture(QGraphicsObject* theWrappedObject, Qt::GestureType  type);
   void updateMicroFocus(QGraphicsObject* theWrappedObject);
   void visibleChanged(QGraphicsObject* theWrappedObject);
   void widthChanged(QGraphicsObject* theWrappedObject);
   void xChanged(QGraphicsObject* theWrappedObject);
   void yChanged(QGraphicsObject* theWrappedObject);
   void zChanged(QGraphicsObject* theWrappedObject);
    QString py_toString(QGraphicsObject*);
};





class PythonQtShell_QGraphicsTextItem : public QGraphicsTextItem
{
public:
    PythonQtShell_QGraphicsTextItem(QGraphicsItem*  parent = nullptr):QGraphicsTextItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr):QGraphicsTextItem(text, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsTextItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  ev);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual const QMetaObject*  metaObject() const;
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void*  qt_metacast(const char*  arg__1);
virtual bool  sceneEvent(QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsTextItem : public QGraphicsTextItem
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline void promoted_setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) { this->setExtension(extension, variant); }
inline bool  promoted_supportsExtension(QGraphicsItem::Extension  extension) const { return this->supportsExtension(extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsTextItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsTextItem::contains(point); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsTextItem::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsTextItem::dropEvent(event); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsTextItem::extension(variant); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsTextItem::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsTextItem::focusOutEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsTextItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsTextItem::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsTextItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsTextItem::isObscuredBy(item); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsTextItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsTextItem::keyReleaseEvent(event); }
inline const QMetaObject*  py_q_metaObject() const { return QGraphicsTextItem::metaObject(); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsTextItem::mouseReleaseEvent(event); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsTextItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsTextItem::paint(painter, option, widget); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QGraphicsTextItem::qt_metacast(arg__1); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsTextItem::sceneEvent(event); }
inline void py_q_setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) { QGraphicsTextItem::setExtension(extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsTextItem::shape(); }
inline bool  py_q_supportsExtension(QGraphicsItem::Extension  extension) const { return QGraphicsTextItem::supportsExtension(extension); }
inline int  py_q_type() const { return QGraphicsTextItem::type(); }
};

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = nullptr);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; }
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contains(point));}
   void contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_dropEvent(event));}
   QVariant  extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_extension(variant));}
   void focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusInEvent(event));}
   void focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_focusOutEvent(event));}
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   void hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  py_q_isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   void keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void linkActivated(QGraphicsTextItem* theWrappedObject, const QString&  arg__1);
   void linkHovered(QGraphicsTextItem* theWrappedObject, const QString&  arg__1);
   const QMetaObject*  py_q_metaObject(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_metaObject());}
   void mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_opaqueArea());}
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   void py_q_paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void*  py_q_qt_metacast(QGraphicsTextItem* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   bool  sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_sceneEvent(event));}
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void setExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void setTabChangesFocus(QGraphicsTextItem* theWrappedObject, bool  b);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const;
   bool  py_q_supportsExtension(QGraphicsTextItem* theWrappedObject, QGraphicsItem::Extension  extension) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   bool  tabChangesFocus(QGraphicsTextItem* theWrappedObject) const;
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   int  type(QGraphicsTextItem* theWrappedObject) const;
   int  py_q_type(QGraphicsTextItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHBoxLayout : public QHBoxLayout
{ public:
inline const QMetaObject*  py_q_metaObject() const { return QHBoxLayout::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QHBoxLayout::qt_metacast(arg__1); }
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; }
   const QMetaObject*  metaObject(QHBoxLayout* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QHBoxLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHBoxLayout*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QHBoxLayout* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QHBoxLayout* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QHBoxLayout*)theWrappedObject)->py_q_qt_metacast(arg__1));}
};





class PythonQtShell_QHelpEvent : public QHelpEvent
{
public:
    PythonQtShell_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos):QHelpEvent(type, pos, globalPos),_wrapper(NULL) {};
    PythonQtShell_QHelpEvent(QHelpEvent&  arg__1):QHelpEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHelpEvent();

virtual QHelpEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHelpEvent : public QHelpEvent
{ public:
inline QHelpEvent&  promoted_operator_assign(QHelpEvent&  arg__1) { return this->operator=(arg__1); }
inline QHelpEvent*  py_q_clone() const { return QHelpEvent::clone(); }
};

class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; }
   QHelpEvent*  clone(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  py_q_clone(QHelpEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHelpEvent*)theWrappedObject)->py_q_clone());}
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   QHelpEvent*  operator_assign(QHelpEvent* theWrappedObject, QHelpEvent&  arg__1);
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtShell_QHideEvent : public QHideEvent
{
public:
    PythonQtShell_QHideEvent():QHideEvent(),_wrapper(NULL) {};
    PythonQtShell_QHideEvent(QHideEvent&  arg__1):QHideEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHideEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHideEvent : public QHideEvent
{ public:
inline QHideEvent&  promoted_operator_assign(QHideEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; }
   QHideEvent*  operator_assign(QHideEvent* theWrappedObject, QHideEvent&  arg__1);
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QHoverEvent&  arg__1):QHoverEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();

virtual QHoverEvent*  clone() const;
virtual bool  isUpdateEvent() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QHoverEvent : public QHoverEvent
{ public:
inline QHoverEvent&  promoted_operator_assign(QHoverEvent&  arg__1) { return this->operator=(arg__1); }
inline QHoverEvent*  py_q_clone() const { return QHoverEvent::clone(); }
inline bool  py_q_isUpdateEvent() const { return QHoverEvent::isUpdateEvent(); }
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; }
   QHoverEvent*  clone(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  py_q_clone(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_clone());}
   bool  isUpdateEvent(QHoverEvent* theWrappedObject) const;
   bool  py_q_isUpdateEvent(QHoverEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QHoverEvent*)theWrappedObject)->py_q_isUpdateEvent());}
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   QPointF  oldPosF(QHoverEvent* theWrappedObject) const;
   QHoverEvent*  operator_assign(QHoverEvent* theWrappedObject, QHoverEvent&  arg__1);
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   QPointF  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtShell_QIconDragEvent : public QIconDragEvent
{
public:
    PythonQtShell_QIconDragEvent():QIconDragEvent(),_wrapper(NULL) {};
    PythonQtShell_QIconDragEvent(QIconDragEvent&  arg__1):QIconDragEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QIconDragEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconDragEvent : public QIconDragEvent
{ public:
inline QIconDragEvent&  promoted_operator_assign(QIconDragEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; }
   QIconDragEvent*  operator_assign(QIconDragEvent* theWrappedObject, QIconDragEvent&  arg__1);
};





class PythonQtShell_QIconEngine : public QIconEngine
{
public:
    PythonQtShell_QIconEngine():QIconEngine(),_wrapper(NULL) {};
    PythonQtShell_QIconEngine(const QIconEngine&  other):QIconEngine(other),_wrapper(NULL) {};

   ~PythonQtShell_QIconEngine();

virtual QSize  actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual void addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
virtual QList<QSize >  availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
virtual QIconEngine*  clone() const;
virtual QString  iconName();
virtual bool  isNull();
virtual QString  key() const;
virtual void paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
virtual QPixmap  pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
virtual bool  read(QDataStream&  in);
virtual QPixmap  scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
virtual void virtual_hook(int  id, void*  data);
virtual bool  write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QIconEngine : public QIconEngine
{ public:
inline QSize  py_q_actualSize(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::actualSize(size, mode, state); }
inline void py_q_addFile(const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addFile(fileName, size, mode, state); }
inline void py_q_addPixmap(const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state) { QIconEngine::addPixmap(pixmap, mode, state); }
inline QList<QSize >  py_q_availableSizes(QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) { return QIconEngine::availableSizes(mode, state); }
inline QIconEngine*  py_q_clone() const { return this->clone(); }
inline QString  py_q_iconName() { return QIconEngine::iconName(); }
inline bool  py_q_isNull() { return QIconEngine::isNull(); }
inline QString  py_q_key() const { return QIconEngine::key(); }
inline void py_q_paint(QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state) { this->paint(painter, rect, mode, state); }
inline QPixmap  py_q_pixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state) { return QIconEngine::pixmap(size, mode, state); }
inline bool  py_q_read(QDataStream&  in) { return QIconEngine::read(in); }
inline QPixmap  py_q_scaledPixmap(const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale) { return QIconEngine::scaledPixmap(size, mode, state, scale); }
inline void py_q_virtual_hook(int  id, void*  data) { QIconEngine::virtual_hook(id, data); }
inline bool  py_q_write(QDataStream&  out) const { return QIconEngine::write(out); }
};

class PythonQtWrapper_QIconEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IconEngineHook )
enum IconEngineHook{
  IsNullHook = QIconEngine::IsNullHook,   ScaledPixmapHook = QIconEngine::ScaledPixmapHook};
public slots:
QIconEngine* new_QIconEngine();
QIconEngine* new_QIconEngine(const QIconEngine&  other);
void delete_QIconEngine(QIconEngine* obj) { delete obj; }
   QSize  actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QSize  py_q_actualSize(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_actualSize(size, mode, state));}
   void addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addFile(QIconEngine* theWrappedObject, const QString&  fileName, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addFile(fileName, size, mode, state));}
   void addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state);
   void py_q_addPixmap(QIconEngine* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_addPixmap(pixmap, mode, state));}
   QList<QSize >  availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   QList<QSize >  py_q_availableSizes(QIconEngine* theWrappedObject, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_availableSizes(mode, state));}
   QIconEngine*  clone(QIconEngine* theWrappedObject) const;
   QIconEngine*  py_q_clone(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_clone());}
   QString  iconName(QIconEngine* theWrappedObject);
   QString  py_q_iconName(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_iconName());}
   bool  isNull(QIconEngine* theWrappedObject);
   bool  py_q_isNull(QIconEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_isNull());}
   QString  key(QIconEngine* theWrappedObject) const;
   QString  py_q_key(QIconEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_key());}
   void paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state);
   void py_q_paint(QIconEngine* theWrappedObject, QPainter*  painter, const QRect&  rect, QIcon::Mode  mode, QIcon::State  state){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_paint(painter, rect, mode, state));}
   QPixmap  pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state);
   QPixmap  py_q_pixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_pixmap(size, mode, state));}
   bool  read(QIconEngine* theWrappedObject, QDataStream&  in);
   bool  py_q_read(QIconEngine* theWrappedObject, QDataStream&  in){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_read(in));}
   QPixmap  scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale);
   QPixmap  py_q_scaledPixmap(QIconEngine* theWrappedObject, const QSize&  size, QIcon::Mode  mode, QIcon::State  state, qreal  scale){  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_scaledPixmap(size, mode, state, scale));}
   void virtual_hook(QIconEngine* theWrappedObject, int  id, void*  data);
   void py_q_virtual_hook(QIconEngine* theWrappedObject, int  id, void*  data){  (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_virtual_hook(id, data));}
   bool  write(QIconEngine* theWrappedObject, QDataStream&  out) const;
   bool  py_q_write(QIconEngine* theWrappedObject, QDataStream&  out) const{  return (((PythonQtPublicPromoter_QIconEngine*)theWrappedObject)->py_q_write(out));}
    bool __nonzero__(QIconEngine* obj) { return !obj->isNull(); }
};


