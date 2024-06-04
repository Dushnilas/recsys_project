#ifndef KIDSTV_H
#define KIDSTV_H

#include <QMainWindow>

namespace Ui {
class KidsTV;
}

class KidsTV : public QMainWindow
{
    Q_OBJECT

public:
    explicit KidsTV(QWidget *parent = nullptr);
    ~KidsTV();

private:
    Ui::KidsTV *ui;
};

#endif // KIDSTV_H
