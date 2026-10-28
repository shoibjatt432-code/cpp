#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;
    float area;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void calculateArea()
    {
        area = length * breadth;
    }

    void displayArea()
    {
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.calculateArea();
    r.displayArea();

    return 0;
}