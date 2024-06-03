#include "pagemain.h"
#include "ui_pagemain.h"
#include "login.h"
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QWidget>


PageMain::PageMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PageMain)
{
    ui->setupUi(this);

    //connect(ui->verticalScrollBar,SIGNAL(sliderMoved(int)),ui->scrollArea,SLOT(setWindowModified(bool)));
}

PageMain::~PageMain()
{
    delete ui;

    // Создаем виджет прокрутки
    scrollArea = new QScrollArea(this);
    setCentralWidget(scrollArea);

    // Создаем подвижный виджет
    movableWidget = new QWidget(this);
    movableWidget->setFixedSize(800, 600); // Устанавливаем размер виджета

    // // Добавляем элементы в подвижный виджет
    // QLabel *label = new QLabel("This is a movable widget", movableWidget);
    // label->move(20, 20);

    QPushButton *button = new QPushButton("Button", movableWidget);
    button->move(20, 60);

    // Устанавливаем подвижный виджет в область прокрутки
    scrollArea->setWidget(movableWidget);

    // Устанавливаем политику прокрутки
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}

void PageMain::on_pushButton_clicked()
{
    hide();
    lg = new LogIn(this);
    lg->show();




}

