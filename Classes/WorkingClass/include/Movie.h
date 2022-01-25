#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watched;

public:
    //constructor
    Movie(std::string name, std::string rating, int watched);

    //copy ctor
    Movie(const Movie &source);

    //Destructor
    ~Movie();

    //basic getter and setter for private members
    void set_name(std::string name_val){name = name_val;}
    std::string get_name() const {return name;}

    void set_rating(std::string rating){this->rating = rating;}
    std::string get_rating() const {return rating;}

    void set_watched(int watched){this->watched = watched;}
    int get_watched() const {return watched;}

    //to increment watched counter
    void increment_watched(){++watched;}

    //display the movie info
    void display() const;
};

#endif // _MOVIE_H_
