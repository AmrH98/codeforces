// Runtime 7 ms Beats 61.84%
// Memory 9.9 MB Beats 31.89%

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};
