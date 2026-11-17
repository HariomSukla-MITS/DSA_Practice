#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: 1 row or fewer characters than rows means no zigzag needed
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        vector<string> rows(min(numRows, int(s.length())));
        int currentRow = 0;
        bool goingDown = false;

        // Place each character into its corresponding row
        for (char c : s) {
            rows[currentRow] += c;

            // Reverse direction at the top or bottom row
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows into the final result string
        string result;
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << "Input: s = \"" << s << "\", numRows = " << numRows << endl;
    cout << "Output: \"" << sol.convert(s, numRows) << "\"" << endl;

    return 0;
}
