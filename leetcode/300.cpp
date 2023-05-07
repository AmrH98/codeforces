// Runtime 7 ms Beats 95.70%
// Memory 10.5 MB Beats 76.59%

// O(nlogn) , space O(n)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i=0; i<size; i++){
            if(ans.empty() || ans[ans.size() - 1] < nums[i]) ans.push_back(nums[i]);
            else{
                auto index = lower_bound(ans.begin(), ans.end(), nums[i]); // find first element higher or equal to curr i value
                *index = nums[i];
            }
        }
        return ans.size();
    }
};
