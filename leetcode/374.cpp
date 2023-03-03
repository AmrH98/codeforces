// Runtime 3 ms Beats 44.56%
// Memory 5.9 MB Beats 56.36%
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while(true){
            int mid = low + (high-low)/2;
            int ans = guess(mid);
            if(ans==0) return mid;
            else if(ans==1) low = mid+1;
            else high = mid-1;
        }
    }
};
