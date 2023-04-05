// Runtime 0 ms Beats 100%
// Memory 8.2 MB Beats 70.30%
// O(n), O(1)
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head){
            ans = ans * 2 + head->val;
            head = head->next;
        }
        return ans;
    }
};

// Runtime 6 ms Beats 24.62%
// Memory 8.3 MB Beats 25.39%
// O(n), O(n)
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string num;
        while(head){
            num += to_string(head->val);
            head=head->next;
        }
        return stoi(num,0,2);
    }
};
