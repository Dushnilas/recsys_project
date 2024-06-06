#ifndef SEARCHFILM_H
#define SEARCHFILM_H

#include <QMainWindow>
#include "backend.h"
#include <string>

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

class Movie;


class SearchFilm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchFilm(QWidget *parent = nullptr);
    ~SearchFilm();

    std::string filmNameString;



    //void setStringVariable(const std::string &value);
    //std::string getStringVariable() const;
public slots:
    void receiveSearchQuery(const QString &query);



private slots:
    void on_HomeFSerach_clicked();

    void on_FilmsBFSearch_clicked();

    void on_TVShoesBFSeach_clicked();

    void on_KidsBFSearch_clicked();

    void on_UserBFSearch_clicked();

    void on_SearchFilmButSerarchbyGen_clicked();

private:
    Ui::SearchFilm *ui;

    PageMain *pmFS;
    UserInfo *uiFS;
    TVShows *tvsFS;
    KidsTV *kidsFS;
    PersUser *puFS;

    std::vector<QSharedPointer<Movie>> results;
    std::string stringVariable;



    bool Search_Films_Overall(const std::vector<QSharedPointer<Movie>> AllMovies, std::vector<QSharedPointer<Movie>>& buf,
                                          std::string query);  // Метод для поиска фильмов
    void updateButtons();  // Метод для обновления кнопок и меток

};

#endif // SEARCHFILM_H
