#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num {100};
    int &ref{num};

    cout  << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n----------------------------" << endl;
    cout  << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n----------------------------" << endl;
    cout  << num << endl;
    cout << ref << endl;

    cout << "\n----------------------------" << endl;
    vector <string> stooges {"Larry", "Moe", "Curly"};

    for (auto str: stooges)
        str = "Funny";          // str is COPY of each vector element

    for (auto str: stooges)    // no change
        cout << str << endl;

    cout <<"\n----------------------------" << endl;
    for(auto &str: stooges)     // str is REFERENCE of each vector element
        str = "Funny";

    for (auto const &str: stooges)    // notice we are using const
        cout << str << endl;          // now vector elements have changed

    return 0;
}
