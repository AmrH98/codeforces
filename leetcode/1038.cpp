// Runtime 3 ms Beats 58.44%
// Memory 8.3 MB Beats 28.33%

// O(n), O(h)
class Solution {
private:
    void reversed_bfs(TreeNode* curr,int& sum){
        if(!curr) return;
        reversed_bfs(curr->right, sum);
        sum+= curr->val;
        curr->val = sum;
        reversed_bfs(curr->left, sum);
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        reversed_bfs(root,sum);
        return root;
    }
};
