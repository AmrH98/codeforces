// optimized approach
// Runtime 699 ms Beats 35.97%
// Memory 180.1 MB Beats 87.37%
// O(n), O(1)

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first, *slow=head, *fast=head;
        int count = 1;
        while(count != k){
            count++;
            fast = fast->next;
        }
        first = fast;
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        swap(first->val, slow->val);
        return head;
    }
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head, *first, *slow=head, *fast, *prev = NULL;
        int count = 1;
        while(curr){
            if(count == k){
                first = curr;
                break;
            }
            count++;
            curr = curr->next;
        }
        fast = curr;
        while(fast){
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }
        int temp = prev->val;
        prev->val = first->val;
        first->val = temp;
        return head;
    }
};


// first approach 
// Runtime 720 ms Beats 16.66%
// Memory 190.1 MB Beats 9.40%
// O(n), O(n)
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
        ListNode* curr = head;
        while(curr){
            ans.push_back(curr->val);
            curr = curr->next;
        }
        swap(ans[k-1], ans[ans.size()-k]);
        curr = head;
        int i=0;
        while(curr){
            curr->val = ans[i];
            i++;
            curr = curr->next;
        }
        return head;
    }
};
