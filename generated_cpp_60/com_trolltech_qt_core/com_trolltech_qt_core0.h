#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QObject>
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
#include <qfactoryinterface.h>
#include <qjsondocument.h>
#include <qlibraryinfo.h>
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
#include <qsysinfo.h>
#include <qurl.h>



class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = nullptr):QAbstractListModel(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractListModel();

virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual const QMetaObject*  metaObject() const;
virtual void*  qt_metacast(const char*  arg__1);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  py_q_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QAbstractListModel::flags(index); }
inline QModelIndex  py_q_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
inline const QMetaObject*  py_q_metaObject() const { return QAbstractListModel::metaObject(); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QAbstractListModel::qt_metacast(arg__1); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QAbstractListModel::sibling(row, column, idx); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = nullptr);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; }
   bool  dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   bool  py_q_dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent){  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_dropMimeData(data, action, row, column, parent));}
   Qt::ItemFlags  flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::ItemFlags  py_q_flags(QAbstractListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_flags(index));}
   QModelIndex  index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  py_q_index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_index(row, column, parent));}
   const QMetaObject*  metaObject(QAbstractListModel* theWrappedObject) const;
   const QMetaObject*  py_q_metaObject(QAbstractListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_metaObject());}
   void*  qt_metacast(QAbstractListModel* theWrappedObject, const char*  arg__1);
   void*  py_q_qt_metacast(QAbstractListModel* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   QModelIndex  sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   QModelIndex  py_q_sibling(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
};





class PythonQtShell_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{
public:
    PythonQtShell_QApplicationStateChangeEvent(QApplicationStateChangeEvent&  arg__1):QApplicationStateChangeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QApplicationStateChangeEvent(Qt::ApplicationState  state):QApplicationStateChangeEvent(state),_wrapper(NULL) {};

   ~PythonQtShell_QApplicationStateChangeEvent();

virtual QApplicationStateChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QApplicationStateChangeEvent : public QApplicationStateChangeEvent
{ public:
inline QApplicationStateChangeEvent&  promoted_operator_assign(QApplicationStateChangeEvent&  arg__1) { return this->operator=(arg__1); }
inline QApplicationStateChangeEvent*  py_q_clone() const { return QApplicationStateChangeEvent::clone(); }
};

class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; }
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
   QApplicationStateChangeEvent*  clone(QApplicationStateChangeEvent* theWrappedObject) const;
   QApplicationStateChangeEvent*  py_q_clone(QApplicationStateChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QApplicationStateChangeEvent*)theWrappedObject)->py_q_clone());}
   QApplicationStateChangeEvent*  operator_assign(QApplicationStateChangeEvent* theWrappedObject, QApplicationStateChangeEvent&  arg__1);
};





class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; }
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QChildEvent&  arg__1):QChildEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};

   ~PythonQtShell_QChildEvent();

virtual QChildEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QChildEvent : public QChildEvent
{ public:
inline QChildEvent&  promoted_operator_assign(QChildEvent&  arg__1) { return this->operator=(arg__1); }
inline QChildEvent*  py_q_clone() const { return QChildEvent::clone(); }
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; }
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   QChildEvent*  clone(QChildEvent* theWrappedObject) const;
   QChildEvent*  py_q_clone(QChildEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QChildEvent*)theWrappedObject)->py_q_clone());}
   QChildEvent*  operator_assign(QChildEvent* theWrappedObject, QChildEvent&  arg__1);
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtWrapper_QCommandLineParser : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionsAfterPositionalArgumentsMode SingleDashWordOptionMode )
enum OptionsAfterPositionalArgumentsMode{
  ParseAsOptions = QCommandLineParser::ParseAsOptions,   ParseAsPositionalArguments = QCommandLineParser::ParseAsPositionalArguments};
enum SingleDashWordOptionMode{
  ParseAsCompactedShortOptions = QCommandLineParser::ParseAsCompactedShortOptions,   ParseAsLongOptions = QCommandLineParser::ParseAsLongOptions};
