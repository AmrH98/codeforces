// Runtime 69 ms Beats 96.99%
// Memory 33.8 MB Beats 83.49%

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(size==1) return 1;
        if(size==0) return 0;
        int maxim=1, count=1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<size-1;i++){
            if(nums[i] == nums[i+1]-1) count++;
            else if(nums[i]== nums[i+1]) continue;
            else count = 1;
            maxim = max(count, maxim);
        }
        return maxim;
    }
};
