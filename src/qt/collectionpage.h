#ifndef COLLECTIONPAGE_H
#define COLLECTIONPAGE_H

#include <QMainWindow>

namespace Ui {
class CollectionPage;
}
class FilmPage;

class CollectionPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit CollectionPage(QWidget *parent = nullptr);
    ~CollectionPage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::CollectionPage *ui;
    FilmPage *fip;

};

#endif // COLLECTIONPAGE_H
