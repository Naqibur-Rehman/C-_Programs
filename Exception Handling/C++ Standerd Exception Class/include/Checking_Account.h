#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account: public Account
{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee = 1.50;
protected:
    double fee;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance, double fee = def_fee);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account() = default;
};

#endif // CHECKING_ACCOUNT_H
