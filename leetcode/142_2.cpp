//Runtime: 13 ms, faster than 71.56% of C++ online submissions for Linked List Cycle II.
//Memory Usage: 7.6 MB, less than 75.08% of C++ online submissions for Linked List Cycle II.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){ // iterate fast by 2 and slow by 1 
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) break; // if both meet each other it's a cycle 
        }
        if(!(fast && fast->next)) return NULL; // if both null return null to intersection 
        while(head != slow){ // iterate both till they meet and return cycle position 
            slow = slow->next;
            head = head->next;
        }
        return head;
    }
};
