/****************************************************************************
** Meta object code from reading C++ file 'book_information.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../book_information.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'book_information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_book_information_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_book_information_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_book_information_t qt_meta_stringdata_book_information = {
    {
QT_MOC_LITERAL(0, 0, 16), // "book_information"
QT_MOC_LITERAL(1, 17, 21), // "on_search_but_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_modify_but_clicked"
QT_MOC_LITERAL(4, 62, 21), // "on_delete_but_clicked"
QT_MOC_LITERAL(5, 84, 19), // "on_exit_but_clicked"
QT_MOC_LITERAL(6, 104, 8), // "get_book"
QT_MOC_LITERAL(7, 113, 5), // "Book&"
QT_MOC_LITERAL(8, 119, 4), // "book"
QT_MOC_LITERAL(9, 124, 21), // "on_insert_but_clicked"
QT_MOC_LITERAL(10, 146, 20) // "on_search_id_clicked"

    },
    "book_information\0on_search_but_clicked\0"
    "\0on_modify_but_clicked\0on_delete_but_clicked\0"
    "on_exit_but_clicked\0get_book\0Book&\0"
    "book\0on_insert_but_clicked\0"
    "on_search_id_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_book_information[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void book_information::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        book_information *_t = static_cast<book_information *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_search_but_clicked(); break;
        case 1: _t->on_modify_but_clicked(); break;
        case 2: _t->on_delete_but_clicked(); break;
        case 3: _t->on_exit_but_clicked(); break;
        case 4: { bool _r = _t->get_book((*reinterpret_cast< Book(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->on_insert_but_clicked(); break;
        case 6: _t->on_search_id_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject book_information::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_book_information.data,
      qt_meta_data_book_information,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *book_information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *book_information::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_book_information.stringdata0))
        return static_cast<void*>(const_cast< book_information*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int book_information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE