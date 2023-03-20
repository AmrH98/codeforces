// Runtime 12 ms Beats 81.59%
// Memory 10.9 MB Beats 27.73%

// O(n), space O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i]) != map.end()) return {map[nums[i]], i};
            map[target - nums[i]] = i;
        }
        return {};
    }
};


//Runtime: 21 ms, faster than 58.77% of C++ online submissions for Two Sum.
//Memory Usage: 10.8 MB, less than 53.47% of C++ online submissions for Two Sum.
// TC O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> answer;
        int size = nums.size();
        for(int i=0; i<size ; i++){
            if (answer.find(target-nums[i]) != answer.end()){ 
                return {answer[target-nums[i]],i};
            }
            answer[nums[i]]=i;
        }
        return{};
    }
};
