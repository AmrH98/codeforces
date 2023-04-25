// Runtime 10 ms Beats 11.50%
// Memory 12.3 MB Beats 26.66%

// O(n^2), space O(n)
class Solution {
private:
    bool dfs(TreeNode* root1, TreeNode* root2){
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val != root2->val) return false;
        bool left = dfs(root1->left, root2->left) || dfs(root1->left, root2->right);
        bool right = dfs(root1->right, root2->right) || dfs(root1->right, root2->left);
        return left && right;
    }
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return true;
        if(!root1 || !root2) return false;
        if(root1->val != root2->val) return false;
        return dfs(root1, root2);
    }
};
