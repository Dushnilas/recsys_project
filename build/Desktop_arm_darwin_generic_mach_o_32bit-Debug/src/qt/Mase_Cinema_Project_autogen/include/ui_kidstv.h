/********************************************************************************
** Form generated from reading UI file 'kidstv.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIDSTV_H
#define UI_KIDSTV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KidsTV
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *headerLO;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *HomeButKid;
    QPushButton *FilmsButKid;
    QPushButton *TVShowsButKid;
    QPushButton *KidsButKid;
    QLineEdit *SearchELKid;
    QPushButton *SerachButKid;
    QPushButton *UserButKid;
    QHBoxLayout *FilmLO;
    QLabel *FilmLab;
    QSpacerItem *horizontalSpacer;
    QPushButton *SearchByGKid;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QLabel *Top100Lab;
    QGridLayout *top100LO;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QLabel *label_5;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QLabel *label_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *TopComLab;
    QGridLayout *TopComLO;
    QPushButton *pushButton_17;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_11;
    QLabel *label_13;
    QPushButton *pushButton_14;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_16;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_13;
    QLabel *label_10;
    QPushButton *pushButton_15;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_11;
    QLabel *TopFantLab;
    QGridLayout *TopFLO;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_22;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_18;
    QPushButton *pushButton_20;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_23;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButton_21;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KidsTV)
    {
        if (KidsTV->objectName().isEmpty())
            KidsTV->setObjectName("KidsTV");
        KidsTV->resize(944, 763);
        KidsTV->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(KidsTV);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        headerLO = new QHBoxLayout();
        headerLO->setObjectName("headerLO");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 74));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(1, -1, -1, -1);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(150, 0));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout_2->addWidget(label);

        HomeButKid = new QPushButton(widget);
        HomeButKid->setObjectName("HomeButKid");
        HomeButKid->setMinimumSize(QSize(0, 50));
        HomeButKid->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout_2->addWidget(HomeButKid);

        FilmsButKid = new QPushButton(widget);
        FilmsButKid->setObjectName("FilmsButKid");
        FilmsButKid->setMinimumSize(QSize(0, 50));
        FilmsButKid->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout_2->addWidget(FilmsButKid);

        TVShowsButKid = new QPushButton(widget);
        TVShowsButKid->setObjectName("TVShowsButKid");
        TVShowsButKid->setMinimumSize(QSize(0, 50));
        TVShowsButKid->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout_2->addWidget(TVShowsButKid);

        KidsButKid = new QPushButton(widget);
        KidsButKid->setObjectName("KidsButKid");
        KidsButKid->setMinimumSize(QSize(0, 50));
        KidsButKid->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout_2->addWidget(KidsButKid);

        SearchELKid = new QLineEdit(widget);
        SearchELKid->setObjectName("SearchELKid");

        horizontalLayout_2->addWidget(SearchELKid);

        SerachButKid = new QPushButton(widget);
        SerachButKid->setObjectName("SerachButKid");

        horizontalLayout_2->addWidget(SerachButKid);

        UserButKid = new QPushButton(widget);
        UserButKid->setObjectName("UserButKid");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserButKid->sizePolicy().hasHeightForWidth());
        UserButKid->setSizePolicy(sizePolicy);
        UserButKid->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout_2->addWidget(UserButKid);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 1);
        horizontalLayout_2->setStretch(7, 1);

        headerLO->addWidget(widget);


        gridLayout->addLayout(headerLO, 0, 0, 1, 1);

        FilmLO = new QHBoxLayout();
        FilmLO->setObjectName("FilmLO");
        FilmLab = new QLabel(centralwidget);
        FilmLab->setObjectName("FilmLab");
        FilmLab->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(228, 215, 190);\n"
""));

        FilmLO->addWidget(FilmLab);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        FilmLO->addItem(horizontalSpacer);

        SearchByGKid = new QPushButton(centralwidget);
        SearchByGKid->setObjectName("SearchByGKid");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SearchByGKid->sizePolicy().hasHeightForWidth());
        SearchByGKid->setSizePolicy(sizePolicy1);
        SearchByGKid->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background-color: rgb(228, 215, 190);"));

        FilmLO->addWidget(SearchByGKid);

        FilmLO->setStretch(0, 2);
        FilmLO->setStretch(1, 1);
        FilmLO->setStretch(2, 9);

        gridLayout->addLayout(FilmLO, 1, 0, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1026, 818));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        Top100Lab = new QLabel(scrollAreaWidgetContents_2);
        Top100Lab->setObjectName("Top100Lab");
        Top100Lab->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(Top100Lab);

        top100LO = new QGridLayout();
#ifndef Q_OS_MAC
        top100LO->setSpacing(-1);
#endif
        top100LO->setObjectName("top100LO");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        top100LO->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_8->setObjectName("pushButton_8");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(150);
        sizePolicy2.setVerticalStretch(200);
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setMinimumSize(QSize(150, 200));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_8, 0, 6, 1, 1);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);
        pushButton_11->setMinimumSize(QSize(150, 200));
        pushButton_11->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_11, 0, 2, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_6, 1, 10, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_3, 1, 4, 1, 1);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setMinimumSize(QSize(150, 200));
        pushButton_7->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_7, 0, 4, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_5, 1, 8, 1, 1);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setMinimumSize(QSize(150, 200));
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_9, 0, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        top100LO->addItem(horizontalSpacer_5, 0, 7, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        top100LO->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setMinimumSize(QSize(150, 200));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_6, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setMinimumSize(QSize(150, 200));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        top100LO->addWidget(pushButton_10, 0, 10, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_4, 1, 6, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        top100LO->addWidget(label_7, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        top100LO->addItem(horizontalSpacer_6, 0, 9, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        top100LO->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        top100LO->setColumnStretch(0, 3);
        top100LO->setColumnStretch(1, 1);
        top100LO->setColumnStretch(2, 3);
        top100LO->setColumnStretch(3, 1);
        top100LO->setColumnStretch(4, 3);
        top100LO->setColumnStretch(5, 1);
        top100LO->setColumnStretch(6, 3);
        top100LO->setColumnStretch(7, 1);
        top100LO->setColumnStretch(8, 3);
        top100LO->setColumnStretch(9, 1);
        top100LO->setColumnStretch(10, 3);

        verticalLayout->addLayout(top100LO);

        TopComLab = new QLabel(scrollAreaWidgetContents_2);
        TopComLab->setObjectName("TopComLab");
        TopComLab->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(TopComLab);

        TopComLO = new QGridLayout();
        TopComLO->setObjectName("TopComLO");
        pushButton_17 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy2.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy2);
        pushButton_17->setMinimumSize(QSize(150, 200));
        pushButton_17->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_17, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopComLO->addItem(horizontalSpacer_9, 0, 5, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_11, 1, 8, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_13, 1, 2, 1, 1);

        pushButton_14 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);
        pushButton_14->setMinimumSize(QSize(150, 200));
        pushButton_14->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_14, 0, 0, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_8, 1, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopComLO->addItem(horizontalSpacer_10, 0, 7, 1, 1);

        pushButton_16 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy2.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy2);
        pushButton_16->setMinimumSize(QSize(150, 200));
        pushButton_16->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_16, 0, 8, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_9, 1, 10, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopComLO->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);
        pushButton_12->setMinimumSize(QSize(150, 200));
        pushButton_12->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_12, 0, 6, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopComLO->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        pushButton_13 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy2.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy2);
        pushButton_13->setMinimumSize(QSize(150, 200));
        pushButton_13->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_13, 0, 4, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_10, 1, 4, 1, 1);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);
        pushButton_15->setMinimumSize(QSize(150, 200));
        pushButton_15->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopComLO->addWidget(pushButton_15, 0, 10, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopComLO->addWidget(label_12, 1, 6, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopComLO->addItem(horizontalSpacer_11, 0, 9, 1, 1);

        TopComLO->setColumnStretch(0, 3);
        TopComLO->setColumnStretch(1, 1);
        TopComLO->setColumnStretch(2, 3);
        TopComLO->setColumnStretch(3, 1);
        TopComLO->setColumnStretch(4, 3);
        TopComLO->setColumnStretch(5, 1);
        TopComLO->setColumnStretch(6, 3);
        TopComLO->setColumnStretch(7, 1);
        TopComLO->setColumnStretch(8, 3);
        TopComLO->setColumnStretch(9, 1);
        TopComLO->setColumnStretch(10, 3);

        verticalLayout->addLayout(TopComLO);

        TopFantLab = new QLabel(scrollAreaWidgetContents_2);
        TopFantLab->setObjectName("TopFantLab");
        TopFantLab->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout->addWidget(TopFantLab);

        TopFLO = new QGridLayout();
        TopFLO->setObjectName("TopFLO");
        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_17, 1, 4, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopFLO->addItem(horizontalSpacer_15, 0, 7, 1, 1);

        pushButton_22 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy2.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy2);
        pushButton_22->setMinimumSize(QSize(150, 200));
        pushButton_22->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_22, 0, 8, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopFLO->addItem(horizontalSpacer_16, 0, 9, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents_2);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_18, 1, 8, 1, 1);

        pushButton_20 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy2.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy2);
        pushButton_20->setMinimumSize(QSize(150, 200));
        pushButton_20->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_20, 0, 0, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_20, 1, 2, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_19, 1, 6, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_16, 1, 10, 1, 1);

        pushButton_18 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy2.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy2);
        pushButton_18->setMinimumSize(QSize(150, 200));
        pushButton_18->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_18, 0, 6, 1, 1);

        pushButton_19 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy2.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy2);
        pushButton_19->setMinimumSize(QSize(150, 200));
        pushButton_19->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_19, 0, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopFLO->addItem(horizontalSpacer_13, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopFLO->addItem(horizontalSpacer_12, 0, 1, 1, 1);

        pushButton_23 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy2.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy2);
        pushButton_23->setMinimumSize(QSize(150, 200));
        pushButton_23->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_23, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        TopFLO->addItem(horizontalSpacer_14, 0, 5, 1, 1);

        pushButton_21 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy2.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy2);
        pushButton_21->setMinimumSize(QSize(150, 200));
        pushButton_21->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        TopFLO->addWidget(pushButton_21, 0, 10, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        TopFLO->addWidget(label_15, 1, 0, 1, 1);

        TopFLO->setColumnStretch(0, 3);
        TopFLO->setColumnStretch(1, 1);
        TopFLO->setColumnStretch(2, 3);
        TopFLO->setColumnStretch(3, 1);
        TopFLO->setColumnStretch(4, 3);
        TopFLO->setColumnStretch(5, 1);
        TopFLO->setColumnStretch(6, 3);
        TopFLO->setColumnStretch(7, 1);
        TopFLO->setColumnStretch(8, 3);
        TopFLO->setColumnStretch(9, 1);
        TopFLO->setColumnStretch(10, 3);

        verticalLayout->addLayout(TopFLO);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 2, 0, 1, 1);

        KidsTV->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KidsTV);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 944, 24));
        KidsTV->setMenuBar(menubar);
        statusbar = new QStatusBar(KidsTV);
        statusbar->setObjectName("statusbar");
        KidsTV->setStatusBar(statusbar);

        retranslateUi(KidsTV);

        QMetaObject::connectSlotsByName(KidsTV);
    } // setupUi

    void retranslateUi(QMainWindow *KidsTV)
    {
        KidsTV->setWindowTitle(QCoreApplication::translate("KidsTV", "MainWindow", nullptr));
        label->setText(QString());
        HomeButKid->setText(QString());
        FilmsButKid->setText(QString());
        TVShowsButKid->setText(QString());
        KidsButKid->setText(QString());
        SerachButKid->setText(QCoreApplication::translate("KidsTV", "Serach", nullptr));
        UserButKid->setText(QString());
#if QT_CONFIG(tooltip)
        FilmLab->setToolTip(QCoreApplication::translate("KidsTV", "<html><head/><body><p><span style=\" font-size:24pt; color:#e4d7be;\">Films</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        FilmLab->setText(QCoreApplication::translate("KidsTV", "<html><head/><body><p><span style=\" font-size:36pt;\">Kids</span></p></body></html>", nullptr));
        SearchByGKid->setText(QCoreApplication::translate("KidsTV", "Search by genres", nullptr));
        Top100Lab->setText(QCoreApplication::translate("KidsTV", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Top 100</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_6->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_7->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_9->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_6->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        TopComLab->setText(QCoreApplication::translate("KidsTV", "<html><head/><body><p><span style=\" font-size:18pt;\">Cartoons</span></p></body></html>", nullptr));
        pushButton_17->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_11->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_14->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_8->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_16->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_9->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_12->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_10->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_15->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_12->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        TopFantLab->setText(QCoreApplication::translate("KidsTV", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Top Fantasy</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_22->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_18->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_20->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_20->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
        pushButton_18->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_19->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_23->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        pushButton_21->setText(QCoreApplication::translate("KidsTV", "PushButton", nullptr));
        label_15->setText(QCoreApplication::translate("KidsTV", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KidsTV: public Ui_KidsTV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIDSTV_H
