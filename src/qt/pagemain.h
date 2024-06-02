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
class UserInfo;
class PageMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PageMain(QWidget *parent = nullptr);
    ~PageMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_35_clicked();

private:
    Ui::PageMain *ui;

    LogIn *lg;
    UserInfo *usi;


};

#endif // PAGEMAIN_H
