#include <iostream>

// 1. Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// 2. The solution class containing the cycle logic
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        
        ListNode *slow = head;
        ListNode *fast = head;
        bool hasCycle = false;
        
        // Phase 1: Determine if a cycle exists
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Moves 1 step
            fast = fast->next->next;    // Moves 2 steps
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }
        
        // If no cycle was found, return nullptr
        if (!hasCycle) return nullptr;
        
        // Phase 2: Find the entry point of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};

// 3. The required main function to run the program
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    
    // Create a cycle for testing: 4 points back to 2
    head->next->next->next->next = head->next; 
    
    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    
    if (cycleStart != nullptr) {
        std::cout << "Cycle detected! Starts at node with value: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }
    
    return 0;
}
