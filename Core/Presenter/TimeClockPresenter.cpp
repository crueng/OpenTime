//
// Created by crueng on 9/7/26.
//

#include "TimeClockPresenter.h"

namespace OpenTime {
    TimeClockPresenter::TimeClockPresenter()
    {
        m_timer = std::make_unique<QTimer>();
        m_timer->setInterval(1000);
        connectSignals();
        m_timer->start();
    }

    TimeClockPresenter::~TimeClockPresenter()
    {

    }

    void TimeClockPresenter::connectSignals()
    {
        connect(m_timer.get(), &QTimer::timeout, this, &TimeClockPresenter::fetchSensorData);
    }

    void TimeClockPresenter::fetchSensorData()
    {

    }
} // OpenTime