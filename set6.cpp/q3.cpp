#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        try {
            if (amount > balance)
                throw amount;

            balance -= amount;
            cout << "Withdrawal successful." << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
        catch (double) {
            cout << "Error: Insufficient Balance." << endl;
        }
    }
};

int main() {
    double balance, amount;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Withdraw Amount: ";
    cin >> amount;

    BankAccount account(balance);
    account.withdraw(amount);

    return 0;
}