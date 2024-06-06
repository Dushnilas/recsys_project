#include "searchfilm.h"
#include "ui_searchfilm.h"
#include "backend.h"

#include "stringpass.h"
#include "backend.h"
#include <QString>
#include <QPushButton>  // Подключаем класс QPushButton для создания кнопок
#include <QVBoxLayout>  // Подключаем класс QVBoxLayout для вертикального размещения виджетов
#include <QDebug>  // Подключаем класс QDebug для отладки
#include <QPixmap>  // Подключаем класс QPixmap для работы с изображениями

SearchFilm::SearchFilm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SearchFilm)
{
    ui->setupUi(this);


}

//film serach pass
static QString filmname;
std::vector<std::shared_ptr<Movie>> results;


void printClassString(StringPass &stringpass) {
    filmname = stringpass.getString();
}


bool SearchFilm::Search_Films_Overall(std::vector<std::shared_ptr<Movie>>& result, std::string query)
{

    searchMovies(result, query, 10);  // Вызываем функцию поиска фильмов
    return !result.empty();  // Возвращаем true, если найдены фильмы, иначе false
}



// Функция для обновления кнопок в пользовательском интерфейсе
void SearchFilm::updateButtons(const std::vector<std::shared_ptr<Movie>>& results)
{
    // Удаляем существующие кнопки (если они есть)
    QLayoutItem *item;
    while ((item = ui->buttonContainer->layout()->takeAt(0)) != nullptr) {
        delete item->widget();  // Удаляем виджет (кнопку)
        delete item;  // Удаляем элемент макета
    }

    // Для каждого найденного фильма создаем кнопку
    for (const auto& movie : results) {
        QPushButton *button = new QPushButton(QString::fromStdString(movie->getTconst()), this);  // Создаем кнопку с названием фильма

        // Подключаем обработчик нажатия кнопки
        connect(button, &QPushButton::clicked, this, [=]() {
            // Обработка нажатия кнопки (если нужно)
            qDebug() << "Button clicked for movie: " << QString::fromStdString(movie->getTconst());
        });

        // Устанавливаем изображение на кнопку
        QString imagePath = QString::fromStdString(movie->getPhoto());  // Получаем путь к изображению фильма
        QPixmap pixmap(imagePath);  // Загружаем изображение
        QIcon ButtonIcon(pixmap);  // Создаем иконку из изображения
        button->setIcon(ButtonIcon);  // Устанавливаем иконку на кнопку
        button->setIconSize(pixmap.rect().size());  // Устанавливаем размер иконки

        // Добавляем кнопку в контейнер с вертикальным макетом
        ui->buttonContainer->layout()->addWidget(button);  // Добавляем кнопку в макет
    }
}


SearchFilm::~SearchFilm()
{
    delete ui;
}

//Header


void SearchFilm::on_HomeFSerach_clicked()
{
    hide();

    pmFS = new PageMain(this);
    pmFS->show();
}


void SearchFilm::on_FilmsBFSearch_clicked()
{
    hide();

    uiFS = new UserInfo(this);
    uiFS ->show();
}


void SearchFilm::on_TVShoesBFSeach_clicked()
{
    hide();

    tvsFS = new TVShows(this);
    tvsFS ->show();
}


void SearchFilm::on_KidsBFSearch_clicked()
{
    hide();

    kidsFS = new KidsTV(this);
    kidsFS->show();
}


void SearchFilm::on_UserBFSearch_clicked()
{

    hide();

    puFS = new PersUser(this);
    puFS->show();

}

