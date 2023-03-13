// Runtime 0 ms Beats 100%
// Memory 5.8 MB Beats 80.33%

O(logn), spac O(1)
class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1, right = num;
        long long mid;
        while(left<=right){
            mid = left + (right-left)/2;
            if(mid*mid<num) left = mid+1;
            else if(mid*mid > num) right=mid-1;
            else return true;
        }
        return false;
    }
};
