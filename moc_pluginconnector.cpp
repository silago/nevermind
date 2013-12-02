/****************************************************************************
** Meta object code from reading C++ file 'pluginconnector.h'
**
** Created: Mon Jan 21 03:00:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../huitasker2/huitasker/pluginconnector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pluginConnector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   16,   16,   16, 0x0a,
      90,   79,   16,   16, 0x0a,
     113,  109,   16,   16, 0x0a,
     138,  134,   16,   16, 0x0a,
     176,  171,   16,   16, 0x0a,
     197,  171,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_pluginConnector[] = {
    "pluginConnector\0\0list\0"
    "SignalToPluginEcho2(QList<QAction*>)\0"
    "SlotToPluginEcho2()\0signalName\0"
    "getSignal(QString)\0dlg\0taskDialog(QDialog*)\0"
    "dom\0appendTask2DomSlot(QDomElement*)\0"
    "menu\0generateMenu(QMenu*)\0"
    "checkForDelete(QList<QAction*>)\0"
};

void pluginConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pluginConnector *_t = static_cast<pluginConnector *>(_o);
        switch (_id) {
        case 0: _t->SignalToPluginEcho2((*reinterpret_cast< QList<QAction*>(*)>(_a[1]))); break;
        case 1: _t->SlotToPluginEcho2(); break;
        case 2: _t->getSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->taskDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 4: _t->appendTask2DomSlot((*reinterpret_cast< QDomElement*(*)>(_a[1]))); break;
        case 5: _t->generateMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 6: _t->checkForDelete((*reinterpret_cast< QList<QAction*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pluginConnector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pluginConnector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pluginConnector,
      qt_meta_data_pluginConnector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pluginConnector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pluginConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pluginConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pluginConnector))
        return static_cast<void*>(const_cast< pluginConnector*>(this));
    return QObject::qt_metacast(_clname);
}

int pluginConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pluginConnector::SignalToPluginEcho2(QList<QAction*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
