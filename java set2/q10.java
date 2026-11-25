import java.util.*;

class Product {
    int id;
    String name;
    double price;

    Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }
}

class CartItem {
    Product product;
    int quantity;

    CartItem(Product product, int quantity) {
        this.product = product;
        this.quantity = quantity;
    }
}

class ShoppingCart {

    private HashMap<Integer, CartItem> cart = new HashMap<>();

    void addProduct(Product p, int quantity) {

        if (quantity <= 0) {
            System.out.println("Invalid Quantity!");
            return;
        }

        if (cart.containsKey(p.id)) {
            cart.get(p.id).quantity += quantity;
        } else {
            cart.put(p.id, new CartItem(p, quantity));
        }

        System.out.println("Product Added Successfully!");
    }

    void updateQuantity(int id, int quantity) {

        if (quantity <= 0) {
            System.out.println("Invalid Quantity!");
            return;
        }

        if (cart.containsKey(id)) {
            cart.get(id).quantity = quantity;
            System.out.println("Quantity Updated!");
        } else {
            System.out.println("Product Not Found!");
        }
    }

    void removeProduct(int id) {
        if (cart.remove(id) != null) {
            System.out.println("Product Removed!");
        } else {
            System.out.println("Product Not Found!");
        }
    }

    void displayCart() {

        double subtotal = 0;

        System.out.println("\nProduct\tQuantity\tAmount");

        for (CartItem item : cart.values()) {

            double amount = item.product.price * item.quantity;

            subtotal += amount;

            System.out.println(
                item.product.name + "\t" +
                item.quantity + "\t\t" +
                amount
            );
        }

        double discount = 0;

        if (subtotal >= 5000) {
            discount = subtotal * 0.10;
        }
        else if (subtotal >= 1000) {
            discount = subtotal * 0.05;
        }

        double finalAmount = subtotal - discount;

        System.out.println("-----------------------------");
        System.out.printf("Subtotal: %.2f%n", subtotal);
        System.out.printf("Discount: %.2f%n", discount);
        System.out.printf("Final Amount: %.2f%n", finalAmount);
    }
}

public class Main {

    public static void main(String[] args) {

        ShoppingCart cart = new ShoppingCart();

        Product p1 = new Product(101, "Keyboard", 800);
        Product p2 = new Product(102, "Mouse", 700);

        cart.addProduct(p1, 2);
        cart.addProduct(p2, 1);

        cart.displayCart();

        cart.updateQuantity(101, 3);

        System.out.println("\nUpdated Shopping Cart:");

        cart.displayCart();
    }
}