#include <iostream>
using namespace std;
int main() {
   // Initialize the array with given values
   double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
   int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
   double sum = 0; // Variable to store the sum
   // Iterate through the array and calculate the sum
   for (int i = 0; i < n; i++) {
       sum += arr[i];
   }
   // Output the result
   cout << "The sum of the array elements is: " << sum << endl;
   return 0;
}