// Runtime 5 ms Beats 79.55%
// Memory 11.7 MB Beats 61.77%

// O(n*k), space O(1)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k == 0) return head; 
        ListNode* curr = head;
        int size = 0;
        while(curr){ // get size of linked list, O(n)
            size++;
            curr = curr->next;
        }
        k = k % size; // if size = 5 and k = 6 we rotate only one time
        int prev, next; 
        while(k>0){ 
            k--;
            curr = head; // start from begining 
            prev = curr->val; 
            curr = curr->next;
            while(curr){
                next = curr->val;
                curr->val = prev;
                prev = next;
                curr=curr->next;
            }
            head->val = next; // last element in list add it to head 
        }
        return head;
    }
};
