#include <QApplication>
#include "google_maps.h"

using namespace::std;
//
int main(int argc, char ** argv)
{
    QApplication app( argc, argv );
    QApplication::setApplicationName("googlemaps");
    Google_maps gmaps;
    gmaps.show(); 
    app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
    return app.exec();
}
