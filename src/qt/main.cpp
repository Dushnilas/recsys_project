#include "main_page.h"

#include <QApplication>
#include <QToolBar>
#include <QAction>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_page w;
    w.show();
    return a.exec();
}
