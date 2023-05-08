// Runtime 7 ms Beats 99.40%
// Memory 11.3 MB Beats 64.67%

// O(n), O(1)
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size(), ans=0, temp;
        if(size == 1) return mat[0][0];
        for(int i=0; i<size; i++){
            if(i != size-1-i) ans += mat[i][size-1-i];
            ans += mat[i][i];
        }
        return ans;
    }
};
