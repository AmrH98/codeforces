// Runtime 0 ms Beats 100%
// Memory 6.5 MB Beats 62.14%
    
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mpchar;
        unordered_map<string, int> mpword;
        istringstream stream(s);
        string word;
        int i=0, size = pattern.size();
        for(word; stream>>word;i++){ // stream chars till hit space, word found
            if(i==size || mpchar[pattern[i]] != mpword[word]) return false; // if words exceeded patern size return false or if pattern char does not match word
            mpchar[pattern[i]]=i+1; // increment both maps to same value i+1 as unique
            mpword[word]=i+1;
        }
        return i==size;
    }
};

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
