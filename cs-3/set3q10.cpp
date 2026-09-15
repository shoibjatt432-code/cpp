#include <iostream>
using namespace std;

class Result {
private:
    int rollNo;
    int marks[5];

public:

    Result(int r = 0, int m1 = 0, int m2 = 0, int m3 = 0,
           int m4 = 0, int m5 = 0) {
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    int totalMarks() {
        int total = 0;

        for (int i = 0; i < 5; i++)
            total += marks[i];

        return total;
    }

    void compare(Result &other) {
        int total1 = totalMarks();
        int total2 = other.totalMarks();

        if (total1 > total2)
            cout << "Roll No " << rollNo << " has higher marks.\n";
        else if (total2 > total1)
            cout << "Roll No " << other.rollNo << " has higher marks.\n";
        else
            cout << "Both students have equal marks.\n";
    }

    int getRollNo() {
        return rollNo;
    }

    int getMarks(int index) {
        return marks[index];
    }

    void setMarks(int index, int value) {
        marks[index] = value;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: ";

        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";

        cout << "\nTotal Marks: " << totalMarks() << endl;
    }
};

Result topper(Result &r1, Result &r2, Result &r3) {
    if (r1.totalMarks() >= r2.totalMarks() &&
        r1.totalMarks() >= r3.totalMarks())
        return r1;

    else if (r2.totalMarks() >= r1.totalMarks() &&
             r2.totalMarks() >= r3.totalMarks())
        return r2;

    else
        return r3;
}

Result applyGrace(Result &r) {
    Result result = r;     // Create a copy
    int totalGrace = 0;

    for (int i = 0; i < 5; i++) {
        int currentMarks = r.getMarks(i);

        
        if (currentMarks < 40 && totalGrace < 20) {
            int grace = 5;

            
            if (totalGrace + grace > 20)
                grace = 20 - totalGrace;

            
            if (currentMarks + grace > 100)
                grace = 100 - currentMarks;

            result.setMarks(i, currentMarks + grace);
            totalGrace += grace;
        }
    }

    return result;
}


int main() {

    Result student1(101, 78, 85, 67, 90, 72);
    Result student2(102, 88, 76, 91, 69, 80);
    Result student3(103, 92, 89, 95, 87, 90);

    
    cout << "----- Student 1 -----\n";
    student1.display();

    cout << "\n----- Student 2 -----\n";
    student2.display();

    cout << "\n----- Student 3 -----\n";
    student3.display();


    
    cout << "\n----- Comparison -----\n";
    student1.compare(student2);


    
    Result top = topper(student1, student2, student3);

    cout << "\n----- Topper -----\n";
    top.display();

    Result student4(104, 38, 35, 72, 39, 36);

    cout << "\n----- Before Grace Marks -----\n";
    student4.display();

    Result graceResult = applyGrace(student4);

    cout << "\n----- After Grace Marks -----\n";
    graceResult.display();

    return 0;
}
