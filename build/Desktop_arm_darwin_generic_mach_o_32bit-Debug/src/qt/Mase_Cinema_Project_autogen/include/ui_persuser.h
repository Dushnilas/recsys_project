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
    QLabel *label;
    QPushButton *HomeBPU;
    QPushButton *FilmsBPU;
    QPushButton *TVShowsPU;
    QPushButton *KidsBPU;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *UserPU;
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
    QPushButton *LikedBut;
    QPushButton *CollectionsBut;
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout_3->addWidget(label);

        HomeBPU = new QPushButton(frame);
        HomeBPU->setObjectName("HomeBPU");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomeBPU->sizePolicy().hasHeightForWidth());
        HomeBPU->setSizePolicy(sizePolicy);
        HomeBPU->setMinimumSize(QSize(40, 40));
        HomeBPU->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout_3->addWidget(HomeBPU);

        FilmsBPU = new QPushButton(frame);
        FilmsBPU->setObjectName("FilmsBPU");
        sizePolicy.setHeightForWidth(FilmsBPU->sizePolicy().hasHeightForWidth());
        FilmsBPU->setSizePolicy(sizePolicy);
        FilmsBPU->setMinimumSize(QSize(40, 40));
        FilmsBPU->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout_3->addWidget(FilmsBPU);

        TVShowsPU = new QPushButton(frame);
        TVShowsPU->setObjectName("TVShowsPU");
        sizePolicy.setHeightForWidth(TVShowsPU->sizePolicy().hasHeightForWidth());
        TVShowsPU->setSizePolicy(sizePolicy);
        TVShowsPU->setMinimumSize(QSize(40, 40));
        TVShowsPU->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout_3->addWidget(TVShowsPU);

        KidsBPU = new QPushButton(frame);
        KidsBPU->setObjectName("KidsBPU");
        KidsBPU->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout_3->addWidget(KidsBPU);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);

        UserPU = new QPushButton(frame);
        UserPU->setObjectName("UserPU");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(60);
        sizePolicy1.setVerticalStretch(60);
        sizePolicy1.setHeightForWidth(UserPU->sizePolicy().hasHeightForWidth());
        UserPU->setSizePolicy(sizePolicy1);
        UserPU->setMinimumSize(QSize(40, 40));
        UserPU->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout_3->addWidget(UserPU);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(4, 1);
        horizontalLayout_3->setStretch(5, 3);
        horizontalLayout_3->setStretch(6, 1);
        horizontalLayout_3->setStretch(7, 1);

        horizontalLayout_2->addWidget(frame);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(255);
        sizePolicy2.setVerticalStretch(255);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
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
        LikedBut = new QPushButton(widget);
        LikedBut->setObjectName("LikedBut");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(150);
        sizePolicy3.setVerticalStretch(200);
        sizePolicy3.setHeightForWidth(LikedBut->sizePolicy().hasHeightForWidth());
        LikedBut->setSizePolicy(sizePolicy3);
        LikedBut->setMinimumSize(QSize(150, 200));

        horizontalLayout_4->addWidget(LikedBut);

        CollectionsBut = new QPushButton(widget);
        CollectionsBut->setObjectName("CollectionsBut");
        sizePolicy3.setHeightForWidth(CollectionsBut->sizePolicy().hasHeightForWidth());
        CollectionsBut->setSizePolicy(sizePolicy3);
        CollectionsBut->setMinimumSize(QSize(150, 200));

        horizontalLayout_4->addWidget(CollectionsBut);


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
        HomeBPU->setText(QString());
        FilmsBPU->setText(QString());
        TVShowsPU->setText(QString());
        KidsBPU->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("PersUser", "Search", nullptr));
        UserPU->setText(QString());
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("PersUser", "Email", nullptr));
        radioButton->setText(QCoreApplication::translate("PersUser", "Kids mode", nullptr));
        label_2->setText(QCoreApplication::translate("PersUser", "Username", nullptr));
        pushButton_10->setText(QString());
        label_5->setStyleSheet(QCoreApplication::translate("PersUser", "background-color: rgba(255, 255, 255, 0);\n"
"color:rgb(229, 217, 190);", nullptr));
        label_5->setText(QCoreApplication::translate("PersUser", "Password", nullptr));
        LikedBut->setText(QCoreApplication::translate("PersUser", "Liked Films", nullptr));
        CollectionsBut->setText(QCoreApplication::translate("PersUser", "Collections", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PersUser", "Change user details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersUser: public Ui_PersUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSUSER_H
