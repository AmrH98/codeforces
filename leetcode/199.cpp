// Runtime 7 ms Beats 31.52%
// Memory 12.2 MB Beats 28.58%

class Solution {
private:
    vector<int> bfs(TreeNode* root, vector<int>& res){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i = size; i >0;i--){
                TreeNode* curr = q.front();
                q.pop();
                if(i==size) res.push_back(curr->val); // push right most element in queue
                if(curr->right) q.push(curr->right);
                if(curr->left) q.push(curr->left);
            }
        }
        return res;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        bfs(root, res);
        return res;
    }
};
