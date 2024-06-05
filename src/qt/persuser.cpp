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

    cp = new CollectionPage(this); //goes to collections page
    cp->show();
}

//Header
void PersUser::on_HomeBPU_clicked()
{
    hide();
    pgFI = new PageMain(this);
    pgFI->show();
}


void PersUser::on_FilmsBPU_clicked()
{
    hide();
    uiFI = new UserInfo(this);
    uiFI->show();
}


void PersUser::on_TVShowsPU_clicked()
{
    hide();
    tvsFI = new TVShows(this);
    tvsFI->show();
}


void PersUser::on_KidsBPU_clicked()
{
    hide();
    kidsFI = new KidsTV(this);
    kidsFI->show();
}


void PersUser::on_UserPU_clicked()
{
    hide();
    puFC = new PersUser(this);
    puFC->show();
}
