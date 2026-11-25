import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        // 1. Create an int variable
        int num = 10;

        // 2. Autoboxing: int to Integer
        Integer obj = num;

        System.out.println("Integer Object: " + obj);

        // 3. Unboxing: Integer to int
        int value = obj;

        System.out.println("Unboxed Value: " + value);

        // 4. Store five integers in ArrayList
        ArrayList<Integer> numbers = new ArrayList<>();

        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(40);
        numbers.add(50);

        // Calculate sum
        int sum = 0;

        for (int n : numbers) {
            sum = sum + n;
        }

        // Calculate average
        double average = (double) sum / numbers.size();

        System.out.println("Numbers: " + numbers);
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);

        // 5. Integer.parseInt()
        String str1 = "100";
        int a = Integer.parseInt(str1);

        System.out.println("Integer.parseInt(): " + a);

        // 6. Double.parseDouble()
        String str2 = "25.5";
        double b = Double.parseDouble(str2);

        System.out.println("Double.parseDouble(): " + b);

        // 7. Integer.toString()
        int x = 500;
        String str3 = Integer.toString(x);

        System.out.println("Integer.toString(): " + str3);
    }
}