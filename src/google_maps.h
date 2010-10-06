#ifndef GOOGLE_MAPS_H
#define GOOGLE_MAPS_H

#include <QtGui>
#include <QWebView>
#include "ui_google_maps.h"

class Google_maps : public QMainWindow, public Ui::Google_maps
{
Q_OBJECT
public:
    Google_maps( QWidget * parent = 0, Qt::WFlags f = 0 );
    
private:
    void init();
    QString path;    
};
#endif




