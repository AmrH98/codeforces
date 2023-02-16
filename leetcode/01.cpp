// Runtime 6 ms Beats 97.92%
// Memory 10.8 MB Beats 45.60%

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        vector<int> ans;
        int sub;
        for(int i=0; i<nums.size();i++){
            if(temp.find(nums[i]) != temp.end()){
                ans.push_back(temp[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            sub = target - nums[i];
            temp[sub] = i;
        }
        return ans;

    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        for(int i=0; i<nums.size();i++){
            if(temp.find(nums[i]) != temp.end()){
                return {temp[nums[i]], i};
            }
            temp[target - nums[i]] = i;
        }
        return {};
    }
};
