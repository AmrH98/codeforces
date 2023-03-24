// Runtime 4 ms Beats 65.94%
// Memory 12.5 MB Beats 86.98%

// O(n) , space O(max(# of nodes in each level)) 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        ans.push_back({root->val});
        while(!qu.empty()){
            vector<int> temp;   
            int curr = qu.size();
            while(curr-- > 0 ){
                root = qu.front();
                qu.pop();
                if(root->left){
                    qu.push(root->left);
                    temp.push_back(root->left->val);
                }
                if(root->right){
                    qu.push(root->right);
                    temp.push_back(root->right->val);
                }
            }
            if(!temp.empty())ans.push_back(temp);
        }
        return ans;        
    }
};

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
