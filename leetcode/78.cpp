// Runtime 6 ms Beats 28.63%
// Memory 7.5 MB Beats 49.4%

//O(N*2^n) space O(N*2^n)
class Solution {
private: 
    void dfs(int j, vector<vector<int>>& ans, vector<int> curr, int size, vector<int> nums){
        ans.push_back(curr);
        for(int i=j;i<size;i++){
            curr.push_back(nums[i]);
            dfs(i+1,ans,curr,size, nums);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int size = nums.size();
        dfs(0,ans,curr,size, nums);
        return ans;
    }
};
