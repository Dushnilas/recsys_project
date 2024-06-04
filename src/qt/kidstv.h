#ifndef KIDSTV_H
#define KIDSTV_H

#include <QMainWindow>

//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"


namespace Ui {
class KidsTV;
}

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

private:
    Ui::KidsTV *ui;

    PageMain *pmK;
    UserInfo *uiK;
    TVShows *tvsK;
    KidsTV *kidsK;
    PersUser *puK;
};

#endif // KIDSTV_H
