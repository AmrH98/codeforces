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
        temp = answer; // 
        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if(list1){
            temp->next = list1;
        }
        if(list2){
            temp->next = list2;
        }
        return answer->next;
    }
};
