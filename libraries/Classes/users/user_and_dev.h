#ifndef USER_AND_DEV_H
#define USER_AND_DEV_H
#pragma ide diagnostic ignored "modernize-use-nodiscard"

#include <string>
#include <vector>
#include "movie/movies.h"

enum class userAccess
{
    User,
    Developer
};

enum class Gender
{
    Male,
    Female,
    Not_given
};

class AllUsers{
private:
    std::string _name;
    std::string _lastname;
    std::string _login;
    std::string _password;
    std::string _email_address;
    Gender _gender = Gender::Not_given;

protected:
    AllUsers(std::string name, std::string lastname, std::string login, std::string password);

public:
    std::string getName() const;
    std::string getLastname() const;
    std::string getLogin() const;
    std::string getPassword() const;
    std::string getEmail() const;
    Gender getGender() const;

private:
    std::vector<Collection> _all_collection;

public:
    const std::vector<Collection>& getAllCol() const;
    void createCol(const std::string& name);
    bool removeCol(Collection collection);
};

class User : public AllUsers{
private:
    userAccess access = userAccess::User;

public:
    User(std::string name, std::string lastname, std::string login, std::string password);
};

class Developer : private AllUsers{
private:
    userAccess access = userAccess::Developer;

public:
    Developer(std::string name, std::string lastname, std::string login, std::string password);
};

#endif