public slots:
void delete_QCommandLineParser(QCommandLineParser* obj) { delete obj; }
   QCommandLineOption  addHelpOption(QCommandLineParser* theWrappedObject);
   bool  addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption);
   bool  addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options);
   void addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax = QString());
   QCommandLineOption  addVersionOption(QCommandLineParser* theWrappedObject);
   QString  applicationDescription(QCommandLineParser* theWrappedObject) const;
   void clearPositionalArguments(QCommandLineParser* theWrappedObject);
   QString  errorText(QCommandLineParser* theWrappedObject) const;
   QString  helpText(QCommandLineParser* theWrappedObject) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   bool  isSet(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  optionNames(QCommandLineParser* theWrappedObject) const;
   bool  parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   QStringList  positionalArguments(QCommandLineParser* theWrappedObject) const;
   void process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app);
   void process(QCommandLineParser* theWrappedObject, const QStringList&  arguments);
   void setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description);
   void setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode);
   void setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode);
   void showHelp(QCommandLineParser* theWrappedObject, int  exitCode = 0);
   void showVersion(QCommandLineParser* theWrappedObject);
   QString  static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation = nullptr, int  n = -1);
   QStringList  unknownOptionNames(QCommandLineParser* theWrappedObject) const;
   QString  value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QString  value(QCommandLineParser* theWrappedObject, const QString&  name) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const;
   QStringList  values(QCommandLineParser* theWrappedObject, const QString&  name) const;
};





class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_5_13 = QDataStream::Qt_5_13,   Qt_5_14 = QDataStream::Qt_5_14,   Qt_5_15 = QDataStream::Qt_5_15,   Qt_6_0 = QDataStream::Qt_6_0,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
void delete_QDataStream(QDataStream* obj) { delete obj; }
   void abortTransaction(QDataStream* theWrappedObject);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   bool  isDeviceTransactionStarted(QDataStream* theWrappedObject) const;
   QDataStream*  __lshift__(QDataStream* theWrappedObject, char  i);
   QDataStream*  __rshift__(QDataStream* theWrappedObject, char&  i);
   void resetStatus(QDataStream* theWrappedObject);
   void rollbackTransaction(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void startTransaction(QDataStream* theWrappedObject);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   int  version(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};





class PythonQtShell_QDeferredDeleteEvent : public QDeferredDeleteEvent
{
public:
    PythonQtShell_QDeferredDeleteEvent():QDeferredDeleteEvent(),_wrapper(NULL) {};
    PythonQtShell_QDeferredDeleteEvent(QDeferredDeleteEvent&  arg__1):QDeferredDeleteEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QDeferredDeleteEvent();

virtual QDeferredDeleteEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDeferredDeleteEvent : public QDeferredDeleteEvent
{ public:
inline QDeferredDeleteEvent&  promoted_operator_assign(QDeferredDeleteEvent&  arg__1) { return this->operator=(arg__1); }
inline QDeferredDeleteEvent*  py_q_clone() const { return QDeferredDeleteEvent::clone(); }
};

class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; }
   QDeferredDeleteEvent*  clone(QDeferredDeleteEvent* theWrappedObject) const;
   QDeferredDeleteEvent*  py_q_clone(QDeferredDeleteEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDeferredDeleteEvent*)theWrappedObject)->py_q_clone());}
   int  loopLevel(QDeferredDeleteEvent* theWrappedObject) const;
   QDeferredDeleteEvent*  operator_assign(QDeferredDeleteEvent* theWrappedObject, QDeferredDeleteEvent&  arg__1);
};





class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
void delete_QDirIterator(QDirIterator* obj) { delete obj; }
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  next(QDirIterator* theWrappedObject);
   QString  path(QDirIterator* theWrappedObject) const;
};





class PythonQtShell_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{
public:
    PythonQtShell_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent&  arg__1):QDynamicPropertyChangeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDynamicPropertyChangeEvent(const QByteArray&  name):QDynamicPropertyChangeEvent(name),_wrapper(NULL) {};

   ~PythonQtShell_QDynamicPropertyChangeEvent();

virtual QDynamicPropertyChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QDynamicPropertyChangeEvent : public QDynamicPropertyChangeEvent
{ public:
inline QDynamicPropertyChangeEvent&  promoted_operator_assign(QDynamicPropertyChangeEvent&  arg__1) { return this->operator=(arg__1); }
inline QDynamicPropertyChangeEvent*  py_q_clone() const { return QDynamicPropertyChangeEvent::clone(); }
};

