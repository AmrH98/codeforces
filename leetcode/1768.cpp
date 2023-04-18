// Runtime 4 ms Beats 38.78%
// Memory 6.4 MB Beats 60.87%

// O(n+m), space O(n+m)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int size1 = word1.size(), size2 = word2.size(), i=0,j=0, count=0;
        while(i<size1 && j<size2){
            if(count++ %2 == 0) ans += word1[i++];
            else ans += word2[j++];
        }
        if(i<size1) ans += word1.substr(i);
        if(j<size2) ans += word2.substr(j);
        return ans;
    }
};
