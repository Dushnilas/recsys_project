#include "likedfilms.h"
#include "ui_likedfilms.h"
#include "filmpage.h"

LikedFilms::LikedFilms(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LikedFilms)
{
    ui->setupUi(this);
}

LikedFilms::~LikedFilms()
{
    delete ui;
}

void LikedFilms::on_pushButton_3_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_2_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_5_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_4_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_10_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void LikedFilms::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

