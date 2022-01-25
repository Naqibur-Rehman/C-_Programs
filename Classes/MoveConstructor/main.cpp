#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
public:
    void set_data(int d){*data = d;}
    int get_data(){return *data;}
    //constructor
    Move(int d);
    //copy constructor
    Move (const Move &source);
    //Move constructor
    Move(Move &&source)noexcept;
    //Destructor
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

//copy ctor
Move::Move(const Move &source)
    :Move{*source.data}{
        cout << "Copy Constructor - deep copy for " << *data << endl;
}

//Move ctor
Move::Move(Move &&source)noexcept
    : data{source.data}{
        source.data = nullptr;
        cout << "Move construor - moving resource: " << *data << endl;
}


Move::~Move(){
    if(data != nullptr)
        cout << "Destructor Freeing data for:" << *data << endl;
    else
        cout<< "Destructor freeing data for nullptr" << endl;

    delete data;
}


int main()
{
    vector <Move> vec;

    vec.push_back(Move(10));

    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));

    return 0;
}
