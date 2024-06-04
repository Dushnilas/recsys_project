/********************************************************************************
** Form generated from reading UI file 'firstloginsignup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
            FirstLogInSignUp->setObjectName(QString::fromUtf8("FirstLogInSignUp"));
        FirstLogInSignUp->resize(1042, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Pics/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-06-01 \320\262 17.47.55.png"), QSize(), QIcon::Normal, QIcon::Off);
        FirstLogInSignUp->setWindowIcon(icon);
        FirstLogInSignUp->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(FirstLogInSignUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginB = new QPushButton(centralwidget);
        loginB->setObjectName(QString::fromUtf8("loginB"));

        horizontalLayout->addWidget(loginB);

        SignUpB = new QPushButton(centralwidget);
        SignUpB->setObjectName(QString::fromUtf8("SignUpB"));

        horizontalLayout->addWidget(SignUpB);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2-removebg-preview.png);"));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        FirstLogInSignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirstLogInSignUp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1042, 24));
        FirstLogInSignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(FirstLogInSignUp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
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
