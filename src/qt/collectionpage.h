#ifndef COLLECTIONPAGE_H
#define COLLECTIONPAGE_H

#include <QMainWindow>


//Hearder

#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class CollectionPage;
}
class FilmPage;


//Header

class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class CollectionPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit CollectionPage(QWidget *parent = nullptr);
    ~CollectionPage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_11_clicked();

    void on_filmsCol_clicked();

    void on_TVShowsCol_clicked();

    void on_KidsCol_clicked();

    void on_UserCol_clicked();

private:
    Ui::CollectionPage *ui;
    FilmPage *fip;

    PageMain *pgCol;
    UserInfo *uiCol;
    TVShows *tvsCol;
    KidsTV *kidCol;
    PersUser *puCol;

};

#endif // COLLECTIONPAGE_H
