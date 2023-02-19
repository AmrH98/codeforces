// Runtime 278 ms Beats 32.26%
// Memory 118.1 MB Beats 60.76%

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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;

        ListNode *slow=head, *fast=head; 
        while(fast->next!=NULL && fast->next->next){ // find mid of list, when fast reaches end slow equals mid
            slow = slow->next;
            fast=fast->next->next;
        }
      
        slow->next = reverseList(slow->next); // call reverse function to compare second half of list with first half
        slow = slow->next; // traverse to first element of second half of lise

        while(slow != NULL){
            if(head->val != slow->val) return false; // if not equal not palindrome 
            slow = slow->next; // traverse till we reach end of both sides ( NULL from right hand side *slow*) 
            head = head->next;
        }
        return true;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *next, *prev = NULL, *current;
        current = head;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};
