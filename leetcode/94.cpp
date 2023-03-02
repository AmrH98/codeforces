// Runtime 4 ms Beats 28.34%
// Memory 10.5 MB Beats 7.64%

// O(n), Memory O(n)
// recursive approach
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
private:
    vector<int> inorder(TreeNode* root, vector<int>& ans) {
        if(!root) return ans;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
        return ans;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        return inorder(root, ans);
    }
};
