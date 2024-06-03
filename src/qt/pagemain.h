#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QMainWindow>
#include <QScrollArea>
#include <QWidget>
#include <QPushButton>

namespace Ui {
class PageMain;
}

class LogIn;
class UserInfo;
class PersUser;

class QPushButton;

class PageMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PageMain(QWidget *parent = nullptr);
    ~PageMain();

signals:

    //void goToTVShowsButtonClicked(); //надо для проверки сигнала

private slots:


    void on_pushButton_clicked();

    void on_FilmsButton1_clicked();

    void on_UserB1_clicked();

    void on_GoTpTVShowsB_clicked();

    //void onGoToTVShowsButtonClicked();//надо для проверки сигнала


private:
    Ui::PageMain *ui;

    LogIn *lg;

    UserInfo *usi;

    PersUser *pu;

    //QPushButton *goToTVShowsB;
};

#endif // PAGEMAIN_H
