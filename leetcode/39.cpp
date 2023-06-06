// Runtime 7 ms Beats 67.21%
// Memory 10.9 MB Beats 56.88%

// O(2^n), space O(n*2^n)

class Solution {
private:
    void dfs(int sum, int start, int target,vector<int>& current, vector<int>& candidates, vector<vector<int>>& result){
        if(sum > target) return;
        if(sum == target){
            result.push_back(current);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            current.push_back(candidates[i]);
            sum+= candidates[i];
            dfs(sum,i,target,current,candidates,result);
            sum-= candidates[i];
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        vector<vector<int>> result;
        dfs(0, 0, target, current, candidates, result);
        return result;
    }
};
