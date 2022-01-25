#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a {"Hello"};       //overload constructor
    Mystring b;                 //no arg constructor
    b = a;                      //copy assignment
                                //b.operator(a);
    b = "This is test";         //b.operator = ("This is test");

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge(larry);
    Mystring stooges;

    empty = stooge;             //copy assignment operator

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
