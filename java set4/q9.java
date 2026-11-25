import java.util.Scanner;
import java.util.InputMismatchException;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter First Number: ");
            int a = sc.nextInt();

            System.out.print("Enter Second Number: ");
            int b = sc.nextInt();

            int result = a / b;

            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Cannot Divide by Zero");
        }
        catch (InputMismatchException e) {
            System.out.println("Please Enter Numeric Values");
        }
        finally {
            System.out.println("Program Execution Completed");
        }

        sc.close();
    }
}