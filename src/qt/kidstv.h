#ifndef KIDSTV_H
#define KIDSTV_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"
#include "searchfilm.h"

namespace Ui {
class KidsTV;
}
class FilmPage;
class SearchFilm;
//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;


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

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_22_clicked();

    void on_SearchByGKid_clicked();

private:
    Ui::KidsTV *ui;
    FilmPage *fip;
    SearchFilm *sf;

    PageMain *pmK;
    UserInfo *uiK;
    TVShows *tvsK;
    KidsTV *kidsK;
    PersUser *puK;
};

#endif // KIDSTV_H
