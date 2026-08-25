#pragma once
#include <QObject>

#include "../Model/TimingModel.h"
#include "../../Widgets/CentralWidget.h"

namespace OpenTime
{
    namespace Core
    {
        class TimingPresenter : public QObject
        {
            Q_OBJECT

        public:
            TimingPresenter(CentralWidget* widget);

            ~TimingPresenter();

        private:
            TimingModel* m_model;
            CentralWidget* m_widget;
        };
    } // Core
} // OpenTime
