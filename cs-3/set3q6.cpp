#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
    string name;
    double salary;

    Employee(std::string empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }

    void display() const {
        std::cout << "Name: " << name << ", Salary: $" << salary << std::endl;
    }
};

Employee getHighestSalaryEmployee(const std::vector<Employee>& employees) {
    if (employees.empty()) {
        throw std::invalid_argument("Employee list is empty.");
    }

    const Employee* highest = &employees[0];
    for (size_t i = 1; i < employees.size(); ++i) {
        if (employees[i].salary > highest->salary) {
            highest = &employees[i];
        }
    }
    return *highest;
}

Employee giveTenPercentIncrement(const Employee& emp) {
    return Employee(emp.name, emp.salary * 1.10);
}

int main() {

    vector<Employee> team = {
        {"Alice", 50000.0},
        {"Bob", 75000.0},
        {"Charlie", 62000.0}
    };

    
    Employee topEarner = getHighestSalaryEmployee(team);
    cout << "Highest Salary Employee:\n";
    topEarner.display();

    Employee revisedEmp = giveTenPercentIncrement(team[0]);
    std::cout << "\nRevised Employee Details:\n";
    revisedEmp.display();

    return 0;
}
