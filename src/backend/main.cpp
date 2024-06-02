#include <iostream>
#include <vector>
#include <iomanip>
//#include "cosine_distance.h"
//#include "word_to_vec.h"
#include "movie/movies.h"
#include "users/user_and_dev.h"
#include "logger/logger.h"
#include "../../libraries/mysql-queries/mysql-queries.h"


std::shared_ptr<AllUsers> main_user;

FilmType strToType(const std::string& type){
    if (type == "Movie") return FilmType::Movie;
    else if (type == "TvMovie") return FilmType::TvMovie;
    else if (type == "TvSeries") return FilmType::TvSeries;

    return FilmType::Default;
}


void loadMovies(std::vector<std::shared_ptr<Movie>> &allMovies) {
    std::string query = "SELECT t.title_name, t.tconst, t.description, t.title_type, t.year_start, t.year_end, "
                        "t.is_adult, r.rating, r.num_votes FROM titles t JOIN ratings r ON t.tconst = r.tconst WHERE "
                        "t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200;";
    std::vector<std::map<std::string, std::string>> buf = ExecuteSelectQuery("library", query);

    int counter = 0;
    for (auto el: buf){
//        std::cout << el["tconst"] << ' ' << el["year_start"] << ' ' << el["year_end"] << '1' << el["id_adult"] << '2' << el["num_votes"] << '\n';
        auto movie = std::make_shared<Movie>(el["title_name"], el["tconst"],  el["description"],
                                             strToType(el["title_type"]), std::stoi(el["year_start"]), std::stoi(el["year_end"]),
                                             std::stoi(el["is_adult"]), std::stod(el["rating"]), std::stoi(el["num_votes"]));
        allMovies.push_back(movie);
        counter++;
    }

    Logger::getInstance().logInfo(std::to_string(counter) + "movies was uploaded.");
}

std::vector<std::shared_ptr<Movie>> getMoviesSorted(const std::vector<std::shared_ptr<Movie>>& allMovies,
                                                    int n, const std::string& genre="") {

    std::vector<std::shared_ptr<Movie>> genreMovies;

    if (!genre.empty()) {
        for (const auto &movie: allMovies) {
            if (std::find(movie->getGenre().begin(), movie->getGenre().end(), genre) != movie->getGenre().end()) {
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

bool SignIn(const std::string& login, const std::string& password){
    std::vector<std::map<std::string, std::string>> buf;

    for (const auto& el: buf){
        if (login == el.at("user_id") and password == el.at("pass")){
            main_user = std::make_shared<User>(el.at("name"), el.at("lastname"), login, password);
            main_user->setEmail(el.at("email"));
            main_user->setPhoto(el.at("photo_url"));
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
    initializePythonInterpreter(PROJECT_PATH);
    Logger::getInstance().setLogFile("/Users/senya/CLionProjects/recsys_project/src/Data/LogFile.txt");
    std::vector<std::shared_ptr<Movie>> all_movies;
    loadMovies(all_movies);
    std::cout << all_movies.size() << '\n';

    std::string sign = "";
    while (sign != "in" and sign != "up"){
        std::cout << "Do you want to sign in or sing up (write in or up): ";
        std::cin >> sign;
    }

    std::string login, password;
    std::cout << std::left << std::setw(10) << "Login: ";
    std::cin >> login;
    std::cout << std::left << std::setw(10) << "Password: ";
    std::cin >> password;

    if (sign == "in"){
        while (!SignIn(login, password)){
            std::cout << "User with this login already exists. Try again." << '\n';
            std::cout << std::left << std::setw(10) << "Login: ";
            std::cin >> login;
            std::cout << std::left << std::setw(10) << "Password: ";
            std::cin >> password;
        }

        std::cout << main_user->getName() << " welcome to Maze online cinema"  << '\n';
    }
    else if (sign == "up"){
        while (!SignUp(login, password)){
            std::cout << "Wrong login or password. Try again." << '\n';
            std::cout << std::left << std::setw(10) << "Login: ";
            std::cin >> login;
            std::cout << std::left << std::setw(10) << "Password: ";
            std::cin >> password;
        }

        std::cout << main_user->getName() << " welcome to Maze online cinema";
    }

    int action = 1;
    while (action != 0){
        std::cout << "Choose one of options:" << '\n';
        std::cout << "1. Search" << '\n';
        std::cout << "2. Add collection" << '\n';
        std::cout << "3. Open collections" << '\n';
        std::cout << "4. Open movies in collection" << '\n';
        std::cout << "5. Add movie to collection" << '\n';
        std::cout << "6. Remove movie from collection" << '\n';
        std::cout << "7. Add movie to collection" << '\n';
        std::cout << "0. Exit" << '\n';
        std::cout << "Your action: ";
        std::cin >> action;

        switch (action) {
            case 1:
                std::string movie_name;
                std::vector<std::shared_ptr<Movie>> search_mode;

                std::cout << "Search: ";
                std::cin >> movie_name;
                searchMovies(all_movies, search_mode, movie_name, 10);

                std::cout << "If you want to see more information about the film type 'Info movie_number'" << '\n';
                for (int i = 1; i < search_mode.size() + 1; i++){
                    std::cout << i << ". " << search_mode[i]->getName() << '\n';
                }
        }
    }

//    auto movie = std::make_shared<Movie>("Aboba", "23456", "Western", "Lupa zabolel i za Lupu na rabotu vishel Pupa",
//                FilmType::TvSeries, 1909, 2024, true, 8.1, 7845);
//
//    auto actor = std::make_shared<Actor>("Pupa", "2344567", "porthub", 2000, 0, 1);
//
//    movie->addActor(actor);
//
//    User Aleko("Aleko", "Messi", "abobus233", "123456");
//
//    Aleko.createCol("Plusi Dla loxov");
//
//    auto all_collections = Aleko.getAllCol();
//
//    for (const auto& col : all_collections){
//        if (col->getName() == "Plusi Dla loxov"){
//            col->addMovie(movie);
//            auto all_movies = col->getMovies();
//
//            for (const auto& mov : all_movies){
//                std::cout << mov->getName() << '\n';
//            }
//        }
//    }

    finalizePythonInterpreter();
    return 0;
}
