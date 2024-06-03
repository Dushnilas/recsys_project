/********************************************************************************
** Form generated from reading UI file 'persuser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSUSER_H
#define UI_PERSUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersUser
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *FilmsHButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QRadioButton *radioButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QPushButton *pushButton_10;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PersUser)
    {
        if (PersUser->objectName().isEmpty())
            PersUser->setObjectName("PersUser");
        PersUser->resize(903, 637);
        PersUser->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(PersUser);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout->addWidget(label);

        FilmsHButton = new QPushButton(frame);
        FilmsHButton->setObjectName("FilmsHButton");
        FilmsHButton->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout->addWidget(FilmsHButton);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("color:rgb(229, 217, 190);"));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout->addWidget(pushButton_5);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 3);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 1);

        horizontalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(frame);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(255);
        sizePolicy.setVerticalStretch(255);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(255, 255));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);\n"
"background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_3->addWidget(label_4);


        gridLayout_2->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190);"));

        gridLayout->addWidget(radioButton, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(lineEdit_3, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_10, 2, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
""));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(150);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(150, 200));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(150, 200));

        horizontalLayout_4->addWidget(pushButton_8);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_5->addWidget(widget);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout_4->addWidget(pushButton_9);


        gridLayout_2->addLayout(verticalLayout_4, 2, 1, 1, 1);

        PersUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PersUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 903, 24));
        PersUser->setMenuBar(menubar);
        statusbar = new QStatusBar(PersUser);
        statusbar->setObjectName("statusbar");
        PersUser->setStatusBar(statusbar);

        retranslateUi(PersUser);

        QMetaObject::connectSlotsByName(PersUser);
    } // setupUi

    void retranslateUi(QMainWindow *PersUser)
    {
        PersUser->setWindowTitle(QCoreApplication::translate("PersUser", "MainWindow", nullptr));
        label->setText(QString());
        FilmsHButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("PersUser", "Search", nullptr));
        pushButton_5->setText(QString());
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("PersUser", "Email", nullptr));
        radioButton->setText(QCoreApplication::translate("PersUser", "Kids mode", nullptr));
        label_2->setText(QCoreApplication::translate("PersUser", "Username", nullptr));
        pushButton_10->setText(QString());
        label_5->setStyleSheet(QCoreApplication::translate("PersUser", "background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190);", nullptr));
        label_5->setText(QCoreApplication::translate("PersUser", "Password", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PersUser", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PersUser", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PersUser", "Change user details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersUser: public Ui_PersUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSUSER_H
