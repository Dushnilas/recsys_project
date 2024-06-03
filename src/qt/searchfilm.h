#ifndef SEARCHFILM_H
#define SEARCHFILM_H

#include <QMainWindow>

namespace Ui {
class SearchFilm;
}

class SearchFilm : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchFilm(QWidget *parent = nullptr);
    ~SearchFilm();

private:
    Ui::SearchFilm *ui;
};

#endif // SEARCHFILM_H
