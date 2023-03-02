//Runtime 39 ms Beats 71.22%
// Memory 27.6 MB Beats 18.49%

class Solution {
private: 
    int binarySearch(vector<int>& nums, int low, int high, int target){
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<target) low = mid+1;
            else if(nums[mid]>target) high = mid-1;
            else return mid;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int low=0, high = nums.size()-1;
        return binarySearch(nums, low, high, target);
    }
};

// Binary Search Approach
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
