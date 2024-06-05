#ifndef TVSHOWS_H
#define TVSHOWS_H

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
class TVShows;
}

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

//Search
class SearchFilm;

class TVShows : public QMainWindow
{
    Q_OBJECT

public:
    explicit TVShows(QWidget *parent = nullptr);
    ~TVShows();

private slots:
    void on_HomeButTV_clicked();

    void on_FilmsButTV_clicked();

    void on_TVShowsButTV_clicked();

    void on_KidsButTV_clicked();

    void on_UserButTV_clicked();

    void on_SearchByGTV_clicked();

private:
    Ui::TVShows *ui;

    PageMain *pmTVS;
    UserInfo *uiTVS;
    TVShows *tvsTVS;
    KidsTV *kidsTVS;
    PersUser *puTVS;

    SearchFilm *sfTVS;
};

#endif // TVSHOWS_H
