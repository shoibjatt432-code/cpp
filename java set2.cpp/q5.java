
import java.util.HashMap;

class Product {
    int id, quantity;
    String name;
    double price;

    Product(int id, String name, double price, int quantity) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    void display() {
        System.out.println(id + " | " + name + " | "
                           + price + " | " + quantity);
    }
}

public class problem5 {
    static HashMap<Integer, Product> catalogue = new HashMap<>();

    static void addProduct(Product p) {
        if (catalogue.containsKey(p.id)) {
            System.out.println("Product ID already exists");
        } else {
            catalogue.put(p.id, p);
            System.out.println("Product added");
        }
    }

    static void searchProduct(int id) {
        Product p = catalogue.get(id);

        if (p != null)
            p.display();
        else
            System.out.println("Product not found");
    }

    static void updatePrice(int id, double newPrice) {
        Product p = catalogue.get(id);

        if (p != null && newPrice >= 0) {
            p.price = newPrice;
            System.out.println("Price updated");
        } else {
            System.out.println("Invalid product or price");
        }
    }

    static void removeProduct(int id) {
        if (catalogue.remove(id) != null)
            System.out.println("Product removed");
        else
            System.out.println("Product not found");
    }

    static void displayAll() {
        for (Product p : catalogue.values()) {
            p.display();
        }
    }

    public static void main(String[] args) {
        addProduct(new Product(101, "Keyboard", 800, 10));
        addProduct(new Product(102, "Mouse", 400, 20));
        addProduct(new Product(101, "Monitor", 5000, 5));

        System.out.println("\nSearch product 102:");
        searchProduct(102);

        updatePrice(101, 900);

        System.out.println("\nAll products:");
        displayAll();

        removeProduct(102);
    }
}
