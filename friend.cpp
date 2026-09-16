#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    friend void compareBalance(BankAccount, BankAccount);
};

void compareBalance(BankAccount a1, BankAccount a2) {
    if (a1.balance > a2.balance) {
        cout << "Account " << a1.accountNumber<< " has the higher balance." << endl;
    }
    else if (a2.balance > a1.balance) {
        cout << "Account " << a2.accountNumber<< " has the higher balance." << endl;
    }
    else {
        cout << "Both accounts have the same balance." << endl;
    }
}

int main() {
    BankAccount acc1(101, 45000);
    BankAccount acc2(102, 62000);

    compareBalance(acc1, acc2);

    return 0;
}