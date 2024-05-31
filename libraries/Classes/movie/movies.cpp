#include "movies.h"
#include <iostream>
#include <utility>
#include <logger/logger.h>


/// Definition of Movies class methods
Movie::Movie(std::string name, std::string tconst, std::string genre, std::string description, FilmType film_type,
             int year_start, int year_end, bool is_adult, double rating, int num_votes):
             _name(std::move(name)), _tconst(std::move(tconst)), _genre(std::move(genre)),
             _description(std::move(description)), _film_type(film_type), _year_start(year_start), _year_end(year_end),
             _is_adult(is_adult), _rating(rating), _num_votes(num_votes){
    Logger::getInstance().logInfo("Movie class object was created (" + name = ").");
}

std::string Movie::getName() const {
    return _name;
}

void Movie::addActor(Actor *actor) {
    if (std::find(_actors.begin(), _actors.end(), actor) == _actors.end()) {
        _actors.push_back(actor);
        actor->addToMovie(this);
        Logger::getInstance().logInfo("Actor " + actor->getName() + " was added to " + _name + ".");
    }
    else Logger::getInstance().logWarning("Actor " + actor->getName() + " was already added.");
}

void Movie::removeActor(Actor *actor) {
    auto it = std::find(_actors.begin(), _actors.end(), actor);
    if (it != _actors.end()) {
        _actors.erase(it);
        actor->removeMovie(this);
        Logger::getInstance().logInfo("Actor " + actor->getName() + " was removed from " + _name + ".");
    }
    else Logger::getInstance().logWarning("Movie " + _name + "doesn`t have " + actor->getName() + " in the list of actors.");
}

const std::vector<Actor*>& Movie::getActors() {
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

/// Definition of Actors class methods
Actor::Actor(std::string name, std::string nconst, std::string photo_url, Character character_played, int birth_year,
             int death_year, int actor_importance):
             _name(std::move(name)), _nconst(std::move(nconst)), _photo_url(std::move(photo_url)),
             _character_played(character_played), _birth_year(birth_year), _death_year(death_year),
             _actor_importance(actor_importance){
    Logger::getInstance().logInfo("Actor class object was created (" + name = ").");
}

std::string Actor::getName() const {
    return _name;
}

void Actor::addToMovie(Movie* movie) {
    if (std::find(_movies.begin(), _movies.end(), movie) == _movies.end()) {
        _movies.push_back(movie);
        movie->addActor(this);
        Logger::getInstance().logInfo("Movie " + movie->getName() + " was removed from " + _name + ".");
    }
    else Logger::getInstance().logWarning("Actor" + _name + " already in " + movie->getName() + ".");
}

void Actor::removeMovie(Movie* movie) {
    auto it = std::find(_movies.begin(), _movies.end(), movie);
    if (it != _movies.end()) {
        _movies.erase(it);
        movie->removeActor(this);
        Logger::getInstance().logInfo("Actor" + _name + " was removed from " + movie->getName() + ".");
    }
    else Logger::getInstance().logWarning("Actor" + _name + " didn`t play in " + movie->getName() + ".");
}

const std::vector<Movie*>& Actor::getMovies() {
    return _movies;
}

std::string Actor::getPhoto() const {
    return _photo_url;
}

Character Actor::getCharacter() const {
    return _character_played;
}

std::vector<int> Actor::getLifeYears() const {
    return std::vector<int>({_birth_year, _death_year});
}

int Actor::getImportance() const {
    return _actor_importance;
}

/// Definition of Collections class methods
Collection::Collection(int collection_id, const std::string& name): _collection_id(collection_id), _name(name) {
    Logger::getInstance().logInfo("Collection  class object was created (" + name = ").");
}

std::string Collection::getName() const {
    return _name;
}

void Collection::addMovie(Movie* movie) {
    _collection.push_back(movie);
}

void Collection::removeMovie(Movie *movie) {
    auto it = std::find(_collection.begin(), _collection.end(), movie);
    if (it != _collection.end()) {
        _collection.erase(it);
        Logger::getInstance().logInfo("Movie " + movie->getName() + " was removed from collection " + _name);
    }
    else Logger::getInstance().logInfo("Movie " + movie->getName() + " doesn`t in the collection " + _name);
}
