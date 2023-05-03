// Runtime 59 ms Beats 67.34%
// Memory 32.4 MB Beats 60.95%

// // O(n), space // O(n) , N = size of nums1 and nums2 so M+N for example
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2, vector<int>());
        unordered_set<int> set1, set2;
        for(int val:nums1) set1.insert(val);
        for(int val:nums2) set2.insert(val);
        for(int val:set1){
            if(set2.find(val) == set2.end()) answer[0].push_back(val);
        }
        for(int val:set2){
            if(set1.find(val) == set1.end()) answer[1].push_back(val);
        }
        return answer;
    }
};
