class MyThread extends Thread {

    public MyThread(String name) {
        super(name);
    }

    public void run() {

        System.out.println(getName() + " started");

        for (int i = 1; i <= 5; i++) {
            System.out.println(getName() + ": " + i);
        }

        System.out.println(getName() + " completed");
    }
}

public class JoinExample {
    public static void main(String[] args)
            throws InterruptedException {

        MyThread t1 = new MyThread("Thread1");
        MyThread t2 = new MyThread("Thread2");
        MyThread t3 = new MyThread("Thread3");

        t1.start();
        t1.join();

        t2.start();
        t2.join();

        t3.start();
        t3.join();

        System.out.println("All threads completed");
    }
}