#include "userinfo.h"
#include "ui_userinfo.h"
#include "pagemain.h"
#include "filmpage.h"
#include "searchfilm.h"

UserInfo::UserInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserInfo)
{
    ui->setupUi(this);
}

UserInfo::~UserInfo()
{
    delete ui;
}

// void UserInfo::on_pushButton_6_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_11_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_7_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_8_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_10_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_14_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_17_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_13_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_12_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_16_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_20_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_23_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_19_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_18_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }


// void UserInfo::on_pushButton_22_clicked()
// {
//     hide();
//     fip = new FilmPage(this);
//     fip->show();
// }

//Header
void UserInfo::on_HomeButFilms_clicked()
{
    hide();
    pmUI = new PageMain(this);
    pmUI->show();
}


void UserInfo::on_TVShowsButFilms_clicked()
{
    // hide();
    // tvsUI = new TVShows(this);
    // tvsUI->show();
}


void UserInfo::on_KidsButFilms_clicked()
{
    hide();
    kidsUI = new KidsTV(this);
    kidsUI->show();
}


void UserInfo::on_UserButFilms_clicked()
{
    hide();
    puUI = new PersUser(this);
    puUI->show();
}


void UserInfo::on_SearchGButFilms_clicked()
{
    hide();
    sfUI = new SearchFilm(this);
    sfUI->show();
}

