//design a class to represent a bank account with proper data hiding and the member function for deposit , withdrawal,showbalance operations


#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accHolder;
    double bal;

public:
    BankAccount(string name, double initialBal)
    {
        accHolder = name;
        bal = initialBal;
    }

    void deposit(double amt)
    {
        if (amt > 0)
        {
            bal += amt;
            cout << "Amount deposited: " << amt << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amt)
    {
        if (amt <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amt > bal)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            bal -= amt;
            cout << "Amount withdrawn: " << amt << endl;
        }
    }

    void display()
    {
        cout << "Account Holder: " << accHolder << endl;
        cout << "Balance: " << bal << endl;
    }
};

int main()
{
    BankAccount account("Shatakshi", 10000);

    account.display();

    cout << "\nAfter Deposit:" << endl;
    account.deposit(5000);
    account.display();

    cout << "\nAfter Withdrawal:" << endl;
    account.withdraw(3000);
    account.display();

    return 0;
}