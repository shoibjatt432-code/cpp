interface Payment {
    void makePayment(double amount);
    void generateReceipt();
}

class CreditCardPayment implements Payment {
    public void makePayment(double amount) {
        System.out.println("Credit Card Payment: " + amount);
    }

    public void generateReceipt() {
        System.out.println("Credit Card Receipt Generated");
    }
}

class UPIPayment implements Payment {
    public void makePayment(double amount) {
        System.out.println("UPI Payment: " + amount);
    }

    public void generateReceipt() {
        System.out.println("UPI Receipt Generated");
    }
}

class CashPayment implements Payment {
    public void makePayment(double amount) {
        System.out.println("Cash Payment: " + amount);
    }

    public void generateReceipt() {
        System.out.println("Cash Receipt Generated");
    }
}

public class Main {
    public static void main(String[] args) {

        Payment p;

        p = new CreditCardPayment();
        p.makePayment(500);
        p.generateReceipt();

        p = new UPIPayment();
        p.makePayment(1000);
        p.generateReceipt();

        p = new CashPayment();
        p.makePayment(200);
        p.generateReceipt();
    }
}