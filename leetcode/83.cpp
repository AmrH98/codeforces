//Runtime 10 ms Beats 74.59%
//Memory 11.7 MB Beats 47.34%

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *nxt=head, *curr=head;
        while(curr){
            nxt=nxt->next;
            while(nxt){
                if(nxt->val != curr->val) break;
                nxt=nxt->next;
            }
            curr->next = nxt;
            curr=curr->next;
        }
        return head;
    }
};
