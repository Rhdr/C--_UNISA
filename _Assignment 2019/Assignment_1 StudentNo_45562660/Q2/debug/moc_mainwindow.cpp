/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 27),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 2),
QT_MOC_LITERAL(4, 43, 20),
QT_MOC_LITERAL(5, 64, 23),
QT_MOC_LITERAL(6, 88, 17),
QT_MOC_LITERAL(7, 106, 26),
QT_MOC_LITERAL(8, 133, 29),
QT_MOC_LITERAL(9, 163, 13),
QT_MOC_LITERAL(10, 177, 5),
QT_MOC_LITERAL(11, 183, 12),
QT_MOC_LITERAL(12, 196, 10),
QT_MOC_LITERAL(13, 207, 40),
QT_MOC_LITERAL(14, 248, 43),
QT_MOC_LITERAL(15, 292, 15),
QT_MOC_LITERAL(16, 308, 12),
QT_MOC_LITERAL(17, 321, 6),
QT_MOC_LITERAL(18, 328, 22),
QT_MOC_LITERAL(19, 351, 4),
QT_MOC_LITERAL(20, 356, 10),
QT_MOC_LITERAL(21, 367, 12),
QT_MOC_LITERAL(22, 380, 5)
    },
    "MainWindow\0radioBtnGroup_buttonClicked\0"
    "\0id\0on_radProfit_clicked\0"
    "on_radNotProfit_clicked\0on_btnAdd_clicked\0"
    "on_btnDeleteProfit_clicked\0"
    "on_btnDeleteNonProfit_clicked\0"
    "deleteCompany\0isNPO\0QListWidget*\0"
    "listWidget\0on_listWidgetProfit_itemSelectionChanged\0"
    "on_listWidgetNonProfit_itemSelectionChanged\0"
    "enableDeleteBtn\0QPushButton*\0button\0"
    "on_txtName_textChanged\0arg1\0closeEvent\0"
    "QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    2,   82,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    2,   89,    2, 0x08 /* Private */,
      18,    1,   94,    2, 0x08 /* Private */,
      20,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 16,   12,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->radioBtnGroup_buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_radProfit_clicked(); break;
        case 2: _t->on_radNotProfit_clicked(); break;
        case 3: _t->on_btnAdd_clicked(); break;
        case 4: _t->on_btnDeleteProfit_clicked(); break;
        case 5: _t->on_btnDeleteNonProfit_clicked(); break;
        case 6: _t->deleteCompany((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QListWidget*(*)>(_a[2]))); break;
        case 7: _t->on_listWidgetProfit_itemSelectionChanged(); break;
        case 8: _t->on_listWidgetNonProfit_itemSelectionChanged(); break;
        case 9: _t->enableDeleteBtn((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 10: _t->on_txtName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
