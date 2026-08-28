//
// Created by crueng on 8/28/26.
//

#include <QJsonObject>

#include "User.h"

namespace OpenTime
{
    namespace Core {
        User loadUserProfile()
        {
            QJsonObject object =  QJsonDocument::fromJson("../../UserSettings/User.json").object();
            QString username = object.value("UserName").toString();
            QUuid uuid = QUuid::fromString(object.value("ID").toString());
            User::ClockMode clockMode = User::ClockMode(object.value("ClockMode").toInt());
            Utils::UserRole role = Utils::UserRole(object.value("Role").toInt());

             return {username, uuid, clockMode, role};
        }

        User::User(QString userName, Utils::UserRole role)
        : m_userName(userName),
        m_role(role)
        {
            m_uuid = QUuid::createUuid();
        }

        User::User(QString userName, QUuid uuid, ClockMode clockMode, Utils::UserRole role)
        : m_userName(userName),
        m_uuid(uuid),
        m_clockMode(clockMode),
        m_role(role){}

        User::~User()
        {

        }

        QString & User::getUserName()
        {
            return m_userName;
        }

        QUuid User::getUuid() const
        {
            return m_uuid;
        }

        void User::setClockMode(ClockMode clockMode)
        {
            m_clockMode = clockMode;
        }

        User::ClockMode User::getClockMode() const
        {
            return m_clockMode;
        }
    } // Core
} // OpenTime