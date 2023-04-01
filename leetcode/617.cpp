// Runtime 38 ms Beats 75.12%
// Memory 32.3 MB Beats 66.13%

// O(max(n,m)) , space O(# of nodes in r2 but not in r1)
class Solution {
private:
    TreeNode* build(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2) return nullptr;
        if(r1&&r2){
            r1->val += r2->val;
            r1->left = build(r1->left, r2->left);
            r1->right = build(r1->right, r2->right);
            return r1;
        }
        else if(!r1){ 
            return new TreeNode(r2->val, build(nullptr,r2->left), build(nullptr,r2->right));
            // equivalent code 
            // r1 = new TreeNode(r2->val);
            // build(nullptr, r2->left);
            // build(nullptr, r2->right);
            // return r1;
        }
        else{
            build(r1->left,nullptr);
            build(r1->right,nullptr);
            return r1;
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return build(root1,root2);;
    }
};
