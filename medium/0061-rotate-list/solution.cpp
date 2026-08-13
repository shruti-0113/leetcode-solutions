/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution { 
private: 
        ListNode* findNthNode(ListNode* temp , int k){
        int cnt = 1;
        while(temp!= NULL){
            if(cnt == k ) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        int len =1 ;
        ListNode* tail = head;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        if (k%len == 0) return head;
        k%=len;
        tail->next = head;
        ListNode* newLastNode = findNthNode (head , len-k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};