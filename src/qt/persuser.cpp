#include "persuser.h"
#include "ui_persuser.h"

PersUser::PersUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PersUser)
{
    ui->setupUi(this);
}

PersUser::~PersUser()
{
    delete ui;
}
