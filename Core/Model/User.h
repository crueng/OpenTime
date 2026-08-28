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
            User(QString userName);
            ~User();
        private:
            QString m_userName;
            QUuid m_uuid;
        };
    } // Core
} // OpenTime
