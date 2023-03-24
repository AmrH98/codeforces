// Runtime 35 ms Beats 32.72%
// Memory 10.8 MB Beats 27.71%

// O(n) , O(min(m,n)) m is substring size
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int count = 0, i=0, j=0;
        while(j< s.length()){
            if (set.find(s[j]) == set.end()) {
                set.insert(s[j]);
                j++;
                count = max(count, j - i);
            } else {
                set.erase(s[i]);
                i++;
            }
        }
        return count;
    }
};
