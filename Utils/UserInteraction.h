#pragma once

#include <QTime>

namespace OpenTime
{
    namespace Utils
    {
        class UserInteraction
        {
        public:

            enum UserInteractionMode
            {
                LOGIN = 0x1,
                LOGOUT = 0x2,
            };

            UserInteraction(UserInteractionMode mode, QTime time);
            ~UserInteraction();

            UserInteractionMode getMode() const;
            QTime getTime() const;

        private:
            UserInteractionMode m_mode;
            QTime m_time;
        };
    } // Utils
} // OpenTime
