// Runtime: 7 ms, faster than 47.01% of C++ online submissions for Longest Palindrome.
// Memory Usage: 6.8 MB, less than 15.00% of C++ online submissions for Longest Palindrome.

// Using hashmap instead of brute force (more time )or dynamic programming ( more memory less than hash map )

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
