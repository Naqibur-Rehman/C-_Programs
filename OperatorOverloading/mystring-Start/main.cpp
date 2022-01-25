#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooges{larry};

    empty.display();
    larry.display();
    stooges.display();

    return 0;
}
