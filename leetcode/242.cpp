//Runtime: 30 ms, faster than 22.77% of C++ online submissions for Valid Anagram.
//Memory Usage: 7.4 MB, less than 56.32% of C++ online submissions for Valid Anagram.

class Solution {
public:
    bool isAnagram(string s, string t) {
        int num = s.size();
        if(num != t.size()) return false; // if not same size return false
        unordered_map<char, int> ans;
        for(int i =0; i < num; i++ ) ans[s[i]]++; // add elements to map
        for (int i =0; i < num; i++){
            if(ans.find(t[i]) == ans.end() || ans[t[i]] <= 0) return false; // if not found in string t return false
            else ans[t[i]]--; // if found remove element save traversing time
        }
        return true;
    }
};
