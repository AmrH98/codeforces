// Runtime 0 ms Beats 100%
//Memory 10.2 MB Beats 79.79%

// O(logn), space O(1)
// binary search

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0, right=nums.size()-1, mid;
        while(left <= right){
            mid = left+(right-left)/2;
            if(nums[mid] > nums[right]) left=mid+1;
            else if(nums[mid] < nums[right]) right = mid;
            else right--; // edge cases 
        }
        return nums[mid];
    }
};

// Runtime 0 ms Beats 100%
// Memory 10.1 MB Beats 97.99%

// O(nlogn), space O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
        // int size = nums.size();
        // int left=0, right=nums[size-1], mid;
        // while(left<= right){
        //     mid = left + (right-left)/2;
        //     if(left < mid) right=mid-1;
        //     else left = mid+1;
        // }
        // return mid;
    }
};
