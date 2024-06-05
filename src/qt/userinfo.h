#ifndef USERINFO_H
#define USERINFO_H

#include <QMainWindow>

namespace Ui {
class UserInfo;
}
class FilmPage;
class SearchFilm;
//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class UserInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = nullptr);
    ~UserInfo();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

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

    void on_HomeBut_clicked();

    void on_FilmsBut_clicked();

    void on_TVShowsBut_clicked();

    void on_KidsBut_clicked();

    void on_UserBut_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserInfo *ui;
    FilmPage *fip;
    SearchFilm *sf;
    //Header
    PageMain *pgFI;
    UserInfo *uiFI;
    TVShows *tvsFI;
    KidsTV *kidsFI;
    PersUser *puFC;

};

#endif // USERINFO_H
