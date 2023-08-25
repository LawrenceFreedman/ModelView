#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QListWidget;
class QTableWidget;
class QTreeWidget;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *pParent = 0);
    ~Window();

private:
    void initListWidget();
    void initTableWidget();
    void initTreeWidget();

private:
    QListWidget* m_pListWidget = nullptr;
    QTableWidget* m_pTableWidget = nullptr;
    QTreeWidget* m_pTreeWidget = nullptr;
};

#endif  // WINDOW_H
