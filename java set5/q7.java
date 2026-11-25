class EvenNumbers implements Runnable {

    public void run() {
        for (int i = 2; i <= 20; i += 2) {
            System.out.println("Even: " + i);
        }
    }
}

class OddNumbers implements Runnable {

    public void run() {
        for (int i = 1; i <= 19; i += 2) {
            System.out.println("Odd: " + i);
        }
    }
}

public class RunnableExample {
    public static void main(String[] args) {

        Thread t1 = new Thread(new EvenNumbers());
        Thread t2 = new Thread(new OddNumbers());

        t1.start();
        t2.start();
    }
}