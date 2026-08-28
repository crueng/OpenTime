#include "CentralWidget.h"
#include "ui_CentralWidget.h"

namespace OpenTime
{
    CentralWidget::CentralWidget(QWidget *parent) : QMainWindow(parent), m_ui(new Ui::CentralWidget)
    {
        m_ui->setupUi(this);
    }

    CentralWidget::~CentralWidget()
    {
        delete m_ui;
    }

    void CentralWidget::connectSignals()
    {
        connect(m_ui->clockButton, &QPushButton::clicked, this, &CentralWidget::onClockButtonClicked);
    }
} // OpenTime
