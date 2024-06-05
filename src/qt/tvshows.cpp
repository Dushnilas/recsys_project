#include "tvshows.h"
#include "ui_tvshows.h"
#include "filmpage.h"
#include "searchfilm.h"

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


void TVShows::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_11_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_14_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_17_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_13_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_12_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_16_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_20_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_23_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_19_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_18_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void TVShows::on_pushButton_22_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

//Header
void TVShows::on_HomeButTV_clicked()
{
    hide();
    pgFI = new PageMain(this);
    pgFI->show();
}


void TVShows::on_FilmsButTV_clicked()
{
    hide();
    uiFI = new UserInfo(this);
    uiFI->show();
}


void TVShows::on_TVShowsButTV_clicked()
{
    hide();
    tvsFI = new TVShows(this);
    tvsFI->show();
}


void TVShows::on_KidsButTV_clicked()
{
    hide();
    kidsFI = new KidsTV(this);
    kidsFI->show();
}


void TVShows::on_UserButTV_clicked()
{
    hide();
    puFC = new PersUser(this);
    puFC->show();
}


void TVShows::on_SearchByGTV_clicked()
{
    hide();
    sf = new SearchFilm(this);
    sf->show();
}

