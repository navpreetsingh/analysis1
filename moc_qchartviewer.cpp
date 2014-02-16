/****************************************************************************
** Meta object code from reading C++ file 'qchartviewer.h'
**
** Created: Wed Sep 11 22:35:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qchartviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchartviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QChartViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      38,   32,   13,   13, 0x05,
      60,   32,   13,   13, 0x05,
      84,   32,   13,   13, 0x05,
     109,   32,   13,   13, 0x05,
     138,   32,   13,   13, 0x05,
     163,   32,   13,   13, 0x05,
     195,   32,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QChartViewer[] = {
    "QChartViewer\0\0viewPortChanged()\0event\0"
    "clicked(QMouseEvent*)\0mouseMove(QMouseEvent*)\0"
    "mouseWheel(QWheelEvent*)\0"
    "mouseMoveChart(QMouseEvent*)\0"
    "mouseLeaveChart(QEvent*)\0"
    "mouseMovePlotArea(QMouseEvent*)\0"
    "mouseLeavePlotArea(QEvent*)\0"
};

void QChartViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QChartViewer *_t = static_cast<QChartViewer *>(_o);
        switch (_id) {
        case 0: _t->viewPortChanged(); break;
        case 1: _t->clicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseMoveChart((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mouseLeaveChart((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: _t->mouseMovePlotArea((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseLeavePlotArea((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QChartViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QChartViewer::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QChartViewer,
      qt_meta_data_QChartViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QChartViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QChartViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QChartViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QChartViewer))
        return static_cast<void*>(const_cast< QChartViewer*>(this));
    if (!strcmp(_clname, "ViewPortManager"))
        return static_cast< ViewPortManager*>(const_cast< QChartViewer*>(this));
    return QLabel::qt_metacast(_clname);
}

int QChartViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QChartViewer::viewPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QChartViewer::clicked(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QChartViewer::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QChartViewer::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QChartViewer::mouseMoveChart(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QChartViewer::mouseLeaveChart(QEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QChartViewer::mouseMovePlotArea(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QChartViewer::mouseLeavePlotArea(QEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
