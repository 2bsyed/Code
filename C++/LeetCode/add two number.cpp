class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy node to start the result list
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        int carry = 0;

        // Loop until both lists are done and there's no carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            // Create a new node with the digit part of sum
            current->next = new ListNode(sum % 10);
            current = current->next;

            // Move to next nodes
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next;
    }
};
