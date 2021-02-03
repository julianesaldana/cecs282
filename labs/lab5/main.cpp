//Julian Saldana
//Miguel Echeverria
//Ashur Motlagh
//Saul Martinez Valencia
//Date: 2/2/2021
//Time Demoed:

#include <iostream>
using namespace std;

class Account {
private:
    int balance;
public:
    Account(int b) {
        balance = b;
    }

    void deposit(int argAmount) {
        balance = balance + argAmount;
    }

    void withdraw(int argAmount) {
        if (argAmount > balance) {
            balance = balance - 20;
        } else {
            balance = balance - argAmount;
        }

    }

    int get_balance() {
        return balance;
    }

};

int main() {
    Account my_account(100);     // Set up my account with $100
    my_account.deposit(50);
    my_account.withdraw(175);   // Penalty of $20 will apply
    my_account.withdraw(25);

    cout << "Account balance: " << my_account.get_balance() << "\n";

    my_account.withdraw(my_account.get_balance());  // withdraw all
    cout << "Account balance: " << my_account.get_balance() << "\n";

    return 0;
}