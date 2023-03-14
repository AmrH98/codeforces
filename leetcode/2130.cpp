// Runtime 247 ms Beats 92.45%
// Memory 116.7 MB Beats 65.42%

// O(n), space O(1)
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* fast = head, *slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        } // slow is mid 
        ListNode* curr=slow, *nxt=slow, *prev=NULL;
        while(curr){ // reverese second half
            nxt = nxt->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        } // prev start of reversed second half
        curr = prev;
        slow = head; // curr = mid, slow = head start
        int sum =0;
        while(curr){
            sum = max(sum, curr->val + slow->val);
            curr = curr->next;
            slow = slow->next;
        }
        return sum;
    }
};

// Runtime 263 ms Beats 69.3%
// Memory 126.6 MB Beat 37.78%

// O(n) , space O(n)
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> nodesVal;
        ListNode* curr = head;
        while(curr){
            nodesVal.push_back(curr->val);
            curr= curr->next;
        }
        int size = nodesVal.size(), sum = 0;
        for(int i=0;i<size/2;i++){
            sum = max(sum, nodesVal[i]+nodesVal[size-i-1]);
        }
        return sum;
    }
};
