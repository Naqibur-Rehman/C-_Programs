#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};             //Apple
    string s6 {s1, 0, 3};       //App
    string s7 {10,'X'};        //XXXXXXXXXX

//    cout << s0 << endl;         //No garbage
//    cout << s0.length() << endl;//empty string

//    cout << "\nInitialization " << "\n--------------------------------" << endl;
//    cout <<"s1 initialized to: " << s1 << endl;
//    cout <<"s2 initialized to: " << s2 << endl;
//    cout <<"s3 initialized to: " << s3 << endl;
//    cout <<"s4 initialized to: " << s4 << endl;
//    cout <<"s5 initialized to: " << s5 << endl;
//    cout <<"s6 initialized to: " << s6 << endl;
//    cout <<"s7 initialized to: " << s7 << endl;

    // comparison
//    cout << "\ncomparison" << "\n---------------------------------------" << endl;
//    cout << boolalpha;
//    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
//    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
//    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
//    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
//    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
//    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
//    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

    //Assignment
//    cout << "\nAssignment" << "\n------------------------------------" << endl;
//
//    s1 = "watermelon";
//    cout << "s1 is now: " << s1 << endl;
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl;
//
//    s3 = "Naqeeb";
//    cout << "s3 is now: " << s3 << endl;
//
//    s3[0] = 'R';
//    cout << "s3 changes first letter to 'R': " << s3 << endl;
//    s3.at(0) = 'L';
//    cout << "s3 changes first letter to 'L': " << s3 << endl;

    //concatenation
//
//    s3 = "watermelon";
//    cout << "\nConcatenation" << "\n-------------------------------" << endl;
//
//    s3 = s5 + " and " + s2 + " juice";
//    cout << "s3 is now " << s3 << endl;

//    s3 = "nice " + "cold " + s5 + " juice";  //compiler error


    // for loop
//    cout << "\nLooping" << "\n------------------------------" << endl;
//
//    s1 = "Apple";
//    for (size_t i{0}; i < s1.length(); ++i)
//        cout << s1.at(i);     //or s1[i]
//    cout << endl;
//
//    //range based for loop
//    for(char c: s1)     // auto c : s1
//        cout << c;
//    cout << endl;


//    //substring
//    cout << "\nSubstring" << "\n--------------------------------------" << endl;
//    s1 = "This is a test";
//
//    cout << s1.substr(0,4) << endl;
//    cout << s1.substr(5,2) << endl;
//    cout << s1.substr(10,4) << endl;

    //erase
//    cout << "\nErase" << "\n--------------------------------" << endl;
//
//    s1 = "This is a test";
//    s1.erase(0,5);  // erase this from s1 results in "is a test"
//    cout << "s1 is now: " << s1 << endl;


    // getline
//    cout << "\ngetline" << "\n------------------------------" << endl;
//
//    string full_name;
//
//    cout << "Enter your full name: ";
//    getline(cin, full_name);
//
//    cout << "Your full name is  : " << full_name << endl;


    //find
    cout << "\nFind" << "\n------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word;

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at position " << position << endl;
    else
        cout << "Sorry! " << word << " not found" << endl;T

    return 0;
}
