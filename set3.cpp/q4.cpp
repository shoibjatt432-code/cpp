#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount <= balance) {
            balance -= amount;
            receiver.balance += amount;

            cout << "Transfer Successful!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount a1, a2;
    double amount;

    cout << "Account 1:\n";
    a1.input();

    cout << "\nAccount 2:\n";
    a2.input();

    cout << "\nEnter Amount to Transfer: ";
    cin >> amount;

    a1.transfer(a2, amount);

    cout << "\nAccount 1:\n";
    a1.display();

    cout << "\nAccount 2:\n";
    a2.display();

    return 0;
}