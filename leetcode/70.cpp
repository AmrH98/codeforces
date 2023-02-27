// Runtime 3 ms Beats 39.97%
// Memory 6 MB Beats 75.6%
  
class Solution {
public:
    int climbStairs(int n) {
        int x=1,y=1;
        for(int i=0;i<n-1;i++){
            int temp = x;
            x +=y;
            y = temp;
        }
        return x;
    }
};1
