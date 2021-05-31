/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LMS/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[38];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 10), // "bookSearch"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 9), // "textClear"
QT_MOC_LITERAL(33, 10), // "QTextEdit&"
QT_MOC_LITERAL(44, 1), // "t"
QT_MOC_LITERAL(46, 7), // "userLog"
QT_MOC_LITERAL(54, 14), // "loginSucessful"
QT_MOC_LITERAL(69, 2), // "S1"
QT_MOC_LITERAL(72, 10), // "readerShow"
QT_MOC_LITERAL(83, 13), // "addReaderInfo"
QT_MOC_LITERAL(97, 2), // "AC"
QT_MOC_LITERAL(100, 2), // "PD"
QT_MOC_LITERAL(103, 16), // "deleteReaderInfo"
QT_MOC_LITERAL(120, 16), // "changeReaderInfo"
QT_MOC_LITERAL(137, 16), // "searchReaderInfo"
QT_MOC_LITERAL(154, 10), // "showDelete"
QT_MOC_LITERAL(165, 16), // "setControlOutput"
QT_MOC_LITERAL(182, 12) // "outInControl"

    },
    "MainWindow\0bookSearch\0\0textClear\0"
    "QTextEdit&\0t\0userLog\0loginSucessful\0"
    "S1\0readerShow\0addReaderInfo\0AC\0PD\0"
    "deleteReaderInfo\0changeReaderInfo\0"
    "searchReaderInfo\0showDelete\0"
    "setControlOutput\0outInControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    0 /* Public */,
       3,    1,   81,    2, 0x0a,    1 /* Public */,
       6,    0,   84,    2, 0x0a,    3 /* Public */,
       7,    1,   85,    2, 0x0a,    4 /* Public */,
       9,    0,   88,    2, 0x0a,    6 /* Public */,
      10,    2,   89,    2, 0x0a,    7 /* Public */,
      13,    0,   94,    2, 0x0a,   10 /* Public */,
      14,    0,   95,    2, 0x0a,   11 /* Public */,
      15,    0,   96,    2, 0x0a,   12 /* Public */,
      16,    0,   97,    2, 0x0a,   13 /* Public */,
      17,    1,   98,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bookSearch(); break;
        case 1: _t->textClear((*reinterpret_cast< QTextEdit(*)>(_a[1]))); break;
        case 2: _t->userLog(); break;
        case 3: _t->loginSucessful((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->readerShow(); break;
        case 5: _t->addReaderInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->deleteReaderInfo(); break;
        case 7: _t->changeReaderInfo(); break;
        case 8: _t->searchReaderInfo(); break;
        case 9: _t->showDelete(); break;
        case 10: _t->setControlOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTextEdit &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
