#pragma once

#include "../../Utils/UserInteraction.h"

namespace OpenTime
{
    namespace Core
    {
        class TimingModel
        {
        public:
            TimingModel();

            bool persistUserInteraction(Utils::UserInteraction& interaction);

            ~TimingModel();

        private:
        };
    } // Core
} // OpenTime
