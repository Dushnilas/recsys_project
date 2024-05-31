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

    Movie movie("Aboba", "23456", "Western", "Lupa zabolel i za nego na rabotu vishel Zalupa",
                FilmType::TvSeries, 1909, 2024, true, 8.1, 7845);

    Actor actor("Lupa", "2344567", "porthub", 2000, 0, 1);

    movie.addActor(&actor);

    User Aleko("Aleko", "Messi", "abobus233", "123456");

    Aleko.createCol("PORNO");

    auto all_collections = Aleko.getAllCol();

    for (auto col : all_collections){
        if (col.getName() == "PORNO"){
            col.addMovie(&movie);
            auto all_movies = col.getMovies();

            for (auto mov : all_movies){
                std::cout << mov->getName() << '\n';
            }
        }
    }
    return 0;
}
