#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QMainWindow>
//#inclide "login.h"
#include <QScrollArea>
#include <QWidget>

namespace Ui {
class PageMain;
}

class LogIn;
class PageMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PageMain(QWidget *parent = nullptr);
    ~PageMain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PageMain *ui;

    LogIn *lg;

    QScrollArea *scrollArea;
    QWidget *movableWidget;

};

#endif // PAGEMAIN_H
