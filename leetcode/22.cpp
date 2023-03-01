// Runtime 3 ms Beats 80.86%
// Memory 13.8 MB Beats 34.91%

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        create(n, 0, 0, "", ans);
        return ans;
    }
private:
    void create(int n, int open, int close, string temp, vector<string>& ans){
        if(open==n && close == n){
            ans.push_back(temp);
            return;
        }
        if(open<n) create(n, open+1, close, temp+'(', ans);
        if(close < open) create(n, open, close+1, temp+')', ans);
    }
};
