class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        
        for (int x = 1; x <= len; ++x) {
            if (nums[len - x] >= x && (len - x - 1 < 0 || nums[len - x - 1] < x)) {
                return x;
            }
        }
        return -1;
    }
};
