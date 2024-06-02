#include <iostream>
#include <vector>
#include <iomanip>
#include "cosine_distance.h"
#include "word_to_vec.h"
#include "movie/movies.h"
#include "users/user_and_dev.h"
#include "logger/logger.h"


std::shared_ptr<AllUsers> main_user;

std::vector<std::shared_ptr<Movie>> getMoviesSorted(const std::vector<std::shared_ptr<Movie>>& allMovies,
                                                    int n, const std::string& genre="") {

    std::vector<std::shared_ptr<Movie>> genreMovies;

    if (!genre.empty()) {
        for (const auto &movie: allMovies) {
            if (movie->getGenre() == genre) {
                genreMovies.push_back(movie);
            }
        }
    }

    std::sort(genreMovies.begin(), genreMovies.end(),[](const std::shared_ptr<Movie>& a, const std::shared_ptr<Movie>& b) {
                  return a->getRating() > b->getRating(); });

    if (genreMovies.size() <= n) return genreMovies;
    return {genreMovies.begin(), genreMovies.begin() + n};
}

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

bool SignIn(const std::string& login, const std::string& password){
    std::vector<std::map<std::string, std::string>> buf;

    for (const auto& el: buf){
        if (login == el.at("user_id") and password == el.at("pass")){
            main_user = std::make_shared<User>(el.at("name"), el.at("lastname"), login, password);
            return true;
        }
    }
    Logger::getInstance().logError("Wrong login or password");
    return false;
}

bool SignUp(const std::string& login, const std::string& password){
    std::vector<std::map<std::string, std::string>> buf;

    if (std::find_if(buf.begin(), buf.end(), [&](const auto& c) {
        return login == c.at("user_id"); }) == buf.end()) {
        Logger::getInstance().logInfo("User " + login = " signed up.");
        main_user = std::make_shared<User>(login, "", login, password);
        return true;
    }

    Logger::getInstance().logError("User with this login already exists.");
    return false;
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
