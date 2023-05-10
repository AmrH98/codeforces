// Runtime 0 ms Beats 100%
// Memory 6.5 MB Beats 90.43%
// O(n*n), O(n*n) space
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int count = 1, size = n*n;
        for(int i=0; i<n && count <= size; i++){
            for(int j=i; j < n-i; j++, count++){
                ans[i][j] = count;
            }
            for(int j=i+1; j < n - i && count<= size; j++, count++){
                ans[j][n-i-1] = count; // corrected 
            }
            for(int j= n-i-2; j >= i && count<= size; j--, count++){
                ans[n-i-1][j] = count;
            }
            for(int j = n-i-2; j >= i+1 && count<= size; j--, count++){
                ans[j][i] = count;
            }
        }
        return ans;

    }
};
