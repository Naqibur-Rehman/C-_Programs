#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account naqeeb_account;
    naqeeb_account.set_name("Naqeeb's account");
    naqeeb_account.set_balance(1000.0);

    if(naqeeb_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not Allowed" << endl;

    if(naqeeb_account.withdarw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    if(naqeeb_account.withdarw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;

    return 0;
}
