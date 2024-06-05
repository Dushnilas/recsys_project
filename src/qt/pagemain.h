#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QMainWindow>
#include <QScrollArea>
#include <QWidget>
#include <QPushButton>

#include "tvshows.h"
#include "kidstv.h"
#include "userinfo.h"
#include "persuser.h"


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


private slots:


    void on_pushButton_clicked();

    void on_FilmsButton1_clicked();

    void on_UserB1_clicked();

    void on_GoTpTVShowsB_clicked();

    //void onGoToTVShowsButtonClicked();//надо для проверки сигнала


    //void on_FilmsB1_clicked();

    void on_TVShowsB1_clicked();

    void on_KidsB1_clicked();

    void on_KidsHButton_clicked();

    //void on_FilmB1_clicked();

    void on_FilmsB1_clicked();

    void on_SearchB1_clicked();

private:
    Ui::PageMain *ui;

    LogIn *lg; // Log In page

    PersUser *pu; // User page

    UserInfo *usi; //Films

    KidsTV *kidstv; //Kids

    TVShows *tvsh; //TVShows

};

#endif // PAGEMAIN_H
