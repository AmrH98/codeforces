
// Runtime 139 ms Beats 44.91%
// Memory 64.6 MB Beats 66.69%
// dfs
// O(n), O(h)
class Solution {
private:
    int dfs(TreeNode* curr, int low, int high, int& sum){
        if(!curr) return sum;
        dfs(curr->left, low,high,sum);
        if(curr->val >= low && curr->val<=high) sum+= curr->val;
        dfs(curr->right, low,high,sum);
        return sum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =0;
        return dfs(root, low,high,sum);;        
    }
};

// Runtime 154 ms Beats 9.64%
// Memory 67.1 MB Beats 7.29%

// bfs
// O(n), space O(level) 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =0;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            TreeNode* curr = qu.front();
            qu.pop();
            if(curr->val >= low && curr->val <= high) sum+= curr->val;
            if(curr->left) qu.push(curr->left);
            if(curr->right) qu.push(curr->right);
        }
        return sum;        
    }
};
