public class problem6 {

    public static <T extends Comparable<T>> T findMaximum(
            T a, T b, T c) {

        T max = a;

        if (b.compareTo(max) > 0) {
            max = b;
        }

        if (c.compareTo(max) > 0) {
            max = c;
        }

        return max;
    }

    public static void main(String[] args) {
        System.out.println("Maximum Integer: " +
            findMaximum(10, 30, 20));

        System.out.println("Maximum Double: " +
            findMaximum(10.5, 25.5, 15.5));

        System.out.println("Maximum String: " +
            findMaximum("Apple", "Mango", "Banana"));
    }
}