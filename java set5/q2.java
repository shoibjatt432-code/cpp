class Box<T> {
    private T value;

    void setValue(T value) {
        this.value = value;
    }

    T getValue() {
        return value;
    }
}

public class GenericBox {
    public static void main(String[] args) {

        Box<Integer> b1 = new Box<>();
        b1.setValue(100);

        Box<String> b2 = new Box<>();
        b2.setValue("Hello Java");

        Box<Double> b3 = new Box<>();
        b3.setValue(25.5);

        System.out.println("Integer: " + b1.getValue());
        System.out.println("String: " + b2.getValue());
        System.out.println("Double: " + b3.getValue());
    }
}