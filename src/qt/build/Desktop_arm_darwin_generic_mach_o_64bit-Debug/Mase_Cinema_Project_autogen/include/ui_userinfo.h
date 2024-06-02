/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
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

class Ui_UserInfo
{
public:
    QWidget *PageLO;
    QGridLayout *gridLayout_4;
    QHBoxLayout *headerLO;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *HomeBut;
    QPushButton *FilmsBut;
    QPushButton *TVShowsBut;
    QPushButton *KidsBut;
    QLineEdit *SearchEL;
    QPushButton *SerachBut;
    QPushButton *UserBut;
    QVBoxLayout *genSelLO;
    QLabel *label_23;
    QCheckBox *checkBox_20;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_25;
    QCheckBox *checkBox_26;
    QCheckBox *checkBox_24;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_19;
    QCheckBox *checkBox_18;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QPushButton *pushButton_25;
    QLabel *FilmLab;
    QLabel *Top100Lab;
    QGridLayout *top100lo;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *TopComLab;
    QGridLayout *TopComLO;
    QPushButton *pushButton_12;
    QLabel *label_8;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLabel *label_9;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_17;
    QLabel *label_13;
    QLabel *TopFantLab;
    QGridLayout *TopFLO;
    QPushButton *pushButton_18;
    QLabel *label_15;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QLabel *label_16;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_23;
    QLabel *label_20;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName("UserInfo");
        UserInfo->resize(962, 728);
        UserInfo->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        PageLO = new QWidget(UserInfo);
        PageLO->setObjectName("PageLO");
        gridLayout_4 = new QGridLayout(PageLO);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName("gridLayout_4");
        headerLO = new QHBoxLayout();
        headerLO->setObjectName("headerLO");
        widget = new QWidget(PageLO);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 74));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(1, -1, -1, -1);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(150, 0));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2.png);"));

        horizontalLayout_2->addWidget(label);

        HomeBut = new QPushButton(widget);
        HomeBut->setObjectName("HomeBut");
        HomeBut->setMinimumSize(QSize(0, 50));
        HomeBut->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout_2->addWidget(HomeBut);

        FilmsBut = new QPushButton(widget);
        FilmsBut->setObjectName("FilmsBut");
        FilmsBut->setMinimumSize(QSize(0, 50));
        FilmsBut->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout_2->addWidget(FilmsBut);

        TVShowsBut = new QPushButton(widget);
        TVShowsBut->setObjectName("TVShowsBut");
        TVShowsBut->setMinimumSize(QSize(0, 50));
        TVShowsBut->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout_2->addWidget(TVShowsBut);

        KidsBut = new QPushButton(widget);
        KidsBut->setObjectName("KidsBut");
        KidsBut->setMinimumSize(QSize(0, 50));
        KidsBut->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout_2->addWidget(KidsBut);

        SearchEL = new QLineEdit(widget);
        SearchEL->setObjectName("SearchEL");

        horizontalLayout_2->addWidget(SearchEL);

        SerachBut = new QPushButton(widget);
        SerachBut->setObjectName("SerachBut");

        horizontalLayout_2->addWidget(SerachBut);

        UserBut = new QPushButton(widget);
        UserBut->setObjectName("UserBut");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserBut->sizePolicy().hasHeightForWidth());
        UserBut->setSizePolicy(sizePolicy);
        UserBut->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout_2->addWidget(UserBut);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 1);
        horizontalLayout_2->setStretch(7, 1);

        headerLO->addWidget(widget);


        gridLayout_4->addLayout(headerLO, 0, 0, 1, 2);

        genSelLO = new QVBoxLayout();
        genSelLO->setObjectName("genSelLO");
        label_23 = new QLabel(PageLO);
        label_23->setObjectName("label_23");

        genSelLO->addWidget(label_23);

        checkBox_20 = new QCheckBox(PageLO);
        checkBox_20->setObjectName("checkBox_20");

        genSelLO->addWidget(checkBox_20);

        checkBox_21 = new QCheckBox(PageLO);
        checkBox_21->setObjectName("checkBox_21");

        genSelLO->addWidget(checkBox_21);

        checkBox_22 = new QCheckBox(PageLO);
        checkBox_22->setObjectName("checkBox_22");

        genSelLO->addWidget(checkBox_22);

        checkBox_23 = new QCheckBox(PageLO);
        checkBox_23->setObjectName("checkBox_23");

        genSelLO->addWidget(checkBox_23);

        checkBox_25 = new QCheckBox(PageLO);
        checkBox_25->setObjectName("checkBox_25");

        genSelLO->addWidget(checkBox_25);

        checkBox_26 = new QCheckBox(PageLO);
        checkBox_26->setObjectName("checkBox_26");

        genSelLO->addWidget(checkBox_26);

        checkBox_24 = new QCheckBox(PageLO);
        checkBox_24->setObjectName("checkBox_24");

        genSelLO->addWidget(checkBox_24);

        checkBox_2 = new QCheckBox(PageLO);
        checkBox_2->setObjectName("checkBox_2");

        genSelLO->addWidget(checkBox_2);

        checkBox_19 = new QCheckBox(PageLO);
        checkBox_19->setObjectName("checkBox_19");

        genSelLO->addWidget(checkBox_19);

        checkBox_18 = new QCheckBox(PageLO);
        checkBox_18->setObjectName("checkBox_18");

        genSelLO->addWidget(checkBox_18);

        checkBox_16 = new QCheckBox(PageLO);
        checkBox_16->setObjectName("checkBox_16");

        genSelLO->addWidget(checkBox_16);

        checkBox_17 = new QCheckBox(PageLO);
        checkBox_17->setObjectName("checkBox_17");

        genSelLO->addWidget(checkBox_17);

        checkBox_14 = new QCheckBox(PageLO);
        checkBox_14->setObjectName("checkBox_14");

        genSelLO->addWidget(checkBox_14);

        checkBox_13 = new QCheckBox(PageLO);
        checkBox_13->setObjectName("checkBox_13");

        genSelLO->addWidget(checkBox_13);

        checkBox_11 = new QCheckBox(PageLO);
        checkBox_11->setObjectName("checkBox_11");

        genSelLO->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(PageLO);
        checkBox_12->setObjectName("checkBox_12");

        genSelLO->addWidget(checkBox_12);

        checkBox_5 = new QCheckBox(PageLO);
        checkBox_5->setObjectName("checkBox_5");

        genSelLO->addWidget(checkBox_5);

        checkBox_7 = new QCheckBox(PageLO);
        checkBox_7->setObjectName("checkBox_7");

        genSelLO->addWidget(checkBox_7);

        checkBox_10 = new QCheckBox(PageLO);
        checkBox_10->setObjectName("checkBox_10");

        genSelLO->addWidget(checkBox_10);

        checkBox_6 = new QCheckBox(PageLO);
        checkBox_6->setObjectName("checkBox_6");

        genSelLO->addWidget(checkBox_6);

        checkBox_4 = new QCheckBox(PageLO);
        checkBox_4->setObjectName("checkBox_4");

        genSelLO->addWidget(checkBox_4);

        checkBox_8 = new QCheckBox(PageLO);
        checkBox_8->setObjectName("checkBox_8");

        genSelLO->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(PageLO);
        checkBox_9->setObjectName("checkBox_9");

        genSelLO->addWidget(checkBox_9);

        checkBox_3 = new QCheckBox(PageLO);
        checkBox_3->setObjectName("checkBox_3");

        genSelLO->addWidget(checkBox_3);

        checkBox = new QCheckBox(PageLO);
        checkBox->setObjectName("checkBox");

        genSelLO->addWidget(checkBox);

        pushButton_25 = new QPushButton(PageLO);
        pushButton_25->setObjectName("pushButton_25");

        genSelLO->addWidget(pushButton_25);

        genSelLO->setStretch(0, 1);
        genSelLO->setStretch(1, 3);
        genSelLO->setStretch(2, 3);
        genSelLO->setStretch(3, 3);
        genSelLO->setStretch(4, 3);
        genSelLO->setStretch(5, 3);
        genSelLO->setStretch(6, 3);
        genSelLO->setStretch(7, 3);
        genSelLO->setStretch(8, 3);
        genSelLO->setStretch(9, 3);
        genSelLO->setStretch(10, 3);
        genSelLO->setStretch(11, 3);
        genSelLO->setStretch(12, 3);
        genSelLO->setStretch(13, 3);
        genSelLO->setStretch(14, 3);
        genSelLO->setStretch(15, 3);
        genSelLO->setStretch(16, 3);
        genSelLO->setStretch(17, 3);
        genSelLO->setStretch(18, 3);
        genSelLO->setStretch(19, 3);
        genSelLO->setStretch(20, 3);
        genSelLO->setStretch(21, 3);
        genSelLO->setStretch(22, 3);
        genSelLO->setStretch(23, 3);
        genSelLO->setStretch(24, 3);
        genSelLO->setStretch(25, 3);
        genSelLO->setStretch(26, 3);

        gridLayout_4->addLayout(genSelLO, 1, 0, 7, 1);

        FilmLab = new QLabel(PageLO);
        FilmLab->setObjectName("FilmLab");

        gridLayout_4->addWidget(FilmLab, 1, 1, 1, 1);

        Top100Lab = new QLabel(PageLO);
        Top100Lab->setObjectName("Top100Lab");

        gridLayout_4->addWidget(Top100Lab, 2, 1, 1, 1);

        top100lo = new QGridLayout();
        top100lo->setObjectName("top100lo");
        pushButton_8 = new QPushButton(PageLO);
        pushButton_8->setObjectName("pushButton_8");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_8, 0, 3, 1, 1);

        label_2 = new QLabel(PageLO);
        label_2->setObjectName("label_2");

        top100lo->addWidget(label_2, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(PageLO);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_7, 0, 2, 1, 1);

        label_6 = new QLabel(PageLO);
        label_6->setObjectName("label_6");

        top100lo->addWidget(label_6, 1, 5, 1, 1);

        pushButton_11 = new QPushButton(PageLO);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(PageLO);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_6, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(PageLO);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_10, 0, 5, 1, 1);

        pushButton_9 = new QPushButton(PageLO);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(20, 50));

        top100lo->addWidget(pushButton_9, 0, 4, 1, 1);

        label_3 = new QLabel(PageLO);
        label_3->setObjectName("label_3");

        top100lo->addWidget(label_3, 1, 2, 1, 1);

        label_7 = new QLabel(PageLO);
        label_7->setObjectName("label_7");

        top100lo->addWidget(label_7, 1, 1, 1, 1);

        label_5 = new QLabel(PageLO);
        label_5->setObjectName("label_5");

        top100lo->addWidget(label_5, 1, 4, 1, 1);

        label_4 = new QLabel(PageLO);
        label_4->setObjectName("label_4");

        top100lo->addWidget(label_4, 1, 3, 1, 1);


        gridLayout_4->addLayout(top100lo, 3, 1, 1, 1);

        TopComLab = new QLabel(PageLO);
        TopComLab->setObjectName("TopComLab");

        gridLayout_4->addWidget(TopComLab, 4, 1, 1, 1);

        TopComLO = new QGridLayout();
        TopComLO->setObjectName("TopComLO");
        pushButton_12 = new QPushButton(PageLO);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_12, 0, 3, 1, 1);

        label_8 = new QLabel(PageLO);
        label_8->setObjectName("label_8");

        TopComLO->addWidget(label_8, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(PageLO);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_13, 0, 2, 1, 1);

        pushButton_14 = new QPushButton(PageLO);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_14, 0, 0, 1, 1);

        label_9 = new QLabel(PageLO);
        label_9->setObjectName("label_9");

        TopComLO->addWidget(label_9, 1, 5, 1, 1);

        pushButton_15 = new QPushButton(PageLO);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_15, 0, 5, 1, 1);

        pushButton_16 = new QPushButton(PageLO);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_16, 0, 4, 1, 1);

        label_10 = new QLabel(PageLO);
        label_10->setObjectName("label_10");

        TopComLO->addWidget(label_10, 1, 2, 1, 1);

        label_11 = new QLabel(PageLO);
        label_11->setObjectName("label_11");

        TopComLO->addWidget(label_11, 1, 4, 1, 1);

        label_12 = new QLabel(PageLO);
        label_12->setObjectName("label_12");

        TopComLO->addWidget(label_12, 1, 3, 1, 1);

        pushButton_17 = new QPushButton(PageLO);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setMinimumSize(QSize(20, 50));

        TopComLO->addWidget(pushButton_17, 0, 1, 1, 1);

        label_13 = new QLabel(PageLO);
        label_13->setObjectName("label_13");

        TopComLO->addWidget(label_13, 1, 1, 1, 1);


        gridLayout_4->addLayout(TopComLO, 5, 1, 1, 1);

        TopFantLab = new QLabel(PageLO);
        TopFantLab->setObjectName("TopFantLab");

        gridLayout_4->addWidget(TopFantLab, 6, 1, 1, 1);

        TopFLO = new QGridLayout();
        TopFLO->setObjectName("TopFLO");
        pushButton_18 = new QPushButton(PageLO);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_18, 0, 3, 1, 1);

        label_15 = new QLabel(PageLO);
        label_15->setObjectName("label_15");

        TopFLO->addWidget(label_15, 1, 0, 1, 1);

        pushButton_19 = new QPushButton(PageLO);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_19, 0, 2, 1, 1);

        pushButton_20 = new QPushButton(PageLO);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_20, 0, 0, 1, 1);

        label_16 = new QLabel(PageLO);
        label_16->setObjectName("label_16");

        TopFLO->addWidget(label_16, 1, 5, 1, 1);

        pushButton_21 = new QPushButton(PageLO);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_21, 0, 5, 1, 1);

        pushButton_22 = new QPushButton(PageLO);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_22, 0, 4, 1, 1);

        label_17 = new QLabel(PageLO);
        label_17->setObjectName("label_17");

        TopFLO->addWidget(label_17, 1, 2, 1, 1);

        label_18 = new QLabel(PageLO);
        label_18->setObjectName("label_18");

        TopFLO->addWidget(label_18, 1, 4, 1, 1);

        label_19 = new QLabel(PageLO);
        label_19->setObjectName("label_19");

        TopFLO->addWidget(label_19, 1, 3, 1, 1);

        pushButton_23 = new QPushButton(PageLO);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setMinimumSize(QSize(20, 50));

        TopFLO->addWidget(pushButton_23, 0, 1, 1, 1);

        label_20 = new QLabel(PageLO);
        label_20->setObjectName("label_20");

        TopFLO->addWidget(label_20, 1, 1, 1, 1);


        gridLayout_4->addLayout(TopFLO, 7, 1, 1, 1);

        gridLayout_4->setRowStretch(0, 3);
        gridLayout_4->setRowStretch(1, 1);
        gridLayout_4->setRowStretch(2, 1);
        gridLayout_4->setRowStretch(3, 8);
        gridLayout_4->setRowStretch(4, 1);
        gridLayout_4->setRowStretch(5, 8);
        gridLayout_4->setRowStretch(6, 1);
        gridLayout_4->setRowStretch(7, 8);
        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 4);
        gridLayout_4->setColumnMinimumWidth(0, 2);
        gridLayout_4->setColumnMinimumWidth(1, 5);
        UserInfo->setCentralWidget(PageLO);
        menubar = new QMenuBar(UserInfo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 962, 24));
        UserInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(UserInfo);
        statusbar->setObjectName("statusbar");
        UserInfo->setStatusBar(statusbar);

        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QMainWindow *UserInfo)
    {
        UserInfo->setWindowTitle(QCoreApplication::translate("UserInfo", "MainWindow", nullptr));
        label->setText(QString());
        HomeBut->setText(QString());
        FilmsBut->setText(QString());
        TVShowsBut->setText(QString());
        KidsBut->setText(QString());
        SerachBut->setText(QCoreApplication::translate("UserInfo", "Serach", nullptr));
        UserBut->setText(QString());
        label_23->setText(QCoreApplication::translate("UserInfo", "Select ganre", nullptr));
        checkBox_20->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_21->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_22->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_23->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_25->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_26->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_24->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_19->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_18->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_16->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_17->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_14->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_13->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_11->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_12->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_5->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_7->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_10->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_6->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_4->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_8->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_9->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox_3->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        checkBox->setText(QCoreApplication::translate("UserInfo", "CheckBox", nullptr));
        pushButton_25->setText(QCoreApplication::translate("UserInfo", "Serch", nullptr));
#if QT_CONFIG(tooltip)
        FilmLab->setToolTip(QCoreApplication::translate("UserInfo", "<html><head/><body><p><span style=\" font-size:24pt; color:#e4d7be;\">Films</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        FilmLab->setText(QCoreApplication::translate("UserInfo", "<html><head/><body><p><span style=\" font-size:24pt; color:#e4d7be;\">Films</span></p></body></html>", nullptr));
        Top100Lab->setText(QCoreApplication::translate("UserInfo", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Top 100</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_7->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_6->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_11->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        TopComLab->setText(QCoreApplication::translate("UserInfo", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Top Comedies</span></p></body></html>", nullptr));
        pushButton_12->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_8->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_13->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_9->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_15->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_10->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_17->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_13->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        TopFantLab->setText(QCoreApplication::translate("UserInfo", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Top Fantasy</span></p></body></html>", nullptr));
        pushButton_18->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_15->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_19->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_16->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_21->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        pushButton_22->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_17->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
        pushButton_23->setText(QCoreApplication::translate("UserInfo", "PushButton", nullptr));
        label_20->setText(QCoreApplication::translate("UserInfo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
