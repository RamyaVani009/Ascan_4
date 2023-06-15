#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(w.windowFlags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);
    w.setWindowFlags(w.windowFlags() | Qt::FramelessWindowHint);
    w.setWindowFlags(w.windowFlags() & ~(Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint));
    w.show();
    return a.exec();
}
