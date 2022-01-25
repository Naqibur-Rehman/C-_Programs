#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Player{
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    //methods
    void talk(string);
    bool is_dead();

};

class Account{
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double);
    bool withdarw(double);
} ;

int main()
{
    Account naqeeb_account;
    Account ahsan_account;

    Player naqeeb;
    Player hero;

    Player players[] {naqeeb, hero};

    vector <Player> player_vec{naqeeb};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}
