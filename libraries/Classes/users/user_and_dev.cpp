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

const std::vector<std::shared_ptr<Collection>>& AllUsers::getAllCol() const{
    return _all_collection;
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

User::User(std::string name, std::string lastname, std::string login, std::string password):
        AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}

Developer::Developer(std::string name, std::string lastname, std::string login, std::string password):
        AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}