#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class Employee {
private:
    std::string employeeName;
    int employeeID;
    double basicSalary;
    double hra; // House Rent Allowance
    double da;  // Dearness Allowance
    double ta;  // Travel Allowance
    double pf;  // Provident Fund deduction
    double tds; // Tax Deducted at Source

public:
    // Constructor
    Employee() : employeeID(0), basicSalary(0), hra(0), da(0), ta(0), pf(0), tds(0) {}

    // Method to safely input employee details
    void inputDetails() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, employeeName);

        std::cout << "Enter Employee ID (integer): ";
        while (!(std::cin >> employeeID) || employeeID <= 0) {
            std::cout << "Invalid ID. Enter a positive integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Enter Basic Salary: ";
        while (!(std::cin >> basicSalary) || basicSalary < 0) {
            std::cout << "Invalid salary. Enter a non-negative number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Allowances and deductions
        hra = basicSalary * 0.20; // 20% of basic
        da  = basicSalary * 0.10; // 10% of basic
        ta  = basicSalary * 0.05; // 5% of basic
        pf  = basicSalary * 0.08; // 8% deduction
        tds = basicSalary * 0.05; // 5% deduction
    }

    // Method to calculate net salary
    double calculateNetSalary() const {
        double grossSalary = basicSalary + hra + da + ta;
        double deductions = pf + tds;
        return grossSalary - deductions;
    }

    // Method to display salary slip
    void displaySalarySlip() const {
        std::cout << "\n===== Salary Slip =====\n";
        std::cout << "Employee Name : " << employeeName << "\n";
        std::cout << "Employee ID   : " << employeeID << "\n";
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Basic Salary  : " << basicSalary << "\n";
        std::cout << "HRA           : " << hra << "\n";
        std::cout << "DA            : " << da << "\n";
        std::cout << "TA            : " << ta << "\n";
        std::cout << "PF Deduction  : " << pf << "\n";
        std::cout << "TDS Deduction : " << tds << "\n";
        std::cout << "Net Salary    : " << calculateNetSalary() << "\n";
        std::cout << "=======================\n";
    }
};

int main() {
    Employee emp;
    emp.inputDetails();
    emp.displaySalarySlip();
    return 0;
}