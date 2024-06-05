#ifndef TVSHOWS_H
#define TVSHOWS_H

#include <QMainWindow>

namespace Ui {
class TVShows;
}
class FilmPage;
class SearchFilm;
//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class TVShows : public QMainWindow
{
    Q_OBJECT

public:
    explicit TVShows(QWidget *parent = nullptr);
    ~TVShows();

private slots:
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

    void on_HomeButTV_clicked();

    void on_FilmsButTV_clicked();

    void on_TVShowsButTV_clicked();

    void on_KidsButTV_clicked();

    void on_UserButTV_clicked();

    void on_SearchByGTV_clicked();

private:
    Ui::TVShows *ui;
    FilmPage *fip;
    SearchFilm *sf;
    //Header
    PageMain *pgFI;
    UserInfo *uiFI;
    TVShows *tvsFI;
    KidsTV *kidsFI;
    PersUser *puFC;
};

#endif // TVSHOWS_H
