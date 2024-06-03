/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *SignUpReg;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameTB;
    QLabel *label_2;
    QLineEdit *PasswordTB;
    QLabel *label_3;
    QLineEdit *RepPassTB;
    QLabel *label_4;
    QLineEdit *AgeTB;
    QLabel *label_5;
    QLineEdit *EmailTB;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *LeaveBack;
    QPushButton *LogInBut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(933, 600);
        SignUp->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        SignUpReg = new QLabel(centralwidget);
        SignUpReg->setObjectName("SignUpReg");
        SignUpReg->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(SignUpReg);


        verticalLayout_4->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190)"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        usernameTB = new QLineEdit(centralwidget);
        usernameTB->setObjectName("usernameTB");
        usernameTB->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameTB);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190)"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        PasswordTB = new QLineEdit(centralwidget);
        PasswordTB->setObjectName("PasswordTB");
        PasswordTB->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, PasswordTB);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190)"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        RepPassTB = new QLineEdit(centralwidget);
        RepPassTB->setObjectName("RepPassTB");
        RepPassTB->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, RepPassTB);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190)"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        AgeTB = new QLineEdit(centralwidget);
        AgeTB->setObjectName("AgeTB");
        AgeTB->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, AgeTB);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190)"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        EmailTB = new QLineEdit(centralwidget);
        EmailTB->setObjectName("EmailTB");
        EmailTB->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, EmailTB);


        verticalLayout_4->addLayout(formLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 5);
        verticalLayout_4->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 6);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        LeaveBack = new QPushButton(centralwidget);
        LeaveBack->setObjectName("LeaveBack");
        LeaveBack->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        horizontalLayout->addWidget(LeaveBack);

        LogInBut = new QPushButton(centralwidget);
        LogInBut->setObjectName("LogInBut");
        LogInBut->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        horizontalLayout->addWidget(LogInBut);


        verticalLayout_5->addLayout(horizontalLayout);

        SignUp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignUp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 933, 24));
        SignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName("statusbar");
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        SignUpReg->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#e4d7be;\">Please enter your details</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:18pt;\">Username</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:18pt;\">Password</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:18pt;\">Repeate your password</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:18pt;\">Age</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:18pt;\">Email</span></p></body></html>", nullptr));
        LeaveBack->setText(QCoreApplication::translate("SignUp", "Leave", nullptr));
        LogInBut->setText(QCoreApplication::translate("SignUp", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
