#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// Student class definition
class Student {
private:
    int rollNo;
    string name;
    float marks[3]; // marks for 3 subjects
    float percentage;
    char grade;

    // Calculate percentage and grade
    void calculateResult() {
        float total = 0;
        for (float m : marks) total += m;
        percentage = total / 3.0f;

        if (percentage >= 90) grade = 'A';
        else if (percentage >= 75) grade = 'B';
        else if (percentage >= 60) grade = 'C';
        else if (percentage >= 50) grade = 'D';
        else grade = 'F';
    }

public:
    // Input student data
    void input() {
        cout << "Enter Roll No: ";
        while (!(cin >> rollNo) || rollNo <= 0) {
            cout << "Invalid input. Enter a positive integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << i + 1 << " (0-100): ";
            while (!(cin >> marks[i]) || marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid marks. Enter between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        calculateResult();
    }

    // Display student data
    void display() const {
        cout << left << setw(10) << rollNo
             << setw(20) << name
             << setw(10) << fixed << setprecision(2) << percentage
             << setw(5) << grade << endl;
    }

    // Save student to file
    void saveToFile() const {
        ofstream fout("students.dat", ios::binary | ios::app);
        if (!fout) {
            cerr << "Error opening file for writing.\n";
            return;
        }
        fout.write(reinterpret_cast<const char*>(this), sizeof(Student));
        fout.close();
    }

    // Search by roll number
    bool hasRollNo(int r) const {
        return rollNo == r;
    }

    // Update student record
    void update() {
        cout << "Updating record for Roll No: " << rollNo << endl;
        input();
    }
};

// Function to display all students
void displayAll() {
    ifstream fin("students.dat", ios::binary);
    if (!fin) {
        cerr << "No records found.\n";
        return;
    }
    Student s;
    cout << left << setw(10) << "Roll No"
         << setw(20) << "Name"
         << setw(10) << "Percent"
         << setw(5) << "Grade" << endl;
    cout << string(45, '-') << endl;
    while (fin.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        s.display();
    }
    fin.close();
}

// Function to search student by roll number
void searchStudent(int roll) {
    ifstream fin("students.dat", ios::binary);
    if (!fin) {
        cerr << "No records found.\n";
        return;
    }
    Student s;
    bool found = false;
    while (fin.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        if (s.hasRollNo(roll)) {
            cout << left << setw(10) << "Roll No"
                 << setw(20) << "Name"
                 << setw(10) << "Percent"
                 << setw(5) << "Grade" << endl;
            cout << string(45, '-') << endl;
            s.display();
            found = true;
            break;
        }
    }
    if (!found) cout << "Student with Roll No " << roll << " not found.\n";
    fin.close();
}

// Function to update student record
void updateStudent(int roll) {
    fstream file("students.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cerr << "No records found.\n";
        return;
    }
    Student s;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        if (s.hasRollNo(roll)) {
            file.seekp(-static_cast<int>(sizeof(Student)), ios::cur);
            s.update();
            file.write(reinterpret_cast<const char*>(&s), sizeof(Student));
            cout << "Record updated successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "Student with Roll No " << roll << " not found.\n";
    file.close();
}

// Main menu
int main() {
    int choice;
    do {
        cout << "\n===== Student Result Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Update Student Record\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        while (!(cin >> choice) || choice < 1 || choice > 5) {
            cout << "Invalid choice. Enter between 1 and 5: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (choice == 1) {
            Student s;
            s.input();
            s.saveToFile();
        } else if (choice == 2) {
            displayAll();
        } else if (choice == 3) {
            int roll;
            cout << "Enter Roll No to search: ";
            cin >> roll;
            searchStudent(roll);
        } else if (choice == 4) {
            int roll;
            cout << "Enter Roll No to update: ";
            cin >> roll;
            updateStudent(roll);
        }
    } while (choice != 5);

    cout << "Exiting program.\n";
    return 0;
}