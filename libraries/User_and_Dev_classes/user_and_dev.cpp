#include "user_and_dev.h"

#include <utility>

/// Definition of ALLUsers class methods
AllUsers::AllUsers(std::string  name, std::string  lastname, std::string  login, std::string  password):
    _name(std::move(name)), _lastname(std::move(lastname)), _login(std::move(login)), _password(std::move(password)){}

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

User::User(std::string name, std::string lastname, std::string login, std::string password):
    AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}

Developer::Developer(std::string name, std::string lastname, std::string login, std::string password):
    AllUsers(std::move(name), std::move(lastname), std::move(login), std::move(password)) {}
