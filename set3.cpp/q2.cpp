#include <iostream>
using namespace std;

class Student {
    int rollNo;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    friend Student findTop(Student, Student);
};

Student findTop(Student s1, Student s2) {
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main() {
    Student s1, s2, top;

    s1.input();
    s2.input();

    top = findTop(s1, s2);

    cout << "\nStudent with Higher Marks:\n";
    top.display();

    return 0;
}