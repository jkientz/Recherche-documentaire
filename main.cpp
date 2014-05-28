#include <QtGui/QApplication>
#include "RechercheDocumentaire.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    RechercheDocumentaire foo;
    foo.show();
    return app.exec();
}
