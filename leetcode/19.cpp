// Runtime 7 ms Beats 43.95%
// Memory 10.6 MB Beats 79.73%

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *nxt, *curr=head;
        int count =0, count2=1;
        if(head->next == NULL){
            nxt = new ListNode();
            return nxt->next;
        }
        while(curr){ // get number of nodes in list
            count++;
            curr = curr->next;
        }
        curr = head;
        count = count - n;
        while(curr){ // remove element in ith postiton 
            nxt = curr->next;
            if(count2 == count){
                curr->next = nxt->next;
            } else if (count == 0){
                return head->next;
            }
            curr = curr->next;
            count2++;
        }
        return head;
    }
};
