// Runtime 3 ms Beats 56.11%
// Memory 5.9 MB Beats 92.14%

// O(logN), space O(1)
class Solution {
public:
    int addDigits(int num) {
        if(num <= 9) return num;
        int ans = 0;
        while(num != 0){
            ans += num % 10;
            num /= 10;
        }
        return addDigits(ans);
    }
};
