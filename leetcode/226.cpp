// Runtime 0 ms Beats 100%
// Memory 9.8 MB Beats 46.39%

class Solution {
private: 
    TreeNode* invert(TreeNode* root){
        if(!root) return root;
        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        invert(root->left);
        invert(root->right);
        return root;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        return invert(root);
    }
};
