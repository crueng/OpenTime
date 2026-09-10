//
// Created by Connor  on 10.09.26.
//

#include "ESP32_S3.h"

namespace Hardware {
    ESP32_S3::ESP32_S3()
    {
        m_logger = new OpenTime::Logger("ESP32-S3", 0b1 | 0b10);
        m_logger->log("Creating object");
    }
} // Hardware