// Runtime 7 ms Beats 44.24%
// Memory 12.4 MB Beats 73.98%
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0, leftSum=0, rightSum=0, size = nums.size();
        for(int num:nums) sum+=num;
        for(int i=0;i<size;i++){
            rightSum = sum - nums[i] - leftSum;
            if(rightSum == leftSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
