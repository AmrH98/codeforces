// Runtime 12 ms Beats 72.39%
//Memory 9.8 MB Beats 71.40%

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string temp;
        vector<int> ans(sentences.size(),1);
        for(int i =0; i<sentences.size();i++){
            // temp = sentences[i];
            sort(sentences[i].begin(), sentences[i].end());
            for(int j=0;j<sentences[i].size();j++){
                if(isspace(sentences[i][j])) ans[i]++;
                else break;
            }        
        }
        sort(ans.begin(), ans.end());
        return ans.back();
    }
};
