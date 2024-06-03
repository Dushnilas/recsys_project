#ifndef FILMSCOLLECTION_H
#define FILMSCOLLECTION_H

#include <QMainWindow>

namespace Ui {
class FilmsCollection;
}
class CollectionPage;

class FilmsCollection : public QMainWindow
{
    Q_OBJECT

public:
    explicit FilmsCollection(QWidget *parent = nullptr);
    ~FilmsCollection();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::FilmsCollection *ui;
    CollectionPage *cpage;
};

#endif // FILMSCOLLECTION_H
