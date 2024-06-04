/********************************************************************************
** Form generated from reading UI file 'collectionpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONPAGE_H
#define UI_COLLECTIONPAGE_H

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

class Ui_CollectionPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_11;
    QPushButton *filmsCol;
    QPushButton *TVShowsCol;
    QPushButton *KidsCol;
    QLineEdit *lineEdit;
    QPushButton *pushButton_15;
    QPushButton *UserCol;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_13;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QLabel *label_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_7;
    QLabel *label_12;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CollectionPage)
    {
        if (CollectionPage->objectName().isEmpty())
            CollectionPage->setObjectName("CollectionPage");
        CollectionPage->resize(800, 600);
        CollectionPage->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(CollectionPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
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
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(76);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 76));
        widget->setMaximumSize(QSize(16777215, 76));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout->addWidget(label_2);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 50));
        pushButton_11->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout->addWidget(pushButton_11);

        filmsCol = new QPushButton(widget);
        filmsCol->setObjectName("filmsCol");
        filmsCol->setMinimumSize(QSize(0, 50));
        filmsCol->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Filmsnormal.png);\n"
"border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout->addWidget(filmsCol);

        TVShowsCol = new QPushButton(widget);
        TVShowsCol->setObjectName("TVShowsCol");
        TVShowsCol->setMinimumSize(QSize(0, 50));
        TVShowsCol->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout->addWidget(TVShowsCol);

        KidsCol = new QPushButton(widget);
        KidsCol->setObjectName("KidsCol");
        KidsCol->setMinimumSize(QSize(0, 50));
        KidsCol->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout->addWidget(KidsCol);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(lineEdit);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("color: rgb(229, 217, 190);"));

        horizontalLayout->addWidget(pushButton_15);

        UserCol = new QPushButton(widget);
        UserCol->setObjectName("UserCol");
        UserCol->setMinimumSize(QSize(0, 50));
        UserCol->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout->addWidget(UserCol);


        verticalLayout_4->addWidget(widget);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(159);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        horizontalLayout_2->addWidget(label);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(600, 0));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        horizontalLayout_2->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 759, 390));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(54);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy4);
        pushButton_3->setMinimumSize(QSize(0, 150));
        pushButton_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_4, 1, 4, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy4.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy4);
        pushButton_4->setMinimumSize(QSize(0, 150));
        pushButton_4->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMinimumSize(QSize(0, 150));
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy4.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy4);
        pushButton_5->setMinimumSize(QSize(0, 150));
        pushButton_5->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_5, 0, 3, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        pushButton_2->setMinimumSize(QSize(0, 150));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(54);
        gridLayout_4->setContentsMargins(30, -1, 30, -1);
        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy4.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy4);
        pushButton_9->setMinimumSize(QSize(0, 150));
        pushButton_9->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_4->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy4.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy4);
        pushButton_8->setMinimumSize(QSize(0, 150));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_4->addWidget(pushButton_8, 0, 1, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_4->addWidget(label_9, 1, 4, 1, 1);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy4.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy4);
        pushButton_10->setMinimumSize(QSize(0, 150));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_4->addWidget(pushButton_10, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy4.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy4);
        pushButton_7->setMinimumSize(QSize(0, 150));
        pushButton_7->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_4->addWidget(pushButton_7, 0, 4, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_4->addWidget(label_12, 1, 3, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_4->addWidget(label_10, 1, 1, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_4->addWidget(label_11, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy4.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy4);
        pushButton_6->setMinimumSize(QSize(0, 150));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_4->addWidget(pushButton_6, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        CollectionPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CollectionPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        CollectionPage->setMenuBar(menubar);
        statusbar = new QStatusBar(CollectionPage);
        statusbar->setObjectName("statusbar");
        CollectionPage->setStatusBar(statusbar);

        retranslateUi(CollectionPage);

        QMetaObject::connectSlotsByName(CollectionPage);
    } // setupUi

    void retranslateUi(QMainWindow *CollectionPage)
    {
        CollectionPage->setWindowTitle(QCoreApplication::translate("CollectionPage", "MainWindow", nullptr));
        label_2->setText(QString());
        pushButton_11->setText(QString());
        filmsCol->setText(QString());
        TVShowsCol->setText(QString());
        KidsCol->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("CollectionPage", "search", nullptr));
        UserCol->setText(QString());
        label->setText(QCoreApplication::translate("CollectionPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Your collection:</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("CollectionPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Collection_name</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_7->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_9->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton_10->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
        label_12->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("CollectionPage", "TextLabel", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CollectionPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollectionPage: public Ui_CollectionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONPAGE_H
