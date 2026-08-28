#pragma once
#include <QString>
#include <QUuid>
#include <QJsonDocument>

#include "../../Utils/UserRole.h"

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

            User(QString userName, Utils::UserRole role);
            User(QString userName, QUuid uuid, ClockMode clockMode, Utils::UserRole role);
            ~User();

            QString& getUserName();
            QUuid getUuid() const;

            void setClockMode(ClockMode clockMode);
            ClockMode getClockMode() const;

        private:
            QString m_userName;
            QUuid m_uuid;
            ClockMode m_clockMode;
            Utils::UserRole m_role;
        };
        User loadUserProfile();
    } // Core
} // OpenTime
