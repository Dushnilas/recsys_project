#ifndef USER_AND_DEV_H
#define USER_AND_DEV_H
#pragma ide diagnostic ignored "modernize-use-nodiscard"

#include <string>
#include <vector>
#include <memory>
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

class AllUsers : public std::enable_shared_from_this<AllUsers> {
private:
    std::string _name;
    std::string _lastname;
    std::string _login;
    std::string _password;
    std::string _email_address = "";
    std::string _photo_url = "";
    Gender _gender = Gender::Not_given;

protected:
    AllUsers(std::string name, std::string lastname, std::string login, std::string password);

public:
    std::string getName() const;
    std::string getLastname() const;
    std::string getLogin() const;
    std::string getPassword() const;
    void setEmail(const std::string& email);
    std::string getEmail() const;
    void setPhoto(const std::string& photo);
    std::string getPhoto() const;
    Gender getGender() const;

private:
    std::vector<std::shared_ptr<Collection>> _all_collection;

public:
    void loadCol();
    void clearCol();
    const std::vector<std::shared_ptr<Collection>>& getAllCol() const;
    void createCol(const std::string& name);
    bool removeCol(const std::shared_ptr<Collection>& collection);

    void leaveComment(const std::shared_ptr<Movie>& movie, const std::string& com);
    void makeVote(const std::shared_ptr<Movie>& movie, int vote);
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