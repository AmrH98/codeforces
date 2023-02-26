// Runtime 44 ms Beats 64.99%
// Memory 17.8 MB Beats 51.25%

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
public:
    void reorderList(ListNode* head) {
        ListNode *slow=head, *fast=head, *prev1=NULL;
      
        if(!head->next) return;
        // slow and fast pointer to get mid
      
        while(fast && fast->next){
            prev1 = slow;
            fast = fast->next->next;
            slow = slow->next;
        } // now slow is @ middle
      
        prev1->next = NULL; // last element address reached to NULL
      
        // reverse right side *after mid
        ListNode *mid = slow, *prev=NULL, *nxt;
        while(mid){
            nxt = mid->next;
            mid->next = prev;
            prev = mid;
            mid = nxt;
        } // now right side after mid is reversed 
        // slow is refernce to mid

        ListNode *l1 = head, *l2 = prev;
        while(l1){ // switch list order
            ListNode* p1 = l1->next; // save begin next to new node
            ListNode* p2 = l2->next; // save mid next to new node
            l1->next = l2; // next to first element is first element of mid
            if(p1 == NULL) break; // if next was end of list break
            l2->next = p1; // element next to first element of mid is second element of begin
            l1 = p1; // traverse to initial second element of l1 * begin
            l2 = p2; // traverse to initial second element of l2  *mid 
        }

    }
};
