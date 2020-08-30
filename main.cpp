#include <QtWidgets/QApplication>

#include "MainWindow.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Activity Tracker");
    w.setWindowIcon(QIcon("../image/icon.png"));
    w.show();
    return a.exec();
}
