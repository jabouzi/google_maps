/****************************************************************************
** Meta object code from reading C++ file 'google_maps.h'
**
** Created: Tue Oct 5 08:49:21 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/google_maps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'google_maps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Google_maps[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Google_maps[] = {
    "Google_maps\0"
};

const QMetaObject Google_maps::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Google_maps,
      qt_meta_data_Google_maps, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Google_maps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Google_maps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Google_maps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Google_maps))
        return static_cast<void*>(const_cast< Google_maps*>(this));
    if (!strcmp(_clname, "Ui::Google_maps"))
        return static_cast< Ui::Google_maps*>(const_cast< Google_maps*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Google_maps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
