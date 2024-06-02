#include "pagemain.h"
#include "ui_pagemain.h"
#include "login.h"
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QWidget>
#include "userinfo.h"


PageMain::PageMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PageMain)
{
    ui->setupUi(this);

    //connect(ui->verticalScrollBar,SIGNAL(sliderMoved(int)),ui->scrollArea,SLOT(setWindowModified(bool)));
}

PageMain::~PageMain()
{
    delete ui;

}

void PageMain::on_pushButton_clicked()
{
    hide();
    lg = new LogIn(this);
    lg->show();




}


void PageMain::on_pushButton_35_clicked()
{
    hide();
    usi = new UserInfo(this);
    usi->show();





}















