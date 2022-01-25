#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "I_Printable.h"

using namespace std;

int main()
{
//    Account acc;            // compiler error

    Checking_Account c;
    cout << c <<endl;

    Savings_Account s{"Ahsan", 5000, 2.6};
    cout << s<< endl;
    s.deposit(1000);
    cout << s << endl;
    s.withdraw(1000);
    cout << s << endl;

    Trust_Account t {"Naqeeb", 5000, 4.5, 1000};
    cout << t << endl;
    t.deposit(10000);
    cout << t << endl;

    Checking_Account naqeeb{"Naqeeb", 10000};
    cout << naqeeb << endl;

    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr <<endl;

    Account *p1 = new Checking_Account("Larry", 1000);
    Account *p2 = new Savings_Account("Moe", 10000);
    Account *p3 = new Trust_Account("Curly");

    std::vector <Account *> accounts{p1,p2,p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
