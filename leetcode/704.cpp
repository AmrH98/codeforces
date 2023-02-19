// Binary Search Iterative Approach
// Runtime 41 ms Beats 61.19%
//Memory 27.5 MB Beats 69.7%

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int low=0, high=size-1, mid;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid] == target) return mid;
            if(target < nums[mid]){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
      
        return -1;
    }
};
