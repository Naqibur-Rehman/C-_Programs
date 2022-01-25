#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout << "Enter third stooges first name: ";
    cin >> curly;

    cout <<"The three stooges are " << larry << ", " << moe <<" and " << curly << endl;

    cout << "Enter three stooges name separted by space: ";
    cin >> larry >> moe >> curly;

    cout <<"The three stooges are " << larry << ", " << moe <<" and " << curly << endl;

    return 0;
}
