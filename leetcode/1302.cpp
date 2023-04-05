// Runtime 88 ms Beats 98.27%
// Memory 61.9 MB Beats 34.80%

// O(n), space O(level)
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int size = qu.size(), sum=0;
            for(int i=0;i<size;i++){
                TreeNode* curr = qu.front();
                qu.pop();
                sum+= curr->val;
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
            if(qu.empty()) return sum;
        }
        return 0;
        
    }
};
