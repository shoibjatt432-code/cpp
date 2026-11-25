class Account {
    double balance;
    int accountNumber;

    Account(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount);
    }

    void deposit(double amount, String description) {
        System.out.println(description);
        deposit(amount);
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient Balance");
        }
    }

    double calculateInterest() {
        return 0;
    }
}

class SavingsAccount extends Account {

    SavingsAccount(int number, double balance) {
        super(number, balance);
    }

    @Override
    void withdraw(double amount) {
        if (balance - amount >= 500) {
            super.withdraw(amount);
        } else {
            System.out.println("Minimum balance required");
        }
    }

    @Override
    double calculateInterest() {
        return balance * 4 / 100;
    }
}

class CurrentAccount extends Account {

    CurrentAccount(int number, double balance) {
        super(number, balance);
    }

    @Override
    void withdraw(double amount) {
        if (amount <= balance + 2000) {
            balance -= amount;
            System.out.println("Current Account Withdraw: " + amount);
        } else {
            System.out.println("Limit Exceeded");
        }
    }
}

public class Problem5 {
    public static void main(String[] args) {

        Account[] accounts = {
            new SavingsAccount(101, 5000),
            new CurrentAccount(102, 3000)
        };

        accounts[0].deposit(1000, "Salary Deposit");
        accounts[0].withdraw(2000);

        accounts[1].withdraw(4000);

        for (Account a : accounts) {
            System.out.println("Balance: " + a.balance);
            System.out.println("Interest: " + a.calculateInterest());
        }
    }
}