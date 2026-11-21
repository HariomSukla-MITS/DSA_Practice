#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        // Value-symbol pairs sorted from largest to smallest, including subtractive forms
        const vector<pair<int, string>> valueSymbols = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100,  "C"}, {90,  "XC"}, {50,  "L"}, {40,  "XL"},
            {10,   "X"}, {9,   "IX"}, {5,   "V"}, {4,   "IV"},
            {1,    "I"}
        };

        string roman = "";

        // Greedily subtract the largest possible value at each step
        for (const auto& [value, symbol] : valueSymbols) {
            while (num >= value) {
                roman += symbol;
                num -= value;
            }
        }

        return roman;
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    int num = 1994;
    cout << "Input: " << num << endl;
    cout << "Output: " << sol.intToRoman(num) << endl; // Expected: "MCMXCIV"

    return 0;
}
