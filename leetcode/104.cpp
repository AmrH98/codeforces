// Runtime 8 ms Beats 74.20%
// Memory 18.9 MB Beats 64.54%

//recursive 
// O(n), space O(h)
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

// iterative 
// Runtime 8 ms Beats 73.19%
// Memory 19.1 MB Beats 19.82%
// O(n), space O(l) max # number of nodes in a level
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        int count = 0;
        while(!qu.empty()){
            int size = qu.size();
            for(int i=0;i<size;i++){
                TreeNode* curr = qu.front();
                qu.pop();
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            count++;
        }
        return count;
    }
};
