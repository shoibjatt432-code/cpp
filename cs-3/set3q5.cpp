#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    double getReal() const { return real; }
    double getImag() const { return imag; }

    Complex add(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex multiply(const Complex& c) const {
        // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        double r = (real * c.real) - (imag * c.imag);
        double i = (real * c.imag) + (imag * c.real);
        return Complex(r, i);
    }


    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex subtract(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() - c2.getReal(), c1.getImag() - c2.getImag());
}

int main() {
    Complex num1(3.0, 2.0);
    Complex num2(1.0, 4.0);

    Complex sum = num1.add(num2);
    Complex diff = subtract(num1, num2);
    Complex prod = num1.multiply(num2);

    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();
    cout << "Product: "; prod.display();

    return 0;
}
