#include "Account.h"
#include "checking_account.h"

std::ostream &operator<<(std::ostream &os, const Checking_Account &rhs) {
    os << "[Checking Account: " << rhs.name << ": " << rhs.balance << "]";
    return os;
}

Checking_Account::Checking_Account(std::string name, double balance)
    : Account(name, balance) {
}

bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount+def_check_rate);
}
