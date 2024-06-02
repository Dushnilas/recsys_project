#include <iostream>
#include <vector>
#include <iomanip>
#include "cosine_distance.h"
#include "word_to_vec.h"
#include "movie/movies.h"
#include "users/user_and_dev.h"
#include "logger/logger.h"


bool compareMovies(const std::shared_ptr<Movie>& m1, const std::shared_ptr<Movie>& m2, const std::string& query) {
    size_t pos1 = m1->getName().find(query);
    size_t pos2 = m2->getName().find(query);

    if (pos1 != pos2) return pos1 < pos2;
    return m1->getName().length() < m2->getName().length();
}

std::vector<std::shared_ptr<Movie>> searchMovies(const std::vector<std::shared_ptr<Movie>>& all_movies,
                                                 std::vector<std::shared_ptr<Movie>>& result, const std::string& query) {

    for (const auto& movie : all_movies) {
        if (movie->getName().find(query) != std::string::npos) {
            result.push_back(movie);
        }
    }

    std::sort(result.begin(), result.end(), [&](const std::shared_ptr<Movie>& m1, const std::shared_ptr<Movie>& m2) {
        return compareMovies(m1, m2, query); });

    return result;
}

int main() {
    Logger::getInstance().setLogFile("/Users/senya/CLionProjects/recsys_project/src/Data/LogFile.txt");

    auto movie = std::make_shared<Movie>("Aboba", "23456", "Western", "Lupa zabolel i za Lupu na rabotu vishel Pupa",
                FilmType::TvSeries, 1909, 2024, true, 8.1, 7845);

    auto actor = std::make_shared<Actor>("Pupa", "2344567", "porthub", 2000, 0, 1);

    movie->addActor(actor);

    User Aleko("Aleko", "Messi", "abobus233", "123456");

    Aleko.createCol("Plusi Dla loxov");

    auto all_collections = Aleko.getAllCol();

    for (const auto& col : all_collections){
        if (col->getName() == "Plusi Dla loxov"){
            col->addMovie(movie);
            auto all_movies = col->getMovies();

            for (const auto& mov : all_movies){
                std::cout << mov->getName() << '\n';
            }
        }
    }
    return 0;
}
