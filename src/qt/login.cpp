#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QString>
#include "signup.h"

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
    QString pass = ui->PasswordTB->text();

    //bcLogIn = new BACKEND(this);



        if(SignInFun(us.toStdString(),pass.toStdString()))
    {
        hide();
        pg = new PageMain(this);
        pg->show();
    }
    else
    {
        QMessageBox::information(this, "User","Your username or password is incorect");

    }

    // if(us == "aleko" && pass == "12345")
    // {
    //     hide();
    //     pg = new PageMain(this);
    //     pg->show();

    // }
    // else
    // {
    //     QMessageBox::information(this, "User","Your username or password is incorect");

    // }









}


void LogIn::on_pushButton_2_clicked()
{
    hide();

    su2 = new SignUp(this);
    su2->show();


}


// class LogIn : public QMainWindow {
//     // Остальные члены класса

// protected:
//     // Переопределение метода closeEvent
//     void closeEvent(QCloseEvent *event) override {
//         // Проверка, нужно ли выполнить какие-либо действия перед закрытием окна
//         if (needConfirmationBeforeClose()) {
//             // Показываем диалоговое окно с запросом подтверждения закрытия
//             QMessageBox::StandardButton reply;
//             reply = QMessageBox::question(this, "Подтверждение", "Вы уверены, что хотите закрыть приложение?",
//                                           QMessageBox::Yes|QMessageBox::No);
//             if (reply == QMessageBox::Yes) {
//                 // Если пользователь подтвердил закрытие, вызываем стандартное событие закрытия
//                 event->accept();
//             } else {
//                 // Если пользователь отменил закрытие, игнорируем событие закрытия
//                 event->ignore();
//             }
//         } else {
//             // Если дополнительные действия перед закрытием не требуются, вызываем стандартное событие закрытия
//             QMainWindow::closeEvent(event);
//         }
//     }

// private:
//     // Функция для определения, требуется ли подтверждение перед закрытием
//     bool needConfirmationBeforeClose() const {
//         // Здесь можно реализовать логику проверки условий для отображения диалогового окна
//         // Например, если у вас есть несохраненные данные, можно вернуть true,
//         // чтобы показать диалоговое окно подтверждения перед закрытием
//         return unsavedChangesExist();
//     }

//     // Пример: функция для определения, есть ли несохраненные изменения
//     bool unsavedChangesExist() const {
//         // Здесь проверяем наличие несохраненных изменений и возвращаем соответствующий результат
//         // Например, можно проверить флаги или состояние объектов вашего приложения
//         return unsavedChangesFlag;
//     }

//     // Дополнительные члены класса
// };

