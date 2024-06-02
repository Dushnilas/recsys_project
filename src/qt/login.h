#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "firstloginsignup.h"
#include "pagemain.h"

namespace Ui {
class LogIn;
}

class FirstLogInSignUp;

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

private:
    Ui::LogIn *ui;

    PageMain *pg;

    FirstLogInSignUp *fls;



};

#endif // LOGIN_H
