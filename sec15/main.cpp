// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "trust_account.h"
#include "checking_account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    Account x {"Lax", 2};
    Account y {"pa", 50};
    x += y;
    cout << x;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Checking 

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Superman"} );
    check_accounts.push_back(Checking_Account {"Batman", 2000} );
    check_accounts.push_back(Checking_Account {"Wonderwoman", 5000} );


    display(check_accounts);
    deposit(check_accounts, 10);
    withdraw(check_accounts, 2009);
    
    // Trust

    Trust_Account z {"uo", 500.00};
    z.deposit(5000);
    cout << z;

    Trust_Account v {"no", 100.00};
    cout << v.use_num << endl;
    for (int i{0};i<4;++i) {
        if (v.withdraw(5)) {
            cout << "TRUE: " << endl;
            cout << v.use_num << endl;

        } else {
            cout << "FALSE" << endl;
        }
    }

    /*
    cout << endl << v.use_num << endl;
    v.withdraw(5);
    cout << endl << v.use_num << endl;
    */

    return 0;
}

