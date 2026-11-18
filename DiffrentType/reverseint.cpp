#include <climits>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            int digit = x % 10;
            
            // Check for positive overflow before multiplying by 10
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            
            // Check for negative overflow before multiplying by 10
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            
            ans = ans * 10 + digit;
            x /= 10;
        }
        
        return ans;
    }
};
