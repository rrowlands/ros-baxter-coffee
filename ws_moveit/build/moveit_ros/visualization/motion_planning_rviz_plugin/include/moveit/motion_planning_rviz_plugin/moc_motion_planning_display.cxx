/****************************************************************************
** Meta object code from reading C++ file 'motion_planning_display.h'
**
** Created: Wed Nov 20 15:44:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/moveit_ros/visualization/motion_planning_rviz_plugin/include/moveit/motion_planning_rviz_plugin/motion_planning_display.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motion_planning_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_moveit_rviz_plugin__MotionPlanningDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   42,   42,   42, 0x08,
      77,   42,   42,   42, 0x08,
     114,   42,   42,   42, 0x08,
     138,   42,   42,   42, 0x08,
     164,   42,   42,   42, 0x08,
     185,   42,   42,   42, 0x08,
     204,   42,   42,   42, 0x08,
     229,   42,   42,   42, 0x08,
     254,   42,   42,   42, 0x08,
     278,   42,   42,   42, 0x08,
     304,   42,   42,   42, 0x08,
     329,   42,   42,   42, 0x08,
     353,   42,   42,   42, 0x08,
     378,   42,   42,   42, 0x08,
     402,   42,   42,   42, 0x08,
     435,   42,   42,   42, 0x08,
     469,   42,   42,   42, 0x08,
     492,   42,   42,   42, 0x08,
     517,   42,   42,   42, 0x08,
     550,   42,   42,   42, 0x08,
     578,   42,   42,   42, 0x08,
     604,   42,   42,   42, 0x08,
     631,   42,   42,   42, 0x08,
     658,   42,   42,   42, 0x08,
     677,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningDisplay[] = {
    "moveit_rviz_plugin::MotionPlanningDisplay\0"
    "\0changedDisplayPathVisualEnabled()\0"
    "changedDisplayPathCollisionEnabled()\0"
    "changedRobotPathAlpha()\0"
    "changedStateDisplayTime()\0"
    "changedLoopDisplay()\0changedShowTrail()\0"
    "changedTrajectoryTopic()\0"
    "changedQueryStartState()\0"
    "changedQueryGoalState()\0"
    "changedQueryMarkerScale()\0"
    "changedQueryStartColor()\0"
    "changedQueryGoalColor()\0"
    "changedQueryStartAlpha()\0"
    "changedQueryGoalAlpha()\0"
    "changedQueryCollidingLinkColor()\0"
    "changedQueryJointViolationColor()\0"
    "changedPlanningGroup()\0changedShowWeightLimit()\0"
    "changedShowManipulabilityIndex()\0"
    "changedShowManipulability()\0"
    "changedShowJointTorques()\0"
    "changedMetricsSetPayload()\0"
    "changedMetricsTextHeight()\0"
    "changedWorkspace()\0resetInteractiveMarkers()\0"
};

void moveit_rviz_plugin::MotionPlanningDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MotionPlanningDisplay *_t = static_cast<MotionPlanningDisplay *>(_o);
        switch (_id) {
        case 0: _t->changedDisplayPathVisualEnabled(); break;
        case 1: _t->changedDisplayPathCollisionEnabled(); break;
        case 2: _t->changedRobotPathAlpha(); break;
        case 3: _t->changedStateDisplayTime(); break;
        case 4: _t->changedLoopDisplay(); break;
        case 5: _t->changedShowTrail(); break;
        case 6: _t->changedTrajectoryTopic(); break;
        case 7: _t->changedQueryStartState(); break;
        case 8: _t->changedQueryGoalState(); break;
        case 9: _t->changedQueryMarkerScale(); break;
        case 10: _t->changedQueryStartColor(); break;
        case 11: _t->changedQueryGoalColor(); break;
        case 12: _t->changedQueryStartAlpha(); break;
        case 13: _t->changedQueryGoalAlpha(); break;
        case 14: _t->changedQueryCollidingLinkColor(); break;
        case 15: _t->changedQueryJointViolationColor(); break;
        case 16: _t->changedPlanningGroup(); break;
        case 17: _t->changedShowWeightLimit(); break;
        case 18: _t->changedShowManipulabilityIndex(); break;
        case 19: _t->changedShowManipulability(); break;
        case 20: _t->changedShowJointTorques(); break;
        case 21: _t->changedMetricsSetPayload(); break;
        case 22: _t->changedMetricsTextHeight(); break;
        case 23: _t->changedWorkspace(); break;
        case 24: _t->resetInteractiveMarkers(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData moveit_rviz_plugin::MotionPlanningDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject moveit_rviz_plugin::MotionPlanningDisplay::staticMetaObject = {
    { &PlanningSceneDisplay::staticMetaObject, qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningDisplay,
      qt_meta_data_moveit_rviz_plugin__MotionPlanningDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &moveit_rviz_plugin::MotionPlanningDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *moveit_rviz_plugin::MotionPlanningDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *moveit_rviz_plugin::MotionPlanningDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningDisplay))
        return static_cast<void*>(const_cast< MotionPlanningDisplay*>(this));
    return PlanningSceneDisplay::qt_metacast(_clname);
}

int moveit_rviz_plugin::MotionPlanningDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanningSceneDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
