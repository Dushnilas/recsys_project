#include "kidstv.h"
#include "ui_kidstv.h"
#include "filmpage.h"
#include "backend.h"

KidsTV::KidsTV(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KidsTV)
{
    //kids = getMoviesSorted(20, is_adult=false);
    ui->setupUi(this);


    // Создание и настройка MovieWidget
    movieWidget = new MovieWidget(this, ui);

    // Получение списка фильмов для детей

    kids = getMoviesSorted(15, "", FilmType::Default, false);

    QVector<std::shared_ptr<Movie>> qMovies(kids.begin(), kids.end());

    // Передайте qMovies в метод setMovies
    movieWidget->setMovies(qMovies);

    for (int i = 0; i < qMovies.size() && i < buttons.size(); ++i) {
        QPixmap photo = QPixmap::fromImage(QImage(QString::fromStdString(qMovies[i]->getPhoto())));
        buttons[i]->setIcon(QIcon(photo));
        buttons[i]->setIconSize(QSize(150, 200)); // Установить размер иконки

        labels[i]->setText(QString::fromStdString(qMovies[i]->getName()));

        // Сохраняем указатель на фильм для последующего использования
        buttonMovieMap[buttons[i]] = qMovies[i];

        // Подключаем сигнал clicked к лямбда-функции
        connect(buttons[i], &QPushButton::clicked, this, [this, i]() {
            // При нажатии на кнопку отображаем детали фильма
            showMovieDetails(i);
        });
    }
}

KidsTV::~KidsTV()
{
    delete ui;
}

//Header

void KidsTV::on_HomeButKid_clicked()
{
    hide();

    pmK = new PageMain(this);
    pmK->show();
}


void KidsTV::on_FilmsButKid_clicked()
{
    hide();

    uiK = new UserInfo(this);
    uiK->show();

}


void KidsTV::on_TVShowsButKid_clicked()
{
    hide();
    tvsK = new TVShows(this);
    tvsK->show();
}
void KidsTV::on_KidsButKid_clicked()
{
    //
}
void KidsTV::on_UserButKid_clicked()
{
    hide();

    puK = new PersUser(this);
    puK->show();
}
void KidsTV::on_SearchByGKid_clicked()
{
    hide();
    sf = new SearchFilm(this);
    sf->show();
}


