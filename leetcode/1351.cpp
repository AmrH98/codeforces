// Runtime 15 ms Beats 82.4%
// Memory 10.3 MB Beats 71.33%
// O(n+m)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0, row = grid.size(), col = grid[0].size();
        int r =0, c = col - 1;
        while(r<row && c >=0){
            if(grid[r][c] < 0){
                count += (row - r);
                c--;
                
            } else r++;
        }
        return count;
        
    }
};
// Runtime 19 ms Beats 43.59%
//Memory 10.3 MB Beats 71.33%
// brute force
// O(n*m), O(1) space
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0, row = grid.size(), col = grid[0].size();
        for(int i=0;i<row;i++) for(int j=0;j<col;j++) if(grid[i][j]<0) count++;
        return count;
        
    }
};
