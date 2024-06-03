#ifndef MOVIES_H
#define MOVIES_H
#pragma ide diagnostic ignored "modernize-use-nodiscard"

#include <string>
#include <vector>
#include <map>
#include <memory>

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
    TvSeries,
    Default
};

class Movie;

class Actor : public std::enable_shared_from_this<Actor> {
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
    std::string getId() const;
    std::string getPhoto() const;
    std::vector<int> getLifeYears() const;
    int getImportance() const;

private:
    std::vector<std::shared_ptr<Movie>> _movies;
    std::map<std::shared_ptr<Movie>, Character> _all_characters;

public:
    const std::map<std::shared_ptr<Movie>, Character>& getAllCharacters() const;
    void addToMovie(const std::shared_ptr<Movie>& movie);
    void removeMovie(const std::shared_ptr<Movie>& movie);
    const std::vector<std::shared_ptr<Movie>>& getMovies() const;
};

class Movie : public std::enable_shared_from_this<Movie>{
private:
    const std::string _name;
    const std::string _tconst;
    std::vector<std::string> _genre;
    std::string _description;
    const FilmType _film_type;
    const int _year_start;
    int _year_end;
    const bool _is_adult;
    double _rating;
    int _num_votes;

public:
    Movie(std::string name, std::string tconst, std::string description, FilmType film_type,
          int year_start, int year_end, bool is_adult, double rating, int num_votes);

    std::string getName() const;
    std::string getTconst() const;
    void setGenre();
    const std::vector<std::string>& getGenre() const;
    std::string getDescription() const;
    FilmType getFilmType() const;
    std::vector<int> getYears() const;
    bool IsAdult() const;
    double getRating() const;
    int getVotes() const;

    void updateRating(double new_vote);

private:
    std::vector<std::shared_ptr<Actor>> _actors;

public:
    void loadActors();
    void clearActors();
    const std::vector<std::shared_ptr<Actor>>& getActors() const;
    void addActor(const std::shared_ptr<Actor>& actor);
    void removeActor(const std::shared_ptr<Actor>& actor);

private:
    std::vector<std::string> _comments;

public:
    void loadComments();
    const std::vector<std::string>& getComments() const;
    void leaveComment(const std::string& com);
};

class Collection : public std::enable_shared_from_this<Collection> {
private:
    std::vector<std::shared_ptr<Movie>> _collection;
    std::string _name;
    std::string _photo_utl;
    int _collection_id;

public:
    explicit Collection(int collection_id, const std::string& name="Collection");

    std::string getName() const;
    const std::vector<std::shared_ptr<Movie>>& getMovies() const;
    void addMovie(const std::shared_ptr<Movie>& movie);
    void removeMovie(const std::shared_ptr<Movie>& movie);
};


#endif