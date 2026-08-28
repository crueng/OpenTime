#pragma once
#include <QMainWindow>

namespace OpenTime
{
    namespace Ui
    {
        class CentralWidget;
    }

    class CentralWidget : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit CentralWidget(QWidget *parent = nullptr);

        ~CentralWidget() override;

        void connectSignals();

        signals:
        void onClockButtonClicked();

    private:
        Ui::CentralWidget* m_ui;
    };
} // OpenTime
