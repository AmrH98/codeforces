// Runtime 569 ms Beats 28.76%
// Memory 163.8 MB Beats 84.51% 

// O(n), O(h)
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return nullptr; 
        if(original == target) return cloned; // if found return cloned 
        TreeNode* left = getTargetCopy(original->left, cloned->left, target); // check all left
        if(left) return left; // if we stopped at left return it
        else return getTargetCopy(original->right, cloned->right, target); // else it is in right
    }
};
