// Runtime 26 ms Beats 78.15%
// Memory 9 MB Beats 86.50%


class Solution {
private:
    void dfs(vector<int>& curr, vector<vector<int>>& result,int n, int k, int start){
        if(curr.size() == k){
            result.push_back(curr);
            return;
        }
        for(int i=start; i<=n; i++){
            curr.push_back(i);
            dfs(curr, result, n, k, i+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;
        vector<vector<int>> result;
        dfs(curr, result, n, k, 1);
        return result;
    }
};
