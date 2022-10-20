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
