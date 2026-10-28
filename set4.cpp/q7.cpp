#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    Numbers(int x, int y) {
        a = x;
        b = y;
    }

    friend void largest(Numbers n);
};

void largest(Numbers n) {
    if (n.a > n.b)
        cout << "Largest = " << n.a << endl;
    else
        cout << "Largest = " << n.b << endl;
}

int main() {
    Numbers n(25, 40);

    largest(n);

    return 0;
}