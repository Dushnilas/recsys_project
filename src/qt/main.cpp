#include "firstloginsignup.h"
#include "pagemain.h"
#include "userinfo.h"
#include "backend.h"

#include <QApplication>


<<<<<<< HEAD
=======


static std::shared_ptr<AllUsers> main_user;

FilmType strToType(const std::string& type){
    if (type == "Movie") return FilmType::Movie;
    else if (type == "TvMovie") return FilmType::Movie;
    else if (type == "TvSeries") return FilmType::TvSeries;

    return FilmType::Default;
}


void loadMovies(std::vector<std::shared_ptr<Movie>> &allMovies) {
    // Load all genres in map {tconst: [genre1, genre2, ...]}
    std::map<std::string, std::vector<std::string>> genres;
    std::string query = "SELECT t.tconst, g.genre_name FROM titles t JOIN ratings r ON t.tconst = r.tconst JOIN "
                        "titles_genres tg ON t.tconst = tg.tconst JOIN genres g ON tg.genre_id = g.genre_id WHERE "
                        "t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > "
                        "200 ORDER BY r.num_votes DESC;";
    genres = ExecuteSelectGenresQuery("library", query);

    // Load all movies in vector of maps [{title_name: name, ...}, {title_name: name, ...}]
    query = "SELECT t.title_name, t.tconst, t.description, t.title_type, t.year_start, t.year_end, "
                        "t.is_adult, r.rating, r.num_votes FROM titles t JOIN ratings r ON t.tconst = r.tconst WHERE "
                        "t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200 ORDER BY r.num_votes DESC LIMIT 100;";
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

    Logger::getInstance().logInfo(std::to_string(counter) + "movies was uploaded.");
}

