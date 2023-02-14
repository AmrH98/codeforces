//Runtime 7 ms Beats 96.35%
// Memory 8.2 MB Beats 16.50%

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *x = head; // fast pointer
        ListNode *y = head; // slow pointer
        if(!head) return false; 
        while(x && x->next){ // while not end of list
            x= x->next->next; // skip 2
            y=y->next; // skip 1
            if(x==y) return true; // if intersected there is cycle
        }
        return false;
        
    }
};
