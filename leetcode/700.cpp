// iterative 
// Runtime 42 ms Beats 70.46%
// Memory 34.9 MB Beats 35.82%

// O(h) , space O(1)
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;
        while(root){
            if(root->val == val) return root;
            if(val < root->val) root = root->left;
            else root = root->right;
        }
        return nullptr;
    }
};

// Runtime 48 ms Beats 42.74%
// Memory 34.8 MB Beats 71.5%

// Recursive 

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root || ( root->val == val )) return root;
        if(root->val < val) return searchBST(root->right,val);
        else return searchBST(root->left,val);
    }
};
