// Runtime 31 ms Beats 91.40%
// Memory 32.6 MB Beats 98.39%

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
    TreeNode* minNode(TreeNode* root){
        TreeNode* curr = root;
        while(curr && curr->left){ 
            curr = curr->left;
        }
        return curr;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        // 2 cases, either node has 2 descendants, or node has 1 or none
        if(!root) return NULL;
        // find key 
        if(key < root->val) root->left = deleteNode(root->left, key);
        else if(key > root->val) root->right = deleteNode(root->right, key);
        // if found
        else{
            if(!root->left) return root->right;
            else if(!root->right) return root->left;
            else{
                TreeNode* minimumNode = minNode(root->right);
                root->val = minimumNode->val;
                root->right = deleteNode(root->right, minimumNode->val);
            }
        }
        return root;

    }
};
