#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QString>
#include "signup.h"
#include <string>

#include "backend.h"

class SignUp;
//class BACKEND;

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_pushButton_clicked()
{

    hide();
    fls = new FirstLogInSignUp(this);
    fls->show();


}


void LogIn::on_pushButton_3_clicked()
{
    hide();
    pg = new PageMain(this);
    pg->show();



}


void LogIn::on_ButNext_clicked()
{
    QString us = ui->UsernameTB->text();
    std::string usStr = us.toStdString();

    QString pass = ui->PasswordTB->text();
    std::string passStr = pass.toStdString();



    //bcLogIn = new BACKEND(this);



        if(SignInFun(usStr,passStr))
    {
        hide();
        pg = new PageMain(this);
        pg->show();
    }
    else
    {
        QMessageBox::information(this, "User","Your username or password is incorect");

    }



}


void LogIn::on_pushButton_2_clicked()
{
    hide();

    su2 = new SignUp(this);
    su2->show();


}

