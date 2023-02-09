// Runtime26 msBeats13.64%
//Memory10 MBBeats39.12%
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string temp;
        int size=sentences.size();
        vector<int> ans(size);
        for(int i =0; i<size;i++){
            temp = sentences[i];
            int size2=temp.size();
            int count=1;
            sort(temp.begin(), temp.end());
            for(int j=0;j<size2;j++){
                if(isspace(temp[j])) count++;
                else break;
            }        
            ans[i] = count;
        }
        sort(ans.begin(), ans.end());
        return ans.back();
    }
};
