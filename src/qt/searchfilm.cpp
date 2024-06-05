#include "searchfilm.h"
#include "ui_searchfilm.h"

#include "stringpass.h"
#include <QString>

SearchFilm::SearchFilm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SearchFilm)
{
    ui->setupUi(this);

}
static QString filmname;

void printClassString(StringPass &stringpass) {
    filmname = stringpass.getString();
}


bool SearchFilm::Search_Films_Overall(std::vector<std::shared_ptr<Movie>>& result, std::string query)
{
    //QString searchPM = ui->lineEditPM->text();

    searchMovies(result,query,10);
    if (!result.empty()){

        return true;
    }

    return false;
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

