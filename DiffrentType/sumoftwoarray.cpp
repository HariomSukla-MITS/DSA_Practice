#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4};
    std::vector<int> arr2 = {5, 6, 7, 8};
    std::vector<int> sum(arr1.size());

    // Sum corresponding elements
    for (size_t i = 0; i < arr1.size(); ++i) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Print result
    for (int val : sum) {
        std::cout << val << " ";
    }
    return 0;
}
