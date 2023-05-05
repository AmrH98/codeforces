// Runtime 55 ms Beats 9.11%
// Memory 10 MB Beats 68.38%
// O(n), space O(1)

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int counter = 0, i=0, high = 0;
        while(i< s.length()){
            counter += vowels.count(s[i]);
            if(i - k >= 0) counter -= vowels.count(s[i-k]); // remove last element count if its a vowel and size of substring exceeded K
            high = max(high, counter);
            if(high >= k) return k;
            i++;
        }
        return high;
    }
};
