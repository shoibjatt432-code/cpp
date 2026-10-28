#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    bool isEven()
    {
        return num % 2 == 0;
    }

    void displayResult()
    {
        if (isEven())
            cout << "Number is Even" << endl;
        else
            cout << "Number is Odd" << endl;
    }
};

int main()
{
    Number n;

    n.input();
    n.displayResult();

    return 0;
}