// Runtime 4 ms Beats 34.63%
// Memory 6.9 MB Beats 13.50%

// O(n), space O(n)
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int size = nums.size(), i=0, j;
        if (size < 1) return ans;
        while(i<size){
            j=i;
            while(j+1 < size && nums[j+1] == nums[j]+1) j++;
            if(j>i){
                ans.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            } else ans.push_back(to_string(nums[j]));
            i=j+1;
        }      
        return ans;
    }
};
