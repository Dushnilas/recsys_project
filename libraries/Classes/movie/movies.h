#ifndef MOVIES_H
#define MOVIES_H
#pragma ide diagnostic ignored "modernize-use-nodiscard"


#include <string>
#include <vector>
#include <map>

enum class Character
{
    Actor,
    Producer,
    Director
};

enum class FilmType
{
    Movie,
    TvMovie,
    TvSeries
};

class Movie;

class Actor {
private:
    const std::string _name;
    const std::string _nconst;
    std::string _photo_url;
    int _birth_year;
    int _death_year;
    int _actor_importance;

public:
    Actor(std::string name, std::string nconst, std::string photo_url, int birth_year,
          int death_year, int actor_importance);
    std::string getName() const;
    std::string getPhoto() const;
    std::vector<int> getLifeYears() const;
    int getImportance() const;


private:
    std::vector<Movie*> _movies;
    std::map<Movie*, Character> _all_characters;

public:
    const std::map<Movie*, Character>& getAllCharacters() const;
    void addToMovie(Movie* movie);
    void removeMovie(Movie* movie);
    const std::vector<Movie*>& getMovies() const;
};

class Movie{
private:
    const std::string _name;
    const std::string _tconst;
    const std::string _genre;
    std::string _description;
    const FilmType _film_type;
    const int _year_start;
    int _year_end;
    const bool _is_adult;
    double _rating;
    int _num_votes;

public:
    Movie(std::string name, std::string tconst, std::string genre, std::string description, FilmType film_type,
          int year_start, int year_end, bool is_adult, double rating, int num_votes);
    std::string getName() const;
    std::string getGenre() const;
    std::string getDescription() const;
    FilmType getFilmType() const;
    std::vector<int> getYears() const;
    bool IsAdult() const;
    double getRating() const;
    int getVotes() const;

private:
    std::vector<Actor*> _actors;

public:
    const std::vector<Actor*>& getActors() const;
    void addActor(Actor* actor);
    void removeActor(Actor* actor);

private:
    std::vector<std::string> _comments;

public:
    const std::vector<std::string>& getComments() const;
};

class Collection {
private:
    std::vector<Movie*> _collection;
    std::string _name;
    std::string _photo_utl;
    int _collection_id;

public:
    Collection(int collection_id, const std::string& name="Collection");
    bool operator==(const Collection& other) const;

    std::string getName() const;
    const std::vector<Movie*>& getMovies() const;
    void addMovie(Movie* movie);
    void removeMovie(Movie* movie);
};

#endif
