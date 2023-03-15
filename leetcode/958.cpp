// Runtime 7 ms Beats 43.82%
// Memory 10.6 MB Beats 29.89%

// O(n) , space O(k) #ofnodeswithinlevel
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> qu;
        qu.push(root);
        bool flag = false;
        while(!qu.empty()){
            TreeNode* curr = qu.front();
            qu.pop();
            if(!curr){ 
                flag = true;
                continue;
            }
            else if(flag) return false;
            else {
                qu.push(curr->left);
                qu.push(curr->right);
            }
        }
        return true;
        
    }
};
