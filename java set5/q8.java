class Bank {

    private int balance = 10000;

    synchronized void withdraw(int amount) {

        System.out.println(
                Thread.currentThread().getName()
                + " is trying to withdraw " + amount);

        if (balance >= amount) {

            balance = balance - amount;

            System.out.println("Withdrawal successful");
            System.out.println("Remaining Balance: " + balance);

        } else {
            System.out.println("Insufficient Balance");
        }
    }

    int getBalance() {
        return balance;
    }
}

public class BankAccount {
    public static void main(String[] args)
            throws InterruptedException {

        Bank account = new Bank();

        Thread t1 = new Thread(() -> {
            account.withdraw(7000);
        });

        Thread t2 = new Thread(() -> {
            account.withdraw(7000);
        });

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("Final Balance: "
                + account.getBalance());
    }
}