
class BankAccount {
    private int accountNo;
    private String name;
    private double balance;

    // Constructor with zero balance
    BankAccount(int accountNo, String name) {
        this.accountNo = accountNo;
        this.name = name;
        this.balance = 0;
    }

    // Constructor with opening balance
    BankAccount(int accountNo, String name, double balance) {
        this.accountNo = accountNo;
        this.name = name;

        if (balance >= 0)
            this.balance = balance;
        else
            this.balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposit successful");
        } else {
            System.out.println("Invalid amount");
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid amount");
        } else if (amount > balance) {
            System.out.println("Insufficient balance");
        } else {
            balance -= amount;
            System.out.println("Withdrawal successful");
        }
    }

    void displayBalance() {
        System.out.println("Account: " + accountNo);
        System.out.println("Name: " + name);
        System.out.println("Balance: " + balance);
        System.out.println();
    }
}

public class problem2 {
    public static void main(String[] args) {
        BankAccount a1 = new BankAccount(1001, "Aamir");
        BankAccount a2 = new BankAccount(1002, "Sara", 5000);

        a1.deposit(2000);
        a2.withdraw(1500);

        a1.displayBalance();
        a2.displayBalance();
    }
}
