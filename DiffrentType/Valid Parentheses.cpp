#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Push the expected closing bracket onto the stack
            if (c == '(') {
                st.push(')');
            } else if (c == '{') {
                st.push('}');
            } else if (c == '[') {
                st.push(']');
            } else {
                // If stack is empty or top doesn't match the current closing bracket
                if (st.empty() || st.top() != c) {
                    return false;
                }
                st.pop();
            }
        }

        // Valid only if all opening brackets have been closed
        return st.empty();
    }
};

// Entry point for local VS Code testing
int main() {
    Solution sol;

    string s1 = "()[]{}";
    string s2 = "([)]";

    cout << "\"" << s1 << "\" -> " << (sol.isValid(s1) ? "true" : "false") << endl; // Expected: true
    cout << "\"" << s2 << "\" -> " << (sol.isValid(s2) ? "true" : "false") << endl; // Expected: false

    return 0;
}
