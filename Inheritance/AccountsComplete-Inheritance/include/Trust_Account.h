#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account:public Savings_Account
{

    friend std::ostream &operator << (std::ostream &os, const Trust_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus = 50.00;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawal = 3;
    static constexpr double max_withdrawal_percent = 0.2;

protected:
    double bonus;
    int num_withdrawals;
public:
    Trust_Account(std::string name=def_name, double balance=def_balance, double int_rate = def_int_rate, double bonus=def_bonus);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // TRUST_ACCOUNT_H
