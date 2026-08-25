#include <iostream>
#include <QApplication>
#include "Widgets/CentralWidget.h"

int main(int argc, char *argv[])
{
    QApplication app{argc, argv};
    OpenTime::CentralWidget centralWidget;
    centralWidget.show();
    return app.exec();
}