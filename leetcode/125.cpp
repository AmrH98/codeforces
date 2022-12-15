// Runtime 3ms 97.51%
// Memory 7.7 MB 26.47%

class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.length();
        string ans = "";
        for(int i =0; i<l;i++){
            if(isalnum(s[i])) ans.push_back(tolower(s[i]));
        }
        l = ans.length();
        for(int i =0; i<l/2;i++){
            if(ans[i] != ans[l-i-1]) return false;
        }
        
        return true;
        
        
       
        
    }
};
