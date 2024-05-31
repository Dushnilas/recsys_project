/********************************************************************************
** Form generated from reading UI file 'main_page.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PAGE_H
#define UI_MAIN_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_page
{
public:
    QAction *actionMovies;
    QAction *actionTV_shows;
    QAction *actionFor_kIds;
    QAction *actionMain_Menu;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menumovies;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_page)
    {
        if (Main_page->objectName().isEmpty())
            Main_page->setObjectName("Main_page");
        Main_page->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Main_page->sizePolicy().hasHeightForWidth());
        Main_page->setSizePolicy(sizePolicy);
        actionMovies = new QAction(Main_page);
        actionMovies->setObjectName("actionMovies");
        QIcon icon;
        icon.addFile(QString::fromUtf8("pics/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-05-31 \320\262 15.22.20.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMovies->setIcon(icon);
        actionTV_shows = new QAction(Main_page);
        actionTV_shows->setObjectName("actionTV_shows");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("pics/\320\241\320\275\320\270\320\274\320\276\320\272 \321\215\320\272\321\200\320\260\320\275\320\260 2024-05-31 \320\262 15.24.51.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTV_shows->setIcon(icon1);
        actionFor_kIds = new QAction(Main_page);
        actionFor_kIds->setObjectName("actionFor_kIds");
        actionMain_Menu = new QAction(Main_page);
        actionMain_Menu->setObjectName("actionMain_Menu");
        centralwidget = new QWidget(Main_page);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        Main_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_page);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        sizePolicy.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy);
        menumovies = new QMenu(menubar);
        menumovies->setObjectName("menumovies");
        Main_page->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_page);
        statusbar->setObjectName("statusbar");
        Main_page->setStatusBar(statusbar);

        menubar->addAction(menumovies->menuAction());
        menumovies->addAction(actionMovies);
        menumovies->addAction(actionTV_shows);
        menumovies->addAction(actionFor_kIds);
        menumovies->addAction(actionMain_Menu);
        menumovies->addSeparator();

        retranslateUi(Main_page);
        QObject::connect(menubar, &QMenuBar::customContextMenuRequested, menubar, qOverload<>(&QMenuBar::setFocus));

        QMetaObject::connectSlotsByName(Main_page);
    } // setupUi

    void retranslateUi(QMainWindow *Main_page)
    {
        Main_page->setWindowTitle(QCoreApplication::translate("Main_page", "Main_page", nullptr));
        actionMovies->setText(QCoreApplication::translate("Main_page", "Movies", nullptr));
        actionTV_shows->setText(QCoreApplication::translate("Main_page", "TV shows", nullptr));
        actionFor_kIds->setText(QCoreApplication::translate("Main_page", "For kIds", nullptr));
        actionMain_Menu->setText(QCoreApplication::translate("Main_page", "Main Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("Main_page", "PushButton", nullptr));
        menumovies->setTitle(QCoreApplication::translate("Main_page", "movies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_page: public Ui_Main_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PAGE_H
