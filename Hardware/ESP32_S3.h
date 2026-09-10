#pragma once

#include <QSerialPort>

#include "../Utils/Logger.h"

namespace Hardware
{
    class ESP32_S3
    {
        public:
            ESP32_S3();

        private:
            QSerialPort m_serialPort;
            OpenTime::Logger* m_logger;
    };
} // Hardware