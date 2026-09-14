#pragma once

#include <QSerialPort>

#include "../Utils/Logger.h"

namespace Hardware
{
    class ESP32_S3 : public QObject
    {
        Q_OBJECT
        public:
            ESP32_S3();

        signals:

            void newActionOccurred(QUuid uuid);
        private:
            QSerialPort m_serialPort;
            OpenTime::Logger* m_logger;
    };
} // Hardware