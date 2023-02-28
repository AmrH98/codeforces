// Runtime 0 ms Beats 100%
//Memory 7.1 MB Beats 33.99%

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};

//Runtime: 9 ms, faster than 5.51% of C++ online submissions for Middle of the Linked List.
//Memory Usage: 7.1 MB, less than 21.64% of C++ online submissions for Middle of the Linked List.



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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp; // new node;
        temp = head;
        int count = 0; // count number of nodes
        while(temp != NULL){
            temp = temp-> next;
            count++;
        }
        int mid = count%2 == 0 ? count/2+1 : count/2+1; // get mid and if 2 mids get higher mid;
        temp = head; 
        while(mid > 1){
            temp = temp->next;
            mid--;

        }
        return temp;


    }
    
};