class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; }
   QDynamicPropertyChangeEvent*  clone(QDynamicPropertyChangeEvent* theWrappedObject) const;
   QDynamicPropertyChangeEvent*  py_q_clone(QDynamicPropertyChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QDynamicPropertyChangeEvent*)theWrappedObject)->py_q_clone());}
   QDynamicPropertyChangeEvent*  operator_assign(QDynamicPropertyChangeEvent* theWrappedObject, QDynamicPropertyChangeEvent&  arg__1);
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QFactoryInterface : public QFactoryInterface
{
public:
    PythonQtShell_QFactoryInterface():QFactoryInterface(),_wrapper(NULL) {};

   ~PythonQtShell_QFactoryInterface();

virtual QStringList  keys() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QFactoryInterface : public QFactoryInterface
{ public:
inline QStringList  py_q_keys() const { return this->keys(); }
};

class PythonQtWrapper_QFactoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QFactoryInterface* new_QFactoryInterface();
void delete_QFactoryInterface(QFactoryInterface* obj) { delete obj; }
   QStringList  keys(QFactoryInterface* theWrappedObject) const;
   QStringList  py_q_keys(QFactoryInterface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFactoryInterface*)theWrappedObject)->py_q_keys());}
};





class PythonQtShell_QJsonParseError : public QJsonParseError
{
public:
    PythonQtShell_QJsonParseError():QJsonParseError(),_wrapper(NULL) {};

   ~PythonQtShell_QJsonParseError();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QJsonParseError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ParseError )
enum ParseError{
  NoError = QJsonParseError::NoError,   UnterminatedObject = QJsonParseError::UnterminatedObject,   MissingNameSeparator = QJsonParseError::MissingNameSeparator,   UnterminatedArray = QJsonParseError::UnterminatedArray,   MissingValueSeparator = QJsonParseError::MissingValueSeparator,   IllegalValue = QJsonParseError::IllegalValue,   TerminationByNumber = QJsonParseError::TerminationByNumber,   IllegalNumber = QJsonParseError::IllegalNumber,   IllegalEscapeSequence = QJsonParseError::IllegalEscapeSequence,   IllegalUTF8String = QJsonParseError::IllegalUTF8String,   UnterminatedString = QJsonParseError::UnterminatedString,   MissingObject = QJsonParseError::MissingObject,   DeepNesting = QJsonParseError::DeepNesting,   DocumentTooLarge = QJsonParseError::DocumentTooLarge,   GarbageAtEnd = QJsonParseError::GarbageAtEnd};
public slots:
QJsonParseError* new_QJsonParseError();
void delete_QJsonParseError(QJsonParseError* obj) { delete obj; }
   QString  errorString(QJsonParseError* theWrappedObject) const;
void py_set_error(QJsonParseError* theWrappedObject, QJsonParseError::ParseError  error){ theWrappedObject->error = error; }
QJsonParseError::ParseError  py_get_error(QJsonParseError* theWrappedObject){ return theWrappedObject->error; }
void py_set_offset(QJsonParseError* theWrappedObject, int  offset){ theWrappedObject->offset = offset; }
int  py_get_offset(QJsonParseError* theWrappedObject){ return theWrappedObject->offset; }
};





class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; }
   bool  static_QLibraryInfo_isDebugBuild();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  location);
   QStringList  static_QLibraryInfo_platformPluginArguments(const QString&  platformName);
};





class PythonQtWrapper_QLoggingCategory : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QLoggingCategory(QLoggingCategory* obj) { delete obj; }
   const char*  categoryName(QLoggingCategory* theWrappedObject) const;
   QLoggingCategory*  static_QLoggingCategory_defaultCategory();
   bool  isCriticalEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isDebugEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const;
   bool  isInfoEnabled(QLoggingCategory* theWrappedObject) const;
   bool  isWarningEnabled(QLoggingCategory* theWrappedObject) const;
   void setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable);
   void static_QLoggingCategory_setFilterRules(const QString&  rules);
};





class PythonQtWrapper_QMessageAuthenticationCode : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMessageAuthenticationCode(QMessageAuthenticationCode* obj) { delete obj; }
   bool  addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device);
   void addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data);
   QByteArray  static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method);
   void reset(QMessageAuthenticationCode* theWrappedObject);
   QByteArray  result(QMessageAuthenticationCode* theWrappedObject) const;
   void setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key);
};





