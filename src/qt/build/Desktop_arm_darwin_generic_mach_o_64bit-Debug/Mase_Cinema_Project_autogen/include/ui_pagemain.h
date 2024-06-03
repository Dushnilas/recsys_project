/********************************************************************************
** Form generated from reading UI file 'pagemain.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMAIN_H
#define UI_PAGEMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageMain
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QPushButton *HomeB1;
    QPushButton *FilmsB1;
    QPushButton *TVShowsB1;
    QPushButton *KidsB1;
    QLineEdit *lineEdit;
    QPushButton *SearchB1;
    QPushButton *UserB1;
    QTabWidget *tabWidget;
    QWidget *FilmsTab;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_45;
    QGridLayout *gridLayout_8;
    QLabel *label_40;
    QPushButton *pushButton_39;
    QPushButton *pushButton_40;
    QLabel *label_41;
    QPushButton *pushButton_41;
    QLabel *label_42;
    QPushButton *pushButton_42;
    QLabel *label_43;
    QPushButton *pushButton_43;
    QLabel *label_44;
    QGridLayout *gridLayout_2;
    QLabel *label_36;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QLabel *label_35;
    QPushButton *pushButton_38;
    QLabel *label_37;
    QPushButton *pushButton_34;
    QLabel *label_38;
    QPushButton *pushButton_37;
    QLabel *label_39;
    QVBoxLayout *verticalLayout_13;
    QPushButton *FilmsButton1;
    QWidget *ShowTab;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_29;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QPushButton *pushButton_26;
    QPushButton *pushButton_25;
    QPushButton *pushButton_24;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_28;
    QPushButton *pushButton_27;
    QPushButton *pushButton_30;
    QPushButton *pushButton_29;
    QPushButton *pushButton_20;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QVBoxLayout *verticalLayout_6;
    QPushButton *GoTpTVShowsB;
    QWidget *KidsTab;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_23;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *pushButton_4;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QPushButton *pushButton_9;
    QLabel *label_15;
    QLabel *label_14;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_2;
    QPushButton *KidsHButton;

    void setupUi(QMainWindow *PageMain)
    {
        if (PageMain->objectName().isEmpty())
            PageMain->setObjectName("PageMain");
        PageMain->resize(953, 688);
        PageMain->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(PageMain);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_16 = new QVBoxLayout(centralwidget);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget);
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(-1);
#endif
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(255);
        sizePolicy.setVerticalStretch(70);
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(255, 70));
        label_16->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout_2->addWidget(label_16);

        HomeB1 = new QPushButton(widget);
        HomeB1->setObjectName("HomeB1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(70);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(HomeB1->sizePolicy().hasHeightForWidth());
        HomeB1->setSizePolicy(sizePolicy1);
        HomeB1->setMinimumSize(QSize(70, 50));
        HomeB1->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout_2->addWidget(HomeB1);

        FilmsB1 = new QPushButton(widget);
        FilmsB1->setObjectName("FilmsB1");
        sizePolicy1.setHeightForWidth(FilmsB1->sizePolicy().hasHeightForWidth());
        FilmsB1->setSizePolicy(sizePolicy1);
        FilmsB1->setMinimumSize(QSize(70, 50));
        FilmsB1->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout_2->addWidget(FilmsB1);

        TVShowsB1 = new QPushButton(widget);
        TVShowsB1->setObjectName("TVShowsB1");
        sizePolicy1.setHeightForWidth(TVShowsB1->sizePolicy().hasHeightForWidth());
        TVShowsB1->setSizePolicy(sizePolicy1);
        TVShowsB1->setMinimumSize(QSize(70, 50));
        TVShowsB1->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout_2->addWidget(TVShowsB1);

        KidsB1 = new QPushButton(widget);
        KidsB1->setObjectName("KidsB1");
        sizePolicy1.setHeightForWidth(KidsB1->sizePolicy().hasHeightForWidth());
        KidsB1->setSizePolicy(sizePolicy1);
        KidsB1->setMinimumSize(QSize(70, 50));
        KidsB1->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout_2->addWidget(KidsB1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
""));

        horizontalLayout_2->addWidget(lineEdit);

        SearchB1 = new QPushButton(widget);
        SearchB1->setObjectName("SearchB1");
        SearchB1->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
""));

        horizontalLayout_2->addWidget(SearchB1);

        UserB1 = new QPushButton(widget);
        UserB1->setObjectName("UserB1");
        sizePolicy1.setHeightForWidth(UserB1->sizePolicy().hasHeightForWidth());
        UserB1->setSizePolicy(sizePolicy1);
        UserB1->setMinimumSize(QSize(70, 50));
        UserB1->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout_2->addWidget(UserB1);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 1);
        horizontalLayout_2->setStretch(7, 1);

        horizontalLayout->addWidget(widget);


        verticalLayout_16->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(5, 5));
        tabWidget->setMaximumSize(QSize(16777215, 564));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("color:black"));
        tabWidget->setIconSize(QSize(100, 30));
        FilmsTab = new QWidget();
        FilmsTab->setObjectName("FilmsTab");
        verticalLayout_15 = new QVBoxLayout(FilmsTab);
        verticalLayout_15->setObjectName("verticalLayout_15");
        scrollArea_4 = new QScrollArea(FilmsTab);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 881, 568));
        verticalLayout_14 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_45 = new QLabel(scrollAreaWidgetContents_4);
        label_45->setObjectName("label_45");
        label_45->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        verticalLayout_12->addWidget(label_45);


        verticalLayout_14->addLayout(verticalLayout_12);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        label_40 = new QLabel(scrollAreaWidgetContents_4);
        label_40->setObjectName("label_40");
        label_40->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_8->addWidget(label_40, 1, 1, 1, 1);

        pushButton_39 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_39->setObjectName("pushButton_39");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(150);
        sizePolicy3.setVerticalStretch(200);
        sizePolicy3.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy3);
        pushButton_39->setMinimumSize(QSize(150, 200));
        pushButton_39->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_39, 0, 0, 1, 1);

        pushButton_40 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_40->setObjectName("pushButton_40");
        sizePolicy3.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy3);
        pushButton_40->setMinimumSize(QSize(150, 200));
        pushButton_40->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_40, 0, 6, 1, 1);

        label_41 = new QLabel(scrollAreaWidgetContents_4);
        label_41->setObjectName("label_41");
        label_41->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_8->addWidget(label_41, 1, 0, 1, 1);

        pushButton_41 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_41->setObjectName("pushButton_41");
        sizePolicy3.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy3);
        pushButton_41->setMinimumSize(QSize(150, 200));
        pushButton_41->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_41, 0, 1, 1, 1);

        label_42 = new QLabel(scrollAreaWidgetContents_4);
        label_42->setObjectName("label_42");
        label_42->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_8->addWidget(label_42, 1, 3, 1, 1);

        pushButton_42 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_42->setObjectName("pushButton_42");
        sizePolicy3.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy3);
        pushButton_42->setMinimumSize(QSize(150, 200));
        pushButton_42->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_42, 0, 4, 1, 1);

        label_43 = new QLabel(scrollAreaWidgetContents_4);
        label_43->setObjectName("label_43");
        label_43->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_8->addWidget(label_43, 1, 4, 1, 1);

        pushButton_43 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_43->setObjectName("pushButton_43");
        sizePolicy3.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy3);
        pushButton_43->setMinimumSize(QSize(150, 200));
        pushButton_43->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_8->addWidget(pushButton_43, 0, 3, 1, 1);

        label_44 = new QLabel(scrollAreaWidgetContents_4);
        label_44->setObjectName("label_44");
        label_44->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_8->addWidget(label_44, 1, 6, 1, 1);


        verticalLayout_14->addLayout(gridLayout_8);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_36 = new QLabel(scrollAreaWidgetContents_4);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_2->addWidget(label_36, 1, 1, 1, 1);

        pushButton_32 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_32->setObjectName("pushButton_32");
        sizePolicy3.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy3);
        pushButton_32->setMinimumSize(QSize(150, 200));
        pushButton_32->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_32, 0, 0, 1, 1);

        pushButton_33 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_33->setObjectName("pushButton_33");
        sizePolicy3.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy3);
        pushButton_33->setMinimumSize(QSize(150, 200));
        pushButton_33->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_33, 0, 6, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_4);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_2->addWidget(label_35, 1, 0, 1, 1);

        pushButton_38 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_38->setObjectName("pushButton_38");
        sizePolicy3.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy3);
        pushButton_38->setMinimumSize(QSize(150, 200));
        pushButton_38->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_38, 0, 1, 1, 1);

        label_37 = new QLabel(scrollAreaWidgetContents_4);
        label_37->setObjectName("label_37");
        label_37->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_2->addWidget(label_37, 1, 3, 1, 1);

        pushButton_34 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_34->setObjectName("pushButton_34");
        sizePolicy3.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy3);
        pushButton_34->setMinimumSize(QSize(150, 200));
        pushButton_34->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_34, 0, 4, 1, 1);

        label_38 = new QLabel(scrollAreaWidgetContents_4);
        label_38->setObjectName("label_38");
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_2->addWidget(label_38, 1, 4, 1, 1);

        pushButton_37 = new QPushButton(scrollAreaWidgetContents_4);
        pushButton_37->setObjectName("pushButton_37");
        sizePolicy3.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy3);
        pushButton_37->setMinimumSize(QSize(150, 200));
        pushButton_37->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_37, 0, 3, 1, 1);

        label_39 = new QLabel(scrollAreaWidgetContents_4);
        label_39->setObjectName("label_39");
        label_39->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_2->addWidget(label_39, 1, 6, 1, 1);


        verticalLayout_14->addLayout(gridLayout_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        FilmsButton1 = new QPushButton(scrollAreaWidgetContents_4);
        FilmsButton1->setObjectName("FilmsButton1");
        FilmsButton1->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"\n"
"color:white"));

        verticalLayout_13->addWidget(FilmsButton1);


        verticalLayout_14->addLayout(verticalLayout_13);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_15->addWidget(scrollArea_4);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Pics/Films.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(FilmsTab, icon, QString());
        ShowTab = new QWidget();
        ShowTab->setObjectName("ShowTab");
        horizontalLayout_3 = new QHBoxLayout(ShowTab);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        scrollArea_2 = new QScrollArea(ShowTab);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 881, 568));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_29 = new QLabel(scrollAreaWidgetContents_2);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        verticalLayout_5->addWidget(label_29);


        verticalLayout_7->addLayout(verticalLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_19 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy3.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy3);
        pushButton_19->setMinimumSize(QSize(150, 200));
        pushButton_19->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_19, 0, 4, 1, 1);

        pushButton_21 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy3.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy3);
        pushButton_21->setMinimumSize(QSize(150, 200));
        pushButton_21->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_21, 0, 3, 1, 1);

        pushButton_26 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_26->setObjectName("pushButton_26");
        sizePolicy3.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy3);
        pushButton_26->setMinimumSize(QSize(150, 200));
        pushButton_26->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-image: url(:/rec/Pics/fun-backpacker-german-shepherd-dog-cartoon-character.jpg);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_26, 0, 0, 1, 1);

        pushButton_25 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy3.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy3);
        pushButton_25->setMinimumSize(QSize(150, 200));
        pushButton_25->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-image: url(:/rec/Pics/fun-horse-3d-illustration.jpg);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_25, 0, 1, 1, 1);

        pushButton_24 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_24->setObjectName("pushButton_24");
        sizePolicy3.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy3);
        pushButton_24->setMinimumSize(QSize(150, 200));
        pushButton_24->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_24, 0, 2, 1, 1);

        label_24 = new QLabel(scrollAreaWidgetContents_2);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_3->addWidget(label_24, 1, 0, 1, 1);

        label_25 = new QLabel(scrollAreaWidgetContents_2);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_3->addWidget(label_25, 1, 1, 1, 1);

        label_26 = new QLabel(scrollAreaWidgetContents_2);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_3->addWidget(label_26, 1, 2, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents_2);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_3->addWidget(label_27, 1, 3, 1, 1);

        label_28 = new QLabel(scrollAreaWidgetContents_2);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_3->addWidget(label_28, 1, 4, 1, 1);


        verticalLayout_7->addLayout(gridLayout_3);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        pushButton_28 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_28->setObjectName("pushButton_28");
        sizePolicy3.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy3);
        pushButton_28->setMinimumSize(QSize(150, 200));
        pushButton_28->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_6->addWidget(pushButton_28, 0, 1, 1, 1);

        pushButton_27 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_27->setObjectName("pushButton_27");
        sizePolicy3.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy3);
        pushButton_27->setMinimumSize(QSize(150, 200));
        pushButton_27->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_6->addWidget(pushButton_27, 0, 0, 1, 1);

        pushButton_30 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_30->setObjectName("pushButton_30");
        sizePolicy3.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy3);
        pushButton_30->setMinimumSize(QSize(150, 200));
        pushButton_30->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_6->addWidget(pushButton_30, 0, 3, 1, 1);

        pushButton_29 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_29->setObjectName("pushButton_29");
        sizePolicy3.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy3);
        pushButton_29->setMinimumSize(QSize(150, 200));
        pushButton_29->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_6->addWidget(pushButton_29, 0, 2, 1, 1);

        pushButton_20 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy3.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy3);
        pushButton_20->setMinimumSize(QSize(150, 200));
        pushButton_20->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_6->addWidget(pushButton_20, 0, 4, 1, 1);

        label_30 = new QLabel(scrollAreaWidgetContents_2);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_6->addWidget(label_30, 1, 0, 1, 1);

        label_31 = new QLabel(scrollAreaWidgetContents_2);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_6->addWidget(label_31, 1, 1, 1, 1);

        label_32 = new QLabel(scrollAreaWidgetContents_2);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_6->addWidget(label_32, 1, 2, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents_2);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_6->addWidget(label_33, 1, 3, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents_2);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_6->addWidget(label_34, 1, 4, 1, 1);


        verticalLayout_7->addLayout(gridLayout_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        GoTpTVShowsB = new QPushButton(scrollAreaWidgetContents_2);
        GoTpTVShowsB->setObjectName("GoTpTVShowsB");
        GoTpTVShowsB->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"\n"
"color:white"));

        verticalLayout_6->addWidget(GoTpTVShowsB);


        verticalLayout_7->addLayout(verticalLayout_6);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(scrollArea_2);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Pics/TVShows.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ShowTab, icon1, QString());
        KidsTab = new QWidget();
        KidsTab->setObjectName("KidsTab");
        verticalLayout_4 = new QVBoxLayout(KidsTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        scrollArea = new QScrollArea(KidsTab);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -72, 881, 568));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        verticalLayout->addWidget(label_23);


        verticalLayout_3->addLayout(verticalLayout);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy3.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy3);
        pushButton_10->setMinimumSize(QSize(150, 200));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_5->addWidget(pushButton_10, 0, 0, 1, 1);

        pushButton_15 = new QPushButton(scrollAreaWidgetContents);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy3.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy3);
        pushButton_15->setMinimumSize(QSize(150, 200));
        pushButton_15->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_5->addWidget(pushButton_15, 0, 1, 1, 1);

        pushButton_17 = new QPushButton(scrollAreaWidgetContents);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy3.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy3);
        pushButton_17->setMinimumSize(QSize(150, 200));
        pushButton_17->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_5->addWidget(pushButton_17, 0, 3, 1, 1);

        pushButton_16 = new QPushButton(scrollAreaWidgetContents);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy3.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy3);
        pushButton_16->setMinimumSize(QSize(150, 200));
        pushButton_16->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_5->addWidget(pushButton_16, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy3.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy3);
        pushButton_4->setMinimumSize(QSize(150, 200));
        pushButton_4->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_5->addWidget(pushButton_4, 0, 4, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_5->addWidget(label_18, 1, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_5->addWidget(label_19, 1, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_5->addWidget(label_20, 1, 2, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_5->addWidget(label_21, 1, 3, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout_5->addWidget(label_22, 1, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout->addWidget(label_17, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy3.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy3);
        pushButton_9->setMinimumSize(QSize(150, 200));
        pushButton_9->setAutoFillBackground(false);
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout->addWidget(label_15, 1, 2, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout->addWidget(label_14, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy3.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy3);
        pushButton_8->setMinimumSize(QSize(150, 200));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setMinimumSize(QSize(150, 200));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_6, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);
        pushButton_7->setMinimumSize(QSize(150, 200));
        pushButton_7->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setMinimumSize(QSize(150, 200));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout->addWidget(label_12, 1, 3, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
""));

        gridLayout->addWidget(label_13, 1, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        KidsHButton = new QPushButton(scrollAreaWidgetContents);
        KidsHButton->setObjectName("KidsHButton");
        KidsHButton->setStyleSheet(QString::fromUtf8("color: rgb(228, 215, 190);\n"
"border-color: rgb(255, 38, 0);\n"
"border-color: rgb(228, 215, 190);\n"
"\n"
"border: 3px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout_2->addWidget(KidsHButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Pics/Kids.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(KidsTab, icon2, QString());

        verticalLayout_16->addWidget(tabWidget);

        verticalLayout_16->setStretch(0, 1);
        verticalLayout_16->setStretch(1, 10);
        PageMain->setCentralWidget(centralwidget);

        retranslateUi(PageMain);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PageMain);
    } // setupUi

    void retranslateUi(QMainWindow *PageMain)
    {
        PageMain->setWindowTitle(QCoreApplication::translate("PageMain", "MainWindow", nullptr));
        label_16->setText(QString());
        HomeB1->setText(QString());
        FilmsB1->setText(QString());
        TVShowsB1->setText(QString());
        KidsB1->setText(QString());
        SearchB1->setText(QCoreApplication::translate("PageMain", "Search", nullptr));
        UserB1->setText(QString());
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("PageMain", "<html><head/><body><p>Films</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_45->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#e4d7be;\">Recomendations</span></p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_39->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_40->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_41->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_41->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_42->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_42->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_43->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_43->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_44->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_36->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_32->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_33->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_35->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_38->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_37->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_34->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_38->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_37->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_39->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        FilmsButton1->setText(QCoreApplication::translate("PageMain", "See more films", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FilmsTab), QCoreApplication::translate("PageMain", "Films", nullptr));
        label_29->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#e4d7be;\">Recomendations</span></p></body></html>", nullptr));
        pushButton_19->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_21->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_26->setText(QString());
        pushButton_25->setText(QString());
        pushButton_24->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_24->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        pushButton_28->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_27->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_30->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_29->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_30->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        label_34->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">Film name</span></p></body></html>", nullptr));
        GoTpTVShowsB->setText(QCoreApplication::translate("PageMain", "See more show", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ShowTab), QCoreApplication::translate("PageMain", "TV Shows", nullptr));
        label_23->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#e4d7be;\">Recomendations</span></p></body></html>", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_17->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_18->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_15->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_12->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        KidsHButton->setToolTip(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">See more...</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        KidsHButton->setText(QCoreApplication::translate("PageMain", "See more cartoons...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(KidsTab), QCoreApplication::translate("PageMain", "For Kids", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMain: public Ui_PageMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMAIN_H
