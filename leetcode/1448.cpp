// Runtime 131 ms Beats 86.22%
// Memory 86.3 MB Beats 93.22%

// O(N) , O(N) space
class Solution {
private:
    int dfs(TreeNode* curr, int big, int& count){
        if(!curr) return 0;
        if(curr->val >= big) count++;
        dfs(curr->left, max(big, curr->val), count);
        dfs(curr->right, max(big, curr->val), count);
        return count;
    }
public:
    int goodNodes(TreeNode* root) {
        int count = 0;
        return dfs(root, root->val, count);
    }
};
