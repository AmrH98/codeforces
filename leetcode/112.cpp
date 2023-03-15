// Simplified

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(root->val == targetSum && !root->left && !root->right) return true;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};


//Runtime 39 ms Beats 5.52%
// Memory 21.4 MB Beats 46.26%

// O(n), space O(h) or O(n) if unbalanced 
class Solution {
private:
    bool backtrack(TreeNode* root, int target, int& sum){
        if(!root) return false;
        cout<< root->val<<" sum= "<<sum<<endl;
        if(!root->left && !root->right){
            sum+= root->val;
            if(sum==target) return true;
            sum-=root->val;
            return false;
        }
        sum+=root->val;
        bool found = backtrack(root -> left, target, sum) || backtrack(root -> right, target, sum);
        sum-=root->val;
        return found;

    } 
   
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        int sum=0;
        return backtrack(root, targetSum, sum);
    }
};
