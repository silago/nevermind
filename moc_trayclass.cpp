/****************************************************************************
** Meta object code from reading C++ file 'trayclass.h'
**
** Created: Mon Jan 21 03:00:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../huitasker2/huitasker/trayclass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trayclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_trayClass[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   11,   10,   10, 0x05,
      46,   42,   10,   10, 0x05,
      72,   67,   10,   10, 0x05,
      99,   67,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,   10,   10,   10, 0x0a,
     156,   10,   10,   10, 0x0a,
     167,   10,   10,   10, 0x0a,
     177,   10,   10,   10, 0x0a,
     191,   10,  187,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_trayClass[] = {
    "trayClass\0\0signalName\0traySignal(QString)\0"
    "dlg\0taskDialog(QDialog*)\0menu\0"
    "generateMenuSignal(QMenu*)\0"
    "checkForDeleteSignal(QList<QAction*>)\0"
    "toggleStrikedOut()\0showMenu()\0newTask()\0"
    "sayWAAA()\0int\0exit()\0"
};

void trayClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        trayClass *_t = static_cast<trayClass *>(_o);
        switch (_id) {
        case 0: _t->traySignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->taskDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 2: _t->generateMenuSignal((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 3: _t->checkForDeleteSignal((*reinterpret_cast< QList<QAction*>(*)>(_a[1]))); break;
        case 4: _t->toggleStrikedOut(); break;
        case 5: _t->showMenu(); break;
        case 6: _t->newTask(); break;
        case 7: _t->sayWAAA(); break;
        case 8: { int _r = _t->exit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData trayClass::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject trayClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_trayClass,
      qt_meta_data_trayClass, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &trayClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *trayClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *trayClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_trayClass))
        return static_cast<void*>(const_cast< trayClass*>(this));
    return QObject::qt_metacast(_clname);
}

int trayClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void trayClass::traySignal(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void trayClass::taskDialog(QDialog * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void trayClass::generateMenuSignal(QMenu * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void trayClass::checkForDeleteSignal(QList<QAction*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
