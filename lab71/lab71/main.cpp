#include "mainwindowmatveev.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowMatveev w;
    w.setFixedSize(800,500);
    w.show();

    return a.exec();
}
