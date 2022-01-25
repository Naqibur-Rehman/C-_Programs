#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    //attributes
    string name{"Player"};
    int health{};
    int xp{};

public:
    //methods
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl; }
    bool is_dead();

};


int main()
{
    Player naqeeb;
//    naqeeb.name = "Naqeeb";
//    cout << naqeeb.health << endl;
    naqeeb.talk("Hi there");

    return 0;
}
