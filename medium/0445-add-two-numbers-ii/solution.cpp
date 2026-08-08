class Solution {
private:
    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* t1 = reverseList(l1);
        ListNode* t2 = reverseList(l2);

        ListNode* dummyNode = new ListNode(0);
        ListNode* curr = dummyNode;
        int carry = 0;

        while (t1 != nullptr || t2 != nullptr || carry != 0) {
            int sum = carry;

            if (t1 != nullptr) {
                sum += t1->val;
                t1 = t1->next;
            }
            if (t2 != nullptr) {
                sum += t2->val;
                t2 = t2->next;
            }

            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return reverseList(dummyNode->next);
    }
};