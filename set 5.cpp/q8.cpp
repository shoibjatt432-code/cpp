#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T arr[5];

public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void display() {
        cout << "Elements: ";
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void largest() {
        T max = arr[0];

        for (int i = 1; i < 5; i++)
            if (arr[i] > max)
                max = arr[i];

        cout << "Largest: " << max << endl;
    }

    void smallest() {
        T min = arr[0];

        for (int i = 1; i < 5; i++)
            if (arr[i] < min)
                min = arr[i];

        cout << "Smallest: " << min << endl;
    }
};

int main() {

    Array<int> a;
    cout << "Integer Array\n";
    a.input();
    a.display();
    a.largest();
    a.smallest();

    Array<float> b;
    cout << "\nFloat Array\n";
    b.input();
    b.display();
    b.largest();
    b.smallest();

    return 0;
}