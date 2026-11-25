abstract class Employee {
    String name;
    int employeeId;

    Employee(String name, int employeeId) {
        this.name = name;
        this.employeeId = employeeId;
    }

    abstract double calculateSalary();

    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Salary: " + calculateSalary());
    }
}

class PermanentEmployee extends Employee {
    double basic, hra, da;

    PermanentEmployee(String name, int id, double basic,
                      double hra, double da) {
        super(name, id);
        this.basic = basic;
        this.hra = hra;
        this.da = da;
    }

    double calculateSalary() {
        return basic + hra + da;
    }
}

class ContractEmployee extends Employee {
    int hours;
    double rate;

    ContractEmployee(String name, int id, int hours, double rate) {
        super(name, id);
        this.hours = hours;
        this.rate = rate;
    }

    double calculateSalary() {
        return hours * rate;
    }
}

public class q1 {
    public static void main(String[] args) {
        PermanentEmployee p =
            new PermanentEmployee("Shoib", 101, 20000, 5000, 3000);

        ContractEmployee c =
            new ContractEmployee("Ahmed", 102, 100, 200);

        p.displayDetails();
        System.out.println();

        c.displayDetails();
    }
}