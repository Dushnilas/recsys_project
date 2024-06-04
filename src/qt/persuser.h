#ifndef PERSUSER_H
#define PERSUSER_H


#include "collectionpage.h"
#include "likedfilms.h"

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class PersUser;
}


class CollectionPage;
class LikedFilms;

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;


class PersUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit PersUser(QWidget *parent = nullptr);
    ~PersUser();

private slots:
    void on_LikedBut_clicked();

    void on_CollectionsBut_clicked();

    void on_HomeBPU_clicked();

    void on_FilmsBPU_clicked();

    void on_TVShowsPU_clicked();

    void on_KidsBPU_clicked();

private:
    Ui::PersUser *ui;

    CollectionPage *cp;
    LikedFilms *lf;

    PageMain *pmPU;
    UserInfo *uiPU;
    TVShows *tvsPU;
    KidsTV *kidsPU;
    PersUser *puPU;



};

#endif // PERSUSER_H
