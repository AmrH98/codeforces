// Runtime 0 ms Beats 100% 
 //Memory 8.5 MB Beats 78.59%
// O(n) , space O(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++) nums[i]+=nums[i-1];
        return nums;
        
    }
};


// Runtime: 7 ms, faster than 45.70% of C++ online submissions for Running Sum of 1d Array.
// Memory Usage: 8.5 MB, less than 74.55% of C++ online submissions for Running Sum of 1d Array.

// O(n) , space O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int x = nums.size();
        vector<int> answer(x);
        answer[0] = nums[0];
        for(int i = 1; i < x; i++){
            answer[i] = answer[i-1] + nums[i];
        }
        return answer;
    }
};
