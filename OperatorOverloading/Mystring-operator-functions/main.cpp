#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;

    Mystring larry{"Larry"};
    larry.display();                            //Larry

    larry = -larry;
    larry.display();                           // larry

    Mystring moe{"Moe"};
    Mystring stooge = larry;

    cout << (larry == moe) << endl;             //false
    cout << (larry == stooge) << endl;         //true


//    Mystring stooges = larry + "Moe";            // ok with member function
    Mystring stooges = "Larry" + moe;             // now ok with global function
    stooges.display();                            // Larry Moe

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();                        // moe larry curly

    return 0;
}
