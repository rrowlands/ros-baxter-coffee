/****************************************************************************
** Meta object code from reading C++ file 'end_effectors_widget.h'
**
** Created: Wed Nov 20 15:45:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_setup_assistant/src/widgets/end_effectors_widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'end_effectors_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_setup_assistant__EndEffectorsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   43,   43,   43, 0x08,
      60,   43,   43,   43, 0x08,
      86,   75,   43,   43, 0x08,
     113,   75,   43,   43, 0x08,
     142,  137,   43,   43, 0x08,
     172,   43,   43,   43, 0x08,
     189,   43,   43,   43, 0x08,
     203,   43,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget[] = {
    "moveit_setup_assistant::EndEffectorsWidget\0"
    "\0showNewScreen()\0editSelected()\0"
    "row,column\0editDoubleClicked(int,int)\0"
    "previewClicked(int,int)\0name\0"
    "previewClickedString(QString)\0"
    "deleteSelected()\0doneEditing()\0"
    "cancelEditing()\0"
};

void moveit_setup_assistant::EndEffectorsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EndEffectorsWidget *_t = static_cast<EndEffectorsWidget *>(_o);
        switch (_id) {
        case 0: _t->showNewScreen(); break;
        case 1: _t->editSelected(); break;
        case 2: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->previewClickedString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->deleteSelected(); break;
        case 6: _t->doneEditing(); break;
        case 7: _t->cancelEditing(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData moveit_setup_assistant::EndEffectorsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_setup_assistant::EndEffectorsWidget::staticMetaObject = {
    { &SetupScreenWidget::staticMetaObject, qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget,
      qt_meta_data_moveit_setup_assistant__EndEffectorsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_setup_assistant::EndEffectorsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_setup_assistant::EndEffectorsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_setup_assistant::EndEffectorsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget))
        return static_cast<void*>(const_cast< EndEffectorsWidget*>(this));
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::EndEffectorsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
