#ifndef LIKEDFILMS_H
#define LIKEDFILMS_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"



namespace Ui {
class LikedFilms;
}
class FilmPage;

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;


class LikedFilms : public QMainWindow
{
    Q_OBJECT

public:
    explicit LikedFilms(QWidget *parent = nullptr);
    ~LikedFilms();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_HomeBLF_clicked();

    void on_FilmsBFI_clicked();

    void on_TVShowsBFL_clicked();

    void on_KidsBFL_clicked();

    void on_UserBFL_clicked();

private:
    Ui::LikedFilms *ui;
    FilmPage *fip;

    PageMain *pmFL;
    UserInfo *uiFL;
    TVShows *tvsFL;
    KidsTV *kidsFL;
    PersUser *puFL;
};

#endif // LIKEDFILMS_H
