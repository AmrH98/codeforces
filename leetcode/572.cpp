// Runtime 24 ms Beats 72.60%
//Memory 29.1 MB Beats 12.33%

// O(n) space O(n)

class Solution {
private: 
    bool checkTree(TreeNode* curr, TreeNode* subRoot){
        if(!curr && !subRoot) return true;
        if(!curr || !subRoot) return false;
        if(curr->val != subRoot->val) return false;
        return checkTree(curr->left, subRoot->left) && checkTree(curr->right, subRoot->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // bfs
        if(!root) return false;
        queue<TreeNode*> qu;
        if(root) qu.push(root);
        while(!qu.empty()){
            int size= qu.size();
            for(int i=0;i<size;i++){
                TreeNode* curr = qu.front();
                qu.pop();
                if(checkTree(curr, subRoot)) return true;
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
        }
        return false;
    }
};
