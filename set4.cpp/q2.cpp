#include <iostream>
using namespace std;

class Maximum {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int max(int a, int b, int c) {
        int m = (a > b) ? a : b;
        return (m > c) ? m : c;
    }

    float max(float a, float b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Maximum m;

    cout << "Max of 10 and 20 = " << m.max(10, 20) << endl;
    cout << "Max of 5, 8 and 3 = " << m.max(5, 8, 3) << endl;
    cout << "Max of 3.2 and 4.5 = " << m.max(3.2f, 4.5f) << endl;

    return 0;
}