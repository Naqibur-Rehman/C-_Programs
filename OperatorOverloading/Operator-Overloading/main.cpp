#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;

    Mystring a{"Naqeeb"};
    Mystring b{"Ahsan"};

    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a<b) << endl;
    cout << (a>b) << endl;

    b = "Naqeeb";

    cout << (a==b) << endl;
    cout << (a!=b) << endl;

    b = "Zaeeb";

    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a<b) << endl;
    cout << (a>b) << endl;

    Mystring s1{"NAQEEB"};
    s1 = -s1;
    cout << s1 << endl;

    Mystring s2{"Ahsan"};
    s2 = s2 + "-------";
    cout << s2 << endl;
    s2 += "***********";
    cout << s2 << endl;

    Mystring name{"Zaeeb"};
    Mystring f_name = name + " Rehman";
    cout << f_name << endl;


    Mystring name2{"Naqeeb"};
    name2 += " Rehman";
    cout << name2 << endl;

    Mystring s4{"abc"};
    Mystring s5 = s4*5;
    cout << s5 << endl;

    Mystring s6{"12345"};
    s6 = s6*5;
    cout << s6 << endl;

    Mystring s7{"xyz-"};
    s7 *= 5;
    cout << s7 << endl;

    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: ";
    cin >> repeat_string;
    cout << "How many times would you like to repeat: " ;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;

    cout << (repeat_string*12) << endl;;

    repeat_string = "RepeatMe";
    cout <<  (repeat_string + repeat_string + repeat_string) << endl;

    repeat_string += (repeat_string*3);
    cout << repeat_string << endl;

    repeat_string = "RepeatMe";
    repeat_string += (repeat_string + repeat_string + repeat_string);

    Mystring s3 {"Naqeeb"};

    Mystring result = ++s3;
    cout << s3 << endl;
    cout << result << endl;

    s3 = -s3;
    cout << s3 << endl;
    ++s3;
    cout << s3 << endl;

    s3 = -s3;
    cout << s3 << endl;
    s3++;
    cout << s3 << endl;

    s3 = -s3;
    cout << s3 << endl;
    result = s3++;
    cout << s3 << endl;
    cout << result << endl;

    return 0;
}
