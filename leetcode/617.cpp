// Runtime 39 ms Beats 70.77%
// Memory 32.2 MB Beats 90.60%

// better space complexity, not creating new nodes
// O(max(n,m)), space O(1)?
// difficult to manage memory safely
class Solution {
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
            // return build(root1,root2);
            if(!root1) return root2;
            if(!root2) return root1;
            root1->val += root2->val;
            root1->left = mergeTrees(root1->left, root2->left);
            root1->right = mergeTrees(root1->right, root2->right);
            return root1;
        }
};

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
