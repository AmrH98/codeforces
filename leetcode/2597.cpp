
class Solution {
public:
    void helper(vector<int>& nums, vector<int>& subset, int index, int k,
                int& ans) {
                    
        if (!subset.empty())
            ans++;
        for (int i = index; i < nums.size(); i++) {
            bool isK = false;
            for (int num : subset) {
                if (abs(num - nums[i]) == k) {
                    isK = true;
                    break;
                }
            }
            if (!isK) {
                subset.push_back(nums[i]);
                helper(nums, subset, i + 1, k, ans);
                subset.pop_back();
            }
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        int ans = 0;
        vector<int> subset;
        helper(nums, subset, 0, k, ans);
        return ans;
    }
};
