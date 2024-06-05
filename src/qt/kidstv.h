#ifndef KIDSTV_H
#define KIDSTV_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

//serach
#include "searchfilm.h"


namespace Ui {
class KidsTV;
}

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

//SEARCH
class SearchFilm;

class KidsTV : public QMainWindow
{
    Q_OBJECT

public:
    explicit KidsTV(QWidget *parent = nullptr);
    ~KidsTV();

private slots:
    void on_HomeButKid_clicked();

    void on_FilmsButKid_clicked();

    void on_TVShowsButKid_clicked();

    void on_KidsButKid_clicked();

    void on_UserButKid_clicked();

    void on_SearchByGKid_clicked();

private:
    Ui::KidsTV *ui;

    PageMain *pmK;
    UserInfo *uiK;
    TVShows *tvsK;
    KidsTV *kidsK;
    PersUser *puK;

    SearchFilm *sfK;
};

#endif // KIDSTV_H
