#include <iostream>
#include <vector>
#include <algorithm>
void removeDuplicates(std::vector<int>& vec) {
   std::sort(vec.begin(), vec.end()); // Step 1: Sort to group duplicates
   auto last = std::unique(vec.begin(), vec.end()); // Step 2: Move unique elements to front
   vec.erase(last, vec.end()); // Step 3: Erase the duplicates
}
int main() {
   std::vector<int> data = {10, 23, 10, 324, 10, 424, 649, 110, 110, 129, 40, 424};
   removeDuplicates(data);
   std::cout << "Unique elements: ";
   for (int num : data) std::cout << num << " ";
}