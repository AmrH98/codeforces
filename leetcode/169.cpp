//Runtime 24 ms Beats 47.73%
// Memory 19.6 MB Beats 79.79%

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

// runtime 52 ms
// memory 19.6 MB
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> ans;
        int size = nums.size();
        if(size == 1) return nums[0];
        for(int i =0; i < size; i++){
            if(ans.find(nums[i]) != ans.end()){
                ans[nums[i]]++;
                if(ans[nums[i]] > size / 2) return nums[i];
            }
            else{
                ans[nums[i]] = 1;
            }
        }
        return 0;
    }
};
