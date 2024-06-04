#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include "firstloginsignup.h"
#include "login.h"

namespace Ui {
class SignUp;
}

class FirstLogInSignUp;
class LogIn;
class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_LeaveBack_clicked();

    void on_LogInBut_clicked();

private:
    Ui::SignUp *ui;

    FirstLogInSignUp *flisu;

    LogIn *li2;
};

#endif // SIGNUP_H
