// Runtime 145 ms Beats 45.47%
// Memory 49.9 MB Beats 58.53%

// O(nlogn), space O(n)
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int counter = 0, i = 0, size = nums.size(), j = size - 1; 
        int modulo = 1e9 + 7; 
        vector<int> power(size, 1);
        for(int i=1; i<size; i++) power[i] =(power[i-1] * 2) % modulo;
        while(i <= j){
            if(nums[i] + nums[j] > target) j--; // find first valid pair from end
            else counter = ( counter + power[j-i++] ) % modulo;
        }
        return counter;
    }
};
