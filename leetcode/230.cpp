
// Iterative solution using stack

// Runtime 16 ms Beats 81.12%
// Memory 24.2 MB Beats 68.49%

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode *> st;
        TreeNode* curr=root;
        while(curr || !st.empty()){
            // reach left most
            while(curr){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            if(--k == 0) return curr->val;
            st.pop();
            curr = curr->right;
        }
        return curr->val;
    }
};

//Runtime 22 ms Beats 46.84%
// Memory 24.1 MB Beats 90.73%

// Runtime O(n), Memory O(1)
class Solution {
private:
    void dfs(TreeNode* root, int& res, int& k){
        if(!root) return;
        dfs(root->left, res, k);
        k--;
        if(k==0){
            res = root->val;
            return;
        }
        dfs(root->right, res, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int res;
        dfs(root, res, k);
        return res;
    }
};

// Runtime 20 ms Beats 58.94%
// Memory 24.5 MB Beats 22.48%

// Runtime O(n), Memory O(n)
class Solution {
private:
    void dfs(TreeNode* root, vector<int>& ans){
        if(!root) return;
        dfs(root->left, ans);
        ans.push_back(root->val);
        dfs(root->right, ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        dfs(root, ans);
        return ans[k-1];
    }
};
