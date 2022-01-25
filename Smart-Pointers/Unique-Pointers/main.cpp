#include <iostream>
#include <memory>
#include <vector>

#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"
#include "I_Printable.h"
#include "Account_Util.h"

using namespace std;

class Test{
private:
    int data;
public:
    Test(): data{0} {std::cout<<"Test constructor(" << data <<")" << std::endl;}
    Test(int data): data{data} {std::cout<<"Test constructor (" << data << ")"<< std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl;}
};

int main()
{
//    Test *t1= new Test{1000};
//    delete t1;

//    std::unique_ptr<Test> t1{new Test(1000)};
//    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);
//
//    std::unique_ptr<Test> t3;   // t3 is initialised to nullptr
////    t3 = t1                     // we cn not assign unique_pointer or copy is not allowed
//    t3 = std::move(t1);
//
//    if(!t1)
//        std::cout << "t1 is nullptr" << endl;

    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 4000);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;

    std::vector<std::unique_ptr<Account>>accounts;

    accounts.push_back(make_unique<Checking_Account>("James", 10000));
    accounts.push_back(make_unique<Savings_Account>("Billy", 1000, 5.2));
    accounts.push_back(make_unique<Trust_Account>("Bobby", 5000, 4.5));

    for(const auto &acc:accounts)
        std::cout << *acc << endl;

    return 0;
}
