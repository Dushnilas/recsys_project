#include "persuser.h"
#include "ui_persuser.h"

PersUser::PersUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PersUser)
{
    ui->setupUi(this);
}

PersUser::~PersUser()
{
    delete ui;
}

void PersUser::on_LikedBut_clicked()
{


    hide();

    lf = new LikedFilms(this); //goes to liked page
    lf->show();
}


void PersUser::on_CollectionsBut_clicked()
{

    hide();

    fcPU = new FilmsCollection(this); //goes to collections page
    fcPU->show();

}


//Header

void PersUser::on_HomeBPU_clicked()
{
    hide();

    pmPU = new PageMain(this);
    pmPU->show();

}

void PersUser::on_FilmsBPU_clicked()
{
    hide();

    uiPU = new UserInfo(this);
    uiPU->show();

}


void PersUser::on_TVShowsPU_clicked()
{
    hide();

    tvsPU = new TVShows(this);
    tvsPU->show();

}


void PersUser::on_KidsBPU_clicked()
{
    hide();

    kidsPU = new KidsTV(this);
    kidsPU->show();

}

