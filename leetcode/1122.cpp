class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int len = arr1.size();
        vector<int> ans(len);
        map<int, int> cc;
        for(int i=0; i < len; i++){
            cc[arr1[i]]+=1;
        }
        int j = 0;
        for(int i=0; i<arr2.size(); i++){
            if(cc.find(arr2[i]) != cc.end()){
                while(cc[arr2[i]] != 0){
                    ans[j] = arr2[i];
                    j++;
                    cc[arr2[i]]--;
                }
            }
        }
       for(auto& pair : cc) {
            while(pair.second > 0) {
                ans[j] = pair.first;
                j++;
                pair.second--;
            }
        }
        ans.resize(j);
        return ans;
    }
};
