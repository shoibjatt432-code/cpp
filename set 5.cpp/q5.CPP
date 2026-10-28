#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int a, double b) {
        accountNumber = a;
        balance = b;
    }

    virtual void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(int a, double b) : Account(a, b) {}

    void display() override {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------" << endl;
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(int a, double b) : Account(a, b) {}

    void display() override {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------" << endl;
    }
};

int main() {

    Account* accounts[2];

    SavingsAccount s(1001, 25000);
    CurrentAccount c(1002, 50000);

    accounts[0] = &s;
    accounts[1] = &c;

    accounts[0]->display();
    accounts[1]->display();

    return 0;
}
