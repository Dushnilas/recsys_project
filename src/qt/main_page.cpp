#include "main_page.h"
#include "./ui_main_page.h"

Main_page::Main_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_page)
{
    ui->setupUi(this);
    //ui->menubar->

    // Создание QToolBar
    toolbar = addToolBar("Main Toolbar");

    //Создание действий (actions)
    QAction *newAction = new QAction(QIcon(":/pics/house.png"), "New", this);
    QAction *openAction = new QAction(QIcon(":/pics/house.png"), "Open", this);
    QAction *saveAction = new QAction(QIcon(":/pics/house.png"), "Save", this);

    // Добавление действий в QToolBar
    toolbar->addAction(newAction);
    toolbar->addAction(openAction);
    toolbar->addAction(saveAction);
}

Main_page::~Main_page()
{
    delete ui;
}
