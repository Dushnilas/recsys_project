#include "pagemain.h"
#include "ui_pagemain.h"
#include "login.h"
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QWidget>
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

void PageMain::on_pushButton_clicked()
{
    hide();
    lg = new LogIn(this); //goes to log in form
    lg->show();
}


void PageMain::on_FilmsButton1_clicked()
{
    hide();
    usi = new UserInfo(this); //goes to the page of films/TVShows/Kids
    usi->show();

}


void PageMain::on_UserB1_clicked()
{
    hide();

    pu = new PersUser(this); //Goes to User page
    pu->show();



}


void PageMain::on_GoTpTVShowsB_clicked()
{
    //emit goToTVShowsButtonClicked(); //отправляем сигнал

}

// void PageMain::onGoToTVShowsButtonClicked() {
//     emit goToTVShowsButtonClicked();  // Отправляем сигнал при нажатии кнопки
// }






// void PageMain::on_FilmsB1_clicked()
// {

// }

