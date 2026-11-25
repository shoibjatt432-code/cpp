class Pair<K, V> {

    private K key;
    private V value;

    Pair(K key, V value) {
        this.key = key;
        this.value = value;
    }

    K getKey() {
        return key;
    }

    V getValue() {
        return value;
    }
}

public class GenericPair {
    public static void main(String[] args) {

        Pair<Integer, String> student =
                new Pair<>(101, "Rahul");

        System.out.println("Student Information");
        System.out.println("Roll Number: " + student.getKey());
        System.out.println("Name: " + student.getValue());

        Pair<Integer, Double> employee =
                new Pair<>(501, 45000.0);

        System.out.println("\nEmployee Information");
        System.out.println("Employee ID: " + employee.getKey());
        System.out.println("Salary: " + employee.getValue());
    }
}