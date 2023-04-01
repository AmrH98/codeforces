// Runtime 14 ms Beats 18.40% 
// Memory 7 MB Beats 47.14%

// O(n), space O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map, map2;
        for(int i=0;i<s.length();i++){ // both same size
            if((map.find(s[i])!=map.end() && map[s[i]] != t[i]) || 
            ( map2.find(t[i])!=map2.end() && map2[t[i]] != s[i])) return false;
            map[s[i]] = t[i];
            map2[t[i]] = s[i];
        } 
        return true;
    }
};

// Runtime: 29 ms, faster than 9.02% of C++ online submissions for Isomorphic Strings.
// Memory Usage: 7 MB, less than 45.99% of C++ online submissions for Isomorphic Strings.

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
