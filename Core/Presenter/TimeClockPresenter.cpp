//
// Created by crueng on 9/7/26.
//

#include "TimeClockPresenter.h"

namespace OpenTime {
    TimeClockPresenter::TimeClockPresenter()
    {
        m_timerThread = std::make_unique<QThread>();
        m_timer = new QTimer();
        m_timer->setInterval(1000);
        m_timer->moveToThread(m_timerThread.get());
        connectSignals();
        m_timerThread->start();
    }

    TimeClockPresenter::~TimeClockPresenter()
    {
        if (m_timerThread && m_timerThread->isRunning()) {
            m_timerThread->quit();
            m_timerThread->wait();
        }
    }

    void TimeClockPresenter::connectSignals()
    {
        connect(m_timer, &QTimer::timeout, this, &TimeClockPresenter::readSensorData);
        connect(m_timerThread.get(), &QThread::started, m_timer, qOverload<>(&QTimer::start));
        connect(m_timerThread.get(), &QThread::finished, m_timer, &QObject::deleteLater);
    }

    void TimeClockPresenter::readSensorData()
    {

    }
} // OpenTime