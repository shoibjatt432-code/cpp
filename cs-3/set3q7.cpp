#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    double getLength() const { return length; }
    double getWidth() const { return width; }

    double getArea() const {
        return length * width;
    }

    bool hasEqualArea(const Rectangle& other) const {
        return this->getArea() == other.getArea();
    }

    void display() const {
        std::cout << "Rectangle [" << length << " x " << width 
                  << "] (Area: " << getArea() << ")" << std::endl;
    }

    friend Rectangle mergeRectangles(const Rectangle& r1, const Rectangle& r2);
};

Rectangle mergeRectangles(const Rectangle& r1, const Rectangle& r2) {

    double newLength = r1.getLength() + r2.getLength();
    double newWidth = r1.getWidth() + r2.getWidth();
    
    
    return Rectangle(newLength, newWidth);
}

int main() {
    
    Rectangle rect1(5.0, 4.0);  
    Rectangle rect2(2.0, 10.0);
    Rectangle rect3(3.0, 6.0);  

    std::cout << "Initial Rectangles:\n";
    rect1.display();
    rect2.display();
    rect3.display();
    std::cout << "------------------------------------\n";

    std::cout << "Comparing Areas:\n";
    if (rect1.hasEqualArea(rect2)) {
        cout << "rect1 and rect2 have EQUAL areas.\n";
    } else {
        cout << "rect1 and rect2 have DIFFERENT areas.\n";
    }

    if (rect1.hasEqualArea(rect3)) {
        cout << "rect1 and rect3 have EQUAL areas.\n";
    } else {
        cout << "rect1 and rect3 have DIFFERENT areas.\n";
    }
    cout << "------------------------------------\n";


    cout << "Merging rect1 and rect3:\n";
    Rectangle mergedRect = mergeRectangles(rect1, rect3);
    mergedRect.display(); 

    return 0;
}
