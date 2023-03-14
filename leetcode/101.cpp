
//Iterative approach 
// Runtime 3 ms Beats 88.55%
// Memory 16.6 MB Beats 25.75%

//O(n), space O(k) k = maximum number of nodes on each level
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> qu;
        if(!root) return true;
        qu.push(root->left);
        qu.push(root->right);
        while(!qu.empty()){
            TreeNode* left = qu.front();
            qu.pop();
            TreeNode* right = qu.front();
            qu.pop();
            if(!left && !right) continue;
            if(!left || !right || left->val != right->val) return false;
            qu.push(left->left);
            qu.push(right->right);
            qu.push(left->right);
            qu.push(right->left);
        }
        return true;
    }
};

// recursive approach 
// Runtime 11 ms Beats 20.44%
// Memory 16.6 MB Beats 25.69%

//O(n), O(h) height of tree
class Solution {
private:
    bool check(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        else if(!left || !right || left->val != right->val) return false;
        return check(left->left, right->right) && check(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        if(check(root->left, root->right)) return true;
        return check(root->left, root->right) && check(root->right, root->left);
    }
};
