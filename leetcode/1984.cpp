// Runtime 12 ms Beats 93.64%
// Memory 13.7 MB Beats 76.94%
// O(nlogn), space O(1)

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size = nums.size(), res=nums[size-1];
        for(int i=0;i<size;i++){
            if(i+k-1 >= size) break;
            res = min(res, nums[i+k-1]-nums[i]);
        }
        return res;
    }
};
