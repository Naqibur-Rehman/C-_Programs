#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    cout << "sizeof information" << endl;
    cout << "==========================" << endl;

    cout << "char : " << sizeof(char) << " bytes" << endl;
    cout << "int : " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short : " << sizeof(short) << " bytes" << endl;
    cout << "long : " << sizeof(long) << " bytes" << endl;
    cout << "long long : " << sizeof(long long) << " bytes" << endl;

    cout <<"===========================" << endl;

    cout << "float : "  << sizeof(float) << " bytes" << endl;
    cout << "double : "  << sizeof(double) << " bytes" << endl;
    cout << "long double : "  << sizeof(long double) << " bytes" << endl;

    //use values defined in <climits>
    cout << "==========================" << endl;

    cout << "Minimum Values " << endl;
    cout << "char : " << CHAR_MIN << endl;
    cout << "int : " << INT_MIN << endl;
    cout << "short : " << SHRT_MIN << endl;
    cout << "long : " << LONG_MIN << endl;
    cout << "long long : " << LLONG_MIN << endl;

    // use values in <cfloat>
    cout << "float : " << FLT_MIN << endl;
    cout << "double : " << DBL_MIN << endl;
    cout << "long double : " << LDBL_MIN << endl;

    //use values defined in <climits>
    cout << "=========================" << endl;

    cout << "Maximum Values " << endl;
    cout << "char : " << CHAR_MAX << endl;
    cout << "int : " << INT_MAX << endl;
    cout << "short : " << SHRT_MAX << endl;
    cout << "long : " << LONG_MAX << endl;
    cout << "long long : " << LLONG_MAX << endl;

    // use values in <cfloat>
    cout << "float : " << FLT_MAX << endl;
    cout << "double : " << DBL_MAX << endl;
    cout << "long double : " << LDBL_MAX << endl;

    //sizeof can also be used with variable name
    cout << "=========================" << endl;

    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes" << endl;
    cout << "age is " << sizeof age << " bytes" << endl;

    double wage {123.4};
    cout << "wage is " << sizeof(wage) << " bytes" << endl;
    cout << "wage is " << sizeof wage << " bytes" << endl;
    return 0;
}
