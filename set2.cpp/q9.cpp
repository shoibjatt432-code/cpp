#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;

public:
    BankAccount(int accNo, float bal)
    {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b(12345, 5000);

    b.displayBalance();

    b.deposit(2000);

    b.withdraw(1000);

    b.displayBalance();

    return 0;
}