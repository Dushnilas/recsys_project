#include "kidstv.h"
#include "ui_kidstv.h"

KidsTV::KidsTV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KidsTV)
{
    ui->setupUi(this);
}

KidsTV::~KidsTV()
{
    delete ui;
}

//Header



void KidsTV::on_HomeButKid_clicked()
{
    hide();

    pmK = new PageMain(this);
    pmK->show();
}


void KidsTV::on_FilmsButKid_clicked()
{
    hide();

    uiK = new UserInfo(this);
    uiK->show();

}


void KidsTV::on_TVShowsButKid_clicked()
{
    hide();

    tvsK = new TVShows(this);
    tvsK->show();

}



void KidsTV::on_KidsButKid_clicked()
{
    //
}


void KidsTV::on_UserButKid_clicked()
{
    hide();

    puK = new PersUser(this);
    puK->show();



}

