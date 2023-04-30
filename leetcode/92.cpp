// Runtime 0 ms Beats 100%
// Memory 7.6 MB Beats 22.34%

// O(N), space O(right - left + 1)
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> elem;
        int count = 1;
        ListNode* curr = head;
        while(count < left){
            curr = curr->next;
            count++;
        }
        ListNode* first = curr;
        while(count <= right){
            elem.push(curr->val);
            curr = curr->next;
            count++;
        }
        while(!elem.empty()){
            first->val = elem.top();
            elem.pop();
            first = first->next;
            count++;
        }
        return head;
    }
};
