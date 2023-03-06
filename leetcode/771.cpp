// Runtime 0 ms Beats 100%
// Memory 6.4 MB Beats 24.75%
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>map;
        int count=0;
        for(char c:jewels) map[c]=0;
        for(char c:stones) if(map.find(c) != map.end()) count++;
        return count;
        
    }
};
