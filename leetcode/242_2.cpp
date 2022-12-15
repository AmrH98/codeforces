// Runtime 16 ms Beats 71.12%
// Memory 7.2 MB Beats 82.81%

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t)return true;
        else return false;

    }
};
