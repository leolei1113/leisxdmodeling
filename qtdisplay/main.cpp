#include "qtdisplay.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtdisplay w;
    w.show();
    return a.exec();
}
