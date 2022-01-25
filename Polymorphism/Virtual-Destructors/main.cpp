#include <iostream>

using namespace std;

class Account
{
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {std::cout << "Account::destructor " << std::endl;}
};

class Checking:public Account
{
public:
    virtual void withdraw(double amount){
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {std::cout << "Checking::destructor " << std::endl;}
};

class Savings:public Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Saving::withdraw" << std::endl;
    }
    virtual ~Savings() {std::cout << "Savings::destructor " << std::endl;}
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {std::cout << "Trust::destructor " << std::endl;}
};

int main()
{
    cout << "\n==== Pointers =====" << endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << "\n==== Clean up =====" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
