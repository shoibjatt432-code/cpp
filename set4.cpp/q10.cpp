#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

public:
    Book(int id, string name, float p) {
        bookID = id;
        bookName = name;
        price = p;
        totalBooks++;
    }

    inline float discountPrice() {
        return price - (price * 10 / 100);
    }

    bool operator>(Book b) {
        return price > b.price;
    }

    friend void costlierBook(Book b1, Book b2);

    static void displayTotalBooks() {
        cout << "Total Books = " << totalBooks << endl;
    }
};

int Book::totalBooks = 0;

void costlierBook(Book b1, Book b2) {
    Book costly = (b1 > b2) ? b1 : b2;

    cout << "\nCostlier Book:" << endl;
    cout << "ID: " << costly.bookID << endl;
    cout << "Name: " << costly.bookName << endl;
    cout << "Price: " << costly.price << endl;
}

int main() {
    Book b1(101, "C++ Basics", 500);
    Book b2(102, "C++ Programming", 700);

    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;

    costlierBook(b1, b2);

    Book::displayTotalBooks();

    cout << "Discounted Price = " << b2.discountPrice() << endl;

    return 0;
}