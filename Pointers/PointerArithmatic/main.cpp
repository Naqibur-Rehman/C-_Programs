#include <iostream>
#include <string>

using namespace std;

int main()
{
    int scores[] {100,98,65,89,-1};
    int *score_ptr{scores};

    while(*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout << *score_ptr++ << endl;


    cout << "\n-------------------------" << endl;
    string s1 {"Naqeeb"};
    string s2 {"Naqeeb"};
    string s3 {"Ahsan"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 <<": " << (p1 == p2) << endl;  //false
    cout << p1 << " == " << p3 <<": " << (p1 == p3) << endl;  //true

    cout << *p1 << " == " << *p3 <<": " << (*p1 == *p3) << endl;  //true
    cout << *p1 << " == " << *p3 <<": " << (*p1 == *p3) << endl;  //true

    p3 = &s3; // pointing to ahsan
    cout << *p1 << " == " << *p3 <<": " << (*p1 == *p3) << endl;  //fals


    cout << "\n-------------------------" << endl;
    char name[] {"Naqeeb"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];  //N
    char_ptr2 = &name[3];  //e

    cout <<"In the string " << name <<", " << *char_ptr2 <<" is " << (char_ptr2 - char_ptr1)
         << " characters away from " << *char_ptr1 << endl;

    return 0;
}
