/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *UsernameTB;
    QLabel *label_2;
    QLineEdit *PasswordTB;
    QPushButton *ButNext;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(985, 600);
        LogIn->setStyleSheet(QString::fromUtf8("background-image: url(:/rec/Pics/backg.png);"));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 140, 401, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        label_3->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 210, 100, 32));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 220, 491, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        UsernameTB = new QLineEdit(layoutWidget);
        UsernameTB->setObjectName("UsernameTB");

        verticalLayout->addWidget(UsernameTB);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        PasswordTB = new QLineEdit(layoutWidget);
        PasswordTB->setObjectName("PasswordTB");

        verticalLayout->addWidget(PasswordTB);

        ButNext = new QPushButton(layoutWidget);
        ButNext->setObjectName("ButNext");

        verticalLayout->addWidget(ButNext);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 520, 961, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        LogIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 985, 24));
        LogIn->setMenuBar(menubar);
        statusbar = new QStatusBar(LogIn);
        statusbar->setObjectName("statusbar");
        LogIn->setStatusBar(statusbar);

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QMainWindow *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("LogIn", "<html><head/><body><h1 style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; color:#ffffff;\">Please enter your log In details</span></h1><p><br/></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LogIn", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" color:#ffffff;\">Username</span></p></body></html>", nullptr));
        UsernameTB->setText(QCoreApplication::translate("LogIn", "username", nullptr));
        label_2->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", nullptr));
        PasswordTB->setText(QCoreApplication::translate("LogIn", "password", nullptr));
        ButNext->setText(QCoreApplication::translate("LogIn", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("LogIn", "Leave", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogIn", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
