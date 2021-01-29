#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui0.h"
#include "com_trolltech_qt_gui1.h"
#include "com_trolltech_qt_gui2.h"
#include "com_trolltech_qt_gui3.h"
#include "com_trolltech_qt_gui4.h"

static void* polymorphichandler_QStyleOption(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QStyleOption *object = (QStyleOption *)ptr;
    if (object->type == QStyleOption::SO_Default) {
        *class_name = "QStyleOption";
        return (QStyleOption*)object;
    }
    if (object->type == QStyleOptionButton::Type && object->version == QStyleOptionButton::Version) {
        *class_name = "QStyleOptionButton";
        return (QStyleOptionButton*)object;
    }
    if (object->type == QStyleOptionComboBox::Type && object->version == QStyleOptionComboBox::Version) {
        *class_name = "QStyleOptionComboBox";
        return (QStyleOptionComboBox*)object;
    }
    if (object->type == QStyleOptionDockWidget::Type && object->version == QStyleOptionDockWidget::Version) {
        *class_name = "QStyleOptionDockWidget";
        return (QStyleOptionDockWidget*)object;
    }
    if (object->type == QStyleOptionFocusRect::Type && object->version == QStyleOptionFocusRect::Version) {
        *class_name = "QStyleOptionFocusRect";
        return (QStyleOptionFocusRect*)object;
    }
    if (object->type == QStyleOptionFrame::Type && object->version == QStyleOptionFrame::Version) {
        *class_name = "QStyleOptionFrame";
        return (QStyleOptionFrame*)object;
    }
    if (object->type == QStyleOptionGraphicsItem::Type && object->version == QStyleOptionGraphicsItem::Version) {
        *class_name = "QStyleOptionGraphicsItem";
        return (QStyleOptionGraphicsItem*)object;
    }
    if (object->type == QStyleOptionGroupBox::Type && object->version == QStyleOptionGroupBox::Version) {
        *class_name = "QStyleOptionGroupBox";
        return (QStyleOptionGroupBox*)object;
    }
    if (object->type == QStyleOptionHeader::Type && object->version == QStyleOptionHeader::Version) {
        *class_name = "QStyleOptionHeader";
        return (QStyleOptionHeader*)object;
    }
    if (object->type == QStyleOptionMenuItem::Type && object->version == QStyleOptionMenuItem::Version) {
        *class_name = "QStyleOptionMenuItem";
        return (QStyleOptionMenuItem*)object;
    }
    if (object->type == QStyleOptionProgressBar::Type && object->version == QStyleOptionProgressBar::Version) {
        *class_name = "QStyleOptionProgressBar";
        return (QStyleOptionProgressBar*)object;
    }
    if (object->type == QStyleOptionRubberBand::Type && object->version == QStyleOptionRubberBand::Version) {
        *class_name = "QStyleOptionRubberBand";
        return (QStyleOptionRubberBand*)object;
    }
    if (object->type == QStyleOptionSizeGrip::Type && object->version == QStyleOptionSizeGrip::Version) {
        *class_name = "QStyleOptionSizeGrip";
        return (QStyleOptionSizeGrip*)object;
    }
    if (object->type == QStyleOptionSlider::Type && object->version == QStyleOptionSlider::Version) {
        *class_name = "QStyleOptionSlider";
        return (QStyleOptionSlider*)object;
    }
    if (object->type == QStyleOptionSpinBox::Type && object->version == QStyleOptionSpinBox::Version) {
        *class_name = "QStyleOptionSpinBox";
        return (QStyleOptionSpinBox*)object;
    }
    if (object->type == QStyleOptionTab::Type && object->version == QStyleOptionTab::Version) {
        *class_name = "QStyleOptionTab";
        return (QStyleOptionTab*)object;
    }
    if (object->type == QStyleOptionTabBarBase::Type && object->version == QStyleOptionTabBarBase::Version) {
        *class_name = "QStyleOptionTabBarBase";
        return (QStyleOptionTabBarBase*)object;
    }
    if (object->type == QStyleOptionTabWidgetFrame::Type && object->version == QStyleOptionTabWidgetFrame::Version) {
        *class_name = "QStyleOptionTabWidgetFrame";
        return (QStyleOptionTabWidgetFrame*)object;
    }
    if (object->type == QStyleOptionTitleBar::Type && object->version == QStyleOptionTitleBar::Version) {
        *class_name = "QStyleOptionTitleBar";
        return (QStyleOptionTitleBar*)object;
    }
    if (object->type == QStyleOptionToolBar::Type && object->version == QStyleOptionToolBar::Version) {
        *class_name = "QStyleOptionToolBar";
        return (QStyleOptionToolBar*)object;
    }
    if (object->type == QStyleOptionToolBox::Type && object->version == QStyleOptionToolBox::Version) {
        *class_name = "QStyleOptionToolBox";
        return (QStyleOptionToolBox*)object;
    }
    if (object->type == QStyleOptionToolButton::Type && object->version == QStyleOptionToolButton::Version) {
        *class_name = "QStyleOptionToolButton";
        return (QStyleOptionToolButton*)object;
    }
    if (object->type == QStyleOptionViewItem::Type && object->version == QStyleOptionViewItem::Version) {
        *class_name = "QStyleOptionViewItem";
        return (QStyleOptionViewItem*)object;
    }
    return NULL;
}


