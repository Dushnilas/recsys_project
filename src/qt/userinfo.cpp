#include "userinfo.h"
#include "ui_userinfo.h"
#include "pagemain.h"
#include <QPushButton>
//#include <QDebug>

UserInfo::UserInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserInfo)
{
    ui->setupUi(this);


}

UserInfo::~UserInfo()
{
    delete ui;

}



void UserInfo::on_pushButton_clicked()
{



}


// void UserInfo::handleGoToTVShowsButtonClicked() {
//     qDebug() << "GoTpTVShowsB from MainPage was clicked!";
// }
