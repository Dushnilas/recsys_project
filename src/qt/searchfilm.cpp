#include "searchfilm.h"
#include "ui_searchfilm.h"

SearchFilm::SearchFilm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SearchFilm)
{
    ui->setupUi(this);
}

SearchFilm::~SearchFilm()
{
    delete ui;
}
