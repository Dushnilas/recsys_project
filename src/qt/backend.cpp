#include <iostream>
#include <vector>
#include <iomanip>
#include "../backend/libraries/Classes/movie/movies.h"
#include "../backend/libraries/Classes/users/user_and_dev.h"
#include "../backend/libraries/Classes/logger/logger.h"
#include "../backend/libraries/mysql-queries/mysql-queries.h"
#include "backend.h"


FilmType strToType(const std::string& type){
    if (type == "Movie") return FilmType::Movie;
    else if (type == "TvMovie") return FilmType::Movie;
    else if (type == "TvSeries") return FilmType::TvSeries;

    return FilmType::Default;
}


void loadMovies(std::vector<std::shared_ptr<Movie>> &allMovies) {
    // Load all genres in map {tconst: [genre1, genre2, ...]}
    std::map<std::string, std::vector<std::string>> genres;
    std::string query = "SELECT top_movies.tconst, g.genre_name FROM (SELECT t.tconst FROM titles t JOIN ratings r ON "
                        "t.tconst = r.tconst WHERE t.description IS NOT NULL AND t.description != '' AND t.year_start > "
                        "1950 AND r.num_votes > 200 ORDER BY r.num_votes DESC LIMIT 10000) AS top_movies JOIN "
                        "titles_genres tg ON top_movies.tconst = tg.tconst JOIN genres g ON tg.genre_id = g.genre_id "
                        "ORDER BY (SELECT r.num_votes FROM ratings r WHERE r.tconst = top_movies.tconst) DESC;";
    genres = ExecuteSelectGenresQuery("library", query);

    // Load all movies in vector of maps [{title_name: name, ...}, {title_name: name, ...}]
    query = "SELECT t.title_name, t.tconst, t.description, t.title_type, t.year_start, t.year_end, "
            "t.is_adult, r.rating, r.num_votes FROM titles t JOIN ratings r ON t.tconst = r.tconst WHERE "
            "t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200 "
            "ORDER BY r.num_votes DESC LIMIT 10000;";
    std::vector<std::map<std::string, std::string>> buf = ExecuteSelectQuery("library", query);

    int counter = 0;
    for (auto el: buf){
        auto movie = std::make_shared<Movie>(el["title_name"], el["tconst"],  el["description"],
                                             strToType(el["title_type"]), std::stoi(el["year_start"]), std::stoi(el["year_end"]),
                                             std::stoi(el["is_adult"]), std::stod(el["rating"]), std::stoi(el["num_votes"]));
        allMovies.push_back(movie);
        movie->setGenre(genres[el["tconst"]]);
        counter++;
    }

    Logger::getInstance().logInfo(std::to_string(counter) + " movies was uploaded.");
}

std::vector<std::shared_ptr<Movie>> getMoviesSorted(const std::vector<std::shared_ptr<Movie>>& allMovies,
                                                    int n, const std::string& genre, const FilmType filmType,
                                                    const bool is_adult) {

    std::vector<std::shared_ptr<Movie>> genreMovies;

    if (!genre.empty()) {
        for (const auto &movie: allMovies) {
            if (std::find(movie->getGenre().begin(), movie->getGenre().end(), genre) != movie->getGenre().end()) {
                genreMovies.push_back(movie);
            }
        }
    }
    else if (filmType != FilmType::Default){
        for (const auto &movie: allMovies) {
            if (movie->getFilmType() == filmType) {
                genreMovies.push_back(movie);
            }
        }
    }
    else if (!is_adult){
        for (const auto &movie: allMovies) {
            if (movie->IsAdult() == 0) {
                genreMovies.push_back(movie);
            }
        }
    }

    std::sort(genreMovies.begin(), genreMovies.end(),[](const std::shared_ptr<Movie>& a, const std::shared_ptr<Movie>& b) {
        return a->getRating() > b->getRating(); });

    if (genreMovies.size() <= n) return genreMovies;
    return {genreMovies.begin(), genreMovies.begin() + n};
}

void getRecommendation();

bool compareMovies(const std::shared_ptr<Movie>& m1, const std::shared_ptr<Movie>& m2, const std::string& query) {
    size_t pos1 = m1->getName().find(query);
    size_t pos2 = m2->getName().find(query);

    if (pos1 != pos2) return pos1 < pos2;
    return m1->getName().length() < m2->getName().length();
}

void searchMovies(const std::vector<std::shared_ptr<Movie>>& all_movies, std::vector<std::shared_ptr<Movie>>& result,
                  const std::string& query, int n) {

    for (const auto& movie : all_movies) {
        if (movie->getName().find(query) != std::string::npos) {
            result.push_back(movie);
        }
    }

    std::sort(result.begin(), result.end(), [&](const std::shared_ptr<Movie>& m1, const std::shared_ptr<Movie>& m2) {
        return compareMovies(m1, m2, query); });

    if (n < result.size()) {
        result.erase(result.begin() + n, result.end());
    }
}

//Log In code

bool SignInFun(const std::string& login, const std::string& password){
    std::string query = "SELECT a.user_id, a.pass, u.name, u.age, u.photo_url FROM auth a JOIN user_profile u ON u.user_id = a.user_id;";
    std::vector<std::map<std::string, std::string>> buf = ExecuteSelectQuery("library", query);
    for (const auto& el: buf){
        if (login == el.at("user_id") and password == el.at("pass")){
            main_user = std::make_shared<User>(el.at("name"), login, password, std::stoi(el.at("age")), el.at("photo_url"));
            main_user->loadCol();
            Logger::getInstance().logError("User " + login + " signed in.");
            return true;
        }
    }
    Logger::getInstance().logError("Wrong login or password");
    buf.clear();
    return false;
}

bool SignUpFun(const std::string& login, const std::string& password){
    std::vector<std::map<std::string, std::string>> buf = ExecuteSelectQuery("library", "SELECT * FROM auth;");;

    if (std::find_if(buf.begin(), buf.end(), [&](const auto& c) {
            return login == c.at("user_id"); }) == buf.end()) {

        std::vector<std::map<std::string, std::string>> data = {
                                                                {{"user_id", login}, {"name", login,}, {"age", "0"}, {"photo_url", ""}}};

        std::vector<std::map<std::string, std::string>> data2 = {
                                                                 {{"user_id", login}, {"pass", password,}}};

        if (ExecuteInsertQuery("library", "insert", "user_profile", data) and
            ExecuteInsertQuery("library", "insert", "auth", data2)){

            Logger::getInstance().logInfo("User " + login + " signed up.");
            main_user = std::make_shared<User>(login, login, password, 0, "");
            main_user->loadCol();
            return true;
        }
    }

    Logger::getInstance().logError("User with this login already exists.");
    buf.clear();
    return false;
}

void print_select_genres(std::vector<std::pair<std::string, std::vector<std::string>>> results) {
    std::cout << "IM OK";
    for (const auto& result : results) {
        std::cout << yellow_color_code << "TConst: " << result.first << "\nGenres: ";
        for (const auto& genre : result.second) {
            std::cout << genre << " ";
        }
        std::cout << "\n";
    }
    std::cout << reset_color_code;
}

void print_select(std::vector<std::map<std::string, std::string>> results) {
    for (const auto& row : results) {
        for (const auto& [key, value] : row) {
            std::cout << yellow_color_code << key << ": " << value << "\t" << reset_color_code;
        }
        std::cout << '\n';
    }
}
