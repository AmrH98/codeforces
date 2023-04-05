// Runtime 696 ms Beats 93.76%
// Memory 253.2 MB Beats 76.57%

// O(n), space O(1)
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev=head, *curr=head->next;
        int sum=0;
        while(curr){
            if(curr->val == 0){
                prev = prev->next;
                prev->val = sum;
                sum = 0;
            }
            sum+=curr->val;
            curr=curr->next;
        }
        prev->next = nullptr;
        return head->next;
    }
};
