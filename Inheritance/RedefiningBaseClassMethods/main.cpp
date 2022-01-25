#include <iostream>
#include "Savings_account.h"

using namespace std;

int main()
{
    cout << "\n===Account==========================" << endl;
    Account a1{1000.0};
    cout << a1 <<endl;

    a1.deposit(500.0);
    cout << a1 <<endl;

    a1.withdraw(1000.0);
    cout << a1 <<endl;

    a1.withdraw(3000.0);
    cout << a1 <<endl;

    cout << "\n===Savings Account==========================" << endl;
    Savings_Account s1{1000.0, 5};
    cout << s1 << endl;

    s1.deposit(1000.0);
    cout << s1 <<endl;

    s1.withdraw(2000.0);
    cout << s1 <<endl;

    s1.withdraw(3000.0);
    cout << s1 <<endl;

    return 0;
}
