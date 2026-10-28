#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    friend Employee highestSalary(Employee[], int);
    friend Employee incrementSalary(Employee);
};

Employee highestSalary(Employee e[], int n) {
    Employee highest = e[0];

    for (int i = 1; i < n; i++) {
        if (e[i].salary > highest.salary)
            highest = e[i];
    }

    return highest;
}

Employee incrementSalary(Employee e) {
    e.salary = e.salary + (e.salary * 10 / 100);
    return e;
}

int main() {
    Employee e[3], highest, revised;

    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        e[i].input();
    }

    highest = highestSalary(e, 3);

    cout << "\nEmployee with Highest Salary:\n";
    highest.display();

    revised = incrementSalary(e[0]);

    cout << "\nAfter 10% Increment:\n";
    revised.display();

    return 0;
}