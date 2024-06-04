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

//Hedder

void LikedFilms::on_HomeBLF_clicked()
{
    hide();
    pmFL = new PageMain(this);
    pmFL->show();

}


void LikedFilms::on_FilmsBFI_clicked()
{
    hide();
    uiFL = new UserInfo(this);
    uiFL->show();
}


void LikedFilms::on_TVShowsBFL_clicked()
{
    hide();
    tvsFL = new TVShows(this);
    tvsFL->show();


}

void LikedFilms::on_KidsBFL_clicked()
{
    hide();
    kidsFL = new KidsTV(this);
    kidsFL->show();

}


void LikedFilms::on_UserBFL_clicked()
{
    hide();
    puFL = new PersUser(this);
    puFL->show();
}

