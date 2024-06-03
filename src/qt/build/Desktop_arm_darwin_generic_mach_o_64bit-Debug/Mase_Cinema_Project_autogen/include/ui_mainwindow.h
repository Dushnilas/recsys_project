/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_20;
    QLabel *label_16;
    QLabel *label_18;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_23;
    QLabel *label_17;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_7;
    QLabel *label_5;
    QPushButton *pushButton_8;
    QLabel *label_21;
    QLabel *label_19;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(false);
        MainWindow->setTabletTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 74));
        widget_2->setMaximumSize(QSize(16777215, 167));
        widget_2->setLayoutDirection(Qt::LeftToRight);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 76));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2.png);"));

        horizontalLayout->addWidget(label_2);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 50));
        pushButton_11->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 50));
        pushButton_12->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Filmsnormal.png);"));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMinimumSize(QSize(0, 50));
        pushButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShowsnormal.png);"));

        horizontalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 50));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kidsnormal.png);"));

        horizontalLayout->addWidget(pushButton_14);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("color: rgb(229, 217, 190);"));

        horizontalLayout->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setMinimumSize(QSize(0, 50));
        pushButton_16->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout->addWidget(pushButton_16);


        verticalLayout_4->addWidget(widget);


        verticalLayout->addWidget(widget_2);


        verticalLayout_3->addLayout(verticalLayout);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 30));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(-1);
#endif
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 12);
        label_6 = new QLabel(widget_3);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);\n"
""));

        horizontalLayout_3->addWidget(label_6);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(50, 30));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        horizontalLayout_3->addWidget(label_4);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(500, 0));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_3->addWidget(label_7);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addWidget(widget_3);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(-27, 0, 800, 390));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(54);
        gridLayout->setVerticalSpacing(-1);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMinimumSize(QSize(0, 150));
        pushButton_5->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setMinimumSize(QSize(0, 150));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(0, 150));
        pushButton_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(16777215, 100));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_20, 1, 2, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(100, 0));
        label_16->setMaximumSize(QSize(16777215, 100));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_16, 1, 3, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(100, 0));
        label_18->setMaximumSize(QSize(16777215, 100));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_18, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(0, 150));
        pushButton_3->setMaximumSize(QSize(16777215, 16777215));
        pushButton_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMinimumSize(QSize(0, 150));
        pushButton_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_4->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName("label_23");
        label_23->setMinimumSize(QSize(100, 0));
        label_23->setMaximumSize(QSize(16777215, 100));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_23, 1, 1, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(100, 0));
        label_17->setMaximumSize(QSize(16777215, 50));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_17, 1, 4, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(54);
        gridLayout_3->setContentsMargins(30, -1, 30, -1);
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(16777215, 100));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_3, 1, 2, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(16777215, 100));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setMinimumSize(QSize(100, 150));
        pushButton_7->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_7, 0, 4, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(16777215, 100));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_5, 1, 3, 1, 1);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setMinimumSize(QSize(100, 150));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_8, 0, 1, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(100, 0));
        label_21->setMaximumSize(QSize(16777215, 100));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_21, 1, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(100, 0));
        label_19->setMaximumSize(QSize(16777215, 100));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_19, 1, 4, 1, 1);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setMinimumSize(QSize(100, 150));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_10, 0, 3, 1, 1);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setMinimumSize(QSize(100, 150));
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setMinimumSize(QSize(100, 150));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_3->addWidget(pushButton_6, 0, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
        pushButton_16->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Films with genre:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">genre</span></p></body></html>", nullptr));
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
