
class Employee {
    private int id;
    private String name;
    private double basic;

    Employee(int id, String name, double basic) {
        this.id = id;
        this.name = name;
        this.basic = basic;
    }

    double grossSalary() {
        double hra = basic * 0.20;
        double da = basic * 0.10;
        double bonus = 0;

        if (basic > 50000) {
            bonus = basic * 0.05;
        }

        return basic + hra + da + bonus;
    }

    void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Basic Salary: " + basic);
        System.out.println("Gross Salary: " + grossSalary());
        System.out.println();
    }

    static Employee higherSalary(Employee e1, Employee e2) {
        if (e1.grossSalary() >= e2.grossSalary())
            return e1;
        else
            return e2;
    }

    String getName() {
        return name;
    }
}

public class problem3 {
    public static void main(String[] args) {
        Employee e1 = new Employee(1, "Aamir", 40000);
        Employee e2 = new Employee(2, "Sara", 60000);
        Employee e3 = new Employee(3, "Rahul", 50000);

        e1.display();
        e2.display();
        e3.display();

        Employee higher = Employee.higherSalary(e1, e2);
        System.out.println("Higher salary employee: " + higher.getName());
    }
}
