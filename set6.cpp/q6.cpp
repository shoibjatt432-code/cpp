#include <iostream>
using namespace std;

class VotingException {};

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18)
            throw VotingException();

        cout << "Eligible to vote." << endl;
    }
    catch (VotingException) {
        cout << "Exception: Not eligible for voting." << endl;
    }

    return 0;
}