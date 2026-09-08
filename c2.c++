#include <iostream>
using namespace std;
int main() {
   // Declare variables for length, breadth, area, and perimeter
   double length, breadth, area, perimeter;
   // Input length and breadth from the user
   cout << "Enter the length of the rectangle: ";
   cin >> length;
   cout << "Enter the breadth of the rectangle: ";
   cin >> breadth;
   // Calculate area and perimeter
   area = length * breadth;
   perimeter = 2 * (length + breadth);
   // Display the results
   cout << "Area of the rectangle: " << area << endl;
   cout << "Perimeter of the rectangle: " << perimeter << endl;
   return 0;
}