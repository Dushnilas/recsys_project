#ifndef USERINFO_H
#define USERINFO_H

#include <QMainWindow>
#include "mainpage.h"

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class UserInfo;
}
class MainPage;


//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;


class UserInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = nullptr);
    ~UserInfo();
public slots:

signals:
//     //void buttonClicked();

private slots:
    //void onPushButton();
    //void on_pushButton_clicked();

    void on_HomeButFilms_clicked();

    void on_FilmsButFilms_clicked();

    void on_TVShowsButFilms_clicked();

    void on_KidsButFilms_clicked();

    void on_UserButFilms_clicked();

private:
    Ui::UserInfo *ui;

    MainPage *mp1;


    PageMain *pmUI;
    UserInfo *uiUI;
    TVShows *tvsUi;
    KidsTV *kidsUI;
    PersUser *puUI;
};

#endif // USERINFO_H