class PythonQtShell_QMessageLogContext : public QMessageLogContext
{
public:
    PythonQtShell_QMessageLogContext():QMessageLogContext(),_wrapper(NULL) {};

   ~PythonQtShell_QMessageLogContext();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMessageLogContext : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogContext* new_QMessageLogContext();
void delete_QMessageLogContext(QMessageLogContext* obj) { delete obj; }
const char*  py_get_category(QMessageLogContext* theWrappedObject){ return theWrappedObject->category; }
const char*  py_get_file(QMessageLogContext* theWrappedObject){ return theWrappedObject->file; }
const char*  py_get_function(QMessageLogContext* theWrappedObject){ return theWrappedObject->function; }
void py_set_line(QMessageLogContext* theWrappedObject, int  line){ theWrappedObject->line = line; }
int  py_get_line(QMessageLogContext* theWrappedObject){ return theWrappedObject->line; }
void py_set_version(QMessageLogContext* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QMessageLogContext* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QMessageLogger : public QMessageLogger
{
public:
    PythonQtShell_QMessageLogger():QMessageLogger(),_wrapper(NULL) {};

   ~PythonQtShell_QMessageLogger();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogger* new_QMessageLogger();
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; }
   QMessageLogger  context(QMessageLogger* theWrappedObject);
};





class PythonQtShell_QMetaClassInfo : public QMetaClassInfo
{
public:
    PythonQtShell_QMetaClassInfo():QMetaClassInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QMetaClassInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QMetaClassInfo : public QObject
{ Q_OBJECT
public:
public slots:
QMetaClassInfo* new_QMetaClassInfo();
void delete_QMetaClassInfo(QMetaClassInfo* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaClassInfo* theWrappedObject) const;
   const char*  name(QMetaClassInfo* theWrappedObject) const;
   const char*  value(QMetaClassInfo* theWrappedObject) const;
};





class PythonQtWrapper_QMetaEnum : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMetaEnum(QMetaEnum* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaEnum* theWrappedObject) const;
   const char*  enumName(QMetaEnum* theWrappedObject) const;
   bool  isFlag(QMetaEnum* theWrappedObject) const;
   bool  isScoped(QMetaEnum* theWrappedObject) const;
   bool  isValid(QMetaEnum* theWrappedObject) const;
   const char*  key(QMetaEnum* theWrappedObject, int  index) const;
   int  keyCount(QMetaEnum* theWrappedObject) const;
   int  keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok = nullptr) const;
   int  keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok = nullptr) const;
   const char*  name(QMetaEnum* theWrappedObject) const;
   const char*  scope(QMetaEnum* theWrappedObject) const;
   int  value(QMetaEnum* theWrappedObject, int  index) const;
   const char*  valueToKey(QMetaEnum* theWrappedObject, int  value) const;
   QByteArray  valueToKeys(QMetaEnum* theWrappedObject, int  value) const;
    bool __nonzero__(QMetaEnum* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaProperty : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QMetaProperty(QMetaProperty* obj) { delete obj; }
   const QMetaObject*  enclosingMetaObject(QMetaProperty* theWrappedObject) const;
   QMetaEnum  enumerator(QMetaProperty* theWrappedObject) const;
   bool  hasNotifySignal(QMetaProperty* theWrappedObject) const;
   bool  hasStdCppSet(QMetaProperty* theWrappedObject) const;
   bool  isAlias(QMetaProperty* theWrappedObject) const;
   bool  isBindable(QMetaProperty* theWrappedObject) const;
   bool  isConstant(QMetaProperty* theWrappedObject) const;
   bool  isDesignable(QMetaProperty* theWrappedObject) const;
   bool  isEnumType(QMetaProperty* theWrappedObject) const;
   bool  isFinal(QMetaProperty* theWrappedObject) const;
   bool  isFlagType(QMetaProperty* theWrappedObject) const;
   bool  isReadable(QMetaProperty* theWrappedObject) const;
   bool  isRequired(QMetaProperty* theWrappedObject) const;
   bool  isResettable(QMetaProperty* theWrappedObject) const;
   bool  isScriptable(QMetaProperty* theWrappedObject) const;
   bool  isStored(QMetaProperty* theWrappedObject) const;
   bool  isUser(QMetaProperty* theWrappedObject) const;
   bool  isValid(QMetaProperty* theWrappedObject) const;
   bool  isWritable(QMetaProperty* theWrappedObject) const;
   QMetaType  metaType(QMetaProperty* theWrappedObject) const;
   const char*  name(QMetaProperty* theWrappedObject) const;
   QMetaMethod  notifySignal(QMetaProperty* theWrappedObject) const;
   int  notifySignalIndex(QMetaProperty* theWrappedObject) const;
   int  propertyIndex(QMetaProperty* theWrappedObject) const;
   QVariant  read(QMetaProperty* theWrappedObject, const QObject*  obj) const;
   QVariant  readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const;
   int  relativePropertyIndex(QMetaProperty* theWrappedObject) const;
   bool  reset(QMetaProperty* theWrappedObject, QObject*  obj) const;
   bool  resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const;
   int  revision(QMetaProperty* theWrappedObject) const;
   QVariant::Type  type(QMetaProperty* theWrappedObject) const;
   int  typeId(QMetaProperty* theWrappedObject) const;
   const char*  typeName(QMetaProperty* theWrappedObject) const;
   int  userType(QMetaProperty* theWrappedObject) const;
   bool  write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const;
   bool  writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const;
    bool __nonzero__(QMetaProperty* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   RelocatableType = QMetaType::RelocatableType,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   IsUnsignedEnumeration = QMetaType::IsUnsignedEnumeration,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget,   IsPointer = QMetaType::IsPointer,   IsQmlList = QMetaType::IsQmlList};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
QMetaType* new_QMetaType(int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; }
   QMetaType  alignOf(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_canConvert(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_canView(QMetaType  fromType, QMetaType  toType);
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = nullptr) const;
   bool  static_QMetaType_convert(QMetaType  fromType, const void*  from, QMetaType  toType, void*  to);
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = nullptr) const;
   void*  static_QMetaType_create(int  type, const void*  copy = nullptr);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
   bool  equals(QMetaType* theWrappedObject, const void*  lhs, const void*  rhs) const;
   bool  static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   QMetaType  flags(QMetaType* theWrappedObject) const;
   QMetaType  static_QMetaType_fromType();
   QMetaType  fromType<T>(QMetaType* theWrappedObject);
   QMetaType  fromType<T>(QMetaType* theWrappedObject);
   bool  static_QMetaType_hasRegisteredConverterFunction(QMetaType  fromType, QMetaType  toType);
   bool  hasRegisteredDebugStreamOperator(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId);
   bool  static_QMetaType_hasRegisteredMutableViewFunction();
   bool  static_QMetaType_hasRegisteredMutableViewFunction(QMetaType  fromType, QMetaType  toType);
   int  id(QMetaType* theWrappedObject) const;
   bool  isEqualityComparable(QMetaType* theWrappedObject) const;
   bool  isOrdered(QMetaType* theWrappedObject) const;
   bool  isRegistered(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_isRegistered(int  type);
   bool  isValid(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   bool  load(QMetaType* theWrappedObject, QDataStream&  stream, void*  data) const;
   QMetaType  metaObject(QMetaType* theWrappedObject) const;
   const QMetaObject*  static_QMetaType_metaObjectForType(int  type);
   char*  name(QMetaType* theWrappedObject) const;
   void static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, QMetaType  type);
   bool  save(QMetaType* theWrappedObject, QDataStream&  stream, const void*  data) const;
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   QMetaType  sizeOf(QMetaType* theWrappedObject) const;
   int  static_QMetaType_sizeOf(int  type);
   int  static_QMetaType_type(const QByteArray&  typeName);
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
   void static_QMetaType_unregisterConverterFunction(QMetaType  from, QMetaType  to);
   void static_QMetaType_unregisterMetaType(QMetaType  type);
   void static_QMetaType_unregisterMutableViewFunction(QMetaType  from, QMetaType  to);
   bool  static_QMetaType_view(QMetaType  fromType, void*  from, QMetaType  toType, void*  to);
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMimeDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MatchMode )
enum MatchMode{
  MatchDefault = QMimeDatabase::MatchDefault,   MatchExtension = QMimeDatabase::MatchExtension,   MatchContent = QMimeDatabase::MatchContent};
public slots:
void delete_QMimeDatabase(QMimeDatabase* obj) { delete obj; }
   QList<QMimeType >  allMimeTypes(QMimeDatabase* theWrappedObject) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const;
   QMimeType  mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode = QMimeDatabase::MatchDefault) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const;
   QMimeType  mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const;
   QMimeType  mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const;
   QMimeType  mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const;
   QList<QMimeType >  mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
   QString  suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const;
};





