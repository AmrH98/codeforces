
// O(numRows^2) and space
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> temp(i+1, 1);
            for(int k=1;k<i;k++) temp[k]= ans[i-1][k] + ans[i-1][k-1];
            ans.push_back(temp);
        }
        return ans;
    }
};
