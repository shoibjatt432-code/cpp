#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
};

class EBook : public Book {
private:
    float fileSize;
    string format;

public:
    EBook(string t, string a, float f, string fm)
        : Book(t, a) {
        fileSize = f;
        format = fm;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "File Size: " << fileSize << " MB" << endl;
        cout << "Format: " << format << endl;
        cout << "------------------" << endl;
    }
};

int main() {

    EBook books[3] = {
        EBook("C++ Programming", "Bjarne", 5.5, "PDF"),
        EBook("Java Programming", "James", 4.2, "EPUB"),
        EBook("Python Basics", "Guido", 3.8, "PDF")
    };

    for (int i = 0; i < 3; i++) {
        books[i].display();
    }

    return 0;
}