//
// Created by Connor  on 09.09.26.
//

#include "Logger.h"

#include <iostream>
#include <ostream>

namespace OpenTime
{
    Logger::Logger(QString name, uint8_t logMode) : m_loggerName(name),  m_logMode(logMode)
    {
        if (!(m_logMode & 0b1) | !(m_logMode & 0b10))
        {
            throw std::exception();
        }
    }

    void Logger::log(const QString& logMessage)
    {
        m_logList.append(logMessage);
        if (m_logMode & 0b1)
        {
            std::cout << m_loggerName.toStdString() << ":" << logMessage.toStdString() << std::endl;
        }
        if (m_logMode & 0b10)
        {
            //COMING SOON
        }
    }

    QStringList Logger::getLogList()
    {
        return m_logList;
    }
} // OpenTime