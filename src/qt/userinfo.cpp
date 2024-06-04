#include "userinfo.h"
#include "ui_userinfo.h"
#include "pagemain.h"
#include <QPushButton>
//#include <QDebug>

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


//Header

void UserInfo::on_HomeButFilms_clicked()
{
    hide();

    pmUI = new PageMain(this);
    puUI->show();
}


void UserInfo::on_FilmsButFilms_clicked()
{
    hide();

    uiUI = new UserInfo(this);
    uiUI->show();


}


void UserInfo::on_TVShowsButFilms_clicked()
{
    hide();

    tvsUi = new TVShows(this);
    tvsUi->show();
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

