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

//Header

void FilmPage::on_HomeBFI_clicked()
{
    hide();
    pgFI = new PageMain(this);
    pgFI->show();

}


void FilmPage::on_FilmsBFI_clicked()
{

    hide();
    uiFI = new UserInfo(this);
    uiFI->show();

}


void FilmPage::on_TVShowsBFI_clicked()
{
    hide();
    tvsFI = new TVShows(this);
    tvsFI->show();

}


void FilmPage::on_KidsBFI_clicked()
{
    hide();
    kidsFI = new KidsTV(this);
    kidsFI->show();


}


void FilmPage::on_UserPBFI_clicked()
{
    hide();
    puFI = new PersUser(this);
    puFI->show();

}

