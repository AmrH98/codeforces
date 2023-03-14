// Runtime 6 ms Beats 31.34%
// Memory 7.6 MB Beats 61.64%

// O(n) , space O(1)
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* pre=head, *curr=head->next, *temp;
        head = curr;
        while(curr && pre){ // [1,2,3,4]
            temp = curr->next; // temp is at 3
            curr->next = pre; // 2 point to 1
            // if 3 not null and after 3 not null (4), 1 point to 4
            if(temp && temp->next) pre->next = temp->next; 
            else pre->next = temp; // else 1 point to 3
            pre = temp; // pre is now 3
            curr = pre ? pre->next : NULL; // if pre not last element point to pre->next 
        }
        return head;
    }
};
