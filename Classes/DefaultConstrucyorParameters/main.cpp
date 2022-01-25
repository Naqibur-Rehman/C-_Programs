#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string n){
        name = n;
    }

    string get_name(){
        return name;
    }

    Player(string name_val = "None", int health_val=0, int xp_val=0);

};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout << "Three args constructor is called " << endl;
}

int main()
{
    Player empty;
    Player naqeeb {"Naqeeb"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 3};

    return 0;
}
