
//Runtime: 20 ms, faster than 81.10% of C++ online submissions for Build Array from Permutation.
//Memory Usage: 16.4 MB, less than 51.22% of C++ online submissions for Build Array from Permutation.


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> solution(nums.size());
        for(int i=0; i< nums.size(); i++){
            solution[i] = nums[nums[i]];
        }
        return solution;
    }
};
