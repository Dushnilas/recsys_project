#include "filmscollection.h"
#include "ui_filmscollection.h"
#include "collectionpage.h"

FilmsCollection::FilmsCollection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FilmsCollection)
{
    ui->setupUi(this);
}

FilmsCollection::~FilmsCollection()
{
    delete ui;
}

void FilmsCollection::on_pushButton_3_clicked()
{
    hide();
    cpage = new CollectionPage(this);
    cpage->show();
}


void FilmsCollection::on_pushButton_2_clicked()
{
    hide();
    cpage = new CollectionPage(this);
    cpage->show();
}


void FilmsCollection::on_pushButton_5_clicked()
{
    hide();
    cpage = new CollectionPage(this);
    cpage->show();
}


void FilmsCollection::on_pushButton_clicked()
{
    hide();
    cpage = new CollectionPage(this);
    cpage->show();
}


void FilmsCollection::on_pushButton_4_clicked()
{
    hide();
    cpage = new CollectionPage(this);
    cpage->show();
}





//Header



void FilmsCollection::on_HomeBFC_clicked()
{
    hide();

    pmFC = new PageMain(this);
    pmFC->show();
}


void FilmsCollection::on_FilmBFC_clicked()
{
    hide();

    uiFC = new UserInfo(this);
    uiFC->show();

}


void FilmsCollection::on_TVShowsBFC_clicked()
{
    hide();

    tvsFC = new TVShows(this);
    tvsFC->show();


}


void FilmsCollection::on_KidsBFC_clicked()
{
    hide();

    kidsFC = new KidsTV(this);
    kidsFC->show();
}


void FilmsCollection::on_UserBFC_clicked()
{
    hide();

    puFC = new PersUser(this);
    puFC->show();
}

