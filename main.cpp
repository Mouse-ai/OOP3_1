#include <QApplication>
#include "mainwindow.h"
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Mainwindow window;
    window.show();

    return app.exec();
}
