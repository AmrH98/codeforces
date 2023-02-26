// Runtime 0 ms Beats 100%
// Memory 10.8 MB Beats 39.50%

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head, *fast=head; 
        if(head->next == NULL){
            return NULL;
        }
        while(n>0){
            fast=fast->next;
            n--; 
        } // fast reached node before the ith node to be removed
        if(!fast) return head->next; // if fast == NULL, then we reached last element from end so the first element of list, skip first element and return from next
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        } // slow reached node before the ith node to be removed, and fast reached end, ex: [1,2,3(slow here),4,5(fast here)] ->
        slow->next = slow->next->next; // address of node with val 3 is pointed to address of node of val 5 ( we skip node with val 4 )
        return head;
    }
};


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
