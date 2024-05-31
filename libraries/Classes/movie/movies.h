#ifndef MOVIES_H
#define MOVIES_H
#pragma ide diagnostic ignored "modernize-use-nodiscard"


#include <string>
#include <vector>

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
    std::string _name;
    std::string _nconst;
    std::string _photo_url;
    Character _character_played;
    int _birth_year;
    int _death_year;
    int _actor_importance;

public:
    Actor(std::string name, std::string nconst, std::string photo_url, Character character_played, int _death_year,
          int year_end, int actor_importance);
    std::string getName() const;
    std::string getPhoto() const;
    Character getCharacter() const;
    std::vector<int> getLifeYears() const;
    int getImportance() const;


private:
    std::vector<Movie*> _movies;

public:
    void addToMovie(Movie* movie);
    void removeMovie(Movie* movie);
    const std::vector<Movie*>& getMovies();
};

class Movie{
private:
    std::string _name;
    std::string _tconst;
    std::string _genre;
    std::string _description;
    FilmType _film_type;
    int _year_start;
    int _year_end;
    bool _is_adult;
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
    void addActor(Actor* actor);
    void removeActor(Actor* actor);
    const std::vector<Actor*>& getActors();
};

class Collection {
private:
    std::vector<Movie*> _collection;
    std::string _name;
    int _collection_id;

public:
    Collection(int collection_id, const std::string& name="Collection");
    std::string getName() const;
    void addMovie(Movie* movie);
    void removeMovie(Movie* movie);
};

#endif
