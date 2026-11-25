abstract class Shape {

    abstract double area();

    abstract double perimeter();

    boolean compareArea(Shape s) {
        return area() > s.area();
    }

    boolean compareArea(double a) {
        return area() > a;
    }
}

class Circle extends Shape {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    double area() {
        return 3.14 * radius * radius;
    }

    double perimeter() {
        return 2 * 3.14 * radius;
    }
}

class Rectangle extends Shape {
    double length, width;

    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    Rectangle(double side) {
        this(side, side);
    }

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }
}

class Triangle extends Shape {
    double a, b, c;

    Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    double area() {
        double s = perimeter() / 2;
        return Math.sqrt(s * (s-a) * (s-b) * (s-c));
    }

    double perimeter() {
        return a + b + c;
    }
}

public class Problem8 {
    public static void main(String[] args) {

        Shape[] shapes = {
            new Circle(3),
            new Rectangle(4, 5),
            new Triangle(3, 4, 5)
        };

        for (int i = 0; i < shapes.length; i++) {
            for (int j = i+1; j < shapes.length; j++) {

                if (shapes[j].area() > shapes[i].area()) {
                    Shape temp = shapes[i];
                    shapes[i] = shapes[j];
                    shapes[j] = temp;
                }
            }
        }

        for (Shape s : shapes) {
            System.out.println("Area: " + s.area());
            System.out.println("Perimeter: " + s.perimeter());
        }
    }
}