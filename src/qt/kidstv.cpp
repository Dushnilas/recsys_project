#include "kidstv.h"
#include "ui_kidstv.h"

KidsTV::KidsTV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KidsTV)
{
    ui->setupUi(this);
}

KidsTV::~KidsTV()
{
    delete ui;
}
