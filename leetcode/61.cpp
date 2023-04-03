// Runtime 9 ms Beats 47.52%
// Memory 11.8 MB Beats 8.27%

// O(n), space O(1)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;

        ListNode* curr = head, *newHead, *newTail;
        int size = 1; 
        // 1 because we know initially there is 1 node and we want to stop loop at last node

        while(curr->next){
            size++;
            curr = curr->next;
        }

        k %= size;
        if(k == 0) return head;

        newTail = head;

        // find new tail k + from start, // we use size - k - 1 to get kth node from the end of list  
        for(int i=0;i<size-k-1;i++) newTail = newTail->next;

        newHead = newTail->next; // head is one step after tail from k
        newTail->next = nullptr; // so tail disconect it from rest of nodes to nullptr
        curr->next = head; // connect original head to the new tail
 // 1,2,3,4,5 -> original head is 1, new head is 4, connect 5 to head which is 1, and 3 is null

        return newHead;
    }
};


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
