class Solution {
public:
    // Iterative Solution
    ListNode* reverseListIterative(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;
        
        while (current != nullptr) {
            // Store next node
            next = current->next;
            // Reverse the link
            current->next = prev;
            // Move prev and current one step forward
            prev = current;
            current = next;
        }
        
        // prev is the new head
        return prev;
    }
    
    // Recursive Solution
    ListNode* reverseListRecursive(ListNode* head) {
        // Base cases: empty list or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        // Recursive call to the list
        ListNode* newHead = reverseListRecursive(head->next);
        
        // Reverse the links
        head->next->next = head;
        head->next = nullptr;
        
        return newHead;
    }
    
    // Main function using iterative solution by default
    ListNode* reverseList(ListNode* head) {
        return reverseListIterative(head);  // Fixed function name
        // Alternatively: return reverseListRecursive(head);
    }
};
