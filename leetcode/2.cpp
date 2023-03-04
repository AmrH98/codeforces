//Runtime 50 ms Beats 24.71%
// Memory 71.4 MB Beats 84.97%
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans, *curr;
        ans = new ListNode();
        curr = ans;
        int rem=0;
        while(l1 || l2){
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            int sum = val1+val2+rem;
            rem = sum/10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(rem == 1) curr->next = new ListNode(1);
        return ans->next;
    }
};
