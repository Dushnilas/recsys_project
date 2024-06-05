#ifndef SEARCHFILM_H
#define SEARCHFILM_H

#include <QMainWindow>

namespace Ui {
class SearchFilm;
}
class FilmPage;
//Header
class PageMain;
class UserInfo;
class TVShows;
class KidsTV;
class PersUser;

class SearchFilm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchFilm(QWidget *parent = nullptr);
    ~SearchFilm();

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::SearchFilm *ui;
    FilmPage *fip;
    //Header
    PageMain *pgFI;
    UserInfo *uiFI;
    TVShows *tvsFI;
    KidsTV *kidsFI;
    PersUser *puFC;
};

#endif // SEARCHFILM_H
