//Runtime: 11 ms, faster than 38.92% of C++ online submissions for Check If Two String Arrays are Equivalent.
//Memory Usage: 12.3 MB, less than 18.02% of C++ online submissions for Check If Two String Arrays are Equivalent.

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        auto w1=reduce(word1.begin(),word1.end());
        auto w2=reduce(word2.begin(),word2.end());
        return (w1==w2);
    }
};
