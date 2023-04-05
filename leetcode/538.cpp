// Runtime 36 ms Beats 83.83%
// Memory 33.5 MB Beats 24.82%

// O(n), space O(h)
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
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        reversed_bfs(root,sum);
        return root;
    }
};
