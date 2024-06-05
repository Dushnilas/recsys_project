#include "searchfilm.h"
#include "ui_searchfilm.h"
#include "filmpage.h"

SearchFilm::SearchFilm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SearchFilm)
{
    ui->setupUi(this);
}

SearchFilm::~SearchFilm()
{
    delete ui;
}

void SearchFilm::on_pushButton_11_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_10_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_22_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_25_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_26_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_23_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_24_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_12_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_15_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_16_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_13_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_14_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_17_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_20_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_21_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_18_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void SearchFilm::on_pushButton_19_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

//Header
void SearchFilm::on_pushButton_clicked()
{
    hide();
    pgFI = new PageMain(this);
    pgFI->show();
}

void SearchFilm::on_pushButton_4_clicked()
{
    hide();
    uiFI = new UserInfo(this);
    uiFI->show();
}
void SearchFilm::on_pushButton_3_clicked()
{
    hide();
    tvsFI = new TVShows(this);
    tvsFI->show();
}

void SearchFilm::on_pushButton_2_clicked()
{
    hide();
    kidsFI = new KidsTV(this);
    kidsFI->show();
}


void SearchFilm::on_pushButton_5_clicked()
{
    hide();
    puFC = new PersUser(this);
    puFC->show();
}

