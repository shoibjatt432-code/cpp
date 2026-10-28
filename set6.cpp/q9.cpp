#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("article.txt");

    if (!file) {
        cout << "Error: File could not be opened." << endl;
        return 1;
    }

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line)) {
        lines++;
        characters += line.length();

        bool inWord = false;

        for (char ch : line) {
            if (ch != ' ' && ch != '\t') {
                if (!inWord) {
                    words++;
                    inWord = true;
                }
            }
            else {
                inWord = false;
            }
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}