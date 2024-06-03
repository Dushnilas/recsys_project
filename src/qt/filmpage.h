#ifndef FILMPAGE_H
#define FILMPAGE_H

#include <QMainWindow>

namespace Ui {
class FilmPage;
}
class LikedFilms;
class FilmsCollection;

class FilmPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FilmPage(QWidget *parent = nullptr);
    ~FilmPage();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::FilmPage *ui;
    LikedFilms *like;
    FilmsCollection *collection;
};

#endif // FILMPAGE_H
