#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    void input() {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    bool equalArea(Rectangle r) {
        return (length * width == r.length * r.width);
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }

    friend Rectangle mergeRectangle(Rectangle, Rectangle);
};

Rectangle mergeRectangle(Rectangle r1, Rectangle r2) {
    Rectangle r;

    r.length = r1.length + r2.length;
    r.width = r1.width + r2.width;

    return r;
}

int main() {
    Rectangle r1, r2, result;

    cout << "Rectangle 1:\n";
    r1.input();

    cout << "\nRectangle 2:\n";
    r2.input();

    if (r1.equalArea(r2))
        cout << "\nBoth rectangles have equal area.\n";
    else
        cout << "\nAreas are different.\n";

    result = mergeRectangle(r1, r2);

    cout << "\nMerged Rectangle:\n";
    result.display();

    return 0;
}