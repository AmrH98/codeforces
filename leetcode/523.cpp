// Runtime: 490 ms, faster than 45.13% of C++ online submissions for Continuous Subarray Sum.
// Memory Usage: 113.7 MB, less than 71.68% of C++ online submissions for Continuous Subarray Sum.


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> ans; // map to store values
        ans[0] = -1;
        for(int i =0; i< nums.size(); i++){
            sum = (sum + nums[i])%k; // mod sum till it repeats twice
            ans.insert({sum, i}); // insert if it exists in sum
            if (i - ans[sum] >= 2) return true;
        }
        return false;

    }
};
