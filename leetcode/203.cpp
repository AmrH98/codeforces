// Runtime 26 ms Beats 57.83%
// Memory 15 MB Beats 53.45%

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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode *prev = head, *comp;
        comp = head;
        while(comp){
            ListNode *next = comp->next;
            if(comp->val == val){
                prev->next = next;
            } else prev = comp;
            comp = next;
        }
        if(head->val==val) return head->next;
        return head;
    }
};
