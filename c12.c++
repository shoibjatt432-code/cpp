#include <iostream>
#include <vector>
#include <limits> // For numeric_limits
#include <iomanip> // For setprecision

using namespace std;

// Function to safely read an integer
bool readInt(int &num) {
    cin >> num;
    if (cin.fail()) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    if (!readInt(n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    vector<int> numbers(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        if (!readInt(numbers[i])) {
            cout << "Invalid input. Please enter integers only.\n";
            return 1;
        }
    }

    // Initialize counters and trackers
    int evenCount = 0, oddCount = 0;
    int positiveCount = 0, negativeCount = 0;
    int minVal = numbers[0], maxVal = numbers[0];
    long long sum = 0;

    // Analyze numbers
    for (int num : numbers) {
        // Even/Odd
        if (num % 2 == 0) evenCount++;
        else oddCount++;

        // Positive/Negative
        if (num > 0) positiveCount++;
        else if (num < 0) negativeCount++;

        // Min/Max
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;

        // Sum
        sum += num;
    }

    double average = static_cast<double>(sum) / n;

    // Display results
    cout << "\n--- Number Analysis ---\n";
    cout << "Total numbers: " << n << "\n";
    cout << "Even numbers: " << evenCount << "\n";
    cout << "Odd numbers: " << oddCount << "\n";
    cout << "Positive numbers: " << positiveCount << "\n";
    cout << "Negative numbers: " << negativeCount << "\n";
    cout << "Minimum value: " << minVal << "\n";
    cout << "Maximum value: " << maxVal << "\n";
    cout << "Sum: " << sum << "\n";
    cout << fixed << setprecision(2);
    cout << "Average: " << average << "\n";

    return 0;
}