
// Runtime 227 ms Beats 59.62%
// Memory 44.5 MB Beats 56.56%

// O(n), O(n) space
class Solution {
public:
    int partitionString(string s) {
        int ans = 0;
        unordered_set<char> unique;
        for(int i=0; i<s.length(); i++){
            if(unique.count(s[i])){
                unique.clear();
                unique.insert(s[i]);
                ans++;
            } else unique.insert(s[i]);
        }
        if(!unique.empty()) ans++;
        return ans;
    }
};
