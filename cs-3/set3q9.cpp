#include <iostream>
using namespace std;

class Product {
private:
    string productName;
    float price;
    int quantity;

public:
    
    Product(string name, float p, int q) {
        productName = name;
        price = p;
        quantity = q;
    }

    Product combine(Product &other) {
        return Product(
            productName,
            price,
            quantity + other.quantity
        );
    }

    float totalValue() {
        return price * quantity;
    }

    void display() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << totalValue() << endl;
    }
};
Product higherValue(Product &p1, Product &p2) {
    if (p1.totalValue() > p2.totalValue())
        return p1;
    else
        return p2;
}

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Laptop", 50000, 3);

    cout << "Product 1:\n";
    p1.display();

    cout << "\nProduct 2:\n";
    p2.display();

    Product combined = p1.combine(p2);

    cout << "\nCombined Inventory:\n";
    combined.display();

    Product higher = higherValue(p1, p2);

    cout << "\nProduct with Higher Total Value:\n";
    higher.display();

    return 0;
}