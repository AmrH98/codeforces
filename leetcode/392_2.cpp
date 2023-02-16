// Runtime 0 ms Beats 100%
// Memory 6.2 MB Beats 99.44%

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int n = s.size();
        int n2= t.size();
        if(n ==0) return true;
        else if(n2==0) return false;
        for(int i=0;i<n2;i++){
           if(s[j] == t[i]) j++;
           if(j==n) return true; // if found all chars exit
        }
        return false;

    }
};
