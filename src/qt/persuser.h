#ifndef PERSUSER_H
#define PERSUSER_H

#include <QMainWindow>

namespace Ui {
class PersUser;
}

class PersUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit PersUser(QWidget *parent = nullptr);
    ~PersUser();

private:
    Ui::PersUser *ui;
};

#endif // PERSUSER_H
