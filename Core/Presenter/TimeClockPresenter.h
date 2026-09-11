#include <memory>

#include <QTimer>
#include <QThread>

#include "../../Hardware/ESP32_S3.h"

namespace OpenTime
{
    //An Class... yeahhhh
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
        Hardware::ESP32_S3 m_esp32S3;
    };
} // OpenTime
