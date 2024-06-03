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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KidsTV
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KidsTV)
    {
        if (KidsTV->objectName().isEmpty())
            KidsTV->setObjectName("KidsTV");
        KidsTV->resize(800, 600);
        centralwidget = new QWidget(KidsTV);
        centralwidget->setObjectName("centralwidget");
        KidsTV->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KidsTV);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
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
    } // retranslateUi

};

namespace Ui {
    class KidsTV: public Ui_KidsTV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIDSTV_H
