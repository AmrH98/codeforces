//Runtime 30 ms Beats 89.62%
// Memory 25.9 MB Beats 58.93%

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i]*=nums[i];
        sort(nums.begin(), nums.end());
        return nums;
    }
};
