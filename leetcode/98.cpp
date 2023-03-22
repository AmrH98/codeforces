// Runtime 17 ms Beats 36.64%
// Memory 21.7 MB Beats 56.2%

// O(n), space O(h), if it was binary tree space is O(logn)
class Solution { // dfs
private:
    bool dfs(TreeNode*root, long small, long big){
        if(!root) return true;
        if(root->val <= small || root->val >= big) return false;
        return dfs(root->left, small ,root->val) && dfs(root->right, root->val, big);

    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        return dfs(root, LONG_MIN, LONG_MAX);
      
        // BFS
        queue<TreeNode*> qu;
        if(root) qu.push(root);
        else return true;
        while(!qu.empty()){
            TreeNode* curr = qu.front();
            qu.pop();
            if(curr->left && curr->left->val >= curr->val) return false;
            if(curr->right && curr->right->val <= curr->val) return false;
            if(curr->left) qu.push(curr->left);
            if(curr->right) qu.push(curr->right);
        }
        return true;
    }
};
