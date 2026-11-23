#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Compare character by character using the first string as reference
        for (int i = 0; i < strs[0].length(); ++i) {
            char currentChar = strs[0][i];

            for (int j = 1; j < strs.size(); ++j) {
                // Stop if we reach the end of another string or find a mismatch
                if (i == strs[j].length() || strs[j][i] != currentChar) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Output: \"" << sol.longestCommonPrefix(strs) << "\"" << endl; // Expected: "fl"

    return 0;
}
