// Runtime 9 ms Beats 54.86%
// Memory 11 MB Beats 94.93%
O(n^2), Memory O(1)
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum=0, leftSum=0, temp;
        for(int num:nums) sum+=num;
        for(int i=0;i<nums.size();i++){
            temp = nums[i];
            sum -= temp;
            nums[i] = abs(sum-leftSum);
            leftSum+=temp;
        }
        return nums;

    }
};

// Runtime 10 ms Beats 48.60%
// Memory 11.2 MB Beats 45.90%

O(n^2), Memory O(n)
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum=0, leftSum=0;
        vector<int> ans;
        for(int num:nums) sum+=num;
        for(int i=0;i<nums.size();i++){
            sum -= nums[i];
            ans.push_back(abs(sum-leftSum));
            leftSum+=nums[i];
        }
        return ans;

    }
};
