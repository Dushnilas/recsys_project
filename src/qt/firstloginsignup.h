#ifndef FIRSTLOGINSIGNUP_H
#define FIRSTLOGINSIGNUP_H

#include <QMainWindow>
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class FirstLogInSignUp;
}
QT_END_NAMESPACE

class LogIn; //класс для перехода в другое окно

class FirstLogInSignUp : public QMainWindow
{
    Q_OBJECT

public:
    FirstLogInSignUp(QWidget *parent = nullptr);
    ~FirstLogInSignUp();

private slots:
    void on_loginB_clicked();

private:
    Ui::FirstLogInSignUp *ui;

    LogIn *lg;  //инициализатор для другого окна




};
#endif // FIRSTLOGINSIGNUP_H
