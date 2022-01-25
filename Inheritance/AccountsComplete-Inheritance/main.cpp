#include <iostream>
#include <vector>
//#include "Savings_Account.h"
//#include "Checking_Account.h"
#include "Account_Util.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    //Accounts
    vector<Account>accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Curly",5000});


    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    //Savings
    vector<Savings_Account>sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Womderwoman", 5000, 5});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    // Checking Accounts
    vector<Checking_Account>chk_accounts;
    chk_accounts.push_back(Checking_Account{});
    chk_accounts.push_back(Checking_Account{"Larry"});
    chk_accounts.push_back(Checking_Account{"Moe",2000});
    chk_accounts.push_back(Checking_Account{"Curly",5000});
    chk_accounts.push_back(Checking_Account{"Naqeeb",7000, 5.50});

    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);

    //Trust Accounts
    vector<Trust_Account>tr_accounts;
    tr_accounts.push_back(Trust_Account{});
    tr_accounts.push_back(Trust_Account{"Larry"});
    tr_accounts.push_back(Trust_Account{"Moe",2000});
    tr_accounts.push_back(Trust_Account{"Curly",5000});
    tr_accounts.push_back(Trust_Account{"Naqeeb",10000, 5.0});
    tr_accounts.push_back(Trust_Account{"Ahsan",12000, 4.0, 100});


    display(tr_accounts);
    deposit(tr_accounts,1000);
    deposit(tr_accounts,6000);
    withdraw(tr_accounts,2000);
    withdraw(tr_accounts,1000);
    withdraw(tr_accounts,1000);
    withdraw(tr_accounts,1000);
//    withdraw(tr_accounts,6000);

    return 0;
}
