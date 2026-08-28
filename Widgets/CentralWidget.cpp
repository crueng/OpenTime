#include <QDateTime>

#include "CentralWidget.h"
#include "ui_CentralWidget.h"

namespace OpenTime
{
    CentralWidget::CentralWidget(QWidget* parent) : QMainWindow(parent), m_ui(new Ui::CentralWidget)
    {
        m_ui->setupUi(this);

        m_timeUpdater = new QTimer();
        m_timeUpdater->setInterval(500);
        m_timeUpdater->start();

        connectSignals();
    }

    CentralWidget::~CentralWidget()
    {
        delete m_ui;
    }

    void CentralWidget::connectSignals()
    {
        connect(m_timeUpdater, &QTimer::timeout, this, &CentralWidget::updateTime);
        connect(m_ui->clockButton, &QPushButton::clicked, this, &CentralWidget::onClockButtonClicked);
    }

    void CentralWidget::setTimeText(const QString& text)
    {
        m_ui->timeLabel->setText(text);
    }

    void CentralWidget::setClockText(const QString& text)
    {
        m_ui->clockLabel->setText(text);
    }

    void CentralWidget::updateTime()
    {
        setTimeText(QDateTime::currentDateTime().toString("dd.MM.yyyy | hh:mm:ss |"));
    }
} // OpenTime
