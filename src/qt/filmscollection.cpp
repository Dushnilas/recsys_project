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

