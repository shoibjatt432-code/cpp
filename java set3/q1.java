
class Person {
    String name;
    int age;

    // Parameterized constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;

        System.out.println("Person constructor called");
    }
}

class Employee extends Person {
    int employeeId;
    double salary;

    // Parameterized constructor
    Employee(String name, int age, int employeeId, double salary) {
        super(name, age);

        this.employeeId = employeeId;
        this.salary = salary;

        System.out.println("Employee constructor called");
    }
}

class Developer extends Employee {
    String language;
    String projectName;

    // Parameterized constructor
    Developer(String name, int age, int employeeId,
              double salary, String language, String projectName) {

        super(name, age, employeeId, salary);

        this.language = language;
        this.projectName = projectName;

        System.out.println("Developer constructor called");
    }

    void display() {
        System.out.println("\n--- Developer Details ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Salary: " + salary);
        System.out.println("Programming Language: " + language);
        System.out.println("Project Name: " + projectName);
    }
}

public class problem1 {
    public static void main(String[] args) {
        Developer d = new Developer(
            "Rahul", 22, 101, 35000,
            "Java", "Online Shopping System"
        );

        d.display();
    }
}
