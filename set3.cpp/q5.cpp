#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex multiply(Complex c) {
        Complex temp;

        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;

        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex subtract(Complex, Complex);
};

Complex subtract(Complex c1, Complex c2) {
    Complex temp;

    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;

    return temp;
}

int main() {
    Complex c1, c2, result;

    c1.input();
    c2.input();

    cout << "\nAddition: ";
    result = c1.add(c2);
    result.display();

    cout << "Subtraction: ";
    result = subtract(c1, c2);
    result.display();

    cout << "Multiplication: ";
    result = c1.multiply(c2);
    result.display();

    return 0;
}