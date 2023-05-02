// Runtime 12 ms Beats 16.81%
// Memory 10.1 MB Beats 86.28%

// O(n), O(1) space
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for(int val:nums){
            if(val == 0) return 0;
            if(val < 0) count++;
        }
        return count % 2 == 0 ? 1 : -1;
    }
};
