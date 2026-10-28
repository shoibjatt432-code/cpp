#include <iostream>
using namespace std;

class Text
{
private:
    string str;

public:
    Text(string s)
    {
        str = s;
    }

    int calculateLength()
    {
        int count = 0;

        while (str[count] != '\0')
        {
            count++;
        }

        return count;
    }
};

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    Text t(s);

    cout << "Length = " << t.calculateLength() << endl;

    return 0;
}