//Runtime 177 ms Beats 12.12%
// Memory 46.9 MB Beats 15.83%

O(n) Time, O(n) Memory
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        vector<int>ans;
        for(int i=1;i<nums.size()+1;i++){
            if(!numSet.count(i)) ans.push_back(i);
        }
        return ans;
    }
};
