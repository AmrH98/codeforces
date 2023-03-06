// Runtime 7 ms Beats 37.55%
// Memory 12.6 MB Beats 66.32%

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while(qu.size() > 0){ // if queue empty exit
            int size = qu.size(); 
            vector<int> add;
            while(size>0){ // size of current queue
                size--;
                TreeNode* curr= qu.front(); // dummy node to queue front and pop
                qu.pop();
                add.push_back(curr->val); // push curr value of level
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            ans.push_back(add);
        }
        return ans;
    }
};
