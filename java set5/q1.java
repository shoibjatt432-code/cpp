class Calculator<T extends Number> {
    T num1, num2;

    Calculator(T num1, T num2) {
        this.num1 = num1;
        this.num2 = num2;
    }

    void calculate() {
        double a = num1.doubleValue();
        double b = num2.doubleValue();

        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));

        if (b == 0) {
            System.out.println("Division by zero is not allowed");
        } else {
            System.out.println("Division: " + (a / b));
        }
    }
}

public class Calculator {
    public static void main(String[] args) {

        Calculator<Integer> c1 = new Calculator<>(10, 5);
        c1.calculate();

        Calculator<Double> c2 = new Calculator<>(10.5, 2.5);
        c2.calculate();
    }
}