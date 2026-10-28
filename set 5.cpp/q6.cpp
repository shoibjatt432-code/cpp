#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
void swapValues(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    // Integer
    int a = 10, b = 20;

    cout << "Larger integer: " << larger(a, b) << endl;

    swapValues(a, b);
    cout << "After swap: " << a << " " << b << endl;

    // Float
    float x = 5.5, y = 3.2;

    cout << "Larger float: " << larger(x, y) << endl;

    swapValues(x, y);
    cout << "After swap: " << x << " " << y << endl;

    // Double
    double p = 12.5, q = 15.7;

    cout << "Larger double: " << larger(p, q) << endl;

    swapValues(p, q);
    cout << "After swap: " << p << " " << q << endl;

    // Character
    char c1 = 'A', c2 = 'Z';

    cout << "Larger character: " << larger(c1, c2) << endl;

    swapValues(c1, c2);
    cout << "After swap: " << c1 << " " << c2 << endl;

    return 0;
}