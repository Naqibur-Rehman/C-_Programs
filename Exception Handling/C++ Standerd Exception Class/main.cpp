#include <iostream>
#include <memory>
#include <vector>

#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"
#include "I_Printable.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundException.h"

using namespace std;

int main()
{
    try{
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", -100.0);
        std::cout << *moes_account << std::endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr << ex.what() << std::endl;
    }
    try{
        std::unique_ptr<Account> joes_account  = std::make_unique<Checking_Account>("Joe", 1000.0);
        std::cout << *joes_account << std::endl;
        joes_account->withdraw(500.0);
        std::cout << *joes_account << std::endl;
        joes_account->withdraw(1000);
        std::cout << *joes_account << std::endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr << ex.what() << std::endl;
    }
    catch(const InsufficientFundException &ex){
        std::cerr << ex.what() << std::endl;
    }
    cout << "Program executed Successfully" << std::endl;
    return 0;
}
