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


// void TVShows::on_pushButton_6_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_11_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_7_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_8_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_9_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_14_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_17_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_13_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_12_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_16_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_20_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_23_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_19_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_18_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void TVShows::on_pushButton_22_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
//}

//Header
void TVShows::on_HomeButTV_clicked()
{
    hide();
    pmTVS = new PageMain(this);
    pmTVS->show();
}


void TVShows::on_FilmsButTV_clicked()
{
    hide();
    uiTVS = new UserInfo(this);
    uiTVS->show();
}


void TVShows::on_TVShowsButTV_clicked()
{
    hide();
    tvsTVS = new TVShows(this);
    tvsTVS->show();
}


void TVShows::on_KidsButTV_clicked()
{
    hide();
    kidsTVS = new KidsTV(this);
    kidsTVS->show();
}


void TVShows::on_UserButTV_clicked()
{
    hide();
    puTVS = new PersUser(this);
    puTVS->show();
}


void TVShows::on_SearchByGTV_clicked()
{
    hide();
    sfTVS = new SearchFilm(this);
    sfTVS->show();
}
