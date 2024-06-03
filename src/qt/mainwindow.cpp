#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filmpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_6_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_8_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_9_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_10_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}


void MainWindow::on_pushButton_7_clicked()
{
    hide();
    fip = new FilmPage(this);
    fip->show();
}

