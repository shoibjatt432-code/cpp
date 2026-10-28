#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    void input() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance add(Distance d) {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet++;
            temp.inches -= 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, result;

    d1.input();
    d2.input();

    result = d1.add(d2);

    cout << "Total Distance: ";
    result.display();

    return 0;
}