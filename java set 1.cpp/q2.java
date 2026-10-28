
import java.util.Scanner;

public class problem02{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter N: ");
        int n = sc.nextInt();

        for (int i = 2; i <= n; i = i + 2) {
            System.out.print(i + " ");
        }
    }
}
