class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Deal with empty list or single node cases
        if (head == nullptr) {
            return nullptr;
        }
        
        // Create a dummy node to handle cases where head needs to be deleted
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;
        
        while (current->next != nullptr) {
          
            if (current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // Free memory
            } else {
                // Move to next node if no deletion occurred
                current = current->next;
            }
        }

        
        ListNode* newHead = dummy->next;
        delete dummy;  // Free dummy node memory
        return newHead;
    }
};
