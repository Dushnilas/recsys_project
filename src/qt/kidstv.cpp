#include "kidstv.h"
#include "ui_kidstv.h"
#include "filmpage.h"

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

//Films own pages
void KidsTV::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_11_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

void KidsTV::on_pushButton_14_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_17_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_13_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_12_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_16_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_20_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_23_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_19_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_18_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_pushButton_22_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void KidsTV::on_SearchByGKid_clicked()
{
    hide();
    sf = new SearchFilm(this);
    sf->show();
}

