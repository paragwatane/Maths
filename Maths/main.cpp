#include "Maths.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Maths window;
    window.show();
    return app.exec();
}
