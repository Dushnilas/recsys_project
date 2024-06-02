#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QToolBox>

namespace Ui {
class MainPage;
}

class MainPage : public QToolBox
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
