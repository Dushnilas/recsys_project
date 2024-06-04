#include "tvshows.h"
#include "ui_tvshows.h"

TVShows::TVShows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TVShows)
{
    ui->setupUi(this);
}

TVShows::~TVShows()
{
    delete ui;
}

void TVShows::on_HomeButTV_clicked()
{
    hide();

    pmTVS = new PageMain(this);
    pmTVS ->show();
}


void TVShows::on_FilmsButTV_clicked()
{
    hide();

    uiTVS = new UserInfo(this);
    uiTVS ->show();
}


void TVShows::on_TVShowsButTV_clicked()
{
    hide();

    tvsTVS = new TVShows(this);
    tvsTVS ->show();
}


void TVShows::on_KidsButTV_clicked()
{
    hide();

    kidsTVS = new KidsTV(this);
    kidsTVS ->show();

}


void TVShows::on_UserButTV_clicked()
{
    hide();

    puTVS = new PersUser(this);
    puTVS ->show();

}

