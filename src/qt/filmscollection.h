#ifndef FILMSCOLLECTION_H
#define FILMSCOLLECTION_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"

namespace Ui {
class FilmsCollection;
}
class CollectionPage;

//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;


class FilmsCollection : public QMainWindow
{
    Q_OBJECT

public:
    explicit FilmsCollection(QWidget *parent = nullptr);
    ~FilmsCollection();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_HomeBFC_clicked();

    void on_FilmBFC_clicked();

    void on_TVShowsBFC_clicked();

    void on_KidsBFC_clicked();

    void on_UserBFC_clicked();

private:
    Ui::FilmsCollection *ui;
    CollectionPage *cpage;

    PageMain *pmFC;
    UserInfo *uiFC;
    TVShows *tvsFC;
    KidsTV *kidsFC;
    PersUser *puFC;

};

#endif // FILMSCOLLECTION_H
