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

