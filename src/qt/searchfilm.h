#ifndef SEARCHFILM_H
#define SEARCHFILM_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class SearchFilm;
}

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class SearchFilm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchFilm(QWidget *parent = nullptr);
    ~SearchFilm();

private slots:
    void on_HomeFSerach_clicked();

    void on_FilmsBFSearch_clicked();

    void on_TVShoesBFSeach_clicked();

    void on_KidsBFSearch_clicked();

    void on_UserBFSearch_clicked();

private:
    Ui::SearchFilm *ui;

    PageMain *pmFS;
    UserInfo *uiFS;
    TVShows *tvsFS;
    KidsTV *kidsFS;
    PersUser *puFS;
};

#endif // SEARCHFILM_H
