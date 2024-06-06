#include "searchfilm.h"
#include "ui_searchfilm.h"
#include <string>

#include "stringpass.h"
#include "backend.h"
#include <QString>
#include <QPushButton>  // Подключаем класс QPushButton для создания кнопок
#include <QVBoxLayout>  // Подключаем класс QVBoxLayout для вертикального размещения виджетов
#include <QDebug>  // Подключаем класс QDebug для отладки
#include <QPixmap>  // Подключаем класс QPixmap для работы с изображениями
#include <QLabel>  // Подключаем класс QLabel для создания меток
#include <QMessageBox>

SearchFilm::SearchFilm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SearchFilm)

{
    ui->setupUi(this);
}





void SearchFilm::receiveSearchQuery(const QString &query) {
    stringVariable = query.toStdString();

    // Теперь stringVariable можно использовать в функциях класса SearchFilm
}




std::vector<QSharedPointer<Movie>> results;

std::string filmNameString;





bool SearchFilm::Search_Films_Overall(const std::vector<QSharedPointer<Movie>> AllMovies, std::vector<QSharedPointer<Movie>>& buf,
                                      std::string query)
{
    // std::cout << SEARCH_GROB;



    searchMovies(AllMovies, buf, query, 10);  // Вызываем функцию поиска фильмов
    return !buf.empty();  // Возвращаем true, если найдены фильмы, иначе false
}


void SearchFilm::on_SearchFilmButSerarchbyGen_clicked()
{
    QString filmName = ui->lineEditSearchFilmByGen->text();
    SEARCH_GROB = filmName.toStdString();
    filmNameString = filmName.toStdString();

    if(Search_Films_Overall(all_movies,results,filmNameString))
    {
        updateButtons();


    }
    else
    {
        QMessageBox messBox;
        messBox.setText("Failed to load");
        messBox.exec();


    }

}


/// Функция для обновления кнопок и меток в пользовательском интерфейсе
void SearchFilm::updateButtons()
{
    // Удаляем существующие элементы (если они есть)

    QLayoutItem *item;
    while ((item = ui->buttonContainer->layout()->takeAt(0)) != nullptr) {
        delete item->widget();  // Удаляем виджет (кнопку или метку)
        delete item;  // Удаляем элемент макета
    }


    std::vector<QSharedPointer<Movie>> results;

    if (Search_Films_Overall(all_movies, results, filmNameString)){
        // Для каждого найденного фильма создаем кнопку и метку

        for (const auto& movie : results) {


            // Создаем кнопку с названием фильма
            QPushButton *button = new QPushButton(this);

            // Устанавливаем изображение на кнопку
            QString imagePath = QString::fromStdString(movie->getPhoto());  // Получаем путь к изображению фильма
            QPixmap pixmap(imagePath);  // Загружаем изображение
            //QIcon ButtonIcon(pixmap);  // Создаем иконку из изображения
            //button->setIcon(ButtonIcon);  // Устанавливаем иконку на кнопку
            //button->setIconSize(pixmap.rect().size());  // Устанавливаем размер иконки

            // Подключаем обработчик нажатия кнопки
            connect(button, &QPushButton::clicked, this, [=]() {
                // Обработка нажатия кнопки (если нужно)

                qDebug() << "Button clicked for movie: " << QString::fromStdString(movie->getTconst());
            });

            // Создаем метку с названием фильма
            QLabel *label = new QLabel(QString::fromStdString(movie->getName()), this);
            label->setAlignment(Qt::AlignCenter);  // Центрируем текст метки

            // Создаем вертикальный макет для кнопки и метки
            QVBoxLayout *vLayout = new QVBoxLayout;
            vLayout->addWidget(button);  // Добавляем кнопку в макет
            vLayout->addWidget(label);  // Добавляем метку в макет

            // Создаем виджет-контейнер для макета
        }
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



// void SearchFilm::on_SearchFilmButSerarchbyGen_clicked()
// {
//     QString filmName = ui->lineEditSearchFilmByGen->text();
// }

