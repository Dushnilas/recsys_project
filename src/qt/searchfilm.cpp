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

//Header


void SearchFilm::on_HomeFSerach_clicked()
{
    hide();

    pmFS = new PageMain(this);
    pmFS->show();
}


void SearchFilm::on_FilmsBFSearch_clicked()
{
    hide();

    uiFS = new UserInfo(this);
    uiFS ->show();
}


void SearchFilm::on_TVShoesBFSeach_clicked()
{
    hide();

    tvsFS = new TVShows(this);
    tvsFS ->show();
}


void SearchFilm::on_KidsBFSearch_clicked()
{
    hide();

    kidsFS = new KidsTV(this);
    kidsFS->show();
}


void SearchFilm::on_UserBFSearch_clicked()
{

    hide();

    puFS = new PersUser(this);
    puFS->show();

}

