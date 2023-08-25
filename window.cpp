#include "window.h"

#include <QDebug>
#include <QGridLayout>
#include <QListWidget>
#include <QPushButton>
#include <QTableWidget>
#include <QTreeWidget>

Window::Window(QWidget *pParent)
    : QWidget(pParent)
{
    QGridLayout* pLayout = new QGridLayout(this);
    initListWidget();
    initTableWidget();
    initTreeWidget();
    pLayout->addWidget(m_pListWidget, 0, 0);
    pLayout->addWidget(m_pTableWidget, 0, 1);
    pLayout->addWidget(m_pTreeWidget, 1, 0);

    QVBoxLayout* pToolLayout = new QVBoxLayout(this);
    QPushButton* pBtn = new QPushButton(this);
    pBtn->setText(QStringLiteral("button"));
    pToolLayout->addWidget(pBtn);

    pLayout->addLayout(pToolLayout, 1, 1);
    setLayout(pLayout);
    resize(1316, 634);
}

Window::~Window()
{
}

void Window::initListWidget()
{
    m_pListWidget = new QListWidget(this);
}

void Window::initTableWidget()
{
    m_pTableWidget = new QTableWidget(this);
    m_pTableWidget->setRowCount(4);
    m_pTableWidget->setColumnCount(4);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            m_pTableWidget->setItem(i, j, new QTableWidgetItem());
        }
    }
}

void Window::initTreeWidget()
{
    m_pTreeWidget = new QTreeWidget(this);
}
