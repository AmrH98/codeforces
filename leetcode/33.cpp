// Runtime 3 ms Beats 81.2%
// Memory 11.2 MB  Beats 44.45%

// O(logn) , O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0; int right = nums.size()-1, mid;
        while(left<=right){
            mid = left +(right-left)/2;
            if (nums[mid] == target) return mid;
            if(nums[mid] >= nums[left]){
                if(nums[left] <= target && target < nums[mid]) right = mid-1;
                else left = mid+1;
            }
            else{
                if(nums[right] >= target && target > nums[mid]) left = mid+1;
                else right = mid -1;
            }
        }
        return -1;
    }
};
