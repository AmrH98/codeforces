// Runtime 4 ms Beats 96.74% 
//Memory 21.8 MB Beats 67.10%

// O(n), space O(l) biggest tree level
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        int ans;
        while(!qu.empty()){
            int size = qu.size();
            ans = qu.front()->val;
            for(int i=0;i<size;i++){
                TreeNode* curr = qu.front();
                qu.pop();
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
        }
        return ans;
    }
};
