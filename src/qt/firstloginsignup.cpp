#include "firstloginsignup.h"
#include "./ui_firstloginsignup.h"
#include "signup.h"

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
    //Код для перехода в LogIn

    hide();
    lg = new LogIn(this);
    lg->show();

}


void FirstLogInSignUp::on_pushButton_clicked()
{
    hide();
    su = new SignUp(this);  //Код для перехода в SignUp
    su->show();




}

