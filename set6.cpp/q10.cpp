#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source) {
        cout << "Error: Source file could not be opened." << endl;
        return 1;
    }

    if (!destination) {
        cout << "Error: Destination file could not be created." << endl;
        return 1;
    }

    destination << source.rdbuf();

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;

    return 0;
}