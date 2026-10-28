#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {
        if (b == 0)
            throw b;

        cout << "Result = " << (double)a / b << endl;
    }
    catch (int) {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}