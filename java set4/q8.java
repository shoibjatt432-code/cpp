class BankAccount {

    int accountNumber;
    double balance;

    BankAccount(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void withdraw(double amount) throws Exception {

        if (amount > balance) {
            throw new Exception("Insufficient Balance");
        }

        if (amount <= 0) {
            throw new Exception("Invalid Withdrawal Amount");
        }

        balance = balance - amount;

        System.out.println("Withdrawal Successful");
        System.out.println("Remaining Balance: " + balance);
    }
}

public class Main {
    public static void main(String[] args) {

        BankAccount account = new BankAccount(101, 5000);

        try {
            account.withdraw(2000);
        }
        catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
        finally {
            System.out.println("Transaction Completed");
        }
    }
}