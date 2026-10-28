
import java.util.Scanner;

public class problem05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter N: ");
        int n = sc.nextInt();

        long fact = 1;

        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
 
        System.out.println("Factorial = " + fact);
    }
}
