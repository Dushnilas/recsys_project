/********************************************************************************
** Form generated from reading UI file 'filmscollection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMSCOLLECTION_H
#define UI_FILMSCOLLECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_FilmsCollection
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QLineEdit *lineEdit;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_18;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FilmsCollection)
    {
        if (FilmsCollection->objectName().isEmpty())
            FilmsCollection->setObjectName("FilmsCollection");
        FilmsCollection->resize(800, 600);
        FilmsCollection->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread: pad, x1: 0, y1: 1, x2: 0, y2: 0, stop: 0 rgb(0, 0, 0), stop: 1 rgb(19, 21, 59));\n"
"color: white;"));
        centralwidget = new QWidget(FilmsCollection);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(76);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 74));
        widget_2->setMaximumSize(QSize(16777215, 76));
        widget_2->setLayoutDirection(Qt::LeftToRight);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border: 4px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(52);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(150, 52));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/BackG2.png);"));

        horizontalLayout->addWidget(label_2);

        pushButton_12 = new QPushButton(widget_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setMinimumSize(QSize(0, 50));
        pushButton_12->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/housenormal.png);"));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(widget_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 50));
        pushButton_11->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Filmsnormal.png);"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setMinimumSize(QSize(0, 50));
        pushButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/TVShowsnormal.png);"));

        horizontalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(widget_2);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(0, 50));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/Kidsnormal.png);"));

        horizontalLayout->addWidget(pushButton_14);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(lineEdit);

        pushButton_15 = new QPushButton(widget_2);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("color: rgb(229, 217, 190);"));

        horizontalLayout->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(widget_2);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setMinimumSize(QSize(0, 50));
        pushButton_16->setStyleSheet(QString::fromUtf8("border-image: url(:/rec/Pics/profile-user.png);"));

        horizontalLayout->addWidget(pushButton_16);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addLayout(verticalLayout);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(30);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(229, 217, 190);"));

        verticalLayout_2->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(15);
        gridLayout->setVerticalSpacing(100);
        gridLayout->setContentsMargins(30, 0, 30, 0);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy4);
        pushButton_4->setMinimumSize(QSize(0, 196));
        pushButton_4->setMaximumSize(QSize(16777215, 450));
        pushButton_4->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_4, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy4.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy4);
        pushButton_3->setMinimumSize(QSize(0, 196));
        pushButton_3->setMaximumSize(QSize(16777215, 450));
        pushButton_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMinimumSize(QSize(0, 196));
        pushButton->setMaximumSize(QSize(16777215, 450));
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        pushButton_2->setMinimumSize(QSize(0, 196));
        pushButton_2->setMaximumSize(QSize(16777215, 450));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy4.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy4);
        pushButton_5->setMinimumSize(QSize(0, 196));
        pushButton_5->setMaximumSize(QSize(16777215, 450));
        pushButton_5->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(229, 217, 190);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setContentsMargins(30, -1, 30, -1);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(100, 30));
        label_17->setMaximumSize(QSize(16777215, 50));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_17, 0, 4, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(100, 30));
        label_16->setMaximumSize(QSize(16777215, 100));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_16, 0, 3, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(100, 30));
        label_20->setMaximumSize(QSize(16777215, 100));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_20, 0, 2, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setMinimumSize(QSize(100, 30));
        label_23->setMaximumSize(QSize(16777215, 100));
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_23, 0, 1, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(100, 30));
        label_18->setMaximumSize(QSize(16777215, 100));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 120));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_2->addWidget(label);

        FilmsCollection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FilmsCollection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        FilmsCollection->setMenuBar(menubar);
        statusbar = new QStatusBar(FilmsCollection);
        statusbar->setObjectName("statusbar");
        FilmsCollection->setStatusBar(statusbar);

        retranslateUi(FilmsCollection);

        QMetaObject::connectSlotsByName(FilmsCollection);
    } // setupUi

    void retranslateUi(QMainWindow *FilmsCollection)
    {
        FilmsCollection->setWindowTitle(QCoreApplication::translate("FilmsCollection", "MainWindow", nullptr));
        label_2->setText(QString());
        pushButton_12->setText(QString());
        pushButton_11->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QCoreApplication::translate("FilmsCollection", "search", nullptr));
        pushButton_16->setText(QString());
        label_4->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p><span style=\" font-size:24pt;\">Your Collections</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FilmsCollection", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FilmsCollection", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("FilmsCollection", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FilmsCollection", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FilmsCollection", "PushButton", nullptr));
        label_17->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("FilmsCollection", "<html><head/><body><p align=\"center\">Fim name</p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilmsCollection: public Ui_FilmsCollection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMSCOLLECTION_H
