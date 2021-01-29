#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui_builtin0.h"


void PythonQt_init_QtGuiBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QBitmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPolygon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygon>, NULL, module, PythonQt::Type_Multiply);
PythonQt::priv()->registerCPPClass("QRegion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegion>, NULL, module, PythonQt::Type_Multiply);
PythonQt::priv()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>, NULL, module, PythonQt::Type_RichCompare);


}
