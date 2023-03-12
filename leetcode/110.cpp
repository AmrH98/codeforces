// Runtime 8 ms Beats 89.66%
// Memory 21 MB Beats 30.1%

// O(n) , space O(n)
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        int left = dfs(root->left);
        int right = dfs(root->right);

        if(abs(left-right) > 1) return false;

        return (isBalanced(root->left) && isBalanced(root->right));
        
    }
    int dfs(TreeNode* temp){
        if(!temp) return 0;
        int left = dfs(temp->left);
        int right = dfs(temp->right);
        return max(left, right) + 1; 
        // height of the current node is the maximum height of its subtrees plus 1
    }
};
