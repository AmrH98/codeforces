// Runtime 91 ms Beats 90.7% 
// Memory 56.9 MB Beats 53.44%
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        if(val < root->val) root->left =  insertIntoBST(root->left, val);
        else root->right = insertIntoBST(root->right, val);
        return root;
    }
};


//Runtime 93 ms Beats 86.11%
// Memory 56.9 MB Beats 85.64%


// Iterative Approach
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        TreeNode* curr=root;
        while(true){
                if(val < curr->val){
                    if(curr->left) curr=curr->left;
                    else{
                        curr->left = new TreeNode(val);
                        break;
                    }
                } else {
                    if(val > curr->val){
                    if(curr->right) curr=curr->right;
                    else{
                        curr->right = new TreeNode(val);
                        break;
                    }
                }
            }
        }
        return root;
    }
};
