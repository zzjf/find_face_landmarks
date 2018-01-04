/****************************************************************************
** Meta object code from reading C++ file 'sfl_viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sfl_viewer/sfl_viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sfl_viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sfl__Viewer_t {
    QByteArrayData data[12];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sfl__Viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sfl__Viewer_t qt_meta_stringdata_sfl__Viewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "sfl::Viewer"
QT_MOC_LITERAL(1, 12, 4), // "open"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "close"
QT_MOC_LITERAL(4, 24, 9), // "playPause"
QT_MOC_LITERAL(5, 34, 8), // "backward"
QT_MOC_LITERAL(6, 43, 7), // "forward"
QT_MOC_LITERAL(7, 51, 18), // "frameSliderChanged"
QT_MOC_LITERAL(8, 70, 1), // "i"
QT_MOC_LITERAL(9, 72, 18), // "toggleRenderParams"
QT_MOC_LITERAL(10, 91, 7), // "toggled"
QT_MOC_LITERAL(11, 99, 6) // "render"

    },
    "sfl::Viewer\0open\0\0close\0playPause\0"
    "backward\0forward\0frameSliderChanged\0"
    "i\0toggleRenderParams\0toggled\0render"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sfl__Viewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void sfl::Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Viewer *_t = static_cast<Viewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->close(); break;
        case 2: _t->playPause(); break;
        case 3: _t->backward(); break;
        case 4: _t->forward(); break;
        case 5: _t->frameSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggleRenderParams((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->render(); break;
        default: ;
        }
    }
}

const QMetaObject sfl::Viewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_sfl__Viewer.data,
      qt_meta_data_sfl__Viewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sfl::Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sfl::Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sfl__Viewer.stringdata0))
        return static_cast<void*>(const_cast< Viewer*>(this));
    if (!strcmp(_clname, "Ui::Viewer"))
        return static_cast< Ui::Viewer*>(const_cast< Viewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int sfl::Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
