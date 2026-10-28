#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T a, b;

public:
    Pair(T x, T y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "Maximum: " << (a > b ? a : b) << endl;
        cout << "Minimum: " << (a < b ? a : b) << endl;
    }
};

int main() {
    Pair<int> p1(10, 20);

    cout << "Integer Pair:" << endl;
    p1.display();

    Pair<float> p2(5.5, 2.3);

    cout << "\nFloating Point Pair:" << endl;
    p2.display();

    return 0;
}