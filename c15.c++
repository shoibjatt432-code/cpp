#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student {
string name;
string rollNo;
vector<string> subjects;
vector<int> marks;
double cgpa;
};
void printStudent(const Student& s) {
cout << "Student Details:
";
cout << "Name: " << s.name << '
';
cout << "Roll Number: " << s.rollNo << '
';
for (const string& subject : s.subjects) {
cout << "Subjects: " << subject << '
';
}
cout << "Marks: " << s.marks << '
';
cout << "CGPA: " << s.cgpa << '
';
}
int main() {
Student student;
cout << "Enter Name: ";
cin >> student.name;
cout << "Enter Roll Number: ";
cin >> student.rollNo;
cout << "Enter Subjects: ";
for (string subject : cin) {
student.subjects.push_back(subject);
}
cout << "Enter Marks: ";
for (int mark : cin) {
student.marks.push_back(mark);
}
cout << "Enter CGPA: ";
cin >> student.cgpa;
printStudent(student);
return 0;
}