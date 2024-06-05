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

void UserInfo::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_11_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_10_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_14_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_17_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_13_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_12_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_16_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_20_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_23_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_19_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_18_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void UserInfo::on_pushButton_22_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

//Header
void UserInfo::on_HomeBut_clicked()
{
    hide();
    pgFI = new PageMain(this);
    pgFI->show();
}


void UserInfo::on_FilmsBut_clicked()
{
    hide();
    uiFI = new UserInfo(this);
    uiFI->show();
}


void UserInfo::on_TVShowsBut_clicked()
{
    hide();
    tvsFI = new TVShows(this);
    tvsFI->show();
}


void UserInfo::on_KidsBut_clicked()
{
    hide();
    kidsFI = new KidsTV(this);
    kidsFI->show();
}


void UserInfo::on_UserBut_clicked()
{
    hide();
    puFC = new PersUser(this);
    puFC->show();
}


void UserInfo::on_pushButton_clicked()
{
    hide();
    sf = new SearchFilm(this);
    sf->show();
}

