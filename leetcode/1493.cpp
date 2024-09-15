class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0, size = nums.size(), maximum = 0;
        int zeros = 0;

        while (right < size) {
            if (nums[right] == 0) {
                zeros++;
            }

            while (zeros > 1) {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }

            maximum = max(maximum, right - left);
            right++;
        }
        return maximum;
    }
};
