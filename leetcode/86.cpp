// Runtime 3 ms Beats 93.52%
// Memory 10.4 MB Beats 38.19%
// O(n), space O(n)

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head) return head;
        ListNode* less = new ListNode(), *more = new ListNode();
        ListNode* lessHead = less, *moreHead = more;
        while(head){
            if(head->val < x){
                less->next = head;
                less = head;
                
            } else{
                more->next = head;
                more = head;
            }
            head = head->next;
        }
        less->next = moreHead->next;
        more->next = NULL;
        return lessHead->next;
    }
};
