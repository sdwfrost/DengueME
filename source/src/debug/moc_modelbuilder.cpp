/****************************************************************************
** Meta object code from reading C++ file 'modelbuilder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../builder/modelbuilder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelbuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelBuilder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      38,   32,   13,   13, 0x08,
      83,   66,   13,   13, 0x08,
     133,  125,   13,   13, 0x28,
     163,   13,   13,   13, 0x08,
     179,   13,   13,   13, 0x08,
     193,   13,   13,   13, 0x08,
     205,   13,   13,   13, 0x08,
     218,  216,   13,   13, 0x08,
     234,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModelBuilder[] = {
    "ModelBuilder\0\0openModelWizard()\0index\0"
    "modelActivated(QModelIndex)\0"
    "current,previous\0"
    "selectionChanged(QModelIndex,QModelIndex)\0"
    "current\0selectionChanged(QModelIndex)\0"
    "onModelClosed()\0deleteModel()\0editModel()\0"
    "newModel()\0i\0setToolbar(int)\0actionClose()\0"
};

void ModelBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelBuilder *_t = static_cast<ModelBuilder *>(_o);
        switch (_id) {
        case 0: _t->openModelWizard(); break;
        case 1: _t->modelActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onModelClosed(); break;
        case 5: _t->deleteModel(); break;
        case 6: _t->editModel(); break;
        case 7: _t->newModel(); break;
        case 8: _t->setToolbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->actionClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelBuilder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelBuilder::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModelBuilder,
      qt_meta_data_ModelBuilder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelBuilder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelBuilder))
        return static_cast<void*>(const_cast< ModelBuilder*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ModelBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE