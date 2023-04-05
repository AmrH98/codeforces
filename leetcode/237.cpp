// Runtime 16 ms Beats 29.91%
// Memory 7.6 MB Beats 87.96%

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Runtime 13 ms Beats 62.68%
// Memory 7.8 MB Beats 18.78%
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* dummy = node->next;
        node->val = dummy->val;
        node->next = dummy->next;
        delete dummy;
    }
};
