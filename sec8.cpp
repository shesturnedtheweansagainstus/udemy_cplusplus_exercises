#include <iostream>
#include <vector>

using namespace std;

int main(){

    int amount {};
    const int pound {100};
    const int fifty {50};
    const int twenty {20};
    const int ten {10};
    const int five {5};
    const int pence {1};

    int balance {}, pounds {}, fifties {}, twenties {}, tens {}, fives {}, pennies {};

    cout << "Enter amount in pennies: ";
    cin >> amount;

    pennies = balance % five;
    balance -= pennies * pence;

    fives = balance % 

    cout << "pounds: "  << pounds << endl;
    cout << "fifties: "  << fifties << endl;
    cout << "twenties: "  << twenties << endl;
    cout << "tens: "  << tens << endl;
    cout << "fives: "  << fives << endl;
    cout << "pennies: "  << pennies << endl;

    return 0;

}