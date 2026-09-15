#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    Distance addDistance(const Distance& d2) {
        Distance total;
        

        total.feet = this->feet + d2.feet;
        total.inches = this->inches + d2.inches;
        
        if (total.inches >= 12) {
            total.feet += total.inches / 12;
            total.inches = total.inches % 12;
        }
        
        return total;
    }

    void display() const {
        std::cout << feet << " ft " << inches << " in" << std::endl;
    }
};

int main() {

    Distance d1(5, 10);
    Distance d2(3, 8);
    Distance result = d1.addDistance(d2);

    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "------------------" << std::endl;
    cout << "Total:      "; result.display();

    return 0;
}