class PythonQtShell_QOperatingSystemVersion : public QOperatingSystemVersion
{
public:
    PythonQtShell_QOperatingSystemVersion():QOperatingSystemVersion(),_wrapper(NULL) {};

   ~PythonQtShell_QOperatingSystemVersion();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QOperatingSystemVersion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OSType )
enum OSType{
  Unknown = QOperatingSystemVersion::Unknown,   Windows = QOperatingSystemVersion::Windows,   MacOS = QOperatingSystemVersion::MacOS,   IOS = QOperatingSystemVersion::IOS,   TvOS = QOperatingSystemVersion::TvOS,   WatchOS = QOperatingSystemVersion::WatchOS,   Android = QOperatingSystemVersion::Android};
public slots:
QOperatingSystemVersion* new_QOperatingSystemVersion();
void delete_QOperatingSystemVersion(QOperatingSystemVersion* obj) { delete obj; }
   QOperatingSystemVersion  current(QOperatingSystemVersion* theWrappedObject);
   QOperatingSystemVersion  currentType(QOperatingSystemVersion* theWrappedObject);
   int  majorVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  microVersion(QOperatingSystemVersion* theWrappedObject) const;
   int  minorVersion(QOperatingSystemVersion* theWrappedObject) const;
   QString  name(QOperatingSystemVersion* theWrappedObject) const;
   int  segmentCount(QOperatingSystemVersion* theWrappedObject) const;
   QOperatingSystemVersion  type(QOperatingSystemVersion* theWrappedObject) const;
    QString py_toString(QOperatingSystemVersion*);
};





