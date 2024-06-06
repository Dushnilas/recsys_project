#ifndef BACKEND_H
#define BACKEND_H


#include <QSharedPointer>


#include <iostream>
#include <vector>
#include <iomanip>
#include "../backend/libraries/Classes/movie/movies.h"
#include "../backend/libraries/Classes/users/user_and_dev.h"
#include "../backend/libraries/Classes/logger/logger.h"
#include "../backend/libraries/mysql-queries/mysql-queries.h"


static std::shared_ptr<AllUsers> main_user;
static std::vector<QSharedPointer<Movie>> all_movies;

FilmType strToType(const std::string& type);

void loadMovies(std::vector<QSharedPointer<Movie>>& allmovies);

std::vector<QSharedPointer<Movie>> getMoviesSorted(int n, const std::string& genre="", FilmType filmType=FilmType::Default,
                                                    bool is_adult=true);

void getRecommendation();

bool compareMovies(const QSharedPointer<Movie>& m1, const QSharedPointer<Movie>& m2, const std::string& query);

void searchMovies(const std::vector<QSharedPointer<Movie>>& AllMovies, std::vector<QSharedPointer<Movie>>& result,  std::string query, int n);

bool SignInFun(const std::string& login, const std::string& password);

bool SignUpFun(const std::string& login, const std::string& password, int age);

void print_select_genres(std::vector<std::pair<std::string, std::vector<std::string>>> results);

void print_select(std::vector<std::map<std::string, std::string>> results);

static std::string SEARCH_GROB;
#endif
