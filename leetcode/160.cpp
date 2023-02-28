// Runtime 50 ms Beats 61.73%
// Memory 14.6 MB Beats 76.46%

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA,*b=headB;
        int counta=0,countb=0;
        while(a){
            a = a->next;
            counta++;
        }
        while(b){
            b = b->next;
            countb++;
        }
        if(counta>countb){
            counta-=countb;
            while(counta){
                counta--;
                headA=headA->next;
            }
        }
        else{
            countb-=counta;
            while(countb){
                countb--;
                headB=headB->next;
            }
        }
        while(headA && headB){
            if(headA==headB) return headA;
            headA= headA->next;
            headB= headB->next;
        }
        return NULL;

    }
};