class PythonQtWrapper_QRandomGenerator64 : public QObject
{ Q_OBJECT
public:
public slots:
QRandomGenerator64* new_QRandomGenerator64(const QRandomGenerator&  other);
QRandomGenerator64* new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end);
QRandomGenerator64* new_QRandomGenerator64(unsigned int  seedValue = 1);
void delete_QRandomGenerator64(QRandomGenerator64* obj) { delete obj; }
   void discard(QRandomGenerator64* theWrappedObject, quint64  z);
   quint64  generate(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64*  static_QRandomGenerator64_global();
   QRandomGenerator64  max(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64  min(QRandomGenerator64* theWrappedObject);
   quint64  operator_cast_(QRandomGenerator64* theWrappedObject);
   QRandomGenerator64  static_QRandomGenerator64_securelySeeded();
   QRandomGenerator64*  static_QRandomGenerator64_system();
};





class PythonQtWrapper_QReadLocker : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QReadLocker(QReadLocker* obj) { delete obj; }
   QReadWriteLock*  readWriteLock(QReadLocker* theWrappedObject) const;
   void relock(QReadLocker* theWrappedObject);
   void unlock(QReadLocker* theWrappedObject);

    void __enter__(QReadLocker* self) {}
    void __exit__(QReadLocker* self, PyObject* type, PyObject* value, PyObject* traceback) { self->unlock(); }
    
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; }
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

   ~PythonQtShell_QRunnable();

virtual void run();

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QRunnable : public QRunnable
{ public:
inline void py_q_run() { this->run(); }
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; }
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void run(QRunnable* theWrappedObject);
   void py_q_run(QRunnable* theWrappedObject){  (((PythonQtPublicPromoter_QRunnable*)theWrappedObject)->py_q_run());}
   void setAutoDelete(QRunnable* theWrappedObject, bool  autoDelete);
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSemaphore(QSemaphore* obj) { delete obj; }
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   void release(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
};





class PythonQtShell_QSignalBlocker : public QSignalBlocker
{
public:
    PythonQtShell_QSignalBlocker():QSignalBlocker(),_wrapper(NULL) {};

   ~PythonQtShell_QSignalBlocker();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public slots:
QSignalBlocker* new_QSignalBlocker();
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; }
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; }
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Endian Sizes )
enum Endian{
  BigEndian = QSysInfo::BigEndian,   LittleEndian = QSysInfo::LittleEndian,   ByteOrder = QSysInfo::ByteOrder};
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; }
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
};


