class Buffer {

    private int value;
    private boolean available = false;

    synchronized void produce(int number)
            throws InterruptedException {

        while (available) {
            wait();
        }

        value = number;
        available = true;

        System.out.println("Produced: " + value);

        notify();
    }

    synchronized int consume()
            throws InterruptedException {

        while (!available) {
            wait();
        }

        int number = value;
        available = false;

        System.out.println("Consumed: " + number);

        notify();

        return number;
    }
}

public class ProducerConsumer {
    public static void main(String[] args) {

        Buffer buffer = new Buffer();

        Thread producer = new Thread(() -> {
            try {
                for (int i = 1; i <= 5; i++) {
                    buffer.produce(i);
                }
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        });

        Thread consumer = new Thread(() -> {
            try {
                for (int i = 1; i <= 5; i++) {
                    buffer.consume();
                }
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        });

        producer.start();
        consumer.start();
    }
}