std::vector<std::shared_ptr<Movie>> getMoviesSorted(const std::vector<std::shared_ptr<Movie>>& allMovies,
                                                    int n, const std::string& genre="", const FilmType filmType=FilmType::Default,
                                                    const bool is_adult=true) {

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

bool SignIn(const std::string& login, const std::string& password){
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

bool SignUp(const std::string& login, const std::string& password){
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

// ----------------- FUNCTIONS FOR DB TESTING ----------------------
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

 // ------------------ MAIN -------------------
>>>>>>> 5bed1da (fixed insert function)
int main(int argc, char *argv[])
{
    initializePythonInterpreter("/Users/maykorablina/Yandex.Disk.localized/CodingProjects/FUCK/src/backend/libraries/mysql-queries");

    ////     ---------------- TEST OF DATABASE------------------
    ////     ---------------- INITIALIZING VARIABLES -------------
    //    std::vector<std::map<std::string, std::string>> select;
    //    bool update;
    //    bool insert;
    //    bool del;
    //    std::string user_id;
    //    std::string tconst;
    //    std::vector<std::pair<std::string, std::vector<std::string>>> select_genres;
    //    std::string query;
    //    std::string collection_name;
    //    std::string collection_id;
    //    std::string comment;
    //    std::vector<std::map<std::string, std::string>> data;
    //
    ////    ---------------- FUNCTIONS AND QUERIES -----------------
    ////    -------------- SELECT ALL GENRES IN SENYA'S FORMAT
    //    query = "SELECT t.tconst, g.genre_name FROM titles t JOIN ratings r ON t.tconst = r.tconst JOIN titles_genres tg ON t.tconst = tg.tconst JOIN genres g ON tg.genre_id = g.genre_id WHERE t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200 ORDER BY r.num_votes DESC;";
    //    select_genres = ExecuteSelectGenresQuery("library", query);
    //    print_select_genres(select_genres);
    //
    ////    -------------- CHECK REC TABLE --------------
    //    select = ExecuteSelectQuery("library", "SELECT COUNT(*) FROM cb_similarity;");
    //    print_select(select);
    //
    ////    --------------- GET ALL USERS ------------
    //    query = "SELECT * FROM user_profile";
    //    select = ExecuteSelectQuery("library", query);
    //    print_select(select);
    //
    ////    ----------- USER ОЦЕНИВАЕТ FILM --------------
    //    tconst = "tt0096928";
    //    user_id = "PavelPopov";
    //    data = {
    //     {{"user_id", user_id}, {"tconst", tconst}, {"rating", "10"}},
    //     };
    //    insert = ExecuteInsertQuery("library", "insert", "user_ratings", data);
    //
    ////    ------------ GET ONE USER'S RATINGS ------------
    //    user_id = "PavelPopov";
    //    query = "SELECT * FROM user_ratings WHERE user_id = '" + user_id + "';";
    //    select = ExecuteSelectQuery("library", query);
    //    print_select(select);
    //
    ////    ------------- CREATE NEW COLLECTION TO USER ----------------
    //    user_id = "PavelPopov";
    //    collection_name = "DUROV IS THE BEST";
    //    data = {
    //     {{"collection_name", collection_name}, {"user_id", user_id}},
    //     };
    //    insert = ExecuteInsertQuery("library", "insert", "user_collections", data);
    //
    ////    ---------- USER ADDS FILM TO COLLECTION -----------
    ////    ----------ALREADY DONE, THIS PART IS JUST FIOR TESTING----------
    //    user_id = "PavelPopov";
    //    collection_name = "DUROV IS THE BEST";
    //    query = "SELECT collection_id FROM user_collections WHERE user_id = '" + user_id + "' AND collection_name = '" + collection_name + "';";
    //    select = ExecuteSelectQuery("library", query);
    //
    //    tconst = "tt0096928";
    //    collection_id = select[0]["collection_id"];
    //
    //    data = {
    //     {{"collection_id", collection_id}, {"tconst", "tt0103617"}}
    //    };
    //    insert = ExecuteInsertQuery("library", "insert", "titles_collections", data);
    //    query = "SELECT * FROM titles_collections WHERE collection_id = " + collection_id + ";";
    //    select = ExecuteSelectQuery("library", query);
    //    print_select(select);
    //
    //// --------------------- USER WRITES A COMMENT ON FILM -----------------
    //    tconst = "tt0096928";
    //    user_id = "PavelPopov";
    //    comment = "Really like this film!";
    //
    //    data = {
    //        {{"user_id", user_id}, {"tconst", tconst}, {"comment", comment}}
    //    };
    //    insert = ExecuteInsertQuery("library", "insert", "comments", data);
    //
    ////     ------------ GET COMMENTS ON FILM --------------
    //    query = "SELECT * FROM comments WHERE tconst = '" + tconst + "'";
    //    select = ExecuteSelectQuery("library", query);
    //    print_select(select);
    //
    ////     ------------------ INSERT LOG INTO LOG TABLE --------------
    //    data = {
    //        {{"timestamp", "2024-06-02 18:23:13"}, {"type", "[INFO]"}, {"message", "User abobus233 has logged in."}}
    //    };
    //    insert = ExecuteInsertQuery("library", "insert", "logging", data);
    //    query = "SELECT * FROM logging";
    //    select = ExecuteSelectQuery("library", query);
    //    print_select(select);

<<<<<<< HEAD
=======
    // ---------------- TEST OF DATABASE------------------
    // ---------------- INITIALIZING VARIABLES -------------
    std::vector<std::map<std::string, std::string>> select;
    bool update;
    bool insert;
    bool del;
    std::string user_id;
    std::string tconst;
    std::vector<std::pair<std::string, std::vector<std::string>>> select_genres;
    std::string query;
    std::string collection_name;
    std::string collection_id;
    std::vector<std::map<std::string, std::string>> data;

    //---------------- FUNCTIONS AND QUERIES -----------------
    // -------------- SELECT ALL GENRES IN SENYA'S FORMAT
    // query = "SELECT t.tconst, g.genre_name FROM titles t JOIN ratings r ON t.tconst = r.tconst JOIN titles_genres tg ON t.tconst = tg.tconst JOIN genres g ON tg.genre_id = g.genre_id WHERE t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200 ORDER BY r.num_votes DESC;";
    // select_genres = ExecuteSelectGenresQuery("library", query);
    // print_select_genres(select_genres);

// -------------- CHECK REC TABLE --------------
    // select = ExecuteSelectQuery("library", "SELECT COUNT(*) FROM cb_similarity;");
    // print_select(select);

    // // --------------- GET ALL USERS ------------
    // query = "SELECT * FROM user_profile";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);

// ----------- USER ОЦЕНИВАЕТ FILM
    // tconst = "tt0096928";
    // user_id = "PavelPopov";
    // data = {
    //     {{"user_id", user_id}, {"tconst", tconst}, {"rating", "10"}},
    //     };
    // insert = ExecuteInsertQuery("library", "insert", "user_ratings", data);

    // ------------ GET ONE USER'S RATINGS ------------
    // user_id = "PavelPopov";
    // query = "SELECT * FROM user_ratings WHERE user_id = '" + user_id + "';";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);

    // ------------- CREATE NEW COLLECTION TO USER ----------------
    // user_id = "PavelPopov";
    // collection_name = "DUROV IS THE BEST";
    // data = {
    //     {{"collection_name", collection_name}, {"user_id", user_id}},
    //     };
    // insert = ExecuteInsertQuery("library", "insert", "user_collections", data);

    // ---------- USER ADDS FILM TO COLLECTION -----------
    // ----------ALREADY DONE, THIS PART IS JUST FIOR TESTING----------
    // user_id = "PavelPopov";
    // collection_name = "DUROV IS THE BEST";
    // query = "SELECT collection_id FROM user_collections WHERE user_id = '" + user_id + "' AND collection_name = '" + collection_name + "';";
    // select = ExecuteSelectQuery("library", query);
    //
    // tconst = "tt0096928";
    // collection_id = select[0]["collection_id"];
    //
    // data = {
    //     {{"collection_id", collection_id}, {"tconst", "tt0103617"}}
    // };
    // insert = ExecuteInsertQuery("library", "insert", "titles_collections", data);
    // query = "SELECT * FROM titles_collections WHERE collection_id = " + collection_id + ";";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);









// ------------- QT PART -----------------
>>>>>>> 5bed1da (fixed insert function)



    //    ------------- QT PART -----------------
    Logger::getInstance().setLogFile("/Users/senya/recsys_project_front/src/Data/NeLogFole.txt");

    loadMovies();

    QApplication a(argc, argv);
    FirstLogInSignUp w;
    w.show();

//    finalizePythonInterpreter();

    return a.exec();

}
