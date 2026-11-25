class Calculator {

    void calculate(int a, int b) {
        System.out.println("Integer Sum: " + (a + b));
    }

    void calculate(double a, double b) {
        System.out.println("Double Sum: " + (a + b));
    }

    void calculate(long a, long b) {
        System.out.println("Long Sum: " + (a + b));
    }

    void calculate(int a, double b) {
        System.out.println("Mixed Sum: " + (a + b));
    }
}

public class Problem2 {
    public static void main(String[] args) {

        Calculator c = new Calculator();

        c.calculate(10, 20);
        c.calculate(10.5, 20.5);
        c.calculate(10L, 20L);
        c.calculate(10, 20.5);
        c.calculate(10, 20.5f);
    }
}