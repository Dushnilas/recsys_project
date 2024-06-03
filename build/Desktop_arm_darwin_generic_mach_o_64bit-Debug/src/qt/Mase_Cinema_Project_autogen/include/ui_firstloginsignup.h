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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstLogInSignUp
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *comboBut;
    QPushButton *loginB;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *ComboLogo;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
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
        comboBut = new QHBoxLayout();
        comboBut->setObjectName("comboBut");
        comboBut->setContentsMargins(-1, 100, -1, 10);
        loginB = new QPushButton(centralwidget);
        loginB->setObjectName("loginB");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(loginB->sizePolicy().hasHeightForWidth());
        loginB->setSizePolicy(sizePolicy);
        loginB->setMinimumSize(QSize(10, 40));
        loginB->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        comboBut->addWidget(loginB);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(10, 40));
        pushButton->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        comboBut->addWidget(pushButton);

        comboBut->setStretch(0, 4);
        comboBut->setStretch(1, 4);

        gridLayout->addLayout(comboBut, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        ComboLogo = new QHBoxLayout();
        ComboLogo->setObjectName("ComboLogo");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        ComboLogo->addWidget(label);


        horizontalLayout->addLayout(ComboLogo);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addWidget(widget);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 7);
        gridLayout->setRowStretch(3, 2);
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
        pushButton->setText(QCoreApplication::translate("FirstLogInSignUp", "Sign Up", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FirstLogInSignUp: public Ui_FirstLogInSignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTLOGINSIGNUP_H
