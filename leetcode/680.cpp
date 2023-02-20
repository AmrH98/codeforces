// Runtime 42 ms Beats 98.62%
// Memory 24.1 MB Beats 39.67%

class Solution {
public:
    bool validPalindrome(string s) {
        int size=s.length();
        int j = size-1, i=0;
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            } else return valid_two(s, i+1, j) || valid_two(s,i,j-1);
        }
        return true;
    }
  
private:
    bool valid_two(string s, int i, int j) {
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            } else return false;
        }
        return true;
    }
};
