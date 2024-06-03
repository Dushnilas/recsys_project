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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageMain
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *FilmsTab;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_18;
    QPushButton *pushButton_20;
    QPushButton *pushButton_11;
    QPushButton *pushButton_23;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_22;
    QPushButton *pushButton_15;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_24;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_19;
    QPushButton *pushButton_12;
    QPushButton *pushButton_25;
    QPushButton *pushButton_3;
    QPushButton *pushButton_16;
    QWidget *ShowTab;
    QWidget *KidsTab;
    QPushButton *pushButton_7;

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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2.png);"));

        gridLayout->addWidget(pushButton_2, 0, 0, 4, 2);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMaximumSize(QSize(16777215, 564));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setIconSize(QSize(100, 30));
        FilmsTab = new QWidget();
        FilmsTab->setObjectName("FilmsTab");
        FilmsTab->setMaximumSize(QSize(923, 532));
        gridLayout_2 = new QGridLayout(FilmsTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(-1);
        pushButton_18 = new QPushButton(FilmsTab);
        pushButton_18->setObjectName("pushButton_18");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_18, 1, 2, 1, 1);

        pushButton_20 = new QPushButton(FilmsTab);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy2.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_20, 3, 2, 1, 1);

        pushButton_11 = new QPushButton(FilmsTab);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_11, 1, 0, 1, 1);

        pushButton_23 = new QPushButton(FilmsTab);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy2.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_23, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(FilmsTab);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_6, 3, 4, 1, 1);

        pushButton_13 = new QPushButton(FilmsTab);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy2.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_13, 1, 3, 1, 1);

        pushButton = new QPushButton(FilmsTab);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(FilmsTab);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_5, 0, 4, 1, 1);

        pushButton_22 = new QPushButton(FilmsTab);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy2.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_22, 0, 1, 1, 1);

        pushButton_15 = new QPushButton(FilmsTab);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_15, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(FilmsTab);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_9, 2, 4, 1, 1);

        pushButton_4 = new QPushButton(FilmsTab);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_24 = new QPushButton(FilmsTab);
        pushButton_24->setObjectName("pushButton_24");
        sizePolicy2.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_24, 2, 1, 1, 1);

        pushButton_10 = new QPushButton(FilmsTab);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_10, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(FilmsTab);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_14, 0, 3, 1, 1);

        pushButton_19 = new QPushButton(FilmsTab);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy2.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_19, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(FilmsTab);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_12, 1, 4, 1, 1);

        pushButton_25 = new QPushButton(FilmsTab);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy2.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_25, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(FilmsTab);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_16 = new QPushButton(FilmsTab);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy2.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_16, 3, 3, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Pics/Films.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(FilmsTab, icon, QString());
        ShowTab = new QWidget();
        ShowTab->setObjectName("ShowTab");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Pics/TVShows.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ShowTab, icon1, QString());
        KidsTab = new QWidget();
        KidsTab->setObjectName("KidsTab");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Pics/Kids.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(KidsTab, icon2, QString());

        gridLayout->addWidget(tabWidget, 4, 0, 1, 4);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Logo maker project-7.png);"));

        gridLayout->addWidget(pushButton_7, 1, 3, 3, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 3);
        gridLayout->setColumnStretch(3, 1);
        PageMain->setCentralWidget(centralwidget);

        retranslateUi(PageMain);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageMain);
    } // setupUi

    void retranslateUi(QMainWindow *PageMain)
    {
        PageMain->setWindowTitle(QCoreApplication::translate("PageMain", "MainWindow", nullptr));
        pushButton_2->setText(QString());
        pushButton_18->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_23->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_22->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_24->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_19->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_25->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("PageMain", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FilmsTab), QCoreApplication::translate("PageMain", "Films", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ShowTab), QCoreApplication::translate("PageMain", "TV Shows", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(KidsTab), QCoreApplication::translate("PageMain", "For Kids", nullptr));
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageMain: public Ui_PageMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMAIN_H
