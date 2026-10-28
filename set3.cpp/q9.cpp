#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;

public:
    void input() {
        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    Product combine(Product p) {
        Product temp;

        temp.name = name + "_" + p.name;
        temp.price = price;
        temp.quantity = quantity + p.quantity;

        return temp;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }

    friend Product higherValue(Product, Product);
};

Product higherValue(Product p1, Product p2) {
    if (p1.price * p1.quantity > p2.price * p2.quantity)
        return p1;
    else
        return p2;
}

int main() {
    Product p1, p2, result;

    cout << "Product 1:\n";
    p1.input();

    cout << "\nProduct 2:\n";
    p2.input();

    result = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value:\n";
    result.display();

    result = p1.combine(p2);

    cout << "\nCombined Inventory:\n";
    result.display();

    return 0;
}