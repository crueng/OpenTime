#include <memory>

#include <QTimer>

namespace OpenTime
{
    class TimeClockPresenter : public QObject
    {
        Q_OBJECT

    public:
        TimeClockPresenter();

        ~TimeClockPresenter();

    private:
        void connectSignals();

    private slots:
        void fetchSensorData();
        std::unique_ptr<QTimer> m_timer;
    };
} // OpenTime
