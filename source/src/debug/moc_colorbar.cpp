/****************************************************************************
** Meta object code from reading C++ file 'colorbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../editor/components/colorbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorBar[] = {

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
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,    9,    9,    9, 0x0a,
      46,    9,    9,    9, 0x0a,
      55,    9,    9,    9, 0x0a,
      69,    9,    9,    9, 0x08,
      96,    9,    9,    9, 0x08,
     106,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorBar[] = {
    "ColorBar\0\0valueChanged(QString)\0"
    "selectColor()\0insert()\0closeDialog()\0"
    "on_pushButton_OK_clicked()\0delItem()\0"
    "enableDelButton()\0"
};

void ColorBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorBar *_t = static_cast<ColorBar *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectColor(); break;
        case 2: _t->insert(); break;
        case 3: _t->closeDialog(); break;
        case 4: _t->on_pushButton_OK_clicked(); break;
        case 5: _t->delItem(); break;
        case 6: _t->enableDelButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorBar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ColorBar,
      qt_meta_data_ColorBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorBar))
        return static_cast<void*>(const_cast< ColorBar*>(this));
    return QDialog::qt_metacast(_clname);
}

int ColorBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ColorBar::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
