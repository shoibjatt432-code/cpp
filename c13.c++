// Constructor demonstration: Book class with parameterized constructor
public class Book {
    private String title;
    private String author;

    // Parameterized constructor to initialize title and author
    public Book(String title, String author) {
        if (title == null || title.trim().isEmpty()) {
            throw new IllegalArgumentException("Title cannot be null or empty.");
        }
        if (author == null || author.trim().isEmpty()) {
            throw new IllegalArgumentException("Author cannot be null or empty.");
        }
        this.title = title;
        this.author = author;
    }

    // Method to display book details
    public void displayDetails() {
        System.out.println("Book Title : " + title);
        System.out.println("Author     : " + author);
    }

    // Main method to test the Book class
    public static void main(String[] args) {
        try {
            // Create a Book object using the parameterized constructor
            Book myBook = new Book("The Great Gatsby", "F. Scott Fitzgerald");

            // Display the book details
            myBook.displayDetails();
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}