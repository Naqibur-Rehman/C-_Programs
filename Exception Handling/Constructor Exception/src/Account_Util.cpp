#include <iostream>
#include "Account_Util.h"

//Helper functions for Account class

//Display Accounts objects pointer in vector
void display(const std::vector <Account *> &accounts){
    std::cout << "\n==== Accounts======================================" << std::endl;
    for(const auto acc:accounts)
        std::cout << *acc << std::endl;
}

//Deposit supplied amount to each Account object in vector
void deposit(std::vector <Account *> &accounts, double amount){
    std::cout << "\n==== Depositing to Accounts ========================" << std::endl;
    for(auto acc:accounts){
        if(acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed to Deposited " << amount << " to " << *acc << std::endl;
        }
}

//withdraw amount from each Account object in vector
void withdraw(std::vector <Account *> &accounts, double amount){
    std::cout << "\n==== Withdrawing from Accounts ======================" << std::endl;
    for(auto acc:accounts){
        if(acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
