class Payment {

    String customer;
    double amount;

    Payment(String customer, double amount) {
        this.customer = customer;
        this.amount = amount;
    }

    void processPayment() {
        System.out.println("Payment Processing");
    }

    void processPayment(String reference) {
        System.out.println("Transaction ID: " + reference);
        processPayment();
    }
}

class CreditCardPayment extends Payment {

    CreditCardPayment(String customer, double amount) {
        super(customer, amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("Credit Card Payment: " + amount);
        } else {
            System.out.println("Invalid Amount");
        }
    }
}

class UPIPayment extends Payment {

    UPIPayment(String customer, double amount) {
        super(customer, amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("UPI Payment: " + amount);
        } else {
            System.out.println("Invalid Amount");
        }
    }
}

class NetBankingPayment extends Payment {

    NetBankingPayment(String customer, double amount) {
        super(customer, amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("Net Banking Payment: " + amount);
        } else {
            System.out.println("Invalid Amount");
        }
    }
}

public class Problem10 {
    public static void main(String[] args) {

        Payment[] payments = {
            new CreditCardPayment("Shoib", 5000),
            new UPIPayment("Ayan", 2000),
            new NetBankingPayment("Rahul", 3000)
        };

        int i = 1;

        for (Payment p : payments) {
            System.out.println("Transaction " + i);
            p.processPayment("TXN" + i);
            i++;
        }
    }
}