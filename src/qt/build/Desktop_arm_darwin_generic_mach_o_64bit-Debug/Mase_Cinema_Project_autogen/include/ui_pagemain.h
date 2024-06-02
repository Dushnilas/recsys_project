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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageMain
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QPushButton *pushButton_32;
    QPushButton *pushButton_37;
    QPushButton *pushButton_34;
    QPushButton *pushButton_33;
    QLineEdit *lineEdit;
    QPushButton *pushButton_39;
    QPushButton *pushButton_38;
    QTabWidget *tabWidget;
    QWidget *FilmsTab;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_11;
    QLabel *label_7;
    QPushButton *pushButton_22;
    QPushButton *pushButton_14;
    QLabel *label_11;
    QPushButton *pushButton_23;
    QPushButton *pushButton_18;
    QLabel *label_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_13;
    QLabel *label_10;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    QPushButton *pushButton_35;
    QWidget *ShowTab;
    QGridLayout *gridLayout_4;
    QLabel *label_30;
    QLabel *label_33;
    QPushButton *pushButton_21;
    QLabel *label_27;
    QPushButton *pushButton_25;
    QPushButton *pushButton_27;
    QLabel *label_25;
    QPushButton *pushButton_20;
    QLabel *label_31;
    QLabel *label_28;
    QLabel *label_24;
    QPushButton *pushButton_24;
    QLabel *label_32;
    QPushButton *pushButton_29;
    QPushButton *pushButton_28;
    QPushButton *pushButton_26;
    QLabel *label_29;
    QLabel *label_34;
    QLabel *label_26;
    QPushButton *pushButton_19;
    QPushButton *pushButton_30;
    QPushButton *pushButton_36;
    QWidget *KidsTab;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_16;
    QLabel *label_23;
    QLabel *label_19;
    QLabel *label_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QLabel *label_17;
    QLabel *label_21;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QLabel *label_20;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QLabel *label_15;
    QLabel *label_18;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QLabel *label_22;
    QPushButton *pushButton_31;

    void setupUi(QMainWindow *PageMain)
    {
        if (PageMain->objectName().isEmpty())
            PageMain->setObjectName("PageMain");
        PageMain->resize(953, 688);
        PageMain->setStyleSheet(QString::fromUtf8("background-image: url(:/rec/Pics/backg.png);"));
        centralwidget = new QWidget(PageMain);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");

        horizontalLayout_2->addWidget(label_16);

        pushButton_32 = new QPushButton(widget);
        pushButton_32->setObjectName("pushButton_32");

        horizontalLayout_2->addWidget(pushButton_32);

        pushButton_37 = new QPushButton(widget);
        pushButton_37->setObjectName("pushButton_37");

        horizontalLayout_2->addWidget(pushButton_37);

        pushButton_34 = new QPushButton(widget);
        pushButton_34->setObjectName("pushButton_34");

        horizontalLayout_2->addWidget(pushButton_34);

        pushButton_33 = new QPushButton(widget);
        pushButton_33->setObjectName("pushButton_33");

        horizontalLayout_2->addWidget(pushButton_33);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_39 = new QPushButton(widget);
        pushButton_39->setObjectName("pushButton_39");

        horizontalLayout_2->addWidget(pushButton_39);

        pushButton_38 = new QPushButton(widget);
        pushButton_38->setObjectName("pushButton_38");

        horizontalLayout_2->addWidget(pushButton_38);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 1);
        horizontalLayout_2->setStretch(7, 1);

        horizontalLayout->addWidget(widget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(5, 5));
        tabWidget->setMaximumSize(QSize(16777215, 564));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);"));
        tabWidget->setIconSize(QSize(100, 30));
        FilmsTab = new QWidget();
        FilmsTab->setObjectName("FilmsTab");
        FilmsTab->setMaximumSize(QSize(923, 532));
        gridLayout_2 = new QGridLayout(FilmsTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(-1);
        pushButton_3 = new QPushButton(FilmsTab);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_3, 3, 4, 1, 1);

        pushButton_11 = new QPushButton(FilmsTab);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_11, 1, 2, 1, 1);

        label_7 = new QLabel(FilmsTab);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 4, 1, 1, 1);

        pushButton_22 = new QPushButton(FilmsTab);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_22, 3, 1, 1, 1);

        pushButton_14 = new QPushButton(FilmsTab);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_14, 3, 2, 1, 1);

        label_11 = new QLabel(FilmsTab);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        pushButton_23 = new QPushButton(FilmsTab);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_23, 3, 0, 1, 1);

        pushButton_18 = new QPushButton(FilmsTab);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_18, 3, 3, 1, 1);

        label_3 = new QLabel(FilmsTab);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(FilmsTab);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_12, 1, 1, 1, 1);

        pushButton = new QPushButton(FilmsTab);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton, 1, 4, 1, 1);

        label_8 = new QLabel(FilmsTab);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 4, 2, 1, 1);

        label_2 = new QLabel(FilmsTab);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        label_6 = new QLabel(FilmsTab);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(FilmsTab);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_5, 1, 3, 1, 1);

        pushButton_13 = new QPushButton(FilmsTab);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_13, 1, 0, 1, 1);

        label_10 = new QLabel(FilmsTab);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 4, 4, 1, 1);

        label = new QLabel(FilmsTab);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        label_4 = new QLabel(FilmsTab);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 2, 3, 1, 1);

        label_9 = new QLabel(FilmsTab);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 4, 3, 1, 1);

        label_5 = new QLabel(FilmsTab);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 2, 4, 1, 1);

        pushButton_35 = new QPushButton(FilmsTab);
        pushButton_35->setObjectName("pushButton_35");

        gridLayout_2->addWidget(pushButton_35, 5, 4, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Pics/Films.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(FilmsTab, icon, QString());
        ShowTab = new QWidget();
        ShowTab->setObjectName("ShowTab");
        gridLayout_4 = new QGridLayout(ShowTab);
        gridLayout_4->setObjectName("gridLayout_4");
        label_30 = new QLabel(ShowTab);
        label_30->setObjectName("label_30");

        gridLayout_4->addWidget(label_30, 4, 0, 1, 1);

        label_33 = new QLabel(ShowTab);
        label_33->setObjectName("label_33");

        gridLayout_4->addWidget(label_33, 4, 3, 1, 1);

        pushButton_21 = new QPushButton(ShowTab);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_21, 1, 3, 1, 1);

        label_27 = new QLabel(ShowTab);
        label_27->setObjectName("label_27");

        gridLayout_4->addWidget(label_27, 2, 3, 1, 1);

        pushButton_25 = new QPushButton(ShowTab);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy1.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_25, 1, 1, 1, 1);

        pushButton_27 = new QPushButton(ShowTab);
        pushButton_27->setObjectName("pushButton_27");
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_27, 3, 0, 1, 1);

        label_25 = new QLabel(ShowTab);
        label_25->setObjectName("label_25");

        gridLayout_4->addWidget(label_25, 2, 1, 1, 1);

        pushButton_20 = new QPushButton(ShowTab);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_20, 3, 4, 1, 1);

        label_31 = new QLabel(ShowTab);
        label_31->setObjectName("label_31");

        gridLayout_4->addWidget(label_31, 4, 1, 1, 1);

        label_28 = new QLabel(ShowTab);
        label_28->setObjectName("label_28");

        gridLayout_4->addWidget(label_28, 2, 4, 1, 1);

        label_24 = new QLabel(ShowTab);
        label_24->setObjectName("label_24");

        gridLayout_4->addWidget(label_24, 2, 0, 1, 1);

        pushButton_24 = new QPushButton(ShowTab);
        pushButton_24->setObjectName("pushButton_24");
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_24, 1, 2, 1, 1);

        label_32 = new QLabel(ShowTab);
        label_32->setObjectName("label_32");

        gridLayout_4->addWidget(label_32, 4, 2, 1, 1);

        pushButton_29 = new QPushButton(ShowTab);
        pushButton_29->setObjectName("pushButton_29");
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_29, 3, 2, 1, 1);

        pushButton_28 = new QPushButton(ShowTab);
        pushButton_28->setObjectName("pushButton_28");
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_28, 3, 1, 1, 1);

        pushButton_26 = new QPushButton(ShowTab);
        pushButton_26->setObjectName("pushButton_26");
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_26, 1, 0, 1, 1);

        label_29 = new QLabel(ShowTab);
        label_29->setObjectName("label_29");

        gridLayout_4->addWidget(label_29, 0, 0, 1, 1);

        label_34 = new QLabel(ShowTab);
        label_34->setObjectName("label_34");

        gridLayout_4->addWidget(label_34, 4, 4, 1, 1);

        label_26 = new QLabel(ShowTab);
        label_26->setObjectName("label_26");

        gridLayout_4->addWidget(label_26, 2, 2, 1, 1);

        pushButton_19 = new QPushButton(ShowTab);
        pushButton_19->setObjectName("pushButton_19");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(pushButton_19, 1, 4, 1, 1);

        pushButton_30 = new QPushButton(ShowTab);
        pushButton_30->setObjectName("pushButton_30");
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_30, 3, 3, 1, 1);

        pushButton_36 = new QPushButton(ShowTab);
        pushButton_36->setObjectName("pushButton_36");

        gridLayout_4->addWidget(pushButton_36, 5, 4, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Pics/TVShows.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ShowTab, icon1, QString());
        KidsTab = new QWidget();
        KidsTab->setObjectName("KidsTab");
        gridLayout_3 = new QGridLayout(KidsTab);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_7 = new QPushButton(KidsTab);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_16 = new QPushButton(KidsTab);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_16, 3, 2, 1, 1);

        label_23 = new QLabel(KidsTab);
        label_23->setObjectName("label_23");

        gridLayout_3->addWidget(label_23, 0, 0, 1, 1);

        label_19 = new QLabel(KidsTab);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 4, 1, 1, 1);

        label_12 = new QLabel(KidsTab);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        pushButton_10 = new QPushButton(KidsTab);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(KidsTab);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_8, 1, 1, 1, 1);

        label_17 = new QLabel(KidsTab);
        label_17->setObjectName("label_17");

        gridLayout_3->addWidget(label_17, 2, 4, 1, 1);

        label_21 = new QLabel(KidsTab);
        label_21->setObjectName("label_21");

        gridLayout_3->addWidget(label_21, 4, 3, 1, 1);

        pushButton_4 = new QPushButton(KidsTab);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_4, 3, 4, 1, 1);

        label_13 = new QLabel(KidsTab);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 2, 1, 1, 1);

        label_20 = new QLabel(KidsTab);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 4, 2, 1, 1);

        pushButton_15 = new QPushButton(KidsTab);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_15, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(KidsTab);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_17, 3, 3, 1, 1);

        pushButton_9 = new QPushButton(KidsTab);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setAutoFillBackground(false);

        gridLayout_3->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(KidsTab);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_6, 1, 3, 1, 1);

        label_15 = new QLabel(KidsTab);
        label_15->setObjectName("label_15");

        gridLayout_3->addWidget(label_15, 2, 3, 1, 1);

        label_18 = new QLabel(KidsTab);
        label_18->setObjectName("label_18");

        gridLayout_3->addWidget(label_18, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(KidsTab);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_2, 1, 4, 1, 1);

        label_14 = new QLabel(KidsTab);
        label_14->setObjectName("label_14");

        gridLayout_3->addWidget(label_14, 2, 2, 1, 1);

        label_22 = new QLabel(KidsTab);
        label_22->setObjectName("label_22");

        gridLayout_3->addWidget(label_22, 4, 4, 1, 1);

        pushButton_31 = new QPushButton(KidsTab);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setStyleSheet(QString::fromUtf8("color: rgb(228, 215, 190);\n"
"border-color: rgb(255, 38, 0);\n"
"border-color: rgb(228, 215, 190);"));

        gridLayout_3->addWidget(pushButton_31, 5, 4, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Pics/Kids.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(KidsTab, icon2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        PageMain->setCentralWidget(centralwidget);

        retranslateUi(PageMain);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PageMain);
    } // setupUi

    void retranslateUi(QMainWindow *PageMain)
    {
        PageMain->setWindowTitle(QCoreApplication::translate("PageMain", "MainWindow", nullptr));
        label_16->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_32->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_37->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_34->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_33->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_39->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_38->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_7->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_22->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_11->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_23->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_18->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_12->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_8->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_10->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("PageMain", "TextLabel", nullptr));
        pushButton_35->setText(QCoreApplication::translate("PageMain", "See more films...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FilmsTab), QCoreApplication::translate("PageMain", "Films", nullptr));
        label_30->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_21->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_27->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_25->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_27->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_25->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_20->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_31->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_24->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_32->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_29->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_28->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_26->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_29->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Recomendations</span></p></body></html>", nullptr));
        label_34->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p>Film name</p></body></html>", nullptr));
        pushButton_19->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_30->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_36->setText(QCoreApplication::translate("PageMain", "See more show...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ShowTab), QCoreApplication::translate("PageMain", "TV Shows", nullptr));
        pushButton_7->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_16->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_16->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_23->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" font-size:18pt; color:#e4d7be;\">Recomendations</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_10->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_8->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_17->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_4->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_13->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_15->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_15->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_17->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_17->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_9->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_6->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_15->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_2->setStyleSheet(QCoreApplication::translate("PageMain", "color: rgb(228, 215, 190);\n"
"border-color: rgb(228, 215, 190);", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        label_14->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">TextLabel</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_31->setToolTip(QCoreApplication::translate("PageMain", "<html><head/><body><p><span style=\" color:#e4d7be;\">See more...</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_31->setText(QCoreApplication::translate("PageMain", "See more films...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(KidsTab), QCoreApplication::translate("PageMain", "For Kids", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageMain: public Ui_PageMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMAIN_H
