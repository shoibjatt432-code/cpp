#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:

    BankAccount(std::string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " | New Balance: " << balance << std::endl;
        }
    }

    
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << std::endl;
            return true;
        }
        cout << "Withdrawal failed: Insufficient funds or invalid amount." << std::endl;
        return false;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;             
            receiver.balance += amount;
            cout << "Successfully transferred " << amount 
                      << " from " << accountNumber 
                      << " to " << receiver.accountNumber << std::endl;
        } else {
            cout << "Transfer failed: Insufficient funds or invalid amount." << std::endl;
        }
    }

    void display() const {
        cout << "Account No: " << accountNumber << " | Balance: " << balance << std::endl;
    }
};

int main() {
    
    BankAccount acc1("ACC101", 1000.0);
    BankAccount acc2("ACC102", 500.0);

    acc1.display();
    acc2.display();

    acc1.transfer(acc2, 200.0);

    acc1.display();
    acc2.display();

    return 0;
}
