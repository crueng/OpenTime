//
// Created by crueng on 8/25/26.
//

#include "TimingPresenter.h"

namespace OpenTime
{
    namespace Core
    {
        TimingPresenter::TimingPresenter(CentralWidget* widget) : m_model(new TimingModel), m_widget(widget)
        {

        }

        TimingPresenter::~TimingPresenter()
        {
            if (m_model) delete m_model;
            if (m_widget) delete m_widget;
            m_model = nullptr;
            m_widget = nullptr;
        }
    } // Core
} // OpenTime
