
import java.util.ArrayList;

class Book {
    String isbn, title, author;
    double price;

    Book(String isbn, String title, String author, double price) {
        this.isbn = isbn;
        this.title = title;
        this.author = author;
        this.price = price;
    }

    void display() {
        System.out.println(isbn + " | " + title + " | "
                           + author + " | " + price);
    }
}

public class problem4 {
    static ArrayList<Book> books = new ArrayList<>();

    static void addBook(Book b) {
        for (Book book : books) {
            if (book.isbn.equals(b.isbn)) {
                System.out.println("Duplicate ISBN!");
                return;
            }
        }

        books.add(b);
        System.out.println("Book added: " + b.title);
    }

    static void searchBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                System.out.println("Book found:");
                b.display();
                return;
            }
        }

        System.out.println("Book not found");
    }

    static void removeBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                books.remove(b);
                System.out.println("Book removed");
                return;
            }
        }

        System.out.println("Book not found");
    }

    static void displayBooks() {
        for (Book b : books) {
            b.display();
        }
    }

    public static void main(String[] args) {
        addBook(new Book("B101", "Java", "James", 400));
        addBook(new Book("B102", "Python", "Guido", 500));
        addBook(new Book("B101", "Java 2", "James", 450));

        System.out.println("\nSearching B102:");
        searchBook("B102");

        System.out.println("\nRemoving B101:");
        removeBook("B101");

        System.out.println("\nRemaining books:");
        displayBooks();
    }
}
