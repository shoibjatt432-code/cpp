#include <iostream>
using namespace std;

class Employee
{
private:
    string employeeName;
    float basicSalary;

public:
    Employee(string name, float salary)
    {
        employeeName = name;
        basicSalary = salary;
    }

    float calculateHRA()
    {
        return basicSalary * 0.20;
    }

    float calculateDA()
    {
        return basicSalary * 0.10;
    }

    void displaySalary()
    {
        float hra = calculateHRA();
        float da = calculateDA();
        float gross = basicSalary + hra + da;

        cout << "\nEmployee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main()
{
    Employee e("Shoib", 30000);

    e.displaySalary();

    return 0;
}