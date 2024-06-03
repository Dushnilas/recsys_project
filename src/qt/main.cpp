#include "firstloginsignup.h"
#include "pagemain.h"
#include "userinfo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstLogInSignUp w;
    w.show();
    return a.exec();

    // Подключаем сигнал из PageMain к слоту в UserInfo
    //QObject::connect(&pageMain, &PageMain::goToTVShowsButtonClicked, &userInfo, &UserInfo::handleGoToTVShowsButtonClicked);

}
