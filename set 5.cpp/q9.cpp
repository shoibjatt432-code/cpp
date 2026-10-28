#include <iostream>
using namespace std;

template <class T>
class Result {
private:
    T marks[5];

public:
    void input() {
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void display() {
        T total = 0;
        T highest = marks[0];
        T lowest = marks[0];

        for (int i = 0; i < 5; i++) {
            total += marks[i];

            if (marks[i] > highest)
                highest = marks[i];

            if (marks[i] < lowest)
                lowest = marks[i];
        }

        double average = (double)total / 5;

        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Highest: " << highest << endl;
        cout << "Lowest: " << lowest << endl;
    }
};

int main() {

    cout << "Integer Marks\n";
    Result<int> r1;
    r1.input();
    r1.display();

    cout << "\nFloating Point Marks\n";
    Result<float> r2;
    r2.input();
    r2.display();

    return 0;
}