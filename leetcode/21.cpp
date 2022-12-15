// Runtime: 20 ms, faster than 20.10% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 14.8 MB, less than 81.61% of C++ online submissions for Merge Two Sorted Lists.


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *answer, *temp; 
        answer = new ListNode(); // new empty node
        temp = answer; // temp pointer to first node
        while(list1 && list2){ // while lists not empty
            if(list1->val < list2->val){ // if list1 value smaller than list 2 we increment list1 index by 1 and vice versa
                temp->next = list1; // next node equal list1 value
                list1 = list1->next; // traverse to next node
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next; // value added to first node of temp, go to next node
        }
        if(list1){
            temp->next = list1; // put rest of list to temp list 
        }
        if(list2){
            temp->next = list2;
        }
        return answer->next;
    }
};
