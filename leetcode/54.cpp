// Runtime 0 ms Beats 100%
// Memory 6.8 MB Beats 91.37%

// O(m*n) space and time
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), count=0;
        vector<int> ans(m*n);
        for(int i=0;i<m && count<m*n;i++){
            for(int j = i; j < n-i && count<m*n; j++, count++){
                ans[count] = matrix[i][j];
            }
            for(int z = i + 1; z < m-i && count<m*n; z++, count++){
                ans[count] = matrix[z][n-1-i];
            }
            for(int z = n - i - 2; z>=i && count<m*n; z--, count++){
                ans[count] = matrix[m-i-1][z];
            }
            for(int z= m - i - 2; z>i && count<m*n; z--, count++){
                ans[count] = matrix[z][i];
            }
        }
        return ans;
    }
};
