interface Drawable {
    void draw();
}

abstract class Shape {
    abstract double calculateArea();

    void display() {
        System.out.println("Area: " + calculateArea());
    }
}

class Circle extends Shape implements Drawable {
    double radius = 5;

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    public void draw() {
        System.out.println("Drawing Circle");
    }
}

class Rectangle extends Shape implements Drawable {
    double length = 10, breadth = 5;

    double calculateArea() {
        return length * breadth;
    }

    public void draw() {
        System.out.println("Drawing Rectangle");
    }
}

public class Main {
    public static void main(String[] args) {

        Circle c = new Circle();
        c.draw();
        c.display();

        Rectangle r = new Rectangle();
        r.draw();
        r.display();
    }
}