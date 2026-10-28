#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");

    int roll, marks;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    file << roll << " " << name << " " << marks << endl;

    file.close();

    cout << "Student record saved successfully." << endl;

    return 0;
}