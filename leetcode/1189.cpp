// Runtime 0 ms Beats 100%
// Memory 6.5 MB Beats 92.7%

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> map;
        for(int i=0;i<text.length();i++){
            map[text[i]]++;
        }
        return min(map['b'], min(map['a'], min(map['l']/2, min(map['o']/2, map['n']))));
    }
};
