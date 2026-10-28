#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayData()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.setData();
    s.displayData();

    return 0;
}