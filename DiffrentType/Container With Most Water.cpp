#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            // Area is limited by the shorter line multiplied by the distance between them
            int width = right - left;
            int currentHeight = min(height[left], height[right]);
            maxWater = max(maxWater, width * currentHeight);

            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum Water Area: " << sol.maxArea(height) << endl; // Expected: 49

    return 0;
}
