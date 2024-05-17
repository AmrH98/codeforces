// Runtime 12 ms Beats 46.64% of users with C++
// Memory 17.20 MB Beats 100.00% of users with C++

// Time , Memory Complexity : O(N), O(N)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* curr){
        if(curr == nullptr) return;
        
        dfs(curr->left);
        dfs(curr->right);
        
        if(curr->val == 2 || curr->val == 3){
            if(curr->left != nullptr && curr->right != nullptr){
                bool y = curr->right->val;
                bool x = curr->left->val;
                
                if(curr->val == 3)
                    curr->val = x && y;
                else
                    curr->val = x || y;
            }
        }
    }
    
    bool evaluateTree(TreeNode* root) {
        if (root == nullptr)
            return false;

        dfs(root);
        return root->val;
    }
};

