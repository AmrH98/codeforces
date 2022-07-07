// Runtime: 190 ms, faster than 15.95% of C++ online submissions for Contains Duplicate.
// Memory Usage: 52.1 MB, less than 34.79% of C++ online submissions for Contains Duplicate.
// Focusing on implementing optimized solution with run time of O(N)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> newSet; // putting nums in order & unique values
        for (auto& dist:nums){ // Using auto& for good practice purposes, using range based iteration through vector
            if (newSet.find(dist) != newSet.end()) // break loop if match found
                return true;
            newSet.insert(dist); // add elements to newSet 
        }
        return false;
        
    }
};
