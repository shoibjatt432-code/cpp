#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance d) {
        Distance temp(0, 0);

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(3, 9);

    Distance d3 = d1 + d2;

    cout << "Total Distance = ";
    d3.display();

    return 0;
}