#include "collectionpage.h"
#include "ui_collectionpage.h"
#include "filmpage.h"

CollectionPage::CollectionPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CollectionPage)
{
    ui->setupUi(this);
}

CollectionPage::~CollectionPage()
{
    delete ui;
}

//Buttons for eacg film

void CollectionPage::on_pushButton_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_3_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_4_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_5_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_2_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_10_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void CollectionPage::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

//Header



void CollectionPage::on_pushButton_11_clicked()
{
    hide();

    pgCol = new PageMain(this);
    pgCol->show();

}


void CollectionPage::on_filmsCol_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();

}


void CollectionPage::on_TVShowsCol_clicked()
{
    hide();
    uiCol = new UserInfo(this);
    uiCol->show();


}


void CollectionPage::on_KidsCol_clicked()
{
    hide();

    kidCol = new KidsTV(this);
    kidCol->show();
}


void CollectionPage::on_UserCol_clicked()
{
    hide();

    puCol = new PersUser(this);
    puCol->show();

}

