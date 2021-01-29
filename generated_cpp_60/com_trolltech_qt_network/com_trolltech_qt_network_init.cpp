#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_network0.h"



void PythonQt_init_QtNetwork(PyObject* module) {
PythonQt::priv()->registerCPPClass("QAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAuthenticator>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QHostInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHstsPolicy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHstsPolicy>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QIPv6Address", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QIPv6Address>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIPv6Address>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkProxyFactory", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxyFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkProxyFactory>, module, 0);
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSsl", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSsl>, NULL, module, 0);
#endif


PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkProxy);
}
