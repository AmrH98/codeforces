Runtime: 29 ms, faster than 9.02% of C++ online submissions for Isomorphic Strings.
Memory Usage: 7 MB, less than 45.99% of C++ online submissions for Isomorphic Strings.

class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        unordered_map<char, char> one, two;
        int n = s.length();
        for (int i =0; i < n; i++){
            if (one[s[i]] && one[s[i]]!=t[i]) return false;
            if (two[t[i]] && two[t[i]]!=s[i]) return false;
            one[s[i]]=t[i];
            two[t[i]]=s[i];
        }
        return true;
    }
};
