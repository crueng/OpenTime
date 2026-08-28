//
// Created by crueng on 8/25/26.
//

#include "TimingPresenter.h"

namespace OpenTime
{
    namespace Core
    {
        TimingPresenter::TimingPresenter(CentralWidget* widget) : m_model(new TimingModel), m_view(widget)
        {

        }

        TimingPresenter::~TimingPresenter()
        {
            if (m_model) delete m_model;
            if (m_view) delete m_view;
            m_model = nullptr;
            m_view = nullptr;
        }

        void TimingPresenter::connectSignals()
        {
            connect(m_view, &CentralWidget::onClockButtonClicked, this, &TimingPresenter::onClockButtonClicked);
        }

        void TimingPresenter::onClockButtonClicked()
        {

        }
    } // Core
} // OpenTime
