// Runtime 3 ms Beats 56.62%
// Memory 10.1 MB Beats 51.33%

class Solution {
private: 
    bool check(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val != q->val) return false;
        return check(p->left, q->left) && check(p->right, q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
};
