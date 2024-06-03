#include "firstloginsignup.h"
#include "./ui_firstloginsignup.h"

FirstLogInSignUp::FirstLogInSignUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstLogInSignUp)
{
    ui->setupUi(this);

}

FirstLogInSignUp::~FirstLogInSignUp()
{
    delete ui;
}

void FirstLogInSignUp::on_loginB_clicked()
{
    //Код для перехода в другое окно

    hide();
    lg = new LogIn(this);
    lg->show();

}

