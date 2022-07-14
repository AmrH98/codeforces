//Runtime: 15 ms, faster than 80.47% of C++ online submissions for Palindrome Number.
//Memory Usage: 5.9 MB, less than 74.05% of C++ online submissions for Palindrome Number.
  
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || ( x % 10 == 0 && x!= 0)) return false; // false constraints return false at first 
        int reverse = 0;
        while (reverse < x) { // add numbers till it reaches x valie 
            reverse = reverse * 10 + x % 10; // reverse x by adding last digit to of x to variable 
            x /=10; // remove last digit of x 
        }
        return reverse == x || x == reverse / 10; // reutnr true/false if variable is palindrome of x 
    }
};
