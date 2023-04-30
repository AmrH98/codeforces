// Runtime 20 ms Beats 23.63%
// Memory 11.6 MB Beats 35.89%

// O(N*K), space O(k)
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int> elem;
        ListNode* curr = head, *temp;
        while(curr){
            int count = 1;
            temp = curr;
            while(temp && count <= k){
                elem.push(temp->val);
                temp = temp->next;
                count++;
            }
            if(count-1 < k) return head;
            while(!elem.empty()){
                curr->val = elem.top();
                elem.pop();
                curr = curr->next;
            }
        }
        return head;
    }
};
