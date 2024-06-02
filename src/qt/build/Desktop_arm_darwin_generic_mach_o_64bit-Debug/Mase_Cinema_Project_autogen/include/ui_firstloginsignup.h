/********************************************************************************
** Form generated from reading UI file 'firstloginsignup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTLOGINSIGNUP_H
#define UI_FIRSTLOGINSIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstLogInSignUp
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginB;
    QPushButton *SignUpB;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirstLogInSignUp)
    {
        if (FirstLogInSignUp->objectName().isEmpty())
            FirstLogInSignUp->setObjectName("FirstLogInSignUp");
        FirstLogInSignUp->resize(1042, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Pics/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-06-01 \320\262 17.47.55.png"), QSize(), QIcon::Normal, QIcon::Off);
        FirstLogInSignUp->setWindowIcon(icon);
        FirstLogInSignUp->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(FirstLogInSignUp);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        loginB = new QPushButton(centralwidget);
        loginB->setObjectName("loginB");

        horizontalLayout->addWidget(loginB);

        SignUpB = new QPushButton(centralwidget);
        SignUpB->setObjectName("SignUpB");

        horizontalLayout->addWidget(SignUpB);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2-removebg-preview.png);"));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        FirstLogInSignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirstLogInSignUp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1042, 24));
        FirstLogInSignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(FirstLogInSignUp);
        statusbar->setObjectName("statusbar");
        FirstLogInSignUp->setStatusBar(statusbar);

        retranslateUi(FirstLogInSignUp);

        QMetaObject::connectSlotsByName(FirstLogInSignUp);
    } // setupUi

    void retranslateUi(QMainWindow *FirstLogInSignUp)
    {
        FirstLogInSignUp->setWindowTitle(QCoreApplication::translate("FirstLogInSignUp", "FirstLogInSignUp", nullptr));
        loginB->setText(QCoreApplication::translate("FirstLogInSignUp", "Log In", nullptr));
        SignUpB->setText(QCoreApplication::translate("FirstLogInSignUp", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstLogInSignUp: public Ui_FirstLogInSignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTLOGINSIGNUP_H
