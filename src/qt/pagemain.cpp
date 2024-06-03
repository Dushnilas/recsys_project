#include "pagemain.h"
#include "ui_pagemain.h"
#include "login.h"
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QWidget>
#include "userinfo.h"
#include "persuser.h"

#include "tvshows.h"
#include "kidstv.h"
#include "userinfo.h"
#include "persuser.h"


PageMain::PageMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PageMain)
{
    ui->setupUi(this);

    //connect(goToTVShowsB, &QPushButton::clicked, this, &PageMain::onGoToTVShowsButtonClicked);

}

PageMain::~PageMain()
{
    delete ui;

}

void PageMain::on_UserB1_clicked()
{
    hide();

    pu = new PersUser(this); //Goes to User page
    pu->show();

}



void PageMain::on_pushButton_clicked()
{
    hide();
    lg = new LogIn(this); //goes to log in form
    lg->show();
}



//Films section

void PageMain::on_FilmsButton1_clicked()
{
    hide();
    usi = new UserInfo(this); //goes to the Films
    usi->show();

}

void PageMain::on_FilmsB1_clicked()
{
    hide();
    usi = new UserInfo(this); //goes to the Films
    usi->show();

}




//TVShows section

void PageMain::on_GoTpTVShowsB_clicked()
{
    hide();

    tvsh = new TVShows(this); //Goes to TVShows
    tvsh->show();


}


void PageMain::on_TVShowsB1_clicked()
{

    hide();

    tvsh = new TVShows(this); //Goes to TVShows
    tvsh->show();

}

//Kids section

void PageMain::on_KidsB1_clicked()
{
    hide();

    kidstv = new KidsTV(this); //Goes to TVShows
    kidstv->show();

}

void PageMain::on_KidsHButton_clicked()
{
    hide();

    kidstv = new KidsTV(this); //Goes to TVShows
    kidstv->show();

}









