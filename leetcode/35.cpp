// Runtime 3 ms Beats 90.24%
// Memory 9.8 MB Beats 30.91%

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        if(size==0) return 0;
        int low=0, high=size-1, mid;
        while(low<high){
            mid = low+(high-low)/2;
            if(nums[mid] == target) return mid;
            if(target < nums[mid]) high = mid;
            else low = mid+1;
        }
        return target <= nums[low]? low: low+1;
    }
};
