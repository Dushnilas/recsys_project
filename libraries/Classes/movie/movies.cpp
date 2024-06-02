#include "movies.h"
#include <iostream>
#include <utility>
#include <logger/logger.h>

// Definition of Actor class methods
Actor::Actor(std::string name, std::string nconst, std::string photo_url, int birth_year, int death_year, int actor_importance):
        _name(std::move(name)), _nconst(std::move(nconst)), _photo_url(std::move(photo_url)),
        _birth_year(birth_year), _death_year(death_year), _actor_importance(actor_importance) {
    Logger::getInstance().logInfo("Actor class object was created (" + _name + ").");
}

std::string Actor::getName() const {
    return _name;
}

const std::vector<std::shared_ptr<Movie>>& Actor::getMovies() const {
    return _movies;
}

std::string Actor::getPhoto() const {
    return _photo_url;
}

std::vector<int> Actor::getLifeYears() const {
    return std::vector<int>({_birth_year, _death_year});
}

int Actor::getImportance() const {
    return _actor_importance;
}

const std::map<std::shared_ptr<Movie>, Character>& Actor::getAllCharacters() const {
    return _all_characters;
}

bool compareMovies(const std::shared_ptr<Movie>& movie1, const std::shared_ptr<Movie>& movie2) {
    return movie1.get() == movie2.get();
}

void Actor::addToMovie(const std::shared_ptr<Movie>& movie) {
    if (std::find_if(_movies.begin(), _movies.end(), [&movie](const std::shared_ptr<Movie>& m) {
        return compareMovies(m, movie); }) == _movies.end()){
        _movies.push_back(movie);
        Logger::getInstance().logInfo("Actor`s movies list was updated. Actor " + _name + " was added to "
                                      + movie->getName() + ".");

        movie->addActor(shared_from_this());
    } else {
        Logger::getInstance().logWarning("Actor" + _name + " already in " + movie->getName() + ".");
    }
}

void Actor::removeMovie(const std::shared_ptr<Movie>& movie) {
    auto it = std::find_if(_movies.begin(), _movies.end(), [&movie](const std::shared_ptr<Movie>& m) {
        return compareMovies(m, movie); });
    if (it != _movies.end()) {
        _movies.erase(it);
        Logger::getInstance().logInfo("Movie " + movie->getName() + " was removed from actor's (" + _name + ") movies list.");

        movie->removeActor(shared_from_this());
    } else {
        Logger::getInstance().logWarning("Actor " + _name + " didn't play in " + movie->getName() + ".");
    }
}

// Definition of Movie class methods
Movie::Movie(std::string name, std::string tconst, std::string genre, std::string description, FilmType film_type,
             int year_start, int year_end, bool is_adult, double rating, int num_votes):
        _name(std::move(name)), _tconst(std::move(tconst)), _genre(std::move(genre)),
        _description(std::move(description)), _film_type(film_type), _year_start(year_start), _year_end(year_end),
        _is_adult(is_adult), _rating(rating), _num_votes(num_votes) {
    Logger::getInstance().logInfo("Movie class object was created (" + _name + ").");
}

std::string Movie::getName() const {
    return _name;
}

const std::vector<std::shared_ptr<Actor>>& Movie::getActors() const {
    return _actors;
}

std::string Movie::getGenre() const {
    return _genre;
}

std::string Movie::getDescription() const {
    return _description;
}

FilmType Movie::getFilmType() const {
    return _film_type;
}

std::vector<int> Movie::getYears() const {
    return std::vector<int>({_year_start, _year_end});
}

bool Movie::IsAdult() const {
    return _is_adult;
}

double Movie::getRating() const {
    return _rating;
}

int Movie::getVotes() const {
    return _num_votes;
}

bool compareActors(const std::shared_ptr<Actor>& actor1, const std::shared_ptr<Actor>& actor2) {
    return actor1.get() == actor2.get();
}

void Movie::addActor(const std::shared_ptr<Actor>& actor) {
    if (std::find_if(_actors.begin(), _actors.end(), [&actor](const std::shared_ptr<Actor>& a) {
        return compareActors(a, actor); }) == _actors.end()) {
        _actors.push_back(actor);
        Logger::getInstance().logInfo("Movie`s actor list was updated. Actor " + actor->getName() +
                                      " was added to " + _name + ".");

        actor->addToMovie(shared_from_this());
    } else {
        Logger::getInstance().logWarning("Actor " + actor->getName() + " was already added.");
    }
}

void Movie::removeActor(const std::shared_ptr<Actor>& actor) {
    auto it = std::find_if(_actors.begin(), _actors.end(), [&actor](const std::shared_ptr<Actor>& a) {
        return compareActors(a, actor); });
    if (it != _actors.end()) {
        _actors.erase(it);
        Logger::getInstance().logInfo("Actor " + actor->getName() + " was removed from " + _name + ".");

        actor->removeMovie(shared_from_this());
    } else {
        Logger::getInstance().logWarning("Movie " + _name + " doesn't have " + actor->getName() + " in the list of actors.");
    }
}

const std::vector<std::string>& Movie::getComments() const {
    return _comments;
}

// Definition of Collection class methods
Collection::Collection(int collection_id, const std::string& name): _collection_id(collection_id), _name(name) {
    Logger::getInstance().logInfo("Collection class object was created (" + name + ").");
}

std::string Collection::getName() const {
    return _name;
}

const std::vector<std::shared_ptr<Movie>>& Collection::getMovies() const {
    return _collection;
}

void Collection::addMovie(const std::shared_ptr<Movie>& movie) {
    _collection.push_back(movie);
}

void Collection::removeMovie(const std::shared_ptr<Movie>& movie) {
    auto it = std::find(_collection.begin(), _collection.end(), movie);
    if (it != _collection.end()) {
        _collection.erase(it);
        Logger::getInstance().logInfo("Movie " + movie->getName() + " was removed from collection " + _name);
    } else {
        Logger::getInstance().logInfo("Movie " + movie->getName() + " doesn't in the collection " + _name);
    }
}