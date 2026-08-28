#pragma once
#include <QMainWindow>
#include <QTimer>
#include <QObject>

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

        void setTimeText(const QString& text);
        void setClockText(const QString& text);

        void updateTime();

        signals:
        void onClockButtonClicked();

    private:
        QTimer* m_timeUpdater;

        Ui::CentralWidget* m_ui;
    };
} // OpenTime
