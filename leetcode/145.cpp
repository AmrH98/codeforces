// Runtime 0 ms Beats 100%
// Memory 8.3 MB Beats 90.66%

//O(n), space O(n)
class Solution {
private: 
    void postorder(TreeNode* root, vector<int>& ans){
        if(!root) return;
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
};
