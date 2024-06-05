#include "searchfilm.h"
#include "ui_searchfilm.h"

#include "stringpass.h"
#include "backend.h"
#include <QString>
#include <QPushButton>  // Подключаем класс QPushButton для создания кнопок
#include <QVBoxLayout>  // Подключаем класс QVBoxLayout для вертикального размещения виджетов
#include <QDebug>  // Подключаем класс QDebug для отладки
#include <QPixmap>  // Подключаем класс QPixmap для работы с изображениями
#include <QLabel>  // Подключаем класс QLabel для создания меток

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



/// Функция для обновления кнопок и меток в пользовательском интерфейсе
void SearchFilm::updateButtons(const std::vector<std::shared_ptr<Movie>>& results)
{
    // Удаляем существующие элементы (если они есть)
    QLayoutItem *item;
    while ((item = ui->buttonContainer->layout()->takeAt(0)) != nullptr) {
        delete item->widget();  // Удаляем виджет (кнопку или метку)
        delete item;  // Удаляем элемент макета
    }

    // Для каждого найденного фильма создаем кнопку и метку
    for (const auto& movie : results) {
        // Создаем кнопку с названием фильма
        QPushButton *button = new QPushButton(this);

        // Устанавливаем изображение на кнопку
        QString imagePath = QString::fromStdString(movie->getImagePath());  // Получаем путь к изображению фильма
        QPixmap pixmap(imagePath);  // Загружаем изображение
        QIcon ButtonIcon(pixmap);  // Создаем иконку из изображения
        button->setIcon(ButtonIcon);  // Устанавливаем иконку на кнопку
        button->setIconSize(pixmap.rect().size());  // Устанавливаем размер иконки

        // Подключаем обработчик нажатия кнопки
        connect(button, &QPushButton::clicked, this, [=]() {
            // Обработка нажатия кнопки (если нужно)
            qDebug() << "Button clicked for movie: " << QString::fromStdString(movie->getTitle());
        });

        // Создаем метку с названием фильма
        QLabel *label = new QLabel(QString::fromStdString(movie->getTitle()), this);
        label->setAlignment(Qt::AlignCenter);  // Центрируем текст метки

        // Создаем вертикальный макет для кнопки и метки
        QVBoxLayout *vLayout = new QVBoxLayout;
        vLayout->addWidget(button);  // Добавляем кнопку в макет
        vLayout->addWidget(label);  // Добавляем метку в макет

        // Создаем виджет-контейнер для макета

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


void SearchFilm::on_pushButton_11_clicked()
{

}