void PythonQt_init_QtGui(PyObject* module) {
PythonQt::priv()->registerCPPClass("QAbstractTableModel", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAbstractTableModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTableModel>, module, 0);
PythonQt::priv()->registerCPPClass("QAccessibleEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QAccessibleEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAccessibleEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QActionEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QActionEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QBackingStore", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBackingStore>, NULL, module, 0);
PythonQt::priv()->registerClass(&QClipboard::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QClipboard>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QClipboard>, module, 0);
PythonQt::priv()->registerCPPClass("QCloseEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCloseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCloseEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QConicalGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QConicalGradient>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QContextMenuEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QContextMenuEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QContextMenuEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDateEdit", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDateEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDateEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QDesktopServices", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDesktopServices>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDesktopServices>, module, 0);
PythonQt::priv()->registerCPPClass("QDragEnterEvent", "QDragMoveEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragEnterEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragEnterEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDragLeaveEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragLeaveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragLeaveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDragMoveEvent", "QDropEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragMoveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDropEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDropEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDropEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QEnterEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QEnterEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEnterEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QExposeEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QExposeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QExposeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QFileOpenEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileOpenEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileOpenEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QFocusEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFocusEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QFontInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGestureEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGestureEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QGestureRecognizer", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGestureRecognizer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGestureRecognizer>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsItemAnimation::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsItemAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsItemAnimation>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsObject::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsObject>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsTextItem::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGraphicsTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsTextItem>, module, 0);
PythonQt::priv()->registerCPPClass("QHBoxLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHBoxLayout>, module, 0);
PythonQt::priv()->registerCPPClass("QHelpEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHelpEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHelpEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QHideEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHideEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHideEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QHoverEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHoverEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHoverEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QIconDragEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconDragEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconDragEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QIconEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIconEngine>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QImageIOPlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageIOPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageIOPlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QImageReader", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageReader>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QImageWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImageWriter>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputMethodEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent::Attribute", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent__Attribute>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputMethodEvent__Attribute>, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodQueryEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodQueryEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputMethodQueryEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QIntValidator", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIntValidator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIntValidator>, module, 0);
PythonQt::priv()->registerCPPClass("QItemEditorCreatorBase", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorCreatorBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorCreatorBase>, module, 0);
PythonQt::priv()->registerCPPClass("QItemEditorFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemEditorFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QItemEditorFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QItemSelection", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QItemSelection>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QKeyEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayoutItem>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QLinearGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLinearGradient>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QListWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QListWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QListWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMatrix4x4", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix4x4>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMouseEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QMoveEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMoveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QNativeGestureEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QNativeGestureEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNativeGestureEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QOpenGLFramebufferObjectFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QOpenGLFramebufferObjectFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPagedPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPagedPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPagedPaintDevice>, module, 0);
PythonQt::self()->addParentClass("QPagedPaintDevice", "QPaintDevice",PythonQtUpcastingOffset<QPagedPaintDevice,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintDevice>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEngineState", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEngineState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEngineState>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPainterPath", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath>, NULL, module, PythonQt::Type_Multiply);
PythonQt::priv()->registerCPPClass("QPainterPath::Element", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath__Element>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPainterPath__Element>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPlatformSurfaceEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlatformSurfaceEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlatformSurfaceEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPolygonF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygonF>, NULL, module, PythonQt::Type_Multiply);
PythonQt::priv()->registerCPPClass("QPrintEngine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPrintEngine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPrintEngine>, module, 0);
PythonQt::priv()->registerCPPClass("QRadialGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadialGradient>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QResizeEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QResizeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResizeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QScreenOrientationChangeEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScreenOrientationChangeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScreenOrientationChangeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QScrollEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QScrollPrepareEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollPrepareEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollPrepareEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QScrollerProperties", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollerProperties>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QScrollerProperties>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QShortcutEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcutEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcutEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QShowEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShowEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShowEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QSpacerItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpacerItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpacerItem>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QSpacerItem", "QLayoutItem",PythonQtUpcastingOffset<QSpacerItem,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QStatusTipEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusTipEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStatusTipEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QStringListModel", "QAbstractListModel", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStringListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStringListModel>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleFactory", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturn", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturn>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturn>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturnMask", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnMask>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnMask>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleHintReturnVariant", "QStyleHintReturn", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleHintReturnVariant>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleHintReturnVariant>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOption>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOption>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionButton", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionButton>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionComboBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionComboBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionComboBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionDockWidget", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionDockWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionDockWidget>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFocusRect", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFocusRect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFocusRect>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionGraphicsItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGraphicsItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGraphicsItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionGroupBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionGroupBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionGroupBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionHeader", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionHeader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionHeader>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionMenuItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionMenuItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionMenuItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionProgressBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionProgressBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionProgressBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionRubberBand", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionRubberBand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionRubberBand>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSizeGrip", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSizeGrip>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSizeGrip>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSlider", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSlider>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSlider>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionSpinBox", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionSpinBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionSpinBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTab", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTab>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabBarBase", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabBarBase>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabBarBase>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTabWidgetFrame", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTabWidgetFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTabWidgetFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionTitleBar", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionTitleBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionTitleBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBar", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBar>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolBox", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolBox>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolBox>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionToolButton", "QStyleOptionComplex", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionToolButton>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionToolButton>, module, 0);
PythonQt::priv()->registerCPPClass("QStyleOptionViewItem", "QStyleOption", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStyleOptionViewItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStyleOptionViewItem>, module, 0);
PythonQt::priv()->registerCPPClass("QStylePainter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePainter>, NULL, module, 0);
PythonQt::priv()->registerClass(&QStylePlugin::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QStylePlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStylePlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QTableWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTableWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTableWidgetSelectionRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTableWidgetSelectionRange>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTabletEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabletEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabletEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QTextBlock", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlock>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextBlockFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextBlockUserData", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextBlockUserData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextBlockUserData>, module, 0);
PythonQt::priv()->registerCPPClass("QTextCharFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextCharFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCharFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextDocumentFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentFragment>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextDocumentWriter", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextDocumentWriter>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextFragment", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFragment>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextFrameFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFrameFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextFrameFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextImageFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextImageFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextImageFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextInlineObject", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextInlineObject>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextItem>, module, 0);
PythonQt::priv()->registerCPPClass("QTextLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLayout>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextLayout::FormatRange", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLayout__FormatRange>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextLayout__FormatRange>, module, 0);
PythonQt::priv()->registerCPPClass("QTextLine", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLine>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextListFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextListFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextListFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextOption", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextOption>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextOption::Tab", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextOption__Tab>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextOption__Tab>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextTableCell", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCell>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextTableCellFormat", "QTextCharFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableCellFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableCellFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextTableFormat", "QTextFrameFormat", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextTableFormat>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextTableFormat>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTileRules", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTileRules>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTileRules>, module, 0);
PythonQt::priv()->registerCPPClass("QTimeEdit", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTimeEdit>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeEdit>, module, 0);
PythonQt::priv()->registerCPPClass("QToolBarChangeEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBarChangeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QToolBarChangeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QToolTip", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolTip>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTouchEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTouchEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QTreeWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTreeWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTreeWidgetItem>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QUndoCommand", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QUndoCommand>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUndoCommand>, module, 0);
PythonQt::priv()->registerCPPClass("QVBoxLayout", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVBoxLayout>, module, 0);
PythonQt::priv()->registerCPPClass("QWhatsThis", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThis>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWhatsThisClickedEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThisClickedEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWhatsThisClickedEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QWheelEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWheelEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWheelEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetItem>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QWidgetItem", "QLayoutItem",PythonQtUpcastingOffset<QWidgetItem,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QWindowStateChangeEvent", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowStateChangeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWindowStateChangeEvent>, module, 0);

PythonQt::self()->addPolymorphicHandler("QStyleOption", polymorphichandler_QStyleOption);

PythonQtRegisterListTemplateConverterForKnownClass(QList, QGlyphRun);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QInputMethodEvent::Attribute);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextLayout::FormatRange);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTextOption::Tab);
}
