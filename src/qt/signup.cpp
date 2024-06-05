#include "signup.h"
#include "ui_signup.h"
#include "firstloginsignup.h"
#include "login.h"

SignUp::SignUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_LeaveBack_clicked()
{
    hide();

    flisu = new FirstLogInSignUp(this);
    flisu->show();

}


void SignUp::on_LogInBut_clicked()
{
    hide();

    li2 = new LogIn(this);
    li2->show();

}


void SignUp::on_SignUpBSU_clicked()
{
    QString usSU = ui->usernameTBSU->text();
    QString passSU = ui->PasswordTBSU->text();
    QString ageSU = ui->AgeTBSU->text();


    //if()






}

