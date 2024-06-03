#ifndef TVSHOWS_H
#define TVSHOWS_H

#include <QMainWindow>

namespace Ui {
class TVShows;
}

class TVShows : public QMainWindow
{
    Q_OBJECT

public:
    explicit TVShows(QWidget *parent = nullptr);
    ~TVShows();

private:
    Ui::TVShows *ui;
};

#endif // TVSHOWS_H
