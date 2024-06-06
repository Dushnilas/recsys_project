#ifndef KIDSTV_H
#define KIDSTV_H

#include <QMainWindow>
#include <QLabel>
#include <vector>
//Header
#include "pagemain.h"
#include "userinfo.h"
#include "tvshows.h"
#include "kidstv.h"
#include "persuser.h"
#include "searchfilm.h"

#include "backend.h"

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


class MovieWidget : public QWidget {
    Q_OBJECT

public:
    MovieWidget(QWidget *parent = nullptr, Ui::KidsTV *ui = nullptr);

    void setMovies(const QVector<std::shared_ptr<Movie>>& movies);

private:
    QVector<QPushButton*> buttons;
    QVector<QLabel*> labels;
    QMap<QPushButton*, std::shared_ptr<Movie>> buttonMovieMap;

    Ui::KidsTV *ui;
};

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
    FilmPage *fip;
    SearchFilm *sf;

    PageMain *pmK;
    UserInfo *uiK;
    TVShows *tvsK;
    KidsTV *kidsK;
    PersUser *puK;

    //std::vector<std::shared_ptr<Movie>> kids;
    MovieWidget *movieWidget;
    std::vector<std::shared_ptr<Movie>> kids;
};

#endif // KIDSTV_H
