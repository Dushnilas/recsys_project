#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H

#include <QMainWindow>
#include <QApplication>
#include <QToolBar>
#include <QAction>
#include <QIcon>


QT_BEGIN_NAMESPACE
namespace Ui {
class Main_page;
}
QT_END_NAMESPACE

class Main_page : public QMainWindow
{
    Q_OBJECT

public:
    Main_page(QWidget *parent = nullptr);
    ~Main_page();

private:
    Ui::Main_page *ui;
    QToolBar *toolbar;
};
#endif // MAIN_PAGE_H
