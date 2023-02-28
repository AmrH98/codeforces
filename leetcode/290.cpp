//Runtime 4 ms Beats 37.51%
// Memory 6.4 MB Beats 62.14%

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map;
        int j =0;
        int size = s.length();
        for(int i=0;i<pattern.length();i++){
            string word ="";
            while(!isspace(s[j]) && j < size){
                word+= s[j];
                j++;
            }
            j++;
            if(j>size+1 && i<pattern.length()) return false;
            if(map.find(pattern[i]) != map.end()){
                if(map[pattern[i]] != word) return false;
            } else{
                for(auto key:map){
                    if(key.first != pattern[i] && key.second == word) return false;
                }
            }
            map[pattern[i]] = word;
        }
        if(j < size) return false;
        return true;
    }
};
