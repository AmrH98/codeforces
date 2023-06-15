// Runtime 226 ms Beats 11.5%
// Memory 107.2 MB Beats 84.30%

// O(n), space O(L)
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int sum = INT_MIN, level = 1, ans = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int temp = 0;
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode* curr = q.front();
                q.pop();
                temp += curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            cout<< temp << endl;
            if(temp > sum){
                sum = temp;
                ans = level;
            }
            level++;
        }
        return ans;
    }
};
