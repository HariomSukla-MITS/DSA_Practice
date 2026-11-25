#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Initialize closestSum with the sum of the first three elements
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                // Update closestSum if currentSum is closer to target
                if (abs(target - currentSum) < abs(target - closestSum)) {
                    closestSum = currentSum;
                }

                if (currentSum == target) {
                    return currentSum; // Exact match is the closest possible
                } else if (currentSum < target) {
                    left++;  // Need a larger sum
                } else {
                    right--; // Need a smaller sum
                }
            }
        }

        return closestSum;
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << "Closest Sum: " << sol.threeSumClosest(nums, target) << endl; // Expected: 2

    return 0;
}
