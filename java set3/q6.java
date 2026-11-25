abstract class Employee {
    String name;
    int id;

    Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    abstract double calculateSalary();
}

class PermanentEmployee extends Employee {
    double salary;

    PermanentEmployee(String name, int id, double salary) {
        super(name, id);
        this.salary = salary;
    }

    double calculateSalary() {
        return salary;
    }
}

class ContractEmployee extends Employee {
    int days;
    double rate;

    ContractEmployee(String name, int id, int days, double rate) {
        super(name, id);
        this.days = days;
        this.rate = rate;
    }

    double calculateSalary() {
        return days * rate;
    }
}

class CommissionEmployee extends Employee {
    double basic, sales;

    CommissionEmployee(String name, int id, double basic, double sales) {
        super(name, id);
        this.basic = basic;
        this.sales = sales;
    }

    double calculateSalary() {
        return basic + sales * 0.05;
    }

    double calculateSalary(double bonus) {
        return calculateSalary() + bonus;
    }
}

public class Problem6 {
    public static void main(String[] args) {

        Employee[] e = {
            new PermanentEmployee("Ayan", 1, 40000),
            new ContractEmployee("Rahul", 2, 20, 1000),
            new CommissionEmployee("Shoib", 3, 20000, 100000)
        };

        for (Employee x : e) {
            System.out.println("Name: " + x.name);
            System.out.println("Salary: " + x.calculateSalary());
        }
    }
}