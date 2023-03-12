// Runtime 7 ms Beats 34.84%
// Memory 6 MB Beats 8.12%
// O(logn) , Memory O(n)
class Solution {
public:
    int mySqrt(int x) {
        // we use binary search to find square root of x
        int left = 0, right = x; // declare mid, left, right pointers
        while(left<=right){
            long mid = left+(right-left)/2; // we use long to prevent overflow while squaring
            if(mid*mid > x) right = mid-1;
            else left = mid + 1;
        }
        return left-1;
    }
};
