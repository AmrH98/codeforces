// O(n), space O(n)
class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0;
        unordered_map<char, int> map;
        for(char c:s) map[c]++;
        bool flag = false;
        for(auto c:map){
            if(c.second % 2 == 0) count+= c.second;
            else{
                count+= c.second - 1;
                flag = true;
            } 
        }
        return flag ? ++count : count;
    }
};

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



// Runtime: 7 ms, faster than 47.01% of C++ online submissions for Longest Palindrome.
// Memory Usage: 6.8 MB, less than 15.00% of C++ online submissions for Longest Palindrome.

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> temp; // create map std::<first, second>
        for (char i:s){ // add string chars indiv. to map
            temp[i]++;
        }
        int solution=0, odd=0; 
        for(auto x:temp){ // iterate through map
            if(x.second%2==1){ // if char number is odd
                odd=1; 
                solution+=(x.second-1); // add value to solution if char number is odd = 1 we add nothing.
            } 
            else{
                solution+= x.second; // add char even value 
            }
        }
        return solution + odd; // return char even value and odd number in middle 
    }
};
