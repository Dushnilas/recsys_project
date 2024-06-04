#include "tvshows.h"
#include "ui_tvshows.h"

TVShows::TVShows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TVShows)
{
    ui->setupUi(this);
}

TVShows::~TVShows()
{
    delete ui;
}
