// Runtime 3 ms Beats 98.24%
// Memory 13.7 MB Beats 71.13%

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size(), first=0, last = size-1, mid;
        while(first<=last){
            mid = first + (last - first)/2;
            if(nums[mid]==target){
                int i=mid, j =mid;
                while(i>=0 && nums[i]==target) i--;
                while(j<size && nums[j]==target) j++;
                return {i+1,j-1};
            }
            else if(nums[mid]>target) last = mid - 1;
            else first = mid+1;
        }
        return {-1, -1};
    }
};

// Runtime 16 ms Beats 10.26%
// Memory 13.7 MB Beats 71.13%

// O(logn) , space O(1)

class Solution {
private:
    int findLow(vector<int>& nums, int target, int low, int high){
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                ans = mid;
                high = mid-1;
            } else low = mid+1;
        }
        return ans;
    }
    int findHigh(vector<int>& nums, int target, int low, int high){
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                ans = mid;
                low = mid+1;
            } else high = mid-1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size(), first=0, last = size-1, mid, low=-1, high=-1;
        while(first<=last){
            mid = first + (last - first)/2;
            if(nums[mid]==target){
                low = findLow(nums,target,first,mid);
                high = findHigh(nums,target,mid,last);
                break;
            }
            else if(nums[mid]>target) last = mid - 1;
            else first = mid+1;
        }
        return {low, high};
    }
};
