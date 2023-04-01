// Runtime 27 ms Beats 56.81% 
// Memory 28.8 MB Beats 61.90


class Solution {
private:
    bool check(TreeNode* curr, TreeNode*sub){
        if(!curr && !sub) return true;
        if(!curr || !sub) return false;
        if(curr->val != sub->val) return false;
        return check(curr->left, sub->left) && check(curr->right, sub->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if(check(root,subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

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
