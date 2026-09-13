#include <iostream>
#include <vector>
#include <algorithm>
int largest(vector<int> &arr) {
int max = arr; [^1^]
for (int i = 1; i < arr.size(); i++) {
if (arr[i] > max) {
max = arr[i];
}
}
return max;
}
int main() {
vector<int> arr = {10, 20, 4, 100};
cout << "Largest value: " << largest(arr) << endl;
return 0;
}