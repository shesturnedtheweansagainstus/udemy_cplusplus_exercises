#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include <vector>
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &rhs);
    friend Checking_Account &operator+=(const Checking_Account &lhs, Checking_Account &rhs);
    private:
        static constexpr const char *def_name = "Unnamed Checking Account Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_check_rate = 1.5;
    public:
        Checking_Account(std::string name=def_name, double balance=def_balance);
        bool withdraw(double amount);

};

#endif