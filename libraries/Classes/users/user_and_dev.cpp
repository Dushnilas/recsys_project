#include <utility>
#include <string>
#include <vector>
#include "movie/movies.h"
#include "user_and_dev.h"
#include "logger/logger.h"

// Definition of AllUsers class methods
AllUsers::AllUsers(std::string name, std::string lastname, std::string login, std::string password):
        _name(std::move(name)), _lastname(std::move(lastname)), _login(std::move(login)), _password(std::move(password)){
    Logger::getInstance().logInfo("User " + _login + " has logged in.");
}

std::string AllUsers::getName() const {
    return _name;
}

std::string AllUsers::getLastname() const {
    return _lastname;
}

std::string AllUsers::getLogin() const {
    return _login;
}

std::string AllUsers::getPassword() const {
    return _password;
}

std::string AllUsers::getEmail() const {
    return _email_address;
}

Gender AllUsers::getGender() const {
    return _gender;
}

bool compareCol(const std::shared_ptr<Collection>& col1, const std::shared_ptr<Collection>& col2) {
    return col1.get() == col2.get();
}

void AllUsers::loadCol() {
    std::vector<std::map<std::string, std::string>> buf;

    int counter = 0;
    for (auto el: buf){
        auto col = std::make_shared<Collection>(std::stoi(el.at("collection_id")),
                                                el.at("collection_name"));

        if (std::find_if(_all_collection.begin(), _all_collection.end(), [&col](const std::shared_ptr<Collection>& c) {
            return compareCol(c, col); }) == _all_collection.end()) {
            _all_collection.push_back(col);
            counter++;
        }
    }

    Logger::getInstance().logInfo(std::to_string(counter) + "collections was added to " + _name + ".");
}

const std::vector<std::shared_ptr<Collection>>& AllUsers::getAllCol() const{
    return _all_collection;
}

void AllUsers::clearCol() {
    for (auto& col : _all_collection) {
        col.reset();
    }
    _all_collection.clear();

    Logger::getInstance().logInfo("All actors were removed from " + _name + ".");
}

bool AllUsers::removeCol(const std::shared_ptr<Collection>& collection) {
    auto it = std::find(_all_collection.begin(), _all_collection.end(), collection);
    if (it != _all_collection.end()) {
        _all_collection.erase(it);
        Logger::getInstance().logInfo("Collection " + collection->getName() + " was removed from all collections, " + _name);
        return true;
    }

    Logger::getInstance().logInfo("Collection " + collection->getName() + " doesn't exist in the collections, " + _name);
    return false;
}

void AllUsers::createCol(const std::string& name) {
    int id = 0;
    auto newCollection = std::make_shared<Collection>(id, name);
    _all_collection.push_back(newCollection);
}

void AllUsers::leaveComment(const std::shared_ptr<Movie>& movie, const std::string& com) {
    movie->leaveComment(com);
}

void AllUsers::makeVote(const std::shared_ptr<Movie>& movie, int vote){
    if (0 <= vote and vote <= 10){
        movie->updateRating(vote);
        Logger::getInstance().logInfo("Movie (" + movie->getName() + ") rating update.");
    }
    else Logger::getInstance().logError("New vote for " + movie->getName() + "isn`t from diapason of 0-10.");
}


User::User(std::string name, std::string lastname, std::string login, std::string password):
        AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}

Developer::Developer(std::string name, std::string lastname, std::string login, std::string password):
        AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}