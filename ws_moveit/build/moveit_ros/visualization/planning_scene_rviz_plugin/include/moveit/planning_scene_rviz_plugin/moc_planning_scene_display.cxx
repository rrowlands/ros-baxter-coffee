/****************************************************************************
** Meta object code from reading C++ file 'planning_scene_display.h'
**
** Created: Wed Nov 20 15:44:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_ros/visualization/planning_scene_rviz_plugin/include/moveit/planning_scene_rviz_plugin/planning_scene_display.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planning_scene_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_rviz_plugin__PlanningSceneDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x08,
      68,   41,   41,   41, 0x08,
      87,   41,   41,   41, 0x08,
     109,   41,   41,   41, 0x08,
     136,   41,   41,   41, 0x08,
     161,   41,   41,   41, 0x08,
     181,   41,   41,   41, 0x08,
     201,   41,   41,   41, 0x08,
     228,   41,   41,   41, 0x08,
     256,   41,   41,   41, 0x08,
     282,   41,   41,   41, 0x08,
     308,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay[] = {
    "moveit_rviz_plugin::PlanningSceneDisplay\0"
    "\0changedRobotDescription()\0"
    "changedSceneName()\0changedSceneEnabled()\0"
    "changedSceneRobotEnabled()\0"
    "changedRobotSceneAlpha()\0changedSceneAlpha()\0"
    "changedSceneColor()\0changedAttachedBodyColor()\0"
    "changedPlanningSceneTopic()\0"
    "changedSceneDisplayTime()\0"
    "changedOctreeRenderMode()\0"
    "changedOctreeColorMode()\0"
};

void moveit_rviz_plugin::PlanningSceneDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlanningSceneDisplay *_t = static_cast<PlanningSceneDisplay *>(_o);
        switch (_id) {
        case 0: _t->changedRobotDescription(); break;
        case 1: _t->changedSceneName(); break;
        case 2: _t->changedSceneEnabled(); break;
        case 3: _t->changedSceneRobotEnabled(); break;
        case 4: _t->changedRobotSceneAlpha(); break;
        case 5: _t->changedSceneAlpha(); break;
        case 6: _t->changedSceneColor(); break;
        case 7: _t->changedAttachedBodyColor(); break;
        case 8: _t->changedPlanningSceneTopic(); break;
        case 9: _t->changedSceneDisplayTime(); break;
        case 10: _t->changedOctreeRenderMode(); break;
        case 11: _t->changedOctreeColorMode(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_rviz_plugin::PlanningSceneDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_rviz_plugin::PlanningSceneDisplay::staticMetaObject = {
    { &rviz::Display::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay,
      qt_meta_data_moveit_rviz_plugin__PlanningSceneDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_rviz_plugin::PlanningSceneDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_rviz_plugin::PlanningSceneDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_rviz_plugin::PlanningSceneDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay))
        return static_cast<void*>(const_cast< PlanningSceneDisplay*>(this));
    typedef rviz::Display QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int moveit_rviz_plugin::PlanningSceneDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef rviz::Display QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
