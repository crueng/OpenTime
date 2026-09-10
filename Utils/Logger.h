#pragma once

#include <QStringList>

namespace OpenTime
{
    class Logger
    {
        enum LogMode
        {
            CONSOLE = 0x01,
            FILE = 0x10,
        };

    public:
        Logger(QString name, uint8_t logMode);
        ~Logger() = default;

        void log(const QString& logMessage);

        QStringList getLogList();

    private:
        QStringList m_logList;
        uint8_t m_logMode;
        QString m_loggerName;
    };
} // OpenTime