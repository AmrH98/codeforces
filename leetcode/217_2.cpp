//Runtime: 184 ms, faster than 58.88% of C++ online submissions for Contains Duplicate.
//Memory Usage: 51.3 MB, less than 65.42% of C++ online submissions for Contains Duplicate.
  
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans; // using hashset 
        for (int i = 0; i<nums.size(); i++){
            
            if (ans.count(nums[i])) return true; // if found in set return true ( duplicate )
            ans.insert(nums[i]);

        }
        return false;
    }
};
