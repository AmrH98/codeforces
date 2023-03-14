// Runtime 3 ms Beats 62.17%
// Memory 9.2 MB Beats 87.90%


// O(n),  space O(n)

class Solution {
private: 
    void dfs(TreeNode* root, int path, int& sum){
        if(!root) return;
        path = (path*10) + root->val;
        if(!root->left && !root->right){ // if we reached leaf add path sum to our sum
            sum+=path;
            return;
        }
        dfs(root->left, path, sum); 
        // recursion return to previous node after hitting leaf node with path sum value saved 
        dfs(root->right, path, sum);
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum=0;
        dfs(root,0,sum);
        return sum;
    }
};
