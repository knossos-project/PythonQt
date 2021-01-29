#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_core_builtin0.h"


void PythonQt_init_QtCoreBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QDate", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDate>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QLineF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLineF>, NULL, module, PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTime>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QUrl", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrl>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("Qt", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_Qt>, NULL, module, 0);


}
