// O(t.length), space O(1)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0;i<t.length();i++) if(s[j]==t[i]) j++;
        return j == s.length() ? true : false;
    }
};

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


// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Is Subsequence.
// Memory Usage: 6.4 MB, less than 23.68% of C++ online submissions for Is Subsequence.


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int current = 0;
        for (int i=0; i<t.length(); i++){ 
            if(s[current] == t[i]){ // if same char in both strings we traverse first string 
                current++;    
                }
        }
        // no duplication occurs as we don't start from string initial position 
            if (current == s.size()){ // check if subsequence 
                return true;
            } 
            else{
                return false;
            } 
    }
};
