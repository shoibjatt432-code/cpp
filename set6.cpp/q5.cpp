#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int index;

    cout << "Enter index: ";
    cin >> index;

    try {
        if (index < 0 || index > 9)
            throw index;

        cout << "Element = " << arr[index] << endl;
    }
    catch (int) {
        cout << "Error: Array Index Out of Bounds." << endl;
    }

    return 0;
}