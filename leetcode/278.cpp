// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 57.83%

// O(logn), space O(1)

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1, mid;
        while(low<=n){
            mid = low + (n-low)/2;
            if(isBadVersion(mid)) n=mid-1; // bad version go left side
            else low = mid+1; // good version go right side
        }
        return low;
    }
};
