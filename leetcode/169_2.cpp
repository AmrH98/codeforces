// Runtime 23 ms Beats 59.57% 
//Memory 19.6 MB Beats 28.96%

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        return nums[size/2];
    }
};
