#include "filmpage.h"
#include "ui_filmpage.h"
#include "likedfilms.h"
#include "filmscollection.h"

FilmPage::FilmPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FilmPage)
{
    ui->setupUi(this);
}

FilmPage::~FilmPage()
{
    delete ui;
}

void FilmPage::on_pushButton_7_clicked()
{
    hide();
    like = new LikedFilms(this);
    like->show();
}


void FilmPage::on_pushButton_8_clicked()
{
    hide();
    collection = new FilmsCollection(this);
    collection->show();
}

