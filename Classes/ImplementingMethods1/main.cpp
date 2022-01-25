#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Account{
private:
    //attributes
    string name;
    double balance;

public:
    //methods
    //declared inline
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}


    //methods will be declared outside class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double bal);
    bool withdarw(double bal);
} ;

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdarw(double amount){
    if(balance - amount >= 0){
        balance -= amount;
        return true;
    }else{
        return false;
    }
}

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
