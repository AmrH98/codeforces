// Runtime 3 ms Beats 87.34%
// Memory 6.8 MB Beats 15.30%

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> ans;
        for(char temp:s){
            ans[temp]++;
        }
        int odd =0, solution =0;
        for(auto temp:ans){
            if(temp.second %2==1){ // if odd
                odd = 1;
                solution += temp.second - 1; // -1 to return even number (possible solutions) if # = 1 then we add 0
            } else solution += temp.second; // add number to solution if even
        }
        return solution + odd;
        
    }
};
