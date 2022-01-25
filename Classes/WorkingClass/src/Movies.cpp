#include <iostream>
#include "Movies.h"

Movies::Movies(){
}

Movies::~Movies(){
}

bool Movies::add_movie(std::string name, std::string rating, int watched){
    for(const auto &item: movies){           //const Movie &item: movies
        if(item.get_name() == name)
            return false;
    }
    Movie obj{name, rating, watched};
    movies.push_back(obj);
    return true;
}

bool Movies::increment_watched(std::string name){
    for(auto &item: movies){
        if(item.get_name() == name){
            item.increment_watched();
            return true;
            }
    }
//    std::cout << "No movies matched " << std::endl;
    return false;
}

void Movies::display() const{
    if(movies.size() == 0){
        std::cout << "Sorry, No movies to display\n" << std::endl;
    }else{
        std::cout << "\n=====================================" << std::endl;
         for(const auto &item: movies)
            item.display();
        std::cout << "\n=====================================" << std::endl;
        }
}
