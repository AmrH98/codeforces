//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
// Memory Usage: 6 MB, less than 25.56% of C++ online submissions for Number of Steps to Reduce a Number to Zero.

// Time Complexity : O(logN)
// Space Complexity : O(1)
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num){
            count++;
            if (0 == num % 2){
                num /=2;
            }
            else{
                num -=1;
            }
        }
        return count;
    }
};

