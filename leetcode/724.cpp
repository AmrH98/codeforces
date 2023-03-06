// Runtime 20 ms Beats 90.76%
// Memory 31 MB Beats 99.89%
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
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



// Runtime: 67 ms, faster than 17.12% of C++ online submissions for Find Pivot Index.
// Memory Usage: 31.2 MB, less than 51.60% of C++ online submissions for Find Pivot Index.

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1;
        int initial = 0;
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n;i++){
            sum += nums[i];
        }
        for(int i=0; i<n;i++){
            if (initial == (sum - nums[i] - initial)) {
                index = i;
                break;
            }
            initial += nums[i];
        }
        return index;
    
    }
};
