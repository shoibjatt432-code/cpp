#include <iostream>
using namespace std;


class Number {
public:
    int value;


    void display() {
        cout << value << endl;
    }
};

Number add(Number num1, Number num2) {
    Number result; 
    result.value = num1.value + num2.value;
    return result; 
}

int main() {
    Number n1, n2, sum;

    cout << "Enter the first number: ";
    cin >> n1.value;

    cout << "Enter the second number: ";
    cin >> n2.value;

    sum = add(n1, n2);

    cout << "The sum of the two numbers is: ";
    sum.display();

    return 0;
}
