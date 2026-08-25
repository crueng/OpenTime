#include <iostream>
#include <QApplication>
#include "Widgets/CentralWidget.h"
#include "Core/Presenter/TimingPresenter.h"

int main(int argc, char *argv[])
{
    QApplication app{argc, argv};
    OpenTime::CentralWidget* centralWidget = new OpenTime::CentralWidget;
    OpenTime::Core::TimingPresenter timingPresenter(centralWidget);
    centralWidget->show();
    return app.exec();
}