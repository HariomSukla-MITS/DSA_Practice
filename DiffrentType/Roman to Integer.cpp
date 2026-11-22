#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            // If current symbol is smaller than the next symbol, subtract it
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } else {
                total += roman[s[i]];
            }
        }

        return total;
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    string s = "MCMXCIV";
    cout << "Input: \"" << s << "\"" << endl;
    cout << "Output: " << sol.romanToInt(s) << endl; // Expected: 1994

    return 0;
}
