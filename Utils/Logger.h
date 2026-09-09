#pragma once

#include <QStringList>
#include <String>

namespace OpenTime
{
    class Logger
    {
        enum LogMode
        {
            CONSOLE = 0x1,
            FILE = 0x2,
        };

    public:
        Logger( uint8_t logMode);
        ~Logger();

        void log(const QString& logMessage);

        QStringList getLogList();

    private:
        QStringList m_logList;
        uint8_t m_logMode;
    };
} // OpenTime