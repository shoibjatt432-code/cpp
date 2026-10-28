#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void input() {
        cout << "Enter number: ";
        cin >> value;
    }

    void display() {
        cout << "Sum = " << value << endl;
    }

    friend Number add(Number, Number);
};

Number add(Number a, Number b) {
    Number c;
    c.value = a.value + b.value;
    return c;
}

int main() {
    Number n1, n2, result;

    n1.input();
    n2.input();

    result = add(n1, n2);
    result.display();

    return 0;
}