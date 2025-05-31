#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("QMainWindow { background-color: #FFDAB9; }");
    MainWindow w;
    w.show();
    return a.exec();
}
