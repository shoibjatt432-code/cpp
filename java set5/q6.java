class FirstThread extends Thread {

    public void run() {
        System.out.println("Thread Name: " + getName());

        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }
}

class SecondThread extends Thread {

    public void run() {
        System.out.println("Thread Name: " + getName());

        for (int i = 10; i >= 1; i--) {
            System.out.println(i);
        }
    }
}

public class ThreadExample {
    public static void main(String[] args) {

        FirstThread t1 = new FirstThread();
        SecondThread t2 = new SecondThread();

        t1.setName("Thread1");
        t2.setName("Thread2");

        t1.start();
        t2.start();
    }
}