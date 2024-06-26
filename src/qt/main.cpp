#include "firstloginsignup.h"
#include "pagemain.h"
#include "userinfo.h"
#include "backend.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    initializePythonInterpreter("/Users/maykorablina/Yandex.Disk.localized/CodingProjects/BITCH/src/backend/libraries/mysql-queries");

////     ---------------- TEST OF DATABASE------------------
////     ---------------- INITIALIZING VARIABLES -------------
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
    std::string comment;
    std::vector<std::map<std::string, std::string>> data;
    std::vector<std::string> rec;
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
    // ------------ GET COMMENTS ON FILM --------------
    // query = "SELECT comment FROM comments WHERE tconst = '" + tconst + "'";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);

    // ------------------ INSERT LOG INTO LOG TABLE --------------
    // data = {
    //     {{"timestamp", "2024-06-02 18:23:13"}, {"type", "[INFO]"}, {"message", "User abobus233 has logged in."}}
    // // };
    // insert = ExecuteInsertQuery("library", "insert", "logging", data);
    // query = "SELECT * FROM logging";
    // select = ExecuteSelectQuery("library", query);

    // ------------DELETE FROM LOGGING --------------

    // del = ExecuteDeleteQuery("library", "DELETE FROM logging WHERE message = 'User abobus233 has logged in.'");
    // query = "SELECT * FROM logging";
    //
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);
    // ------------------ GET ALL ACTORS FROM MOVIE (LINK IS EMPTY FOR NOW) -----------------------
    // tconst = "tt1375666";
    // query = "SELECT nt.actor_importance, nt.character_played, nt.nconst, n.name, n.birth_year, n.death_year, nt.n_role, '' as image_url FROM names_titles nt JOIN names n on n.nconst = nt.nconst WHERE tconst = '" + tconst +"';";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);

    // -----------------
    // query = "SELECT COUNT(*) FROM titles t JOIN ratings r ON t.tconst = r.tconst WHERE "
    //                     "t.description IS NOT NULL AND t.description != '' AND t.year_start > 1950 AND r.num_votes > 200 ORDER BY r.num_votes DESC LIMIT 10000;";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);
// -------------- REMOVE FILM FROM COLLECTION --------------------
    // user_id = "PavelPopov";
    // collection_name = "DUROV IS THE BEST";
    // query = "SELECT collection_id FROM user_collections WHERE user_id = '" + user_id + "' AND collection_name = '" + collection_name + "';";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);
    //
    // tconst = "tt0103617";
    // collection_id = select[0]["collection_id"];
    // query = "DELETE FROM titles_collections WHERE collection_id = '" + collection_id + "' AND tconst = '" + tconst + "';";
    // del = ExecuteDeleteQuery("library", query);
    // query = "SELECT * FROM titles_collections WHERE collection_id = '" + collection_id + "';";
    // select = ExecuteSelectQuery("library", query);
    // print_select(select);
    rec = GetUserRecommendations("papa_i_papa");
    for (auto c : rec) {
        std::cout << yellow_color_code << c << reset_color_code << std::endl;
    }

    std::cout << std::endl;

    rec = GetContentRecommendations("papa_i_papa");
    for (auto c : rec) {
        std::cout << yellow_color_code << c << reset_color_code << "\n";
    }


// ------------- QT PART -----------------
    loadMovies(all_movies);

    QApplication a(argc, argv);
    FirstLogInSignUp w;
    w.show();

    finalizePythonInterpreter();

    return a.exec();

}
