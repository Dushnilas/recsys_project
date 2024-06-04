/********************************************************************************
** Form generated from reading UI file 'tvshows.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TVSHOWS_H
#define UI_TVSHOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TVShows
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TVShows)
    {
        if (TVShows->objectName().isEmpty())
            TVShows->setObjectName("TVShows");
        TVShows->resize(800, 600);
        centralwidget = new QWidget(TVShows);
        centralwidget->setObjectName("centralwidget");
        TVShows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TVShows);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        TVShows->setMenuBar(menubar);
        statusbar = new QStatusBar(TVShows);
        statusbar->setObjectName("statusbar");
        TVShows->setStatusBar(statusbar);

        retranslateUi(TVShows);

        QMetaObject::connectSlotsByName(TVShows);
    } // setupUi

    void retranslateUi(QMainWindow *TVShows)
    {
        TVShows->setWindowTitle(QCoreApplication::translate("TVShows", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TVShows: public Ui_TVShows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TVSHOWS_H
