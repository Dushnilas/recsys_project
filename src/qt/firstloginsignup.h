#ifndef FIRSTLOGINSIGNUP_H
#define FIRSTLOGINSIGNUP_H

#include <QMainWindow>
#include "login.h"
#include "signup.h"



QT_BEGIN_NAMESPACE
namespace Ui {
class FirstLogInSignUp;
}
QT_END_NAMESPACE

class LogIn; //класс для перехода в LogIn
class SignUp; //класс для перехода в SignUp

class FirstLogInSignUp : public QMainWindow
{
    Q_OBJECT

public:
    FirstLogInSignUp(QWidget *parent = nullptr);
    ~FirstLogInSignUp();

private slots:
    void on_loginB_clicked();

    void on_pushButton_clicked();

private:
    Ui::FirstLogInSignUp *ui;

    LogIn *lg;  //инициализатор для LogIn
    SignUp *su;   //инициализатор для SignUp




};
#endif // FIRSTLOGINSIGNUP_H
