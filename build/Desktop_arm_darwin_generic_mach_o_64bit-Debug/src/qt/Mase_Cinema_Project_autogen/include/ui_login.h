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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *UsernameTB;
    QLabel *label_2;
    QLineEdit *PasswordTB;
    QSpacerItem *verticalSpacer_2;
    QPushButton *ButNext;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(985, 600);
        LogIn->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(label);

        UsernameTB = new QLineEdit(centralwidget);
        UsernameTB->setObjectName("UsernameTB");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UsernameTB->sizePolicy().hasHeightForWidth());
        UsernameTB->setSizePolicy(sizePolicy);
        UsernameTB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout->addWidget(UsernameTB);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(225,225,225,0);"));

        verticalLayout->addWidget(label_2);

        PasswordTB = new QLineEdit(centralwidget);
        PasswordTB->setObjectName("PasswordTB");
        sizePolicy.setHeightForWidth(PasswordTB->sizePolicy().hasHeightForWidth());
        PasswordTB->setSizePolicy(sizePolicy);
        PasswordTB->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout->addWidget(PasswordTB);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        ButNext = new QPushButton(centralwidget);
        ButNext->setObjectName("ButNext");
        ButNext->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButNext->sizePolicy().hasHeightForWidth());
        ButNext->setSizePolicy(sizePolicy1);
        ButNext->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout->addWidget(ButNext);

        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(6, 2);

        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 6);
        gridLayout->setRowStretch(2, 3);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 5);
        gridLayout->setColumnStretch(2, 1);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

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
        pushButton->setText(QCoreApplication::translate("LogIn", "Leave", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogIn", "Sign In", nullptr));
        label_3->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; color:#e4d7be;\">Please enter your log in details</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" color:#ffffff;\">Username</span></p></body></html>", nullptr));
        UsernameTB->setText(QCoreApplication::translate("LogIn", "aleko", nullptr));
        label_2->setText(QCoreApplication::translate("LogIn", "<html><head/><body><p><span style=\" color:#ffffff;\">Password</span></p></body></html>", nullptr));
        PasswordTB->setText(QCoreApplication::translate("LogIn", "12345", nullptr));
        ButNext->setText(QCoreApplication::translate("LogIn", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
