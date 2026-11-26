#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Keypad mapping where index corresponds to the digit character
        const vector<string> keypad = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current;
        backtrack(digits, 0, keypad, current, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index, const vector<string>& keypad,
                   string& current, vector<string>& result) {
        // Base case: full combination formed
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        // Get letters mapped to the current digit
        string letters = keypad[digits[index] - '0'];

        for (char letter : letters) {
            current.push_back(letter);                          // Choose
            backtrack(digits, index + 1, keypad, current, result); // Explore
            current.pop_back();                                 // Un-choose (backtrack)
        }
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    string digits = "23";
    vector<string> combinations = sol.letterCombinations(digits);

    cout << "Combinations for \"" << digits << "\":" << endl;
    for (const string& combo : combinations) {
        cout << combo << " ";
    }
    cout << endl; // Expected: ad ae af bd be bf cd ce cf

    return 0;
}
