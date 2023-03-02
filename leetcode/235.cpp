// Runtime 35 ms Beats 48.99%
// Memory 23.4 MB Beats 27.85%

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// root = [6,2,8,0,4,7,9,null,null,3,5]
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if root val is bigger we left else if smaller we go right
        if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left,p,q);
        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right,p,q);
        // if 1 one both cases equals to root->val then child must be p or q of root, as of constraints p and q exists and no NULL output in this problem 
        else return root;
    }
};
