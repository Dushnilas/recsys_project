/********************************************************************************
** Form generated from reading UI file 'filmpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMPAGE_H
#define UI_FILMPAGE_H

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
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilmPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *HomeBFI;
    QPushButton *FilmsBFI;
    QPushButton *TVShowsBFI;
    QPushButton *KidsBFI;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QPushButton *UserPBFI;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QPushButton *pushButton_8;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QScrollBar *verticalScrollBar;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *pushButton_9;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FilmPage)
    {
        if (FilmPage->objectName().isEmpty())
            FilmPage->setObjectName("FilmPage");
        FilmPage->resize(897, 600);
        FilmPage->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(FilmPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(74);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 74));
        widget->setMaximumSize(QSize(16777215, 74));
        widget->setToolTipDuration(4);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(150, 52));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/LogoRem.png);"));

        horizontalLayout_2->addWidget(label);

        HomeBFI = new QPushButton(widget);
        HomeBFI->setObjectName("HomeBFI");
        HomeBFI->setMinimumSize(QSize(0, 50));
        HomeBFI->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout_2->addWidget(HomeBFI);

        FilmsBFI = new QPushButton(widget);
        FilmsBFI->setObjectName("FilmsBFI");
        FilmsBFI->setMinimumSize(QSize(0, 50));
        FilmsBFI->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Films.png);"));

        horizontalLayout_2->addWidget(FilmsBFI);

        TVShowsBFI = new QPushButton(widget);
        TVShowsBFI->setObjectName("TVShowsBFI");
        TVShowsBFI->setMinimumSize(QSize(0, 50));
        TVShowsBFI->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShows.png);"));

        horizontalLayout_2->addWidget(TVShowsBFI);

        KidsBFI = new QPushButton(widget);
        KidsBFI->setObjectName("KidsBFI");
        KidsBFI->setMinimumSize(QSize(0, 50));
        KidsBFI->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kids.png);"));

        horizontalLayout_2->addWidget(KidsBFI);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(229, 217, 190);\n"
""));

        horizontalLayout_2->addWidget(pushButton_6);

        UserPBFI = new QPushButton(widget);
        UserPBFI->setObjectName("UserPBFI");
        UserPBFI->setMinimumSize(QSize(0, 50));
        UserPBFI->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout_2->addWidget(UserPBFI);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy3);
        pushButton_7->setMinimumSize(QSize(60, 60));
        pushButton_7->setMaximumSize(QSize(50, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/\321\201\320\265\321\200\320\264\321\206\320\265.jpg);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(pushButton_7, 0, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(610, 30));
        label_6->setMaximumSize(QSize(16777215, 50));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        gridLayout_3->addWidget(label_6, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(0, 50));
        pushButton_8->setMaximumSize(QSize(76, 50));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/rec/Pics/\320\277\320\273\321\216\321\201.jpg);"));
        pushButton_8->setAutoDefault(false);

        gridLayout_3->addWidget(pushButton_8, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(30);
        gridLayout->setContentsMargins(30, -1, 30, -1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMinimumSize(QSize(173, 250));
        label_2->setMaximumSize(QSize(400, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setMinimumSize(QSize(0, 100));
        label_3->setMaximumSize(QSize(900, 16777215));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        verticalLayout_2->addWidget(label_3);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(100);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy6);
        scrollArea->setMaximumSize(QSize(850, 16777215));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 606, 141));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName("gridLayout_4");
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName("label_10");
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);
        label_10->setMaximumSize(QSize(875, 16777215));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setMaximumSize(QSize(25, 16777215));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(verticalScrollBar, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(30, -1, 30, -1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 90));
        label_4->setMaximumSize(QSize(70, 100));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(0, 90));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        gridLayout_2->addWidget(label_8, 0, 4, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(55, 90));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        gridLayout_2->addWidget(label_7, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(pushButton_9, 0, 6, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 90));
        label_5->setMaximumSize(QSize(16777215, 100));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(50, 0));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_2->addWidget(lineEdit_2, 0, 5, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(110, 90));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_9, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        FilmPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FilmPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 897, 24));
        FilmPage->setMenuBar(menubar);
        statusbar = new QStatusBar(FilmPage);
        statusbar->setObjectName("statusbar");
        FilmPage->setStatusBar(statusbar);

        retranslateUi(FilmPage);

        QMetaObject::connectSlotsByName(FilmPage);
    } // setupUi

    void retranslateUi(QMainWindow *FilmPage)
    {
        FilmPage->setWindowTitle(QCoreApplication::translate("FilmPage", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        widget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        HomeBFI->setText(QString());
        FilmsBFI->setText(QString());
        TVShowsBFI->setText(QString());
        KidsBFI->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("FilmPage", "search", nullptr));
        UserPBFI->setText(QString());
        pushButton_7->setText(QString());
        label_6->setText(QCoreApplication::translate("FilmPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Film_name</span></p></body></html>", nullptr));
        pushButton_8->setText(QString());
        label_2->setText(QCoreApplication::translate("FilmPage", "photo", nullptr));
        label_3->setText(QCoreApplication::translate("FilmPage", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("FilmPage", "Comments", nullptr));
        label_4->setText(QCoreApplication::translate("FilmPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Rating:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("FilmPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Rate film(1 to 10)</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("FilmPage", "<html><head/><body><p><span style=\" font-size:24pt;\">(Num_ratings)</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("FilmPage", "OK", nullptr));
        label_5->setText(QCoreApplication::translate("FilmPage", "<html><head/><body><p><span style=\" font-size:24pt;\">Numder</span></p></body></html>", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilmPage: public Ui_FilmPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMPAGE_H
