#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(const BankAccount &a1,const BankAccount &a2);
};

void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance > a2.balance) {
        cout << "Account Holder with Higher Balance:" << endl;
        cout << "Account Number: " << a1.accountNumber << endl;
        cout << "Customer Name: " << a1.customerName << endl;
        cout << "Balance: " << a1.balance << endl;
    }
    else if (a2.balance > a1.balance) {
        cout << "Account Holder with Higher Balance:" << endl;
        cout << "Account Number: " << a2.accountNumber << endl;
        cout << "Customer Name: " << a2.customerName << endl;
        cout << "Balance: " << a2.balance << endl;
    }
    else {
        cout << "Both accounts have the same balance." << endl;
    }
}

int main() {
    BankAccount acc1(101, "Srishti", 50000);
    BankAccount acc2(102, "Sakshi", 75000);

    compareBalance(acc1, acc2);

    return 0;
}