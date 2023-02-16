// Runtime 4 ms Beats 36.89%
// Memory 6.4 MB Beats 92.20%

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(!isspace(s[i])) count++;
            else if(isspace(s[i]) && count!=0) return count; 
        }
        return count;
    }
};
