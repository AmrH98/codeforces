// Runtime 119ms Beats 82.46%of users with C++
// Memory 59.64mb Beats 40.39%of users with C++

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1, right = arr.size()-2;
        while(left<=right){
            int mid = left + ( right - left ) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] < arr[mid-1]) right = mid;
            else left = mid+1;
        }
        return -1;
    }
};
