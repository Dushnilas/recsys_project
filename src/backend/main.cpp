#include <iostream>
#include <vector>
#include <iomanip>
#include "cosine_distance.h"
#include "word_to_vec.h"
#include "movie/movies.h"
#include "users/user_and_dev.h"
#include "logger/logger.h"




int main() {
    Logger::getInstance().setLogFile("/Users/senya/CLionProjects/recsys_project/src/Data/LogFile.txt");

    auto movie = std::make_shared<Movie>("Aboba", "23456", "Western", "Lupa zabolel i za Lupu na rabotu vishel Pupa",
                FilmType::TvSeries, 1909, 2024, true, 8.1, 7845);

    auto actor = std::make_shared<Actor>("Pupa", "2344567", "porthub", 2000, 0, 1);

    movie->addActor(actor);

    User Aleko("Aleko", "Messi", "abobus233", "123456");

    Aleko.createCol("Plusi Dla loxov");

    auto all_collections = Aleko.getAllCol();

    for (auto col : all_collections){
        if (col->getName() == "Plusi Dla loxov"){
            col->addMovie(movie);
            auto all_movies = col->getMovies();

            for (auto mov : all_movies){
                std::cout << mov->getName() << '\n';
            }
        }
    }
    return 0;
}
