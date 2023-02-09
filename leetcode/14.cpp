// Runtime 3 ms Beats 89.47% 
// Memory 9.2 MB Beats 82.37%

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char temp;
        string ans;
        bool flag =1;
        if(strs[0].empty()) return "";
        for(int i=0;i<strs[0].size();i++){
            temp = strs[0][i]; // keep iterating first string to compare
            for(int j=1;j<strs.size();j++){
                if(temp != strs[j][i]){ 
                    flag =0;
                    break;
                }
            }
            if(flag==0) break;
            ans+= temp; // if flag detected add char to ans string 
        }
        return ans;
    }
};
