public class FindMaximum {

    public static <T extends Comparable<T>>
    T findMax(T a, T b, T c) {

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

        System.out.println("Integer Maximum: "
                + findMax(10, 20, 15));

        System.out.println("Double Maximum: "
                + findMax(5.5, 8.2, 3.1));

        System.out.println("String Maximum: "
                + findMax("Apple", "Mango", "Banana"));
    }
}