#include "userinfo.h"
#include "ui_userinfo.h"
#include "pagemain.h"

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
