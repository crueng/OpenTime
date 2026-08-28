#pragma once
#include <QString>
#include <QUuid>

namespace OpenTime
{
    namespace Core
    {
        class User
        {
        public:

            enum ClockMode
            {
                LOGGED_IN = 0x1,
                LOGGED_OUT = 0x2
            };

            User(QString userName);
            ~User();

            QString& getUserName();
            QUuid getUuid() const;
        private:
            QString m_userName;
            QUuid m_uuid;
        };
    } // Core
} // OpenTime
