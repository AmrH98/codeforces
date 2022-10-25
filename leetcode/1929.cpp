//Runtime: 22 ms, faster than 33.70% of C++ online submissions for Concatenation of Array.
//Memory Usage: 12.2 MB, less than 99.39% of C++ online submissions for Concatenation of Array.



class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int temp = n;
        vector<int> ans(n*2);
        for (int i =0; i<n; i++){
            ans[i] = nums[i];
            ans[temp] = nums[i];
            temp++;
        }
        return ans;
    }
};
