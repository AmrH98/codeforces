//Runtime: 32 ms, faster than 12.88% of C++ online submissions for Linked List Cycle II.
//Memory Usage: 10 MB, less than 8.96% of C++ online submissions for Linked List Cycle II.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 // Solution using Hash map
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL) return NULL; // 
        if(head->next == NULL || head->next->next==NULL)return NULL;
        
        map <ListNode *,int> h; // create map
        ListNode * current = head; // point map to initial node
        while(current){ 
            if(h.find(current) != h.end()) return current; 
            h[current] = 1 ;
            current = current->next;
        }
        return NULL;
    }
};
