#include <iostream>
#include <string>
#include <utility> 
using namespace std;

class Book {
private:
    int bookID;
    std::string title;
    int numCopies;

public:
    
    Book(int id, std::string t, int copies) 
        : bookID(id), title(std::move(t)), numCopies(copies) {}

    void exchange(Book &other) {
        swap(this->bookID, other.bookID);
        swap(this->title, other.title);
        swap(this->numCopies, other.numCopies);
    }

    int getCopies() const {
        return numCopies;
    }

    void display() const {
        cout << "ID: " << bookID << ", Title: " << title << ", Copies: " << numCopies << std::endl;
    }
};

const Book& compareCopies(const Book &b1, const Book &b2) {
    if (b1.getCopies() >= b2.getCopies()) {
        return b1;
    }
    return b2;
}

int main() {
    Book book1(101, "Data Structures", 5);
    Book book2(102, "Algorithms", 12);

    cout << "Before exchange:" << std::endl;
    cout << "Book 1: "; book1.display();
    cout << "Book 2: "; book2.display();

    book1.exchange(book2);

    cout << "\nAfter exchange:" << std::endl;
    cout << "Book 1: "; book1.display();
    cout << "Book 2: "; book2.display();

    const Book &richerBook = compareCopies(book1, book2);
    cout << "\nBook with more copies: ";
    richerBook.display();

    return 0;
}
