#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    std::vector <Movie> movies;

public:
    Movies();     // constructor
    ~Movies();    // destructor

    // add movie obj to movies vector
    bool add_movie(std::string name, std::string rating, int watched);

    //increment movie watched count by 1
    bool increment_watched(std::string name);

    // display all movie object
    void display() const;
};

#endif // _MOVIES_H_
