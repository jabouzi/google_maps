#include "google_maps.h"

Google_maps::Google_maps( QWidget * parent, Qt::WFlags f) 
    : QMainWindow(parent, f)
{
    setupUi(this);
    path = QCoreApplication::applicationDirPath ();
    if (path.data()[path.size() - 1] != '/') path += "/";    
    init();    
}

void Google_maps::init()
{
    webView->setUrl("file:///"+path+"data/index.html");
}
