#include "Account.h"
#include "Savings_Account.h"
#include "trust_account.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Trust_Account &rhs) {
    os << "[Trust Account: " << rhs.name << ": " << rhs.balance << "]";
    return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account(name, balance, int_rate), use_num{1} {
}

bool Trust_Account::withdraw(double amount) {
    if (use_num==4) {
        std::cout << "Too many times";
        return false;
    } else {
        use_num += 1;
        Savings_Account::withdraw(amount);
        return true;
    }
}

bool Trust_Account::deposit(double amount) {
    Savings_Account::deposit(amount);
    if (amount>=5000) {
        Account::deposit(50.00);
    }
    return true;
}