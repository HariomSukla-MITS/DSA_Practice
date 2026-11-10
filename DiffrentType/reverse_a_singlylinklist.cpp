#include <iostream>

// 1. Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// 2. The solution class containing the reversal logic
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = nullptr;
        
        while (curr != nullptr) {
            nextNode = curr->next;  // 1. Save the next node
            curr->next = prev;      // 2. Reverse the current node's pointer
            prev = curr;            // 3. Move prev one step forward
            curr = nextNode;        // 4. Move curr one step forward
        }
        
        return prev; // prev will point to the new head of the reversed list
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

// 3. Main function to run and test the program
int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    
    std::cout << "Original List: ";
    printList(head);
    
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);
    
    std::cout << "Reversed List: ";
    printList(reversedHead);
    
    return 0;
}
