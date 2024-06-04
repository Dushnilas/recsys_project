#ifndef USERINFO_H
#define USERINFO_H

#include <QMainWindow>
#include "mainpage.h"

namespace Ui {
class UserInfo;
}
class MainPage;
class UserInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = nullptr);
    ~UserInfo();
public slots:
    //void handleGoToTVShowsButtonClicked();  // Определяем слот

signals:
//     //void buttonClicked();

private slots:
    //void onPushButton();
    void on_pushButton_clicked();

private:
    Ui::UserInfo *ui;

    MainPage *mp1;
};

#endif // USERINFO_H
