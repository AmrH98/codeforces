// Runtime 238 ms Beats 42.63%
// Memory 44.1 MB Beats 19.47%
// O(n^2), space O(n^2)
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        int rows=grid.size();
        unordered_map<string,int> map;
        for(int i=0; i<rows;i++){
            string key = "";
            for(int num:grid[i]) key += to_string(num)+",";
            map[key]++;
        }        
        for(int i=0; i<rows;i++){
            string ans= "";
            for(int j=0; j<rows;j++) ans += to_string(grid[j][i])+",";
            count += map[ans];
        }
        return count;
    }
};
