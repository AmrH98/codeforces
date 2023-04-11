// Runtime 81 ms Beats 77.67%
// Memory 24.1 MB Beats 96.51%
// Two pointers approach optimized

// O(n), O(1)
class Solution {
public:
    string removeStars(string s) {
        int j=0;
        for(int i=0;i<s.length(); i++){
            if(s[i] == '*') j--;
            else s[j++] = s[i];
        }
        return s.substr(0,j);
    }
};


// Runtime 99 ms Beats 36.28%
// Memory 27 MB Beats 28.68%
// stack approach 
// O(n), space O(n)
class Solution {
public:
    string removeStars(string s) {
        int size = s.length();
        stack<char> ans;
        for(char c:s){
            if(c == '*' && !ans.empty()) ans.pop();
            else ans.push(c);
        }
        string res;
        while(!ans.empty()){
            res += ans.top(); 
            ans.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
