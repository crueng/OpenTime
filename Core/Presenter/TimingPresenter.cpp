//
// Created by crueng on 8/25/26.
//

#include <QJsonDocument>
#include <QJsonObject>

#include "TimingPresenter.h"

namespace OpenTime
{
    namespace Core
    {
        TimingPresenter::TimingPresenter(CentralWidget* widget)
        : m_model(new TimingModel),
        m_view(widget),
        m_user(Core::loadUserProfile())
        {
            connectSignals();
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
            if (m_user.getClockMode() == User::ClockMode::LOGGED_IN)
            {
                m_user.setClockMode(User::ClockMode::LOGGED_OUT);
                m_view->setClockText("Logged Out");
                return;
            }
            m_user.setClockMode(User::ClockMode::LOGGED_IN);
            m_view->setClockText("Logged In");
        }
    } // Core
} // OpenTime
