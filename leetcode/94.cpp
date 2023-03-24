

// Runtime 6 ms Beats 20.54%
// Memory 8.3 MB Beats 78.56%

// O(n) , O(n)
// iterative approach 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        stack<TreeNode*> stack;
        while(root || !stack.empty()){
            while(root){
                stack.push(root);
                root= root->left;
            }
            root = stack.top();
            stack.pop();
            ans.push_back(root->val);
            root = root->right;
        }
        return ans;
    }
};


// Runtime 0 ms Beats 100%
// Memory 8.4 MB Beats 45.74%
// O(n) , O(n)
class Solution {
private:
    void dfs(TreeNode* root, vector<int>& ans){
        if(!root) return;
        dfs(root->left, ans);
        ans.push_back(root->val);
        dfs(root->right, ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};

// Runtime 4 ms Beats 28.34%
// Memory 10.5 MB Beats 7.64%

// O(n), Memory O(n)
// recursive approach

class Solution {
private:
    vector<int> inorder(TreeNode* root, vector<int>& ans) {
        if(!root) return ans;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
        return ans;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        return inorder(root, ans);
    }
};
