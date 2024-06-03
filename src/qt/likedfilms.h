#ifndef LIKEDFILMS_H
#define LIKEDFILMS_H

#include <QMainWindow>


namespace Ui {
class LikedFilms;
}
class FilmPage;

class LikedFilms : public QMainWindow
{
    Q_OBJECT

public:
    explicit LikedFilms(QWidget *parent = nullptr);
    ~LikedFilms();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::LikedFilms *ui;
    FilmPage *fip;
};

#endif // LIKEDFILMS_H
