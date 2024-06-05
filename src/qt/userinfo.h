#ifndef USERINFO_H
#define USERINFO_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

//search
#include "searchfilm.h"

namespace Ui {
class UserInfo;
}
class MainPage;
class FilmPage;


//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

//search
class SearchFilm;


class UserInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = nullptr);
    ~UserInfo();
public slots:

signals:

private slots:

    void on_HomeButFilms_clicked();

    void on_TVShowsButFilms_clicked();

    void on_KidsButFilms_clicked();

    void on_UserButFilms_clicked();

    void on_SearchGButFilms_clicked();

private:
    Ui::UserInfo *ui;

    MainPage *mp1;
    FilmPage *fip;


    PageMain *pmUI;
    UserInfo *uiUI;
    TVShows *tvsUI;
    KidsTV *kidsUI;
    PersUser *puUI;

    SearchFilm *sfUI;
};

#endif // USERINFO_H
