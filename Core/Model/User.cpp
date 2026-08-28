//
// Created by crueng on 8/28/26.
//

#include "User.h"

namespace OpenTime
{
    namespace Core {
        User::User(QString userName) : m_userName(userName)
        {
            m_uuid = QUuid::createUuid();
        }
    } // Core
} // OpenTime