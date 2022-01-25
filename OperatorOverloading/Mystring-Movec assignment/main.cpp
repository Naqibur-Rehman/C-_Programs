#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a {"Hello"};       //overloaded constructor
    a = Mystring{"Hola"};       // overloaded constructor then move assignment
    a = "Bonjour";              // overloaded constructor then move assignment

    Mystring empty;             //no-args  ctor
    Mystring larry("Larry");    //overloaded ctor
    Mystring stooge(larry);     //copy constructor
    Mystring stooges;           //no-args ctor

    empty = stooge;             //copy assignment operator
                                // stooge is an l-value

    empty = "funny";            // move assignment operator
                                //"funny" is an r-value

    empty.display();            //Larry : 5
    larry.display();            //Larry : 5
    stooge.display();           //Larry : 5
    empty.display();          //Larry : 5

    stooges = "Larry, Moe, and Curly";
    stooges.display();          //Larry Moe and curly

    vector<Mystring>stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "\n===Loop1============================" << endl;
    for(const Mystring &s: stooges_vec)
        s.display();

    cout << "\n===Loop2============================" << endl;
    for(Mystring &s: stooges_vec)
        s = "changed";              //copy assignment

    cout << "\n===Loop3============================" << endl;
    for(const Mystring &s: stooges_vec)
        s.display();
    return 0;
}
