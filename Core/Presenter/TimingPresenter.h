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
            TimingPresenter(CentralWidget* view);
            ~TimingPresenter();

            void connectSignals();

            public slots:
            void onClockButtonClicked();

        private:
            TimingModel* m_model;
            CentralWidget* m_view;
        };
    } // Core
} // OpenTime
