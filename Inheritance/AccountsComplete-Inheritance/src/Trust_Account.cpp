#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double bonus)
    :Savings_Account{name, balance, int_rate},bonus{bonus}, num_withdrawals{0}{
}

bool Trust_Account::deposit(double amount){
    if(amount >= bonus_threshold)
        amount += bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(num_withdrawals >= max_withdrawal || amount > balance * max_withdrawal_percent)
        return false;
    else{
        ++num_withdrawals;
        return Savings_Account::withdraw(amount);
    }
}

std::ostream &operator << (std::ostream &os, const Trust_Account &account){
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, bonus: " << account.bonus
    << " withdrawals: " << account.num_withdrawals;
    return os;
}
