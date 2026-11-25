class Box<T> {
    T value;

    Box(T value) {
        this.value = value;
    }

    void setValue(T value) {
        this.value = value;
    }

    T getValue() {
        return value;
    }
}

public class problem5 {
    public static void main(String[] args) {

        Box<Integer> b1 = new Box<>(100);
        Box<String> b2 = new Box<>("Hello");
        Box<Double> b3 = new Box<>(25.5);

        System.out.println(b1.getValue());
        System.out.println(b2.getValue());
        System.out.println(b3.getValue());

        b1.setValue(200);

        System.out.println("Updated Integer: " + b1.getValue());
    }
}