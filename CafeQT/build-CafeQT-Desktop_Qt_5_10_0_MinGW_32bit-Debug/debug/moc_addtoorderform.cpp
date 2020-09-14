/****************************************************************************
** Meta object code from reading C++ file 'addtoorderform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CafeQT/addtoorderform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtoorderform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddToOrderForm_t {
    QByteArrayData data[8];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddToOrderForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddToOrderForm_t qt_meta_stringdata_AddToOrderForm = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddToOrderForm"
QT_MOC_LITERAL(1, 15, 25), // "on_MenuDishButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "on_MenuDrinkButton_clicked"
QT_MOC_LITERAL(4, 69, 30), // "on_MenuAlcoDrinkButton_clicked"
QT_MOC_LITERAL(5, 100, 23), // "on_ReturnButton_clicked"
QT_MOC_LITERAL(6, 124, 20), // "on_AddButton_clicked"
QT_MOC_LITERAL(7, 145, 25) // "on_AddOrderButton_clicked"

    },
    "AddToOrderForm\0on_MenuDishButton_clicked\0"
    "\0on_MenuDrinkButton_clicked\0"
    "on_MenuAlcoDrinkButton_clicked\0"
    "on_ReturnButton_clicked\0on_AddButton_clicked\0"
    "on_AddOrderButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddToOrderForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddToOrderForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddToOrderForm *_t = static_cast<AddToOrderForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_MenuDishButton_clicked(); break;
        case 1: _t->on_MenuDrinkButton_clicked(); break;
        case 2: _t->on_MenuAlcoDrinkButton_clicked(); break;
        case 3: _t->on_ReturnButton_clicked(); break;
        case 4: _t->on_AddButton_clicked(); break;
        case 5: _t->on_AddOrderButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AddToOrderForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddToOrderForm.data,
      qt_meta_data_AddToOrderForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddToOrderForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddToOrderForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddToOrderForm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AddToOrderForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
