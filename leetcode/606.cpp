// Runtime 17 ms Beats 80.25%
// Memory 23.3 MB Beats 94.63%
// O(N), space O(N)
class Solution {
private:
    void preorder(TreeNode* curr, string& ans){
        if(!curr) return;
        ans += to_string(curr->val);
        if(curr->left){
            ans += '(';
            preorder(curr->left, ans);
            ans += ')';
        }
        if(curr->right){
            if(!curr->left) ans+= "()";
            ans += '(';
            preorder(curr->right, ans);
            ans += ')';
        }
    }
public:
    string tree2str(TreeNode* root) {
        string ans;
        preorder(root, ans);
        return ans;
    }
};
