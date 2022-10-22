//Runtime: 16 ms, faster than 26.53% of C++ online submissions for Reverse Linked List.
//Memory Usage: 8.4 MB, less than 40.73% of C++ online submissions for Reverse Linked List.



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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev= NULL, *go = NULL; // initialize two empty pointers
        while(head != NULL){ 
            go = head->next; //get next node of current 
            head->next = prev; // reverse pointer 
            prev = head; // reverse both pointers of current and previous 
            head = go;
            
        }
        return prev;
    }
};
