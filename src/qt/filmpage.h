#ifndef FILMPAGE_H
#define FILMPAGE_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class FilmPage;
}
class LikedFilms;
class FilmsCollection;

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class FilmPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FilmPage(QWidget *parent = nullptr);
    ~FilmPage();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_HomeBFI_clicked();

    void on_FilmsBFI_clicked();

    void on_TVShowsBFI_clicked();

    void on_KidsBFI_clicked();

    void on_UserPBFI_clicked();

private:
    Ui::FilmPage *ui;
    LikedFilms *like;
    FilmsCollection *collection;

    //Header

    PageMain *pgFI;
    UserInfo *uiFI;
    TVShows *tvsFI;
    KidsTV *kidsFI;
    PersUser *puFI;


};

#endif // FILMPAGE_H
