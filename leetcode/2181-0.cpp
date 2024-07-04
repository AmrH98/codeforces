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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0); 
        ListNode* curr = head->next;
        ListNode* ans = dummy;
        int tot = 0;
        while(curr){
            if(curr->val == 0 && tot!=0){
                ans->next = new ListNode(tot);
                ans = ans->next;
                tot = 0;
            } else{
                tot+= curr->val;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};
