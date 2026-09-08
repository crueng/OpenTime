#include <memory>

#include <QTimer>
#include <QThread>

namespace OpenTime
{
    class TimeClockPresenter : public QObject
    {
        Q_OBJECT

    public:
        TimeClockPresenter();

        ~TimeClockPresenter();

    private slots:
        void readSensorData();

    private:
        void connectSignals();
        QTimer* m_timer;
        std::unique_ptr<QThread> m_timerThread;
    };
} // OpenTime
