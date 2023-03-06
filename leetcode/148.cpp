// Runtime 229 ms Beats 48.47%
// Memory 60.3 MB Beats 47.69%

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        vector<int> l1;
        ListNode* temp=head;
        while(temp){
            l1.push_back(temp->val);
            temp = temp->next;
        }
        sort(l1.begin(), l1.end());
        ListNode* ans = new ListNode();
        temp = ans;
        for(auto &num:l1){
            temp->next = new ListNode(num);
            temp = temp->next;
        }
        return ans->next;

    }
};
