#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> brackets;
        
        for (char c : s) {
            // 1. If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } 
            // 2. If it's a closing bracket, verify it matches
            else {
                // If stack is empty, there is no matching opening bracket
                if (brackets.empty()) return false;
                
                char top = brackets.top();
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    brackets.pop(); // Valid match found, remove from stack
                } else {
                    return false; // Mismatched brackets
                }
            }
        }
        
        // If stack is empty, all brackets were perfectly matched
        return brackets.empty();
    }
};

// The missing main function required to compile successfully on your system
int main() {
    Solution solver;
    
    // Test cases to check the code
    std::string test1 = "()[]{}";
    std::string test2 = "(]";
    
    std::cout << "Test 1 \"()[]{}\": " << (solver.isValid(test1) ? "True" : "False") << std::endl;
    std::cout << "Test 2 \"(]\": " << (solver.isValid(test2) ? "True" : "False") << std::endl;
    
    return 0;
}
