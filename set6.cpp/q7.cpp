#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter expression (example: 10 / 2): ";
    cin >> a >> op >> b;

    try {
        switch (op) {
            case '+':
                cout << "Result = " << a + b << endl;
                break;

            case '-':
                cout << "Result = " << a - b << endl;
                break;

            case '*':
                cout << "Result = " << a * b << endl;
                break;

            case '/':
                if (b == 0)
                    throw 0;
                cout << "Result = " << a / b << endl;
                break;

            default:
                throw op;
        }
    }
    catch (int) {
        cout << "Division by Zero Error." << endl;
    }
    catch (char) {
        cout << "Invalid Operator." << endl;
    }

    return 0;
}