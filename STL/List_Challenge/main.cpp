#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song
{
private:
    friend std::ostream &operator << (std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        :name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const{
        return name;
    }
    std::string get_artist() const{
        return artist;
    }
    int gaet_rating(){
        return rating;
    }

    bool operator < (const Song &rhs) const {
        return this->name < rhs.name;
    }

    bool operator == (const Song &rhs) const{
        return this->name == rhs.name; 
    }
};

std::ostream &operator << (std::ostream &os, const Song &s){
    os << std::setw(20) << std::left << s.name 
    << std::setw(30) << std::left << s.artist
    << std::setw(2) << std::left << s.rating;
    return os;
}

void display_menu (){
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next Song" << std::endl;
    std::cout << "P - Play First Song" << std::endl;
    std::cout << "A - Add and play Song at Current Locition" << std::endl;
    std::cout << "L - List the current Playlist" << std::endl;
    std::cout << "========================================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song){
    std::cout << "Playing:" << std::endl;
    std::cout << song << std::endl;
}

void display_Playlist(const std::list <Song> &playlist, const Song &current_song) {
    auto it = playlist.begin();
    while(it != playlist.end()){
        std::cout << *it << std::endl;
        it++;
    }
    std::cout << "Current Song:" <<std::endl;
    std::cout << current_song << std::endl;
}


int main()
{
    std::list <Song> playlist {
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pay For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zwdd, Maren Morris, & Grey", 5},
        {"Wait", "Maroone 5", 5},
        {"Whatever It Takes", "Imagine Dragons", 3}  
    };    

    std::list <Song>:: iterator current_song = playlist.begin();
    display_Playlist(playlist, *current_song);

    char ch {};
    while (ch != 'Q'){
        display_menu();
        std::cin >> ch;
        ch = toupper(ch);
        if(ch == 'F'){
            std::cout << "Playing First Song" << std::endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
        }
        else if(ch == 'N'){
            std::cout << "Playing Next Song" << std::endl;
            current_song++;
            if (current_song == playlist.end()){
                std::cout << "Wrapping to start of playlist" << std::endl;
                current_song = playlist.begin();
                play_current_song(*current_song);
            }else{
                play_current_song(*current_song);
            }
        }
        else if(ch == 'P'){
            std::cout << "Playing Previous Song" << std::endl;
            if (current_song == playlist.begin()){
                std::cout << "Wrapping to end of playlist" << std::endl;
                current_song = playlist.end();
            }
            current_song--;
            play_current_song(*current_song);
        }
        else if(ch == 'A'){
            std::string name{};
            std::string artist{};
            int rating {0};
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Adding and Playing new Song" << std::endl;
            std::cout << "Enter song name: ";
            getline(std::cin, name);
            std::cout << "Enter Song Artist: "; 
            getline(std::cin, artist);
            std::cout << "Enter Rating (1-5)";
            std::cin >> rating;
            playlist.insert(current_song, Song{name, artist, rating});
            current_song--;
            play_current_song(*current_song);
        }
        else if(ch == 'L')
            display_Playlist(playlist, *current_song);
        else if(ch == 'Q'){
            std::cout << "Quitting" << std::endl;
        }
        else
        {
            std::cout << "Illegal Choice, try again" << std::endl;
        }
        
    }

    std::cout << "Thanks for listening!" << std::endl;

    return 0;
}
