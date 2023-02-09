// Runtime 12 ms Beats 72.39%
//Memory 9.8 MB Beats 71.40%

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string temp;
        vector<int> ans(sentences.size(),1); // initilize vector with 1 ( to count first word)
        for(int i =0; i<sentences.size();i++){
            sort(sentences[i].begin(), sentences[i].end()); // sort sentence so white space is first element 
            for(int j=0;j<sentences[i].size();j++){ // iterate till we hit a char
                if(isspace(sentences[i][j])) ans[i]++; 
                else break; // end sentence loop
            }        
        }
        sort(ans.begin(), ans.end()); // sort and return last element
        return ans.back();
    }
};
