//Binary Search Recursive Approach 

//Runtime 37 ms Beats 79.78%
// Memory 27.5 MB Beats 69.7%

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        return binary(nums,target,low,high);
    }
    int binary(vector<int>& nums, int target, int low, int high){
        if(low<=high){
            int mid = low+(high - low)/2;
            if(nums[mid]==target) return mid;
            if(target < nums[mid]) return binary(nums,target,low, mid-1);
            return binary(nums,target,mid+1,high);
        }
        return -1;
    }
};
