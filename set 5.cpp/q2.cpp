#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

class Manager : public Employee {
private:
    string department;
    float salary;

public:
    Manager(int id, string n, string d, float s)
        : Employee(id, n) {
        department = d;
        salary = s;
    }

    void display() {
        cout << "ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------" << endl;
    }
};

int main() {

    Manager m[5] = {
        Manager(101, "Ali", "IT", 50000),
        Manager(102, "Ahmed", "HR", 55000),
        Manager(103, "Rahul", "Finance", 60000),
        Manager(104, "Aman", "Sales", 45000),
        Manager(105, "John", "IT", 65000)
    };

    for (int i = 0; i < 5; i++) {
        m[i].display();
    }

    return 0;
}