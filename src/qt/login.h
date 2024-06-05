#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "firstloginsignup.h"
#include "pagemain.h"
#include "signup.h"

#include "backend.h"

namespace Ui {
class LogIn;
}

class FirstLogInSignUp;
class SignUp;
//class BACKEND;

class LogIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = nullptr);
    ~LogIn();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_ButNext_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LogIn *ui;

    PageMain *pg;

    FirstLogInSignUp *fls;

    SignUp *su2;

    //BACKEND *bcLogIn;





};

#endif // LOGIN_H
