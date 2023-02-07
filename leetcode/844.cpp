// Runtime 4 ms Beats 39.70%
// Memory 6.5 MB Beats 31.22%

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>temp;
        stack<char>temp2;
        for(auto x:s){
            if(x == '#'){
                if(temp.empty()) continue;
                else temp.pop();
           
            }
            else temp.push(x);
        }
        for(auto x:t){
            if(x == '#'){
                if(temp2.empty()) continue;
                else temp2.pop();
           
            }
            else temp2.push(x);
        }
        return temp == temp2;
    }
};
