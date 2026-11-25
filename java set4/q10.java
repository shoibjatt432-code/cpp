class InvalidAgeException extends Exception {

    InvalidAgeException(String message) {
        super(message);
    }
}

class Student {

    String name;
    int age;

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void checkEligibility() throws InvalidAgeException {

        if (age < 18) {
            throw new InvalidAgeException("Student is not Eligible");
        }

        System.out.println("Student is Eligible");
    }
}

public class Main {
    public static void main(String[] args) {

        Student s1 = new Student("Rahul", 20);
        Student s2 = new Student("Aman", 16);

        try {
            s1.checkEligibility();
            s2.checkEligibility();
        }
        catch (InvalidAgeException e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